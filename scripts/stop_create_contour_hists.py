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
parser.add_option("--analysis"       , dest="analysis"       , default="razor"                               , type="string" , help="analysis type: onlep, razor, combined"                      )
parser.add_option("--model"          , dest="model"          , default="t2tt"                                , type="string" , help="model to use (only t2tt for now)"                           )
parser.add_option("--xsec_file_name" , dest="xsec_file_name" , default="data/stop_xsec.root"                 , type="string" , help="cross-section file"                                         )
parser.add_option("--label"          , dest="label"          , default="v0"                                  , type="string" , help="label for version"                                          )
parser.add_option("--method"         , dest="method"         , default="hybrid"                              , type="string" , help="method for limits: asymptotic or hybrid"                    )
parser.add_option("--orig_curve_file", dest="orig_curve_file", default="data/t2tt_onelep_bdt_AN-2013-89.root", type="string" , help="original curves file from AN-2013-89: blank means don't use")
(options, args) = parser.parse_args()

# check for validity
def CheckOptions():
    # orig_curve_file 
    if (not options.orig_curve_file or not os.path.exists(options.orig_curve_file)):
        print "[stop_create_contour_hists] Error: %s not found" % options.orig_curve_file
        sys.exit()
    return

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
        print "[stop_create_contour_hists] Error: %s not supported" % model
        sys.exit()  

# ------------------#
# hist helpers 
# ------------------#

def SetStyle():
    # no stats
    root.gStyle.SetOptStat(0);

    # contour
    NRGBs = 5;
    NCont = 255;
    stops = array('d', [0.00 , 0.34 , 0.61 , 0.84 , 1.00])
    red   = array('d', [0.50 , 0.50 , 1.00 , 1.00 , 1.00])
    green = array('d', [0.50 , 1.00 , 1.00 , 0.60 , 0.50])
    blue  = array('d', [1.00 , 1.00 , 0.50 , 0.40 , 0.50])
    root.TColor.CreateGradientColorTable(NRGBs, stops, red, green, blue, NCont);
    root.gStyle.SetNumberContours(NCont);
    root.gStyle.SetPadRightMargin(0.16);
    root.gStyle.SetPadLeftMargin(0.12);
    root.gStyle.SetPaintTextFormat("1.0f")

def SetHistStyle(hist, mi):
    hist.SetStats(False)
    hist.SetTitleOffset(1.5)
    hist.SetXTitle(mi.xtitle)
    hist.GetXaxis().SetTitleOffset(0.95)
    hist.SetYTitle(mi.ytitle)
    hist.GetYaxis().SetTitleOffset(1.35)
    hist.SetZTitle(mi.ztitle)
    hist.GetZaxis().SetTitleOffset(1.45)
    hist.SetMinimum(mi.zmin)
    hist.SetMaximum(mi.zmax)
    hist.GetZaxis().SetLabelFont(42);
    hist.GetZaxis().SetTitleFont(42);
    hist.GetZaxis().SetLabelSize(0.035);
    hist.GetZaxis().SetTitleSize(0.035);

def PrintXsecHist(hist, mi, output_path, suffix):
    c1 = root.TCanvas("c1", "c1", 600, 600)
    c1.SetLogz(True)
    SetHistStyle(hist, mi)
    hist.Draw("colz")
    c1.Print("%s/%s.%s" % (output_path, hist.GetName(), suffix))

def PrintExclCurve(g_excl, h_xsec, mi, output_path, suffix):
    c2 = root.TCanvas("c2", "c2", 600, 600)
    c2.SetLogz(True)
    SetHistStyle(h_xsec, mi)
    h_xsec.Draw("colz")
    g_excl.Draw("lsame")
    c2.Print("%s/%s.%s" % (output_path, g_excl.GetName(), suffix))

# interpolate the 2D hists 
def Interpolate2DHist(hist, epsilon=5, smooth=0, diagonal_offset=0):
    """interpolate a TH2""" 
    x = array('d',[])
    y = array('d',[])
    z = array('d',[])

    # fill arrays
    for xbin in range(1, hist.GetNbinsX()+1):
        for ybin in range(1, hist.GetNbinsY()+1):
            if hist.GetBinContent(xbin, ybin) > 0.0:
                x.append(hist.GetXaxis().GetBinCenter(xbin))
                y.append(hist.GetYaxis().GetBinCenter(ybin))
                z.append(root.TMath.Log(hist.GetBinContent(xbin, ybin)))

    # interpolate using scipy
    bin_width  = float(hist.GetBinWidth(1))
    mgMin      = hist.GetXaxis().GetBinCenter(1)
    mgMax      = hist.GetXaxis().GetBinCenter(hist.GetNbinsX())
    mchiMin    = hist.GetYaxis().GetBinCenter(1)
    mchiMax    = hist.GetYaxis().GetBinCenter(hist.GetNbinsY())
    myX        = np.linspace(mgMin, mgMax,int((mgMax-mgMin)/bin_width+1))
    myY        = np.linspace(mchiMin, mchiMax, int((mchiMax-mchiMin)/bin_width+1))
    myXI, myYI = np.meshgrid(myX,myY)
    rbf        = Rbf(x, y, z,function='multiquadric', epsilon=epsilon, smooth=smooth)
    myZI       = rbf(myXI, myYI)

    # reset hist
    for xbin in range(1, hist.GetNbinsX()+1):
        for ybin in range(1, hist.GetNbinsY()+1):
            xLow = hist.GetXaxis().GetBinCenter(xbin)
            yLow = hist.GetYaxis().GetBinCenter(ybin)
            if xLow >= yLow + diagonal_offset - 3.0*bin_width:
                hist.SetBinContent(xbin, ybin, root.TMath.Exp(myZI[ybin-1][xbin-1]))
    return hist

# split the hist
def Split2DHist(hist, mi):
    """Split the histogram on mass_top+/-bins_width"""
    h1 = hist.Clone("%s_1"%hist.GetName()) 
    h2 = hist.Clone("%s_2"%hist.GetName())

    # reset points
    mass_top = 173; # GeV
    for xbin in xrange(1, hist.GetNbinsX()+1):
        for ybin in xrange(1, hist.GetNbinsY()+1):
            mass_stop = hist.GetXaxis().GetBinCenter(xbin)
            mass_lsp  = hist.GetYaxis().GetBinCenter(ybin)
            # zero out bins below line
            if mass_lsp < (mass_stop - mass_top + mi.bin_width):
                h1.SetBinContent(xbin, ybin, 0);
                h1.SetBinError  (xbin, ybin, 0);
            # zero out bins below line
            if mass_lsp > (mass_stop - mass_top - mi.bin_width):
                h2.SetBinContent(xbin, ybin, 0);
                h2.SetBinError  (xbin, ybin, 0);

    return (h1, h2)

# smooth and intepolate
def Smooth2DHist(hist, mi):

    # clone hist
    h_clone = hist.Clone("%s_smooth"%hist.GetName())

    # do swiss cross average in real domain for *underlying heat map*
    h_clone = root.SwissCrossInterpolate(h_clone, root.Direction.ne)

    # do scipy multi-quadratic interpolation in log domain for *underlying heat map*
    h_clone  = Interpolate2DHist(h_clone, epsilon=mi.epsilon, smooth=mi.smoothing, diagonal_offset=mi.offset)

    return h_clone

# fill bins with zero to high value (to prevent boundary bogus contours)
def FillBogus(hist, level=0.0, bogus=9999):
    # fill bins with zero to high value (to prevent boundary bogus contours)
    for xbin in xrange(1, hist.GetNbinsX()+1):
        for ybin in xrange(1, hist.GetNbinsY()+1):
            mass_stop = hist.GetXaxis().GetBinCenter(xbin)
            mass_lsp  = hist.GetYaxis().GetBinCenter(ybin)
            value     = root.rt.GetBinContent2D(hist, mass_stop, mass_lsp)
            if (value <= level):
                hist.SetBinContent(xbin, ybin, bogus)
    return

# get the contour from the histogram
def GetContourTGraph(hist, level = 1.0):
    g_name  = hist.GetName().replace("h_", "g_") 
    g_title = hist.GetTitle()
    curve = root.TGraph()
    try:
        min  = hist.GetMinimum()
        max  = hist.GetMaximum()
        contours = array('d', [min, level, max])
        hist.SetContour(2, contours);
        hist.SetMaximum(1.0)
        hist.SetMinimum(-1.0)
        hist.Draw("CONT Z LIST");
        root.gPad.Update();
        tobjarray = root.gROOT.GetListOfSpecials().FindObject("contours")
        list  = tobjarray.First()
        curve = list.First().Clone() 
    except:
        print "[stop_create_contour_hists] Error: no curve available"
    curve.SetName(g_name)
    curve.SetTitle(g_title)
    curve.SetLineColor(root.kBlack)
    curve.SetLineWidth(3)
    return curve;

# add two contours into one
def CombineTGraphs(g1, g2, name, title):
    if g1.GetN()==0 and g2.GetN()==0:
        g = root.TGraph(0)
    elif g1.GetN()==0:
        g = g2.Clone() 
    elif g2.GetN()==0:
        g = g1.Clone() 
    else:
        g_x  = array('d')
        g_y  = array('d')
        for i in xrange(g1.GetN()): 
            g_x.append(g1.GetX()[i])
            g_y.append(g1.GetY()[i])
        for i in xrange(g2.GetN()):
            g_x.append(g2.GetX()[i])
            g_y.append(g2.GetY()[i])
        n = g1.GetN()+g2.GetN()
        print type(n), n, type(g_x), g_x, type(g_y), g_y
        g = root.TGraph(n, g_x, g_y)
    g.SetName(name)
    g.SetTitle(title)
    g.SetLineColor(root.kBlack)
    g.SetLineWidth(3)
    return g

# extract the exclusion contour
def ExtractContour(hist_name, hist_title, mi, h_ul, h_xsec):
    
    # subtract to determine exclusions
    h_excl = root.rt.DivideHists(h_ul, h_xsec, hist_name, hist_title) 

    # split the histogram into regions
    (h_excl_1, h_excl_2) = Split2DHist(h_excl, mi)
    
    # fill bins with zero to high value (to prevent boundary bogus contours)
    FillBogus(h_excl_1)
    FillBogus(h_excl_2)

    # contours
    g1 = GetContourTGraph(h_excl_1)
    g2 = GetContourTGraph(h_excl_2)
    #g = CombineTGraphs(g1, g2, hist_name.replace("h_", "g_"), hist_title) 

    return (g1, g2) 

# ------------------#
# "main program" 
# ------------------#

def main():

    try:
        # inputs
        # -------------------------------------------------------------------- #

        # check options
        CheckOptions()

        analysis       = options.analysis      
        model          = options.model         
        xsec_file_name = options.xsec_file_name
        label          = options.label         
        method         = options.method        

        # check inputs
        tree_file = "output/limit_trees/%s/%s/%s/limit_result_ntuple_%s.root" % (label, method, model, analysis)
        if (not os.path.exists(tree_file)):
            print "[stop_create_contour_hists] Error: %s not found" % tree_file
            sys.exit()
        tree = root.TChain("tree")
        tree.Add(tree_file)

        # output path
        output_path = "plots/limits/%s/%s/%s/%s" % (label, method, model, analysis)
        if (not output_path or not os.path.exists(output_path)):
            os.makedirs(output_path)

        # model specific meta-data
        mi = GetModelInfo(model)

        # cross section file
        if xsec_file_name != None:
            xsec_file   = root.TFile.Open(xsec_file_name)
            h_xsec_orig = xsec_file.Get("h_stop_xsec")
        else: 
            print "[stop_create_contour_hists] Error: %s not found" % xsec_file
            sys.exit()

        # cross section hists
        h_xsec       = root.TH2D("h_xsec"      , "h_xsec;%s;%s"      %(mi.xtitle, mi.ytitle), mi.NbinsX(), mi.xmin, mi.xmax, mi.NbinsY(), mi.ymin, mi.ymax)
        h_xsec_plus  = root.TH2D("h_xsec_plus" , "h_xsec_plus;%s;%s" %(mi.xtitle, mi.ytitle), mi.NbinsX(), mi.xmin, mi.xmax, mi.NbinsY(), mi.ymin, mi.ymax)
        h_xsec_minus = root.TH2D("h_xsec_minus", "h_xsec_minus;%s;%s"%(mi.xtitle, mi.ytitle), mi.NbinsX(), mi.xmin, mi.xmax, mi.NbinsY(), mi.ymin, mi.ymax)
        for xbin in xrange(1, h_xsec.GetNbinsX()+1):
            for ybin in xrange(1, h_xsec.GetNbinsY()+1):
                mass_stop = h_xsec.GetXaxis().GetBinCenter(xbin)
                mass_lsp  = h_xsec.GetYaxis().GetBinCenter(ybin)
                if (mass_stop >= mass_lsp + 100): 
                    xsec_value = h_xsec_orig.GetBinContent(h_xsec_orig.FindBin(mass_stop))
                    xsec_error = h_xsec_orig.GetBinError  (h_xsec_orig.FindBin(mass_stop))
                    h_xsec.SetBinContent      (xbin, ybin, xsec_value)
                    h_xsec_plus.SetBinContent (xbin, ybin, xsec_value + xsec_error)
                    h_xsec_minus.SetBinContent(xbin, ybin, xsec_value - xsec_error)

        # set the style
        SetStyle()

        # Book hists
        # -------------------------------------------------------------------- #

        # cross section hists
        hist_title_stem = "%s #sigma #times Branching Fraction (%s);%s;%s;%s"%(analysis, model, mi.xtitle, mi.ytitle, mi.ztitle),
        h_ul_xsec_obs    = root.TH2D("h_ul_xsec_obs"   , "Observed %s"         % hist_title_stem, mi.NbinsX(), mi.xmin, mi.xmax, mi.NbinsY(), mi.ymin, mi.ymax)
        h_ul_xsec_exp    = root.TH2D("h_ul_xsec_exp"   , "Expected %s"         % hist_title_stem, mi.NbinsX(), mi.xmin, mi.xmax, mi.NbinsY(), mi.ymin, mi.ymax)
        h_ul_xsec_exp_p1 = root.TH2D("h_ul_xsec_exp_p1", "Expected+1#sigma %s" % hist_title_stem, mi.NbinsX(), mi.xmin, mi.xmax, mi.NbinsY(), mi.ymin, mi.ymax)
        h_ul_xsec_exp_m1 = root.TH2D("h_ul_xsec_exp_m1", "Expected-1#sigma %s" % hist_title_stem, mi.NbinsX(), mi.xmin, mi.xmax, mi.NbinsY(), mi.ymin, mi.ymax)

        # fill hists 
        # -------------------------------------------------------------------- #

        tree.Project("h_ul_xsec_obs"    , "mass_lsp:mass_stop" , "ul_obs"          )
        tree.Project("h_ul_xsec_exp"    , "mass_lsp:mass_stop" , "ul_exp"          )
        tree.Project("h_ul_xsec_exp_p1" , "mass_lsp:mass_stop" , "ul_exp_1sigma_up")
        tree.Project("h_ul_xsec_exp_m1" , "mass_lsp:mass_stop" , "ul_exp_1sigma_dn")

        # smoothing/interpolation 
        # -------------------------------------------------------------------- #

        h_ul_xsec_obs_smooth    = Smooth2DHist(h_ul_xsec_obs   , mi)
        h_ul_xsec_exp_smooth    = Smooth2DHist(h_ul_xsec_exp   , mi)
        h_ul_xsec_exp_p1_smooth = Smooth2DHist(h_ul_xsec_exp_p1, mi)
        h_ul_xsec_exp_m1_smooth = Smooth2DHist(h_ul_xsec_exp_m1, mi)

        # extract contour 
        # -------------------------------------------------------------------- #

        hist_title_stem    = "%s Exclusion on #sigma #times Branching Fraction (%s);%s;%s;%s"%(analysis, model, mi.xtitle, mi.ytitle, mi.ztitle)
        (g_excl_xsec_obs_1   , g_excl_xsec_obs_2   ) = ExtractContour("h_excl_xsec_obs"   , "Observed %s"              % hist_title_stem, mi, h_ul_xsec_obs_smooth   , h_xsec      )
        (g_excl_xsec_obs_p1_1, g_excl_xsec_obs_p1_2) = ExtractContour("h_excl_xsec_obs_p1", "Observed+1#sigma_{th} %s" % hist_title_stem, mi, h_ul_xsec_obs_smooth   , h_xsec_plus )
        (g_excl_xsec_exp_1   , g_excl_xsec_exp_2   ) = ExtractContour("h_excl_xsec_exp"   , "Expected %s"              % hist_title_stem, mi, h_ul_xsec_exp_smooth   , h_xsec      )
        (g_excl_xsec_obs_m1_1, g_excl_xsec_obs_m1_2) = ExtractContour("h_excl_xsec_obs_m1", "Observed-1#sigma_{th} %s" % hist_title_stem, mi, h_ul_xsec_obs_smooth   , h_xsec_minus)
        (g_excl_xsec_exp_p1_1, g_excl_xsec_exp_p1_2) = ExtractContour("h_excl_xsec_exp_p1", "Expected+1#sigma_{exp} %s"% hist_title_stem, mi, h_ul_xsec_exp_p1_smooth, h_xsec      )
        (g_excl_xsec_exp_m1_1, g_excl_xsec_exp_m1_2) = ExtractContour("h_excl_xsec_exp_m1", "Expected-1#sigma_{exp} %s"% hist_title_stem, mi, h_ul_xsec_exp_m1_smooth, h_xsec      )
    
        # pull g1 from Ben's original result
        if (options.orig_curve_file and (analysis == "onelep" or analysis == "combined")):
            orig_an_file = root.TFile.Open(options.orig_curve_file)
            g_excl_xsec_obs_1    = GetContourTGraph(orig_an_file.Get("hR_obs_smallDM"  ))
            g_excl_xsec_obs_p1_1 = GetContourTGraph(orig_an_file.Get("hR_obsp1_smallDM"))
            g_excl_xsec_obs_m1_1 = GetContourTGraph(orig_an_file.Get("hR_obsm1_smallDM"))
            g_excl_xsec_exp_1    = GetContourTGraph(orig_an_file.Get("hR_exp_smallDM"  ))
            g_excl_xsec_exp_p1_1 = GetContourTGraph(orig_an_file.Get("hR_expp1_smallDM"))
            g_excl_xsec_exp_m1_1 = GetContourTGraph(orig_an_file.Get("hR_expm1_smallDM"))
            g_excl_xsec_obs_1    .SetName("g_excl_xsec_obs_1")
            g_excl_xsec_obs_p1_1 .SetName("g_excl_xsec_obs_p1_1")
            g_excl_xsec_obs_m1_1 .SetName("g_excl_xsec_obs_m1_1")
            g_excl_xsec_exp_1    .SetName("g_excl_xsec_exp_1")
            g_excl_xsec_exp_p1_1 .SetName("g_excl_xsec_exp_p1_1")
            g_excl_xsec_exp_m1_1 .SetName("g_excl_xsec_exp_m1_1")
        
        # write the output
        # -------------------------------------------------------------------- #

        # ROOT file
        output_file = root.TFile.Open("%s/%s_xsec_excl_%s.root"%(output_path, model,analysis), "RECREATE")
        h_xsec.Write()
        h_xsec_plus.Write()
        h_xsec_minus.Write()
        h_ul_xsec_exp.Write()
        h_ul_xsec_exp_p1.Write()
        h_ul_xsec_exp_m1.Write()
        h_ul_xsec_obs.Write()
        h_ul_xsec_exp_smooth.Write()
        h_ul_xsec_exp_p1_smooth.Write()
        h_ul_xsec_exp_m1_smooth.Write()
        h_ul_xsec_obs_smooth.Write()
        g_excl_xsec_obs_1.Write()
        g_excl_xsec_obs_p1_1.Write()
        g_excl_xsec_exp_1.Write()
        g_excl_xsec_obs_m1_1.Write()
        g_excl_xsec_exp_p1_1.Write()
        g_excl_xsec_exp_m1_1.Write()
        g_excl_xsec_obs_2.Write()
        g_excl_xsec_obs_p1_2.Write()
        g_excl_xsec_exp_2.Write()
        g_excl_xsec_obs_m1_2.Write()
        g_excl_xsec_exp_p1_2.Write()
        g_excl_xsec_exp_m1_2.Write()
        output_file.Close()

        # print xsec hists
        PrintXsecHist(h_ul_xsec_exp          , mi, output_path, "pdf")
        PrintXsecHist(h_ul_xsec_exp_p1       , mi, output_path, "pdf")
        PrintXsecHist(h_ul_xsec_exp_m1       , mi, output_path, "pdf")
        PrintXsecHist(h_ul_xsec_obs          , mi, output_path, "pdf")
        PrintXsecHist(h_ul_xsec_exp_smooth   , mi, output_path, "pdf")
        PrintXsecHist(h_ul_xsec_exp_p1_smooth, mi, output_path, "pdf")
        PrintXsecHist(h_ul_xsec_exp_m1_smooth, mi, output_path, "pdf")
        PrintXsecHist(h_ul_xsec_obs_smooth   , mi, output_path, "pdf")

        # print exclusion hists
        PrintExclCurve(g_excl_xsec_obs_1   , h_ul_xsec_exp_smooth, mi, output_path, "pdf")
        PrintExclCurve(g_excl_xsec_obs_p1_1, h_ul_xsec_exp_smooth, mi, output_path, "pdf")
        PrintExclCurve(g_excl_xsec_obs_m1_1, h_ul_xsec_exp_smooth, mi, output_path, "pdf")
        PrintExclCurve(g_excl_xsec_exp_1   , h_ul_xsec_exp_smooth, mi, output_path, "pdf")
        PrintExclCurve(g_excl_xsec_exp_p1_1, h_ul_xsec_exp_smooth, mi, output_path, "pdf")
        PrintExclCurve(g_excl_xsec_exp_m1_1, h_ul_xsec_exp_smooth, mi, output_path, "pdf")
        PrintExclCurve(g_excl_xsec_obs_2   , h_ul_xsec_exp_smooth, mi, output_path, "pdf")
        PrintExclCurve(g_excl_xsec_obs_p1_2, h_ul_xsec_exp_smooth, mi, output_path, "pdf")
        PrintExclCurve(g_excl_xsec_obs_m1_2, h_ul_xsec_exp_smooth, mi, output_path, "pdf")
        PrintExclCurve(g_excl_xsec_exp_2   , h_ul_xsec_exp_smooth, mi, output_path, "pdf")
        PrintExclCurve(g_excl_xsec_exp_p1_2, h_ul_xsec_exp_smooth, mi, output_path, "pdf")
        PrintExclCurve(g_excl_xsec_exp_m1_2, h_ul_xsec_exp_smooth, mi, output_path, "pdf")

        # overlay the "final plot"
        canvas = root.TCanvas("canvas", "canvas", 600, 600)
        canvas.SetLogz(True)
        h_ul_xsec_exp_smooth.Draw("colz")
        g_excl_xsec_exp_1   .SetLineColor(root.kRed  ); g_excl_xsec_exp_1   .SetLineWidth(3); g_excl_xsec_exp_1   .SetLineStyle(1); g_excl_xsec_exp_1   .Draw("lsame")
        g_excl_xsec_exp_p1_1.SetLineColor(root.kRed  ); g_excl_xsec_exp_p1_1.SetLineWidth(2); g_excl_xsec_exp_p1_1.SetLineStyle(4); g_excl_xsec_exp_p1_1.Draw("lsame")
        g_excl_xsec_exp_m1_1.SetLineColor(root.kRed  ); g_excl_xsec_exp_m1_1.SetLineWidth(2); g_excl_xsec_exp_m1_1.SetLineStyle(4); g_excl_xsec_exp_m1_1.Draw("lsame")
        g_excl_xsec_obs_1   .SetLineColor(root.kBlack); g_excl_xsec_obs_1   .SetLineWidth(3); g_excl_xsec_obs_1   .SetLineStyle(1); g_excl_xsec_obs_1   .Draw("lsame")
        g_excl_xsec_obs_p1_1.SetLineColor(root.kBlack); g_excl_xsec_obs_p1_1.SetLineWidth(2); g_excl_xsec_obs_p1_1.SetLineStyle(4); g_excl_xsec_obs_p1_1.Draw("lsame")
        g_excl_xsec_obs_m1_1.SetLineColor(root.kBlack); g_excl_xsec_obs_m1_1.SetLineWidth(2); g_excl_xsec_obs_m1_1.SetLineStyle(4); g_excl_xsec_obs_m1_1.Draw("lsame")
        g_excl_xsec_exp_2   .SetLineColor(root.kRed  ); g_excl_xsec_exp_2   .SetLineWidth(3); g_excl_xsec_exp_2   .SetLineStyle(1); g_excl_xsec_exp_2   .Draw("lsame")
        g_excl_xsec_exp_p1_2.SetLineColor(root.kRed  ); g_excl_xsec_exp_p1_2.SetLineWidth(2); g_excl_xsec_exp_p1_2.SetLineStyle(4); g_excl_xsec_exp_p1_2.Draw("lsame")
        g_excl_xsec_exp_m1_2.SetLineColor(root.kRed  ); g_excl_xsec_exp_m1_2.SetLineWidth(2); g_excl_xsec_exp_m1_2.SetLineStyle(4); g_excl_xsec_exp_m1_2.Draw("lsame")
        g_excl_xsec_obs_2   .SetLineColor(root.kBlack); g_excl_xsec_obs_2   .SetLineWidth(3); g_excl_xsec_obs_2   .SetLineStyle(1); g_excl_xsec_obs_2   .Draw("lsame")
        g_excl_xsec_obs_p1_2.SetLineColor(root.kBlack); g_excl_xsec_obs_p1_2.SetLineWidth(2); g_excl_xsec_obs_p1_2.SetLineStyle(4); g_excl_xsec_obs_p1_2.Draw("lsame")
        g_excl_xsec_obs_m1_2.SetLineColor(root.kBlack); g_excl_xsec_obs_m1_2.SetLineWidth(2); g_excl_xsec_obs_m1_2.SetLineStyle(4); g_excl_xsec_obs_m1_2.Draw("lsame")
        
        # legend
        stat_y1 = 1.0 - root.gStyle.GetPadTopMargin() - 0.01;
        stat_y2 = 0.70;
        stat_x1 = root.gStyle.GetPadLeftMargin() + 0.02;
        stat_x2 = 0.5;
        leg = root.TLegend(stat_x1, stat_y1, stat_x2, stat_y2);
        leg.AddEntry(g_excl_xsec_exp_2, "Expected", "L");
        leg.AddEntry(g_excl_xsec_obs_2, "Observed", "L");
        leg.SetFillColor(0);  # 0 makes it the background clear on the pad
        leg.SetFillStyle(0);
        leg.SetBorderSize(0);
        leg.Draw()

        # print the output
        canvas.Print("%s/%s_interp_%s.pdf"%(output_path, model, analysis))

    except Exception, e:
        print "[stop_create_contour_hists] ERROR:", e
        return 1
    except:
        print "[stop_create_contour_hists] ERROR:", sys.exc_info()[0]
        return 1

# do it
if __name__ == '__main__':
    main()

