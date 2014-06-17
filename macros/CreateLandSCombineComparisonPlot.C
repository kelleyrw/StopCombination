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

void CreateLandSCombineComparisonPlotExp
(
    const std::string& sample = "t2tt",
    const std::string& method = "hybrid",
    const std::string& label  = "v0",
    const std::string& suffix = "pdf"
)
{
    // inputs:

    const stop::Sample::Info sample_info = stop::GetSampleInfo(sample);

    // lands hists and graphs
    TFile lands_file("data/t2tt_onelep_bdt_AN-2013-89.root");
    lands_file.ls();

    // onlep hists and graphs
    TFile onelep_file(Form("plots/limits/%s/%s/%s/onelep/%s_xsec_excl_onelep.root", label.c_str(), method.c_str(), sample.c_str(), sample.c_str()));
    onelep_file.ls();

    // histogram for axis
    TH2D& h_exp = *static_cast<TH2D*>(onelep_file.Get("h_ul_xsec_exp"));
    h_exp.GetXaxis()->SetRangeUser(100.0, 900);
    h_exp.GetYaxis()->SetRangeUser(0.0  , 700);

    // exclusion TGraphs
    TH2& h_lands_exp_1 = *static_cast<TH2F*>(lands_file.Get("hR_exp_smallDM"));
    h_lands_exp_1.SetLineColor(kRed+2);
    h_lands_exp_1.SetLineWidth(3);
    h_lands_exp_1.SetLineStyle(1);
    TH2& h_lands_expp1_1 = *static_cast<TH2F*>(lands_file.Get("hR_expp1_smallDM"));
    h_lands_expp1_1.SetLineColor(kRed+2);
    h_lands_expp1_1.SetLineWidth(3);
    h_lands_expp1_1.SetLineStyle(2);
    TH2& h_lands_expm1_1 = *static_cast<TH2F*>(lands_file.Get("hR_expm1_smallDM"));
    h_lands_expm1_1.SetLineColor(kRed+2);
    h_lands_expm1_1.SetLineWidth(3);
    h_lands_expm1_1.SetLineStyle(2);
    TH2& h_lands_exp_2 = *static_cast<TH2F*>(lands_file.Get("hR_exp"));
    h_lands_exp_2.SetLineColor(kRed+2);
    h_lands_exp_2.SetLineWidth(3);
    h_lands_exp_2.SetLineStyle(1);
    TH2& h_lands_expp1_2 = *static_cast<TH2F*>(lands_file.Get("hR_expp1"));
    h_lands_expp1_2.SetLineColor(kRed+2);
    h_lands_expp1_2.SetLineWidth(3);
    h_lands_expp1_2.SetLineStyle(2);
    TH2& h_lands_expm1_2 = *static_cast<TH2F*>(lands_file.Get("hR_expm1"));
    h_lands_expm1_2.SetLineColor(kRed+2);
    h_lands_expm1_2.SetLineWidth(3);
    h_lands_expm1_2.SetLineStyle(2);

    TGraph& g_onelep_exp = *static_cast<TGraph*>(onelep_file.Get("g_excl_xsec_exp"));
    g_onelep_exp.SetLineColor(kBlue);
    g_onelep_exp.SetLineWidth(3);
    g_onelep_exp.SetLineStyle(1);
    TGraph& g_onelep_exp_p1 = *static_cast<TGraph*>(onelep_file.Get("g_excl_xsec_exp_p1"));
    g_onelep_exp_p1.SetLineColor(kBlue);
    g_onelep_exp_p1.SetLineWidth(3);
    g_onelep_exp_p1.SetLineStyle(2);
    TGraph& g_onelep_exp_m1 = *static_cast<TGraph*>(onelep_file.Get("g_excl_xsec_exp_m1"));
    g_onelep_exp_m1.SetLineColor(kBlue);
    g_onelep_exp_m1.SetLineWidth(3);
    g_onelep_exp_m1.SetLineStyle(2);

    // TLegend
    TLegend leg(0.18, 0.78, 0.6, 0.68);
    leg.AddEntry(&h_lands_exp_1 , "LandS"         , "l");
    leg.AddEntry(&g_onelep_exp, "Higg's Combine", "l");
    leg.SetFillColor(0);  // 0 makes it the background clear on the pad
    leg.SetFillStyle(0);
    leg.SetBorderSize(0);
    TLine l_lands_p1;
    l_lands_p1.SetLineColor(kRed+2);
    l_lands_p1.SetLineWidth(2);
    l_lands_p1.SetLineStyle(2);
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
    h_lands_exp_1.Draw("cont3csame");
    h_lands_expp1_1.Draw("cont3csame");
    h_lands_expm1_1.Draw("cont3csame");
    h_lands_exp_2.Draw("cont3csame");
    h_lands_expp1_2.Draw("cont3csame");
    h_lands_expm1_2.Draw("cont3csame");
    g_onelep_exp.Draw("lsame");
    g_onelep_exp_p1.Draw("lsame");
    g_onelep_exp_m1.Draw("lsame");
    leg.Draw();
    l_lands_p1.DrawLineNDC (0.1975, 0.765, 0.265, 0.765);
    l_lands_p1.DrawLineNDC (0.1975, 0.745, 0.265, 0.745);
    l_onelep_p1.DrawLineNDC(0.1975, 0.715, 0.265, 0.715);
    l_onelep_p1.DrawLineNDC(0.1975, 0.695, 0.265, 0.695);
    t1.Draw();

    // output
    const std::string output_file = Form("plots/limits/%s/%s/%s/compare/p_lands_combine_comparison_exp.%s", label.c_str(), method.c_str(), sample.c_str(), suffix.c_str());
    lt::mkdir(lt::dirname(output_file), /*force=*/true);
    c1.Print(output_file.c_str());
}

void CreateLandSCombineComparisonPlotObs
(
    const std::string& sample = "t2tt",
    const std::string& method = "hybrid",
    const std::string& label  = "v0",
    const std::string& suffix = "pdf"
)
{
    // inputs:

    const stop::Sample::Info sample_info = stop::GetSampleInfo(sample);

    // lands hists and graphs
    TFile lands_file("data/t2tt_onelep_bdt_AN-2013-89.root");
    lands_file.ls();

    // onlep hists and graphs
    TFile onelep_file(Form("plots/limits/%s/%s/%s/onelep/%s_xsec_excl_onelep.root", label.c_str(), method.c_str(), sample.c_str(), sample.c_str()));
    onelep_file.ls();

    // histogram for axis
    TH2D& h_obs = *static_cast<TH2D*>(onelep_file.Get("h_ul_xsec_obs"));
    h_obs.GetXaxis()->SetRangeUser(100.0, 900);
    h_obs.GetYaxis()->SetRangeUser(0.0  , 700);

    // exclusion TGraphs
    TH2& h_lands_obs_1 = *static_cast<TH2F*>(lands_file.Get("hR_obs_smallDM"));
    h_lands_obs_1.SetLineColor(kRed+2);
    h_lands_obs_1.SetLineWidth(3);
    h_lands_obs_1.SetLineStyle(1);
    TH2& h_lands_obsp1_1 = *static_cast<TH2F*>(lands_file.Get("hR_obsp1_smallDM"));
    h_lands_obsp1_1.SetLineColor(kRed+2);
    h_lands_obsp1_1.SetLineWidth(3);
    h_lands_obsp1_1.SetLineStyle(2);
    TH2& h_lands_obsm1_1 = *static_cast<TH2F*>(lands_file.Get("hR_obsm1_smallDM"));
    h_lands_obsm1_1.SetLineColor(kRed+2);
    h_lands_obsm1_1.SetLineWidth(3);
    h_lands_obsm1_1.SetLineStyle(2);
    TH2& h_lands_obs_2 = *static_cast<TH2F*>(lands_file.Get("hR_obs"));
    h_lands_obs_2.SetLineColor(kRed+2);
    h_lands_obs_2.SetLineWidth(3);
    h_lands_obs_2.SetLineStyle(1);
    TH2& h_lands_obsp1_2 = *static_cast<TH2F*>(lands_file.Get("hR_obsp1"));
    h_lands_obsp1_2.SetLineColor(kRed+2);
    h_lands_obsp1_2.SetLineWidth(3);
    h_lands_obsp1_2.SetLineStyle(2);
    TH2& h_lands_obsm1_2 = *static_cast<TH2F*>(lands_file.Get("hR_obsm1"));
    h_lands_obsm1_2.SetLineColor(kRed+2);
    h_lands_obsm1_2.SetLineWidth(3);
    h_lands_obsm1_2.SetLineStyle(2);

    TGraph& g_onelep_obs = *static_cast<TGraph*>(onelep_file.Get("g_excl_xsec_obs"));
    g_onelep_obs.SetLineColor(kBlue);
    g_onelep_obs.SetLineWidth(3);
    g_onelep_obs.SetLineStyle(1);
    TGraph& g_onelep_obs_p1 = *static_cast<TGraph*>(onelep_file.Get("g_excl_xsec_obs_p1"));
    g_onelep_obs_p1.SetLineColor(kBlue);
    g_onelep_obs_p1.SetLineWidth(3);
    g_onelep_obs_p1.SetLineStyle(2);
    TGraph& g_onelep_obs_m1 = *static_cast<TGraph*>(onelep_file.Get("g_excl_xsec_obs_m1"));
    g_onelep_obs_m1.SetLineColor(kBlue);
    g_onelep_obs_m1.SetLineWidth(3);
    g_onelep_obs_m1.SetLineStyle(2);

    // TLegend
    TLegend leg(0.18, 0.78, 0.6, 0.68);
    leg.AddEntry(&h_lands_obs_1 , "LandS"         , "l");
    leg.AddEntry(&g_onelep_obs, "Higg's Combine", "l");
    leg.SetFillColor(0);  // 0 makes it the background clear on the pad
    leg.SetFillStyle(0);
    leg.SetBorderSize(0);
    TLine l_lands_p1;
    l_lands_p1.SetLineColor(kRed+2);
    l_lands_p1.SetLineWidth(2);
    l_lands_p1.SetLineStyle(2);
    TLine l_onelep_p1;
    l_onelep_p1.SetLineColor(kBlue);
    l_onelep_p1.SetLineWidth(2);
    l_onelep_p1.SetLineStyle(2);


    // labels
    TLatex t1(0.18, 0.85, Form("Observed exclusion on #sigma(%s)", sample_info.title.c_str()));
    t1.SetNDC();
    t1.SetTextAlign(13);
    t1.SetTextFont(42);
    t1.SetTextSize(0.04);

    // overlay
    TCanvas c1("c1", "c1", 600, 600);
    rt::SetTDRStyle();
    h_obs.SetTitle("CMS Preliminary, #sqrt{s} = 8 TeV");
    h_obs.SetTitleFont(42);
    h_obs.SetTitleSize(0.05);
    h_obs.SetStats(false);
    h_obs.Draw("axis");
    const double offset = 25.0/2.0;
    h_obs.GetXaxis()->SetRangeUser(100+offset, 800-offset);
    h_obs.GetXaxis()->SetTitleOffset(1.2);
    h_obs.GetXaxis()->SetTitleSize(0.05);
    h_obs.GetXaxis()->SetTitleFont(42);
    h_obs.GetXaxis()->SetLabelSize(0.03);
    h_obs.GetXaxis()->SetLabelFont(42);
    h_obs.GetYaxis()->SetRangeUser(0+offset , 400-offset);
    h_obs.GetYaxis()->SetTitleOffset(1.35);
    h_obs.GetYaxis()->SetTitleFont(42);
    h_obs.GetYaxis()->SetLabelSize(0.03);
    h_obs.GetYaxis()->SetLabelFont(42);
    c1.SetLeftMargin(0.14);
    c1.SetRightMargin(0.05);
    h_obs.Draw("axis");
    h_lands_obs_1.Draw("cont3csame");
    h_lands_obsp1_1.Draw("cont3csame");
    h_lands_obsm1_1.Draw("cont3csame");
    h_lands_obs_2.Draw("cont3csame");
    h_lands_obsp1_2.Draw("cont3csame");
    h_lands_obsm1_2.Draw("cont3csame");
    g_onelep_obs.Draw("lsame");
    g_onelep_obs_p1.Draw("lsame");
    g_onelep_obs_m1.Draw("lsame");
    leg.Draw();
    l_lands_p1.DrawLineNDC (0.1975, 0.765, 0.265, 0.765);
    l_lands_p1.DrawLineNDC (0.1975, 0.745, 0.265, 0.745);
    l_onelep_p1.DrawLineNDC(0.1975, 0.715, 0.265, 0.715);
    l_onelep_p1.DrawLineNDC(0.1975, 0.695, 0.265, 0.695);
    t1.Draw();

    // output
    c1.Update();
    const std::string output_file = Form("plots/limits/%s/%s/%s/compare/p_lands_combine_comparison_obs.%s", label.c_str(), method.c_str(), sample.c_str(), suffix.c_str());
    lt::mkdir(lt::dirname(output_file), /*force=*/true);
    c1.Print(output_file.c_str());
}

void CreateLandSCombineComparisonPlot
(
    const std::string& sample = "t2tt",
    const std::string& method = "hybrid",
    const std::string& label  = "v0",
    const std::string& suffix = "pdf"
)
{
    CreateLandSCombineComparisonPlotExp(sample, method, label, suffix);
    CreateLandSCombineComparisonPlotObs(sample, method, label, suffix);
}
