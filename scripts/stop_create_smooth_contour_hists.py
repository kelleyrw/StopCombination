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
parser.add_option("--analysis"       , dest="analysis"       , default="razor"               , type="string" , help="analysis type: onlep, razor, combined"  )
parser.add_option("--model"          , dest="model"          , default="t2tt"                , type="string" , help="model to use (only t2tt for now)"       )
parser.add_option("--xsec_file_name" , dest="xsec_file_name" , default="data/stop_xsec.root" , type="string" , help="cross-section file"                     )
parser.add_option("--label"          , dest="label"          , default="v0"                  , type="string" , help="label for version"                      )
parser.add_option("--method"         , dest="method"         , default="hybrid"              , type="string" , help="method for limits: asymptotic or hybrid")
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
            ztitle    = "95% C.L. upper limit on cross section (pb)",
            zmin      = 0.001, 
            zmax      = 10, 
            bin_width = 25.0, 
            offset    = 175.0+25.0, # m_top + bin_width
            smoothing = 20, 
            epsilon   = 5
        )
        return model_info 
    else:
        print "[stop_create_smooth_contour_hists] Error: %s not supported" % model
        sys.exit()  

# ------------------#
# histogram manipulation 
# ------------------#

# split the histogram into above and below
def SplitHist(hist, model_info):
    """split the histogram into above and below offset"""
    h1 = hist.Clone("%s_1" % hist.GetName()) 
    h2 = hist.Clone("%s_2" % hist.GetName())
    h1.SetTitle(h1.GetName());
    h2.SetTitle(h2.GetName());

    # reset points
    nbinsx = h1.GetNbinsX()+1;
    nbinsy = h1.GetNbinsY()+1;
    for xbin in xrange(1, GetNbinsX()+1):
        for ybin in xrange(1, GetNbinsY()+1):
            m_stop = h1.GetXaxis().GetBinCenter(xbin);
            m_lsp  = h1.GetYaxis().GetBinCenter(ybin);

            # zero out bins below line
            if (m_lsp < (m_stop - model_info.offset)):
                h1.SetBinContent(xbin, ybin, 0)
                h1.SetBinError  (xbin, ybin, 0)

            # zero out bins below line
            if (m_lsp < (m_stop + model_info.offset)):
                h2.SetBinContent(xbin, ybin, 0)
                h2.SetBinError  (xbin, ybin, 0)
    return(h1, h2)

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

    try:
        analysis       = options.analysis      
        model          = options.model         
        xsec_file_name = options.xsec_file_name
        label          = options.label         
        method         = options.method        

        # check inputs
        tree_file   = "output/limit_trees/%s/%s/%s/limit_result_ntuple_%s.root" % (label, method, model, analysis)

        # output path
        output_path = "plots/limits/%s/%s/%s/%s" % (label, method, model, analysis)
        if (not output_path or not os.path.exists(output_path)):
            os.makedirs(output_path)

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
            ResultInfo("obs"   , "Observed"        , "ul_obs"   , "ul_obs"),
            ResultInfo("obs_p1", "Observed+1#sigma", "ul_obs_p1", "ul_obs"),
            ResultInfo("obs_m1", "Observed-1#sigma", "ul_obs_m1", "ul_obs"),
            ResultInfo("exp"   , "Expected"        , "ul_exp"   , "ul_exp"),
            ResultInfo("exp_p1", "Expected+1#sigma", "ul_exp_p1", "ul_exp_1sigma_up"),
            ResultInfo("exp_m1", "Expected-1#sigma", "ul_exp_m1", "ul_exp_1sigma_dn")
        ]

        # book and fill xsec hists
        h_xsec_ul       = []
        h_log_xsec_ul   = []
        h_rebin_xsec_ul = []
        h_sub_xsec_ul   = []
        g_contour_final = []

        # get limit TTree
        tree = root.TChain("tree")
        tree.Add(tree_file)

        # canvas for printing
        canvas = root.TCanvas("canvas", "canvas", 600, 600)

        for i, v in enumerate(cls_list):

            # -------------------------------------------------------------------------- #
            # upper limit histograms
            # -------------------------------------------------------------------------- #
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
            h_xsec_ul[i].GetZaxis().SetTitleOffset(1.45)

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

            # -------------------------------------------------------------------------- #
            # exclusions and smoothing 
            # -------------------------------------------------------------------------- #

            # subtract to determine exclusions
            h_sub_xsec_ul.append(h_rebin_xsec_ul[i].Clone())
            if   v.cls_type == "obs_m1": h_sub_xsec_ul[i].Add(h_xsec_minus, -1.0)
            elif v.cls_type == "obs_p1": h_sub_xsec_ul[i].Add(h_xsec_plus , -1.0)
            else                       : h_sub_xsec_ul[i].Add(h_xsec      , -1.0)

            # contours
            contours = array('d', [0.0])
            h_sub_xsec_ul[i].SetContour(1, contours)

            # more formatting
            h_xsec_ul      [i].SetMinimum(mi.zmin)
            h_xsec_ul      [i].SetMaximum(mi.zmax)
            h_rebin_xsec_ul[i].SetMinimum(mi.zmin)
            h_rebin_xsec_ul[i].SetMaximum(mi.zmax)
            h_sub_xsec_ul  [i].SetMaximum(1.0)
            h_sub_xsec_ul  [i].SetMinimum(-1.0)

            # set z axis formatting
            h_xsec_ul[i].GetZaxis().SetLabelFont(42);
            h_xsec_ul[i].GetZaxis().SetTitleFont(42);
            h_xsec_ul[i].GetZaxis().SetLabelSize(0.035);
            h_xsec_ul[i].GetZaxis().SetTitleSize(0.035);
            NRGBs = 5;
            NCont = 255;
            stops = array('d', [0.00 , 0.34 , 0.61 , 0.84 , 1.00])
            red   = array('d', [0.50 , 0.50 , 1.00 , 1.00 , 1.00])
            green = array('d', [0.50 , 1.00 , 1.00 , 0.60 , 0.50])
            blue  = array('d', [1.00 , 1.00 , 0.50 , 0.40 , 0.50])
            root.TColor.CreateGradientColorTable(NRGBs, stops, red, green, blue, NCont);
            root.gStyle.SetNumberContours(NCont);
            root.gPad.SetRightMargin(0.16);
            root.gPad.SetLeftMargin(0.12);
            root.gPad.Update();
            root.gPad.SetLogz(True);

            # extracting contour
            canvas.SetLogz(0)
            h_sub_xsec_ul[i].Draw("CONT Z LIST")
            canvas.Update()
            conts = root.gROOT.GetListOfSpecials().FindObject("contours")
            h_xsec_ul[i].Draw("COLZ")
            contour0  = conts.At(0)
            curv      = contour0.First()
            finalcurv = root.TGraph(1)
            try:
                curv.SetLineWidth(3)
                curv.SetLineColor(root.kBlack)
                curv.Draw("lsame")
                finalcurv = curv.Clone()
                maxN = curv.GetN()
            except AttributeError:
                print "[stop_create_smooth_contour_hists] Error: no curve drawn for box=%s, clsType=%s -- no limit "%(model, v.cls_type)

            print "[stop_create_smooth_contour_hists] INFO: now getting contour for %s"%v.cls_type
            for i in xrange(1, contour0.GetSize()):
                curv = contour0.After(curv)
                curv.SetLineWidth(3)
                curv.SetLineColor(root.kBlack)
                curv.Draw("lsame")
                if curv.GetN()>maxN:
                    maxN = curv.GetN()
                    finalcurv = curv.Clone()

            g_contour_final.append(finalcurv)
            g_contour_final[i].SetName("%s_%s_%s"%(v.cls_type,model,analysis))
            g_contour_final[i].Draw();

            # print the output
            canvas.SetLogz(1)
            canvas.Print("%s/%s_interp_%s_%s.pdf"%(output_path, model, analysis, v.cls_type))
        
        # extract "small dm" piece from Ben's original result 
        if (analysis == "onelep" or analysis == "combined"):
            orig_an_file = root.TFile.Open("data/t2tt_onelep_bdt_AN-2013-89.root")
            h_contour_exp_smalldm = orig_an_file.Get("hR_exp_smallDM")
            h_contour_obs_smalldm = orig_an_file.Get("hR_smallDM")
        
        # overlay the "final plot"
        h_xsec_ul[3].Draw("colz")
        g_contour_final[3].SetLineColor(root.kRed  ); g_contour_final[3].SetLineStyle(1); g_contour_final[3].Draw("lsame")
        g_contour_final[4].SetLineColor(root.kRed  ); g_contour_final[4].SetLineStyle(4); g_contour_final[4].Draw("lsame")
        g_contour_final[5].SetLineColor(root.kRed  ); g_contour_final[5].SetLineStyle(4); g_contour_final[5].Draw("lsame")
        g_contour_final[0].SetLineColor(root.kBlack); g_contour_final[0].SetLineStyle(1); g_contour_final[0].Draw("lsame")
        g_contour_final[1].SetLineColor(root.kBlack); g_contour_final[1].SetLineStyle(4); g_contour_final[1].Draw("lsame")
        g_contour_final[2].SetLineColor(root.kBlack); g_contour_final[2].SetLineStyle(4); g_contour_final[2].Draw("lsame")
        
        if (analysis == "onelep" or analysis == "combined"):
            h_contour_exp_smalldm.SetLineColor(root.kRed  );
            h_contour_exp_smalldm.SetLineStyle(1);
            h_contour_exp_smalldm.SetLineWidth(3);
            h_contour_exp_smalldm.Draw("CONT3SAMEC"); 
        
            h_contour_obs_smalldm.SetLineColor(root.kBlack);
            h_contour_obs_smalldm.SetLineStyle(1);
            h_contour_obs_smalldm.SetLineWidth(3);
            h_contour_obs_smalldm.Draw("CONT3SAMEC"); 
        
        # legend
        stat_y1 = 1.0 - root.gStyle.GetPadTopMargin() - 0.01;
        stat_y2 = 0.70;
        stat_x1 = root.gStyle.GetPadLeftMargin() + 0.02;
        stat_x2 = 0.5;
        leg = root.TLegend(stat_x1, stat_y1, stat_x2, stat_y2);
        leg.AddEntry(g_contour_final[3], "Expected", "L");
        leg.AddEntry(g_contour_final[0], "Observed", "L");
        leg.SetFillColor(0);  # 0 makes it the background clear on the pad
        leg.SetFillStyle(0);
        leg.SetBorderSize(0);
        leg.Draw()

        # print the output
        canvas.Print("%s/%s_interp_%s.pdf"%(output_path, model, analysis))
        
        # write the output
        output_file = root.TFile.Open("%s/%s_interp_%s.root"%(output_path, model,analysis), "RECREATE")
        for idx, val in enumerate(cls_list):
            h_xsec_ul      [idx].Write()
            h_sub_xsec_ul  [idx].Write()
            g_contour_final[idx].Write()
        h_xsec.Write()
        h_xsec_plus.Write()
        h_xsec_minus.Write()
        output_file.Close()

    except Exception, e:
        print "[stop_create_smooth_contour_hists] ERROR:", e
        return 1
    except:
        print "[create_smooth_contour_hists] ERROR:", sys.exc_info()[0]
        return 1

# do it
if __name__ == '__main__':
    main()

