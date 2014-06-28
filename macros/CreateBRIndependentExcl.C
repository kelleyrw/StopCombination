// C++
#include <iostream>
#include <fstream>
#include <string>
#include <limits>

// ROOT
#include "TFile.h"
#include "TTree.h"
#include "TH1.h"
#include "TH2.h"
#include "TStyle.h"
#include "TCanvas.h"
#include "TColor.h"
#include "TGraph.h"
#include "TObjArray.h"
#include "TList.h"
#include "TROOT.h"
#include "TPad.h"
#include "TLegend.h"

// Analysis Tools
#include "RootTools.h"
#include "LanguageTools.h"

// Stop specific 
#include "Sample.h"
#include "SignalRegion.h"
#include "PrintFormattedXSecHist.h"
#include "SwissCrossInterpolate.h"

struct UpperLimit
{
    double br;
    double value;
    double error;
};

bool operator < (const UpperLimit& l1, const UpperLimit& l2)
{
    return l1.value < l2.value;
}

UpperLimit MaxUpperLimit
(
    const UpperLimit& l1,
    const UpperLimit& l2,
    const UpperLimit& l3,
    const UpperLimit& l4,
    const UpperLimit& l5
)
{
    UpperLimit l_max = std::max(l1, l2);
    l_max = std::max(l_max, l3);
    l_max = std::max(l_max, l4);
    l_max = std::max(l_max, l5);
    return l_max;
}

void ExtractBestBR
(
    rt::TH1Container& hc,
    const TH2& h_100,
    const TH2& h_070,
    const TH2& h_050,
    const TH2& h_030,
    const TH2& h_000
)
{
    // "best" BR hist
    const std::string br_hist_name = lt::string_replace_all(h_100.GetName(), "xsec", "best_br");
    TH2* const h_br = dynamic_cast<TH2*>(h_100.Clone(br_hist_name.c_str()));
    h_br->SetTitle("CMS, L = 19.5 fb^{-1}, #sqrt{s} = 8 TeV");
    h_br->Reset();

    // loop over bins and fill "best" hist
    for (int xbin = 0; xbin < h_000.GetNbinsX()+1; ++xbin)
    {
        for (int ybin = 0; ybin < h_000.GetNbinsY()+1; ++ybin)
        {
            // get the mass for that bin
            const double mass_stop = h_000.GetXaxis()->GetBinCenter(xbin);
            const double mass_lsp  = h_000.GetYaxis()->GetBinCenter(ybin);
            if (mass_lsp > (mass_stop - 100)) {continue;}

            // best UL
            const UpperLimit ul_000 = {0.001, h_000.GetBinContent(xbin, ybin), h_000.GetBinError(xbin, ybin)}; // added small value to make it show up
            const UpperLimit ul_030 = {0.300, h_030.GetBinContent(xbin, ybin), h_030.GetBinError(xbin, ybin)};
            const UpperLimit ul_050 = {0.500, h_050.GetBinContent(xbin, ybin), h_050.GetBinError(xbin, ybin)};
            const UpperLimit ul_070 = {0.700, h_070.GetBinContent(xbin, ybin), h_070.GetBinError(xbin, ybin)};
            const UpperLimit ul_100 = {1.000, h_100.GetBinContent(xbin, ybin), h_100.GetBinError(xbin, ybin)};
            const UpperLimit ul_best = MaxUpperLimit(ul_000, ul_030, ul_050, ul_070, ul_100);
            rt::SetBinContent2D(h_br, mass_stop, mass_lsp, ul_best.br, 0.0);
        }
    }
    hc.Add(h_br);
    return;
}

void ExtractBestUL
(
    rt::TH1Container& hc,
    const TH2& h_br,
    const TH2& h_100,
    const TH2& h_070,
    const TH2& h_050,
    const TH2& h_030,
    const TH2& h_000
)
{
    // "best" upper limit hist
    TH2* const h_ul = dynamic_cast<TH2*>(h_100.Clone());
    h_ul->Reset();

    // loop over bins and fill "best" hist
    for (int xbin = 0; xbin < h_000.GetNbinsX()+1; ++xbin)
    {
        for (int ybin = 0; ybin < h_000.GetNbinsY()+1; ++ybin)
        {
            // get the mass for that bin
            const double mass_stop = h_000.GetXaxis()->GetBinCenter(xbin);
            const double mass_lsp  = h_000.GetYaxis()->GetBinCenter(ybin);
            if (mass_lsp > (mass_stop - 100)) {continue;}

            // best BR
            const double best_br = h_br.GetBinContent(xbin, ybin);

            // best UL
            double value = 99999.0;
            double error = 99999.0;
            if (lt::is_equal(best_br, 0.001))
            {
                value = h_000.GetBinContent(xbin, ybin);
                error = h_000.GetBinContent(xbin, ybin);
            }
            else if (lt::is_equal(best_br, 0.30))
            {
                value = h_030.GetBinContent(xbin, ybin);
                error = h_030.GetBinContent(xbin, ybin);
            }
            else if (lt::is_equal(best_br, 0.50))
            {
                value = h_050.GetBinContent(xbin, ybin);
                error = h_050.GetBinContent(xbin, ybin);
            }
            else if (lt::is_equal(best_br, 0.70))
            {
                value = h_070.GetBinContent(xbin, ybin);
                error = h_070.GetBinContent(xbin, ybin);
            }
            else if (lt::is_equal(best_br, 1.00))
            {
                value = h_100.GetBinContent(xbin, ybin);
                error = h_100.GetBinContent(xbin, ybin);
            }
            rt::SetBinContent2D(h_ul, mass_stop, mass_lsp, value, error);
        }
    }

    // smooth
    hc.Add(h_ul);
    return;
}

void PrintFormattedBestBRHist
(
    TH2& hist,
    const std::string& plot_name,
    const std::string& path,
    const std::string& suffix,
    const std::string& paint_text_option = "1.1f"
)
{
    TCanvas c1("c1", "c1", 600, 600);
    hist.SetStats(false);
    hist.SetMarkerSize(0.75);
    gStyle->SetPadRightMargin(0.10);
    gStyle->SetPaintTextFormat(paint_text_option.c_str());

    // set z axis
    hist.GetZaxis()->SetLabelFont(42);
    hist.GetZaxis()->SetTitleFont(42);
    hist.GetZaxis()->SetLabelSize(0.035);
    hist.GetZaxis()->SetTitleSize(0.035);
    hist.GetZaxis()->SetTitle("BR that gives the worst UL");
    hist.SetMinimum(0.0);
    hist.SetMaximum(1.0);

    // define the palette for z axis
    static const int NRGBs     = 5;
    static const int NCont     = 3;
    static double stops[NRGBs] = {0.00 , 0.34 , 0.61 , 0.84 , 1.00};
    static double red  [NRGBs] = {0.50 , 0.50 , 1.00 , 1.00 , 1.00};
    static double green[NRGBs] = {0.50 , 1.00 , 1.00 , 0.60 , 0.50};
    static double blue [NRGBs] = {1.00 , 1.00 , 0.50 , 0.40 , 0.50};
    TColor::CreateGradientColorTable(NRGBs, stops, red, green, blue, NCont);
    gStyle->SetNumberContours(NCont);
    hist.Draw("colz");
    hist.GetXaxis()->SetTitleOffset(1.2);
    hist.GetYaxis()->SetTitleOffset(1.5);
    hist.GetZaxis()->SetTitleOffset(1.4);
    gPad->SetRightMargin(0.16);
    gPad->SetLeftMargin(0.12);
    gPad->Update();

    const std::string file_name = Form("%s/%s.%s", path.c_str(), plot_name.c_str(), suffix.c_str());
    lt::mkdir(path, /*force=*/true);
    hist.Draw("text colz");
    c1.Print(file_name.c_str());
}

// fill bins with zero to high value (to prevent boundary bogus contours)
void FillBogus(TH2& hist, const double level=0.0, const double bogus=9999)
{
    for (int xbin = 0; xbin < hist.GetNbinsX()+1; ++xbin)
    {
        for (int ybin = 0; ybin < hist.GetNbinsY()+1; ++ybin)
        {
            // get the mass for that bin
            const double mass_stop = hist.GetXaxis()->GetBinCenter(xbin);
            const double mass_lsp  = hist.GetYaxis()->GetBinCenter(ybin);
            const double value     = rt::GetBinContent2D(&hist, mass_stop, mass_lsp);
            if (value <= level)
            {
                hist.SetBinContent(xbin, ybin, bogus);
            }
        }
    }
    return;
}

// get the contour from the histogram
TGraph* GetContourTGraph(TH2& hist, const double level = 1.0)
{
    const std::string g_name  = lt::string_replace_first(hist.GetName(), "h_", "g_");
    const std::string g_title = hist.GetTitle();
    const double min = hist.GetMinimum();
    const double max = hist.GetMaximum();
    const double contours[]  = {min, level, max};
    hist.SetContour(2, contours);
    hist.SetMaximum(1.0);
    hist.SetMinimum(-1.0);
    hist.Draw("CONT Z LIST");
    gPad->Update();
    TObjArray* const tobjarray = dynamic_cast<TObjArray*>(gROOT->GetListOfSpecials()->FindObject("contours"));
    TList* const list = dynamic_cast<TList*>(tobjarray->First());
    TGraph* curve = (!list->IsEmpty() ? dynamic_cast<TGraph*>(list->First()->Clone(g_name.c_str())) : new TGraph);
    if (curve != NULL)
    {
        curve->SetTitle(g_title.c_str());
        curve->SetLineColor(kBlack);
        curve->SetLineWidth(3);
    }
    else
    {
        curve = new TGraph(0); 
        std::cout << "[stop_create_contour_hists] Error: no curve available" << endl;
    }
    return curve;
}

// add two contours into one
TGraph* CombineTGraphs(TGraph* const g1, TGraph* const g2, const std::string& name, const std::string& title)
{
    TGraph* g = NULL;
    if      (g1->GetN()==0 and g2->GetN()==0) {g = NULL;}
    else if (g1->GetN()==0)                   {g = static_cast<TGraph*>(g2->Clone());}
    else if (g2->GetN()==0)                   {g = static_cast<TGraph*>(g1->Clone());}
    else
    {
        std::vector<double> g_x;
        std::vector<double> g_y;
        for (int i = g1->GetN()-1; i >= 0; i--)
        {
            g_x.push_back(g1->GetX()[i]);
            g_y.push_back(g1->GetY()[i]);
        }
        // append bogus value to join the other contour "off the screen"
        g_x.push_back(150);
        g_y.push_back(-12.5);
        g_x.push_back(175);
        g_y.push_back(-12.5);
        g_x.push_back(200);
        g_y.push_back(-12.5);
        for (int i = g2->GetN()-1; i >= 0; i--)
        {
            g_x.push_back(g2->GetX()[i]);
            g_y.push_back(g2->GetY()[i]);
        }
        const int n = g1->GetN()+g2->GetN()+3;
        g = new TGraph(n, g_x.data(), g_y.data());
    }
    g->SetName(name.c_str());
    g->SetTitle(title.c_str());
    g->SetLineColor(kBlack);
    g->SetLineWidth(3);
    return g;
}

// split the hist
std::pair<TH2* const, TH2* const> Split2DHist(TH2& hist)
{
    TH2* const h1 = dynamic_cast<TH2*>(hist.Clone(Form("%s_1", hist.GetName()))); 
    TH2* const h2 = dynamic_cast<TH2*>(hist.Clone(Form("%s_2", hist.GetName())));
    h1->SetTitle(h1->GetName());
    h2->SetTitle(h2->GetName());

    // reset points
    static const double m_top = 173; // GeV
    const unsigned int nbinsx = h1->GetNbinsX()+1;
    const unsigned int nbinsy = h1->GetNbinsY()+1;
    for (unsigned int xbin = 1; xbin < nbinsx; xbin++)
    {
        for (unsigned int ybin = 1; ybin < nbinsy; ybin++)
        {
            const float m_stop = h1->GetXaxis()->GetBinCenter(xbin);
            const float m_lsp  = h1->GetYaxis()->GetBinCenter(ybin);

            //cout << m_lsp << ", " << m_stop << "\t" << m_stop - m_top << endl;

            // zero out bins below line
            if (m_lsp < (m_stop - m_top + 25))
            {
                h1->SetBinContent(xbin, ybin, 0);
                h1->SetBinError  (xbin, ybin, 0);
            }

            // zero out bins below line
            if (m_lsp > (m_stop - m_top - 25))
            {
                h2->SetBinContent(xbin, ybin, 0);
                h2->SetBinError  (xbin, ybin, 0);
            }
        }
    }

    return std::make_pair(h1, h2);
}

// extract the exclusion contour
std::pair<TGraph* const, TGraph* const> ExtractContour(const std::string& hist_name, const std::string& hist_title, TH2& h_ul, TH2& h_xsec)
{
    // subtract to determine exclusions
    TH2* const h_ul_smooth = dynamic_cast<TH2*>(h_ul.Clone());
    h_ul_smooth->Smooth(1);
    TH2* const h_excl = static_cast<TH2*>(rt::DivideHists(h_ul_smooth, &h_xsec, hist_name, hist_title));

    // split the histogram into regions
    std::pair<TH2* const, TH2* const> h_excl_pair = Split2DHist(*h_excl);
    TH2& h_excl_1 = *h_excl_pair.first;
    TH2& h_excl_2 = *h_excl_pair.second;

    // fill bins with zero to high value (to prevent boundary bogus contours)
    FillBogus(h_excl_1);
    FillBogus(h_excl_2);

    // contours
    TGraph* const g1 = GetContourTGraph(h_excl_1);
    TGraph* const g2 = GetContourTGraph(h_excl_2);
    return std::make_pair(g1, g2);
}

void CreateHists
(
    const std::string analysis = "onelep",
    const std::string method   = "hybrid",
    const std::string label    = "v0"
)
{
    // input ROOT files
    rt::TH1Container hc_100(Form("plots/limits/%s/%s/%s/%s/%s_xsec_excl_%s.root", label.c_str(), method.c_str(), "t2tt"      , analysis.c_str(), "t2tt"      , analysis.c_str()));
    rt::TH1Container hc_070(Form("plots/limits/%s/%s/%s/%s/%s_xsec_excl_%s.root", label.c_str(), method.c_str(), "t2tb_br0p7", analysis.c_str(), "t2tb_br0p7", analysis.c_str()));
    rt::TH1Container hc_050(Form("plots/limits/%s/%s/%s/%s/%s_xsec_excl_%s.root", label.c_str(), method.c_str(), "t2tb_br0p5", analysis.c_str(), "t2tb_br0p5", analysis.c_str()));
    rt::TH1Container hc_030(Form("plots/limits/%s/%s/%s/%s/%s_xsec_excl_%s.root", label.c_str(), method.c_str(), "t2tb_br0p3", analysis.c_str(), "t2tb_br0p3", analysis.c_str()));
    rt::TH1Container hc_000(Form("plots/limits/%s/%s/%s/%s/%s_xsec_excl_%s.root", label.c_str(), method.c_str(), "t2bw"      , analysis.c_str(), "t2bw"      , analysis.c_str()));

    rt::TH1Container hc_best;
    hc_best.Add(static_cast<TH1*>(hc_100["h_xsec"      ]->Clone()));
    hc_best.Add(static_cast<TH1*>(hc_100["h_xsec_minus"]->Clone()));
    hc_best.Add(static_cast<TH1*>(hc_100["h_xsec_plus" ]->Clone()));

    // best BR
    ExtractBestBR(hc_best, hc_100.as<TH2>("h_ul_xsec_exp_smooth"), hc_070.as<TH2>("h_ul_xsec_exp_smooth"), hc_050.as<TH2>("h_ul_xsec_exp_smooth"), hc_030.as<TH2>("h_ul_xsec_exp_smooth"), hc_000.as<TH2>("h_ul_xsec_exp_smooth"));
    TH2& h_bestbr = hc_best.as<TH2>("h_ul_best_br_exp_smooth");


    // best UL based on best BR
    ExtractBestUL(hc_best, h_bestbr, hc_100.as<TH2>("h_ul_xsec_exp"          ), hc_070.as<TH2>("h_ul_xsec_exp"          ), hc_050.as<TH2>("h_ul_xsec_exp"          ), hc_030.as<TH2>("h_ul_xsec_exp"          ), hc_000.as<TH2>("h_ul_xsec_exp"          ));
    ExtractBestUL(hc_best, h_bestbr, hc_100.as<TH2>("h_ul_xsec_exp_m1"       ), hc_070.as<TH2>("h_ul_xsec_exp_m1"       ), hc_050.as<TH2>("h_ul_xsec_exp_m1"       ), hc_030.as<TH2>("h_ul_xsec_exp_m1"       ), hc_000.as<TH2>("h_ul_xsec_exp_m1"       ));
    ExtractBestUL(hc_best, h_bestbr, hc_100.as<TH2>("h_ul_xsec_exp_m1_smooth"), hc_070.as<TH2>("h_ul_xsec_exp_m1_smooth"), hc_050.as<TH2>("h_ul_xsec_exp_m1_smooth"), hc_030.as<TH2>("h_ul_xsec_exp_m1_smooth"), hc_000.as<TH2>("h_ul_xsec_exp_m1_smooth"));
    ExtractBestUL(hc_best, h_bestbr, hc_100.as<TH2>("h_ul_xsec_exp_p1"       ), hc_070.as<TH2>("h_ul_xsec_exp_p1"       ), hc_050.as<TH2>("h_ul_xsec_exp_p1"       ), hc_030.as<TH2>("h_ul_xsec_exp_p1"       ), hc_000.as<TH2>("h_ul_xsec_exp_p1"       ));
    ExtractBestUL(hc_best, h_bestbr, hc_100.as<TH2>("h_ul_xsec_exp_p1_smooth"), hc_070.as<TH2>("h_ul_xsec_exp_p1_smooth"), hc_050.as<TH2>("h_ul_xsec_exp_p1_smooth"), hc_030.as<TH2>("h_ul_xsec_exp_p1_smooth"), hc_000.as<TH2>("h_ul_xsec_exp_p1_smooth"));
    ExtractBestUL(hc_best, h_bestbr, hc_100.as<TH2>("h_ul_xsec_exp_smooth"   ), hc_070.as<TH2>("h_ul_xsec_exp_smooth"   ), hc_050.as<TH2>("h_ul_xsec_exp_smooth"   ), hc_030.as<TH2>("h_ul_xsec_exp_smooth"   ), hc_000.as<TH2>("h_ul_xsec_exp_smooth"   ));
    ExtractBestUL(hc_best, h_bestbr, hc_100.as<TH2>("h_ul_xsec_obs"          ), hc_070.as<TH2>("h_ul_xsec_obs"          ), hc_050.as<TH2>("h_ul_xsec_obs"          ), hc_030.as<TH2>("h_ul_xsec_obs"          ), hc_000.as<TH2>("h_ul_xsec_obs"          ));
    ExtractBestUL(hc_best, h_bestbr, hc_100.as<TH2>("h_ul_xsec_obs_smooth"   ), hc_070.as<TH2>("h_ul_xsec_obs_smooth"   ), hc_050.as<TH2>("h_ul_xsec_obs_smooth"   ), hc_030.as<TH2>("h_ul_xsec_obs_smooth"   ), hc_000.as<TH2>("h_ul_xsec_obs_smooth"   ));

    // output
    hc_best.List();
    const std::string output_path = Form("plots/limits/%s/%s/t2bri/%s", label.c_str(), method.c_str(), analysis.c_str());
    const std::string suffix      = "pdf";
    hc_best.Write(Form("%s/t2bri_xsec_excl_%s.root", output_path.c_str(), analysis.c_str()));

    // no curves
    stop::PrintFormattedXSecHist(*hc_best["h_ul_xsec_exp"          ], "h_ul_xsec_exp"          , output_path, suffix, "colz", "1.0", 1e-3, 1e1);
    stop::PrintFormattedXSecHist(*hc_best["h_ul_xsec_exp_m1"       ], "h_ul_xsec_exp_m1"       , output_path, suffix, "colz", "1.0", 1e-3, 1e1);
    stop::PrintFormattedXSecHist(*hc_best["h_ul_xsec_exp_m1_smooth"], "h_ul_xsec_exp_m1_smooth", output_path, suffix, "colz", "1.0", 1e-3, 1e1);
    stop::PrintFormattedXSecHist(*hc_best["h_ul_xsec_exp_p1"       ], "h_ul_xsec_exp_p1"       , output_path, suffix, "colz", "1.0", 1e-3, 1e1);
    stop::PrintFormattedXSecHist(*hc_best["h_ul_xsec_exp_p1_smooth"], "h_ul_xsec_exp_p1_smooth", output_path, suffix, "colz", "1.0", 1e-3, 1e1);
    stop::PrintFormattedXSecHist(*hc_best["h_ul_xsec_exp_smooth"   ], "h_ul_xsec_exp_smooth"   , output_path, suffix, "colz", "1.0", 1e-3, 1e1);
    stop::PrintFormattedXSecHist(*hc_best["h_ul_xsec_obs"          ], "h_ul_xsec_obs"          , output_path, suffix, "colz", "1.0", 1e-3, 1e1);
    stop::PrintFormattedXSecHist(*hc_best["h_ul_xsec_obs_smooth"   ], "h_ul_xsec_obs_smooth"   , output_path, suffix, "colz", "1.0", 1e-3, 1e1);

    PrintFormattedBestBRHist(hc_best.as<TH2>("h_ul_best_br_exp_smooth"), "h_ul_best_br_exp_smooth", output_path, suffix);

    // exclusion curves
    const std::string xtitle = hc_best["h_ul_xsec_exp"]->GetXaxis()->GetTitle();
    const std::string ytitle = hc_best["h_ul_xsec_exp"]->GetYaxis()->GetTitle();
    const std::string ztitle = hc_best["h_ul_xsec_exp"]->GetZaxis()->GetTitle();
    const std::string hist_title_stem = Form("%s Exclusion on #sigma #times Branching Fraction (BR independent);%s;%s;%s", analysis.c_str(), xtitle.c_str(), ytitle.c_str(), ztitle.c_str());
    std::pair<TGraph*, TGraph*> g_excl_xsec_obs_pair    = ExtractContour("h_excl_xsec_obs"   , Form("Observed %s"              , hist_title_stem.c_str()), hc_best.as<TH2>("h_ul_xsec_obs_smooth"   ), hc_best.as<TH2>("h_xsec"      ));
    std::pair<TGraph*, TGraph*> g_excl_xsec_obs_p1_pair = ExtractContour("h_excl_xsec_obs_p1", Form("Observed+1#sigma_{th} %s" , hist_title_stem.c_str()), hc_best.as<TH2>("h_ul_xsec_obs_smooth"   ), hc_best.as<TH2>("h_xsec_plus" ));
    std::pair<TGraph*, TGraph*> g_excl_xsec_obs_m1_pair = ExtractContour("h_excl_xsec_obs_m1", Form("Observed-1#sigma_{th} %s" , hist_title_stem.c_str()), hc_best.as<TH2>("h_ul_xsec_obs_smooth"   ), hc_best.as<TH2>("h_xsec_minus"));
    std::pair<TGraph*, TGraph*> g_excl_xsec_exp_pair    = ExtractContour("h_excl_xsec_exp"   , Form("Expected %s"              , hist_title_stem.c_str()), hc_best.as<TH2>("h_ul_xsec_exp_smooth"   ), hc_best.as<TH2>("h_xsec"      ));
    std::pair<TGraph*, TGraph*> g_excl_xsec_exp_p1_pair = ExtractContour("h_excl_xsec_exp_p1", Form("Expected+1#sigma_{exp} %s", hist_title_stem.c_str()), hc_best.as<TH2>("h_ul_xsec_exp_p1_smooth"), hc_best.as<TH2>("h_xsec"      ));
    std::pair<TGraph*, TGraph*> g_excl_xsec_exp_m1_pair = ExtractContour("h_excl_xsec_exp_m1", Form("Expected-1#sigma_{exp} %s", hist_title_stem.c_str()), hc_best.as<TH2>("h_ul_xsec_exp_m1_smooth"), hc_best.as<TH2>("h_xsec"      ));

    TGraph* const g_excl_xsec_obs    = CombineTGraphs(g_excl_xsec_obs_pair.first   , g_excl_xsec_obs_pair.second   , "g_excl_xsec_obs"   , "g_excl_xsec_obs"   );
    TGraph* const g_excl_xsec_obs_p1 = CombineTGraphs(g_excl_xsec_obs_p1_pair.first, g_excl_xsec_obs_p1_pair.second, "g_excl_xsec_obs_p1", "g_excl_xsec_obs_p1");
    TGraph* const g_excl_xsec_obs_m1 = CombineTGraphs(g_excl_xsec_obs_m1_pair.first, g_excl_xsec_obs_m1_pair.second, "g_excl_xsec_obs_m1", "g_excl_xsec_obs_m1");
    TGraph* const g_excl_xsec_exp    = CombineTGraphs(g_excl_xsec_exp_pair.first   , g_excl_xsec_exp_pair.second   , "g_excl_xsec_exp"   , "g_excl_xsec_exp"   );
    TGraph* const g_excl_xsec_exp_p1 = CombineTGraphs(g_excl_xsec_exp_p1_pair.first, g_excl_xsec_exp_p1_pair.second, "g_excl_xsec_exp_p1", "g_excl_xsec_exp_p1");
    TGraph* const g_excl_xsec_exp_m1 = CombineTGraphs(g_excl_xsec_exp_m1_pair.first, g_excl_xsec_exp_m1_pair.second, "g_excl_xsec_exp_m1", "g_excl_xsec_exp_m1");

    // overlay the "final plot"
    TCanvas canvas("canvas", "canvas", 600, 600);
    canvas.SetLogz(true);
    TH2& h_xsec_exp = hc_best.as<TH2>("h_ul_xsec_exp_smooth");
    h_xsec_exp.SetStats(false);
    h_xsec_exp.GetZaxis()->SetLabelFont(42);
    h_xsec_exp.GetZaxis()->SetTitleFont(42);
    h_xsec_exp.GetZaxis()->SetLabelSize(0.035);
    h_xsec_exp.GetZaxis()->SetTitleSize(0.035);
    h_xsec_exp.SetMaximum(1e1 );
    h_xsec_exp.SetMinimum(1e-3);
    static const int NRGBs     = 5;
    static const int NCont     = 255;
    static double stops[NRGBs] = {0.00 , 0.34 , 0.61 , 0.84 , 1.00};
    static double red  [NRGBs] = {0.50 , 0.50 , 1.00 , 1.00 , 1.00};
    static double green[NRGBs] = {0.50 , 1.00 , 1.00 , 0.60 , 0.50};
    static double blue [NRGBs] = {1.00 , 1.00 , 0.50 , 0.40 , 0.50};
    TColor::CreateGradientColorTable(NRGBs, stops, red, green, blue, NCont);
    gStyle->SetNumberContours(NCont);
    h_xsec_exp.Draw("colz");
    h_xsec_exp.GetXaxis()->SetTitleOffset(1.2);
    h_xsec_exp.GetYaxis()->SetTitleOffset(1.5);
    h_xsec_exp.GetYaxis()->SetRangeUser(0, 600);
    h_xsec_exp.GetZaxis()->SetTitleOffset(1.4);
    gPad->SetRightMargin(0.16);
    gPad->SetLeftMargin(0.12);
    gPad->Update();
    gPad->SetLogz(true);
    h_xsec_exp.Draw("colz");

    g_excl_xsec_exp   ->SetLineColor(kRed  ); g_excl_xsec_exp   ->SetLineWidth(3); g_excl_xsec_exp   ->SetLineStyle(1); g_excl_xsec_exp   ->Draw("lsame");
    g_excl_xsec_exp_p1->SetLineColor(kRed  ); g_excl_xsec_exp_p1->SetLineWidth(2); g_excl_xsec_exp_p1->SetLineStyle(4); g_excl_xsec_exp_p1->Draw("lsame");
    g_excl_xsec_exp_m1->SetLineColor(kRed  ); g_excl_xsec_exp_m1->SetLineWidth(2); g_excl_xsec_exp_m1->SetLineStyle(4); g_excl_xsec_exp_m1->Draw("lsame");
    g_excl_xsec_obs   ->SetLineColor(kBlack); g_excl_xsec_obs   ->SetLineWidth(3); g_excl_xsec_obs   ->SetLineStyle(1); g_excl_xsec_obs   ->Draw("lsame");
    g_excl_xsec_obs_p1->SetLineColor(kBlack); g_excl_xsec_obs_p1->SetLineWidth(2); g_excl_xsec_obs_p1->SetLineStyle(4); g_excl_xsec_obs_p1->Draw("lsame");
    g_excl_xsec_obs_m1->SetLineColor(kBlack); g_excl_xsec_obs_m1->SetLineWidth(2); g_excl_xsec_obs_m1->SetLineStyle(4); g_excl_xsec_obs_m1->Draw("lsame");

    // legend
    const double stat_y1 = 1.0 - gStyle->GetPadTopMargin() - 0.01;
    const double stat_y2 = 0.70;
    const double stat_x1 = gStyle->GetPadLeftMargin() + 0.02;
    const double stat_x2 = 0.5;
    TLegend leg(stat_x1, stat_y1, stat_x2, stat_y2);
    leg.AddEntry(g_excl_xsec_exp, "Expected", "L");
    leg.AddEntry(g_excl_xsec_obs, "Observed", "L");
    leg.SetFillColor(0);  // 0 makes it the background clear on the pad
    leg.SetFillStyle(0);
    leg.SetBorderSize(0);
    leg.Draw();

    // print the output
    canvas.Print(Form("%s/t2bri_interp_%s.pdf", output_path.c_str(), analysis.c_str()));

    // append to ROOT file
    TFile output_file(Form("%s/t2bri_xsec_excl_%s.root", output_path.c_str(), analysis.c_str()), "UPDATE");
    g_excl_xsec_obs->Write();
    g_excl_xsec_obs_p1->Write();
    g_excl_xsec_exp->Write();
    g_excl_xsec_obs_m1->Write();
    g_excl_xsec_exp_p1->Write();
    g_excl_xsec_exp_m1->Write();
    g_excl_xsec_obs_pair.first->Write();
    g_excl_xsec_obs_p1_pair.first->Write();
    g_excl_xsec_exp_pair.first->Write();
    g_excl_xsec_obs_m1_pair.first->Write();
    g_excl_xsec_exp_p1_pair.first->Write();
    g_excl_xsec_exp_m1_pair.first->Write();
    g_excl_xsec_obs_pair.second->Write();
    g_excl_xsec_obs_p1_pair.second->Write();
    g_excl_xsec_exp_pair.second->Write();
    g_excl_xsec_obs_m1_pair.second->Write();
    g_excl_xsec_exp_p1_pair.second->Write();
    g_excl_xsec_exp_m1_pair.second->Write();
    output_file.Close();
}

void CreateBRIndependentExcl()
{
    const std::string label = "v0";
/*     CreateHists("onelep"  , "hybrid", label); */
/*     CreateHists("razor"   , "hybrid", label); */
    CreateHists("combined", "hybrid", label);
}
