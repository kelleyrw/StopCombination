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

// Analysis Tools
#include "RootTools.h"
#include "LanguageTools.h"

// Stop specific 
#include "Sample.h"
#include "SignalRegion.h"
#include "PrintFormattedXSecHist.h"

struct BinInfo
{
    std::string title;
    double min;
    double max;
    double bin_width;
    double bin_offset;

    // methods:
    double HistMin() const {return min - bin_offset;}
    double HistMax() const {return max + bin_offset;}
    int HistNBins()  const {return static_cast<int>(fabs(HistMin() - HistMax())/bin_width);}
};

ostream& operator << (ostream& os, const BinInfo& bin_info)
{
    os << Form("%25s %f %f %f %f %f %f %d",
        bin_info.title.c_str(),
        bin_info.min,
        bin_info.max,
        bin_info.bin_width,
        bin_info.bin_offset,
        bin_info.HistMin(),
        bin_info.HistMax(),
        bin_info.HistNBins()
    );
    return os;
}

TH2D BookTH2D
(
    const std::string& name,
    const std::string& title,
    const BinInfo& xbin_info,
    const BinInfo& ybin_info,
    const BinInfo& zbin_info
)
{
    TH2D hist
    (
        name.c_str(),
        Form("%s;%s;%s", title.c_str(), xbin_info.title.c_str(), ybin_info.title.c_str()),
        xbin_info.HistNBins(),
        xbin_info.HistMin(),
        xbin_info.HistMax(),
        ybin_info.HistNBins(),
        ybin_info.HistMin(),
        ybin_info.HistMax()
    );
    hist.GetZaxis()->SetRangeUser(zbin_info.min, zbin_info.max);
    hist.GetZaxis()->SetTitle(zbin_info.title.c_str());
    return hist;
}

void PrintLimitHists
(
    const std::string& limit_tree_file_name,
    const std::string& output_path,
    const std::string& suffix = "png"
)
{
    // binning info
    BinInfo xbin_info = {"m_{#tilde{t}} (GeV)"                         , 150   , 900 , 25, 12.5};
    BinInfo ybin_info = {"m_{#tilde{#chi}^{0}} (GeV)"                  , 0     , 700 , 25, 12.5};
    BinInfo zbin_info = {"95\% C.L. upper limit on cross section (pb)" , 0.001 , 10  ,  1,    0};
    //std::cout << xbin_info << std::endl;
    //std::cout << ybin_info << std::endl;
    //std::cout << zbin_info << std::endl;

    // book hists
    rt::TH1Container hc;
    hc.Add(BookTH2D("h_xsec_ul_obs"           , "Observed #sigma UL"                   , xbin_info , ybin_info , zbin_info));
    hc.Add(BookTH2D("h_xsec_ul_exp"           , "Expected #sigma UL"                   , xbin_info , ybin_info , zbin_info));
    hc.Add(BookTH2D("h_xsec_ul_exp_1sigma_up" , "Expected #sigma + #sigma_{exp} UL"    , xbin_info , ybin_info , zbin_info));
    hc.Add(BookTH2D("h_xsec_ul_exp_1sigma_dn" , "Expected #sigma + #sigma_{exp} UL"    , xbin_info , ybin_info , zbin_info));
    hc.Add(BookTH2D("h_excl_obs"              , "Observed exclusion"                   , xbin_info , ybin_info , zbin_info));
    hc.Add(BookTH2D("h_excl_obs_1sigma_up"    , "Observed exclusion + #sigma_{th} UL"  , xbin_info , ybin_info , zbin_info));
    hc.Add(BookTH2D("h_excl_obs_1sigma_dn"    , "Observed exclusion - #sigma_{th} UL"  , xbin_info , ybin_info , zbin_info));
    hc.Add(BookTH2D("h_excl_exp"              , "Expected exclusion"                   , xbin_info , ybin_info , zbin_info));
    hc.Add(BookTH2D("h_excl_exp_1sigma_up"    , "Expected exclusion + #sigma_{exp} UL" , xbin_info , ybin_info , zbin_info));
    hc.Add(BookTH2D("h_excl_exp_1sigma_dn"    , "Expected exclusion - #sigma_{exp} UL" , xbin_info , ybin_info , zbin_info));
    hc.SetStats(false);

    // open the TTree
    TChain tree("tree");
    tree.Add(limit_tree_file_name.c_str());

    // fill the hist
    hc.SetDirectory(gDirectory);
    tree.Project("h_xsec_ul_obs"           , "mass_lsp:mass_stop" , "ul_obs"            );
    tree.Project("h_xsec_ul_exp"           , "mass_lsp:mass_stop" , "ul_exp"            );
    tree.Project("h_xsec_ul_exp_1sigma_up" , "mass_lsp:mass_stop" , "ul_exp_1sigma_up"  );
    tree.Project("h_xsec_ul_exp_1sigma_dn" , "mass_lsp:mass_stop" , "ul_exp_1sigma_dn"  );
    tree.Project("h_excl_obs"              , "mass_lsp:mass_stop" , "excl_obs"          );
    tree.Project("h_excl_obs_1sigma_up"    , "mass_lsp:mass_stop" , "excl_obs_1sigma_up");
    tree.Project("h_excl_obs_1sigma_dn"    , "mass_lsp:mass_stop" , "excl_obs_1sigma_dn");
    tree.Project("h_excl_exp"              , "mass_lsp:mass_stop" , "excl_exp"          );
    tree.Project("h_excl_exp_1sigma_up"    , "mass_lsp:mass_stop" , "excl_exp_1sigma_up");
    tree.Project("h_excl_exp_1sigma_dn"    , "mass_lsp:mass_stop" , "excl_exp_1sigma_dn");
    hc.SetDirectory(NULL);

    // output
    stop::PrintFormattedXSecHist(*hc["h_xsec_ul_exp"          ], "h_xsec_ul_exp"          , output_path, suffix, "colz", "1.0", zbin_info.min, zbin_info.max);
    stop::PrintFormattedXSecHist(*hc["h_xsec_ul_exp_1sigma_up"], "h_xsec_ul_exp_1sigma_up", output_path, suffix, "colz", "1.0", zbin_info.min, zbin_info.max);
    stop::PrintFormattedXSecHist(*hc["h_xsec_ul_exp_1sigma_dn"], "h_xsec_ul_exp_1sigma_dn", output_path, suffix, "colz", "1.0", zbin_info.min, zbin_info.max);
    stop::PrintFormattedXSecHist(*hc["h_excl_obs"             ], "h_excl_obs"             , output_path, suffix, "text");  // TODO: something wrong with exclusions
    stop::PrintFormattedXSecHist(*hc["h_excl_obs_1sigma_up"   ], "h_excl_obs_1sigma_up"   , output_path, suffix, "text");  // TODO: something wrong with exclusions
    stop::PrintFormattedXSecHist(*hc["h_excl_obs_1sigma_dn"   ], "h_excl_obs_1sigma_dn"   , output_path, suffix, "text");  // TODO: something wrong with exclusions
    stop::PrintFormattedXSecHist(*hc["h_excl_exp"             ], "h_excl_exp"             , output_path, suffix, "text");  // TODO: something wrong with exclusions
    stop::PrintFormattedXSecHist(*hc["h_excl_exp_1sigma_up"   ], "h_excl_exp_1sigma_up"   , output_path, suffix, "text");  // TODO: something wrong with exclusions
    stop::PrintFormattedXSecHist(*hc["h_excl_exp_1sigma_dn"   ], "h_excl_exp_1sigma_dn"   , output_path, suffix, "text");  // TODO: something wrong with exclusions
    return;
}

// hard coded values 
void PrintLimitHistsNoCurve()
{
    // hard coded meta-data
    const std::string tree_path   = "output/limit_trees/v0/asymptotic/t2tt/limit_result_ntuple";
    const std::string output_path = "plots/limits/v0/asymptotic/t2tt";
    const std::string suffix      = "png";

    // create the limit ntuples
    PrintLimitHists(tree_path + "_razor.root", output_path + "/razor", suffix);
}
