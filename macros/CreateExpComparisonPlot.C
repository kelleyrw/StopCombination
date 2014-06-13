// C++
#include <iostream>
#include <fstream>
#include <string>
#include <limits>

// ROOT
#include "TFile.h"
#include "TTree.h"
#include "TH1.h"
#include "TH2D.h"
#include "TGraph.h"
#include "TLegend.h"
#include "TCanvas.h"
#include "TLine.h"

// Analysis Tools
#include "RootTools.h"
#include "LanguageTools.h"

// Stop specific 
#include "Sample.h"
#include "SignalRegion.h"
#include "PrintFormattedXSecHist.h"

void CreateExpComparisonPlot
(
    const std::string& sample = "t2tt",
    const std::string& method = "hybrid",
    const std::string& label  = "v0",
    const std::string& suffix = "pdf"
)
{
    // inputs:

    const stop::Sample::Info sample_info = stop::GetSampleInfo(sample);

    // razor hists and graphs
    TFile razor_file(Form("plots/limits/%s/%s/%s/razor/%s_xsec_excl_razor.root", label.c_str(), method.c_str(), sample.c_str(), sample.c_str()));

    // onlep hists and graphs
    TFile onelep_file(Form("plots/limits/%s/%s/%s/onelep/%s_xsec_excl_onelep.root", label.c_str(), method.c_str(), sample.c_str(), sample.c_str()));

    // histogram for axis
    TH2D& h_exp = *static_cast<TH2D*>(onelep_file.Get("h_ul_xsec_exp"));
    h_exp.GetXaxis()->SetRangeUser(100.0, 900);
    h_exp.GetYaxis()->SetRangeUser(0.0  , 700);

    // exclusion TGraphs
    TGraph& g_razor    = *static_cast<TGraph*>(razor_file.Get("g_excl_xsec_exp"));
    TGraph& g_razor_p1 = *static_cast<TGraph*>(razor_file.Get("g_excl_xsec_exp_p1"));
    TGraph& g_razor_m1 = *static_cast<TGraph*>(razor_file.Get("g_excl_xsec_exp_m1"));
    g_razor.SetLineColor(kRed+2);
    g_razor_p1.SetLineColor(kRed+2);
    g_razor_m1.SetLineColor(kRed+2);
    g_razor.SetLineWidth(3);
    g_razor_p1.SetLineWidth(2);
    g_razor_m1.SetLineWidth(2);
    g_razor.SetLineStyle(1);
    g_razor_p1.SetLineStyle(2);
    g_razor_m1.SetLineStyle(2);

    TGraph& g_onelep = *static_cast<TGraph*>(onelep_file.Get("g_excl_xsec_exp"));
    TGraph& g_onelep_p1 = *static_cast<TGraph*>(onelep_file.Get("g_excl_xsec_exp_p1"));
    TGraph& g_onelep_m1 = *static_cast<TGraph*>(onelep_file.Get("g_excl_xsec_exp_m1"));
    g_onelep.SetLineColor(kBlue);
    g_onelep_p1.SetLineColor(kBlue);
    g_onelep_m1.SetLineColor(kBlue);
    g_onelep.SetLineWidth(3);
    g_onelep_p1.SetLineWidth(2);
    g_onelep_m1.SetLineWidth(2);
    g_onelep.SetLineStyle(1);
    g_onelep_p1.SetLineStyle(2);
    g_onelep_m1.SetLineStyle(2);

    // TLegend
    TLegend leg(0.18, 0.78, 0.6, 0.68);
    leg.AddEntry(&g_razor , "Razor 0L (SUS-13-004), L = 19.4 fb^{-1}", "l");
    leg.AddEntry(&g_onelep, "MVA 1L (SUS-13-011), L = 19.5 fb^{-1}"  , "l");
    leg.SetFillColor(0);  // 0 makes it the background clear on the pad
    leg.SetFillStyle(0);
    leg.SetBorderSize(0);
    TLine l_razor_p1;
    l_razor_p1.SetLineColor(kRed+2);
    l_razor_p1.SetLineWidth(2);
    l_razor_p1.SetLineStyle(2);
    TLine l_onelep_p1;
    l_onelep_p1.SetLineColor(kBlue);
    l_onelep_p1.SetLineWidth(2);
    l_onelep_p1.SetLineStyle(2);


    // labels
    TLatex t1(0.18, 0.85, Form("Expected exclusion on #sigma(%s)", sample_info.title.c_str())); 
    t1.SetNDC();
    t1.SetTextAlign(13);
    t1.SetTextFont(42);
    t1.SetTextSize(0.04);

    // overlay
    TCanvas c1("c1", "c1", 600, 600);
    rt::SetTDRStyle();
    h_exp.SetTitle("CMS Preliminary, #sqrt{s} = 8 TeV");
    h_exp.SetTitleFont(42);
    h_exp.SetTitleSize(0.05);
    h_exp.SetStats(false);
    h_exp.Draw("axis");
    const double offset = 25.0/2.0;
    h_exp.GetXaxis()->SetRangeUser(100+offset, 800-offset);
    h_exp.GetXaxis()->SetTitleOffset(1.2);
    h_exp.GetXaxis()->SetTitleSize(0.05);
    h_exp.GetXaxis()->SetTitleFont(42);
    h_exp.GetXaxis()->SetLabelSize(0.03);
    h_exp.GetXaxis()->SetLabelFont(42);
    h_exp.GetYaxis()->SetRangeUser(0+offset , 400-offset);
    h_exp.GetYaxis()->SetTitleOffset(1.35);
    h_exp.GetYaxis()->SetTitleFont(42);
    h_exp.GetYaxis()->SetLabelSize(0.03);
    h_exp.GetYaxis()->SetLabelFont(42);
    c1.SetLeftMargin(0.14);
    c1.SetRightMargin(0.05);
    h_exp.Draw("axis");
    g_razor.Draw("lsame");
    g_razor_p1.Draw("lsame");
    g_razor_m1.Draw("lsame");
    g_onelep.Draw("lsame");
    g_onelep_p1.Draw("lsame");
    g_onelep_m1.Draw("lsame");
    leg.Draw();
    l_razor_p1.DrawLineNDC (0.1975, 0.765, 0.265, 0.765);
    l_razor_p1.DrawLineNDC (0.1975, 0.745, 0.265, 0.745);
    l_onelep_p1.DrawLineNDC(0.1975, 0.715, 0.265, 0.715);
    l_onelep_p1.DrawLineNDC(0.1975, 0.695, 0.265, 0.695);
    t1.Draw();

    // output
    const std::string output_file = Form("plots/limits/%s/%s/%s/compare/p_exp_comparison.%s", label.c_str(), method.c_str(), sample.c_str(), suffix.c_str());
    lt::mkdir(lt::dirname(output_file), /*force=*/true);
    c1.Print(output_file.c_str());
}
