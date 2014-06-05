#!/usr/bin/env python

# ------------------#
# imports
# ------------------#

from optparse import OptionParser
import os
import sys
import ROOT as root
import numpy as np
from math import *
from array import *
from scipy.interpolate import Rbf

# ------------------#
# parse inputs
# ------------------#

# parameter options
parser = OptionParser()
# parser.add_option("--onelep_cards" , dest="onelep_path"  , default="cards/t2tt/onelep"              , type="string", help="path to the single lepton cards"    )
# parser.add_option("--sample"       , dest="sample"       , default="t2tt"                           , type="string", help="sample (default t2tt)"              )
# parser.add_option("--mass_stop"    , dest="mass_stop"    , default=-1                               , type="int"   , help="mass stop (-1 means full plane)"    )
# parser.add_option("--mass_lsp"     , dest="mass_lsp"     , default=-1                               , type="int"   , help="mass LSP (-1 means full plane)"     )
# parser.add_option("--interp_file"  , dest="interp_file"  , default="plots/interp/v0/t2tt_hists.root", type="string", help="file containing eff and systematics")
# parser.add_option("--method"       , dest="method"       , default=4                                , type="int"   , help="method to use (default is 4)"       )
(options, args) = parser.parse_args()

# check for validity
def CheckOptions():
#     # onelep_path
#     if (not options.onelep_path):
#         raise Exception("required onelep_path is missing")
    return

# ------------------#
# interpolate the 2D hists 
# ------------------#

def Interpolate2D(hist, epsilon=5, smooth=0, diagonalOffset=0):
    x = array('d',[])
    y = array('d',[])
    z = array('d',[])
    
    binWidth = float(hist.GetBinWidth(1))
    for i in range(1, hist.GetNbinsX()+1):
        for j in range(1, hist.GetNbinsY()+1):
            if hist.GetBinContent(i,j)>0.:
                x.append(hist.GetXaxis().GetBinCenter(i))
                y.append(hist.GetYaxis().GetBinCenter(j))
                z.append(root.TMath.Log(hist.GetBinContent(i,j)))

    mgMin = hist.GetXaxis().GetBinCenter(1)
    mgMax = hist.GetXaxis().GetBinCenter(hist.GetNbinsX())
    mchiMin = hist.GetYaxis().GetBinCenter(1)
    mchiMax = hist.GetYaxis().GetBinCenter(hist.GetNbinsY())
    
    myX = np.linspace(mgMin, mgMax,int((mgMax-mgMin)/binWidth+1))
    myY = np.linspace(mchiMin, mchiMax, int((mchiMax-mchiMin)/binWidth+1))
    myXI, myYI = np.meshgrid(myX,myY)

    rbf = Rbf(x, y, z,function='multiquadric', epsilon=epsilon,smooth=smooth)
    myZI = rbf(myXI, myYI)

    for i in range(1, hist.GetNbinsX()+1):
        for j in range(1, hist.GetNbinsY()+1):
            xLow = hist.GetXaxis().GetBinCenter(i)
            yLow = hist.GetYaxis().GetBinCenter(j)
            if xLow >= yLow+diagonalOffset-binWidth/2.:
                hist.SetBinContent(i,j,root.TMath.Exp(myZI[j-1][i-1]))
    return hist

# ------------------#
# "sample info" 
# ------------------#

class ModelInfo:
    """simple class to hold the model specific information"""

    # construct:
    def __init__(self, 
            xtitle,
            xmin,
            xmax,
            ytitle,
            ymin,
            ymax,
            ztitle,
            zmin,
            zmax,
            bin_width,
            offset,
            smoothing,
            epsilon
        ):
        self.xtitle    = str(xtitle)
        self.xmin      = float(xmin)
        self.xmax      = float(xmax)
        self.ytitle    = str(ytitle)
        self.ymin      = float(ymin)
        self.ymax      = float(ymax)
        self.ztitle    = str(ztitle)
        self.zmin      = float(zmin)
        self.zmax      = float(zmax)
        self.bin_width = float(bin_width)
        self.offset    = float(offset)
        self.smoothing = float(smoothing)
        self.epsilon   = float(epsilon)

    # method
    def NbinsX(self):
        return int((self.xmax-self.xmin)/self.bin_width)

    def NbinsY(self):
        return int((self.ymax-self.ymin)/self.bin_width)

def GetModelInfo(model):
    if model.lower() == "t2tt":
        model_info = ModelInfo( 
            xtitle    = "m_{#tilde{t}} (GeV)",
            xmin      = 150.0-12.5, 
            xmax      = 925.0-12.5, 
            ytitle    = "m_{#tilde{#chi}^{0}} (GeV)",
            ymin      = 0.0-12.5, 
            ymax      = 725.0-12.5, 
            ztitle    = "95\% C.L. upper limit on cross section (pb)",
            zmin      = 0.001, 
            zmax      = 100, 
            bin_width = 25.0, 
            offset    = 150.0+12.5, 
            smoothing = 20, 
            epsilon   = 5
        )
        return model_info 
    else:
        print "[stop_create_smooth_contour_hists] Error: %s not supported" % model
        sys.exit()  

# ------------------#
# result metadata 
# ------------------#

class ResultInfo:
    """simple class to hold the result specific information"""

    # construct:
    def __init__(self, 
            cls_type,
            title,
            hist_name,
            branch
        ):
        self.cls_type  = cls_type 
        self.title     = title    
        self.hist_name = hist_name
        self.branch    = branch

# ------------------#
# "main program" 
# ------------------#

def main():

#     try:
        analysis       = "razor"
        model          = "t2tt"
        xsec_file_name = "data/stop_xsec.root"

        # style
        root.gStyle.SetOptStat(0);

        # model specific meta-data
        mi = GetModelInfo(model)

        # cross section file
        if xsec_file_name != None:
            xsec_file   = root.TFile.Open(xsec_file_name)
            h_xsec_orig = xsec_file.Get("h_stop_xsec")
        else: 
            print "[stop_create_smooth_contour_hists] Error: %s not found" % xsec_file
            sys.exit()

        # cross section hists
        h_xsec       = root.TH2D("h_xsec"      , "h_xsec"      , mi.NbinsX(), mi.xmin, mi.xmax, mi.NbinsY(), mi.ymin, mi.ymax)
        h_xsec_plus  = root.TH2D("h_xsec_plus" , "h_xsec_plus" , mi.NbinsX(), mi.xmin, mi.xmax, mi.NbinsY(), mi.ymin, mi.ymax)
        h_xsec_minus = root.TH2D("h_xsec_minus", "h_xsec_minus", mi.NbinsX(), mi.xmin, mi.xmax, mi.NbinsY(), mi.ymin, mi.ymax)
        for xbin in xrange(1, h_xsec.GetNbinsX()+1):
            for ybin in xrange(1, h_xsec.GetNbinsY()+1):
                mass_stop = h_xsec.GetXaxis().GetBinCenter(xbin)
                mass_lsp  = h_xsec.GetYaxis().GetBinCenter(ybin)
                if (mass_stop >= mass_lsp + mi.offset and mass_stop <= mi.xmax - mi.bin_width/2.0):
                    xsec_value = h_xsec_orig.GetBinContent(h_xsec_orig.FindBin(mass_stop))
                    xsec_error = h_xsec_orig.GetBinError  (h_xsec_orig.FindBin(mass_stop))
                    h_xsec.SetBinContent      (xbin, ybin, xsec_value)
                    h_xsec_plus.SetBinContent (xbin, ybin, xsec_value + xsec_error)
                    h_xsec_minus.SetBinContent(xbin, ybin, xsec_value - xsec_error)

        # meta-data for results
        cls_list = [
            ResultInfo("obs"   , "Observed"        , "ul_obs", "ul_obs"),
            ResultInfo("obs_p1", "Observed+1#sigma", "ul_obs", "ul_obs"),
            ResultInfo("obs_m1", "Observed-1#sigma", "ul_obs", "ul_obs"),
            ResultInfo("exp"   , "Expected"        , "ul_exp", "ul_exp"),
            ResultInfo("exp_p1", "Expected+1#sigma", "ul_exp", "ul_exp"),
            ResultInfo("exp_m1", "Expected-1#sigma", "ul_exp", "ul_exp")
        ]

        # book and fill xsec hists
        h_xsec_ul       = []
        h_log_xsec_ul   = []
        h_rebin_xsec_ul = []
        h_sub_xsec_ul   = []
        g_contour_final = []

        # get limit TTree
        tree = root.TChain("tree")
        tree.Add("output/limit_trees/v0/asymptotic/t2tt/limit_result_ntuple_%s.root" % analysis)

        for i, v in enumerate(cls_list):
            h_xsec_ul.append(
                root.TH2D("h_xsec_ul_%s"%v.cls_type, 
                    "%s %s, %s #sigma #times Branching Fraction"%(model, analysis, v.title),
                    mi.NbinsX(), 
                    mi.xmin, 
                    mi.xmax, 
                    mi.NbinsY(), 
                    mi.ymin, 
                    mi.ymax
                )
            )
            h_xsec_ul[i].SetStats(False)
            h_xsec_ul[i].SetTitleOffset(1.5)
            h_xsec_ul[i].SetXTitle(mi.xtitle)
            h_xsec_ul[i].GetXaxis().SetTitleOffset(0.95)
            h_xsec_ul[i].SetYTitle(mi.ytitle)
            h_xsec_ul[i].GetYaxis().SetTitleOffset(1.35)
            h_xsec_ul[i].SetZTitle(mi.ztitle)
            h_xsec_ul[i].GetZaxis().SetTitleOffset(1.25)
#             h_xsec_ul[i].Draw("colz")
#             print mi.zmin, mi.zmax
#             h_xsec_ul[i].GetZaxis().SetRangeUser(mi.zmin, mi.zmax)

            print "[stop_create_smooth_contour_hists] INFO: filling h_xsec_ul%s"%v.cls_type
            tree.Project("h_xsec_ul_%s"%v.cls_type, "mass_lsp:mass_stop", v.branch)
            h_xsec_ul[i].GetZaxis().SetRangeUser(mi.zmin, mi.zmax)

            # do swiss cross average in real domain for *contours*
            h_rebin_xsec_ul.append(root.SwissCrossInterpolate(h_xsec_ul[i], root.Direction.ne))

            # do scipy multi-quadratic interpolation in log domain for *contours*
            h_rebin_xsec_ul[i] = Interpolate2D(h_rebin_xsec_ul[i], epsilon=mi.epsilon, smooth=mi.smoothing, diagonalOffset=mi.offset)

            # do swiss cross average in real domain for *underlying heat map*
            h_xsec_ul[i] = root.SwissCrossInterpolate(h_xsec_ul[i], root.Direction.ne)

            # do scipy multi-quadratic interpolation in log domain for *underlying heat map*
            h_xsec_ul[i]  = Interpolate2D(h_xsec_ul[i], epsilon=mi.epsilon, smooth=mi.smoothing, diagonalOffset=mi.offset)

        canvas = root.TCanvas("canvas", "canvas", 600, 600)
#         h_xsec_ul["exp"].Draw("colz")

        # write the output
        output_file = root.TFile.Open("test.root", "RECREATE")
        for idx, val in enumerate(cls_list):
            h_xsec_ul      [idx].Write()
#             g_contour_final[idx].Write()
        h_xsec.Write()
        h_xsec_plus.Write()
        h_xsec_minus.Write()
        output_file.Close()

#     except Exception, e:
#         print "[stop_create_smooth_contour_hists] ERROR:", e
#         return 1
#     except:
#         print "[create_smooth_contour_hists] ERROR:", sys.exc_info()[0]
#         return 1

# do it
if __name__ == '__main__':
    main()

