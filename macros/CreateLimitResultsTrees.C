// C++
#include <iostream>
#include <fstream>
#include <string>
#include <limits>

// ROOT
#include "TFile.h"
#include "TTree.h"

// Analysis Tools
#include "RootTools.h"
#include "LanguageTools.h"

// Stop specific 
#include "Sample.h"
#include "SignalRegion.h"
/* #include "PrintFormattedXSecHist.h" */

using namespace std;

// object to hold the information
class LimitInfo
{
    public:
        // construct
        LimitInfo();

        // members
        double mass_stop;
        double mass_lsp;
        double xsec;
        double xsec_err;
        double ul_obs;
        double ul_obs_err;
        double ul_exp;
        double ul_exp_err;
        double ul_exp_1sigma_up;
        double ul_exp_1sigma_up_err;
        double ul_exp_1sigma_dn;
        double ul_exp_1sigma_dn_err;
        double ul_exp_2sigma_up;
        double ul_exp_2sigma_up_err;
        double ul_exp_2sigma_dn;
        double ul_exp_2sigma_dn_err;
        int excl_obs;
        int excl_obs_1sigma_up;
        int excl_obs_1sigma_dn;
        int excl_exp;
        int excl_exp_1sigma_up;
        int excl_exp_1sigma_dn;

        // methods: 
        void SetBranches(TTree& tree);
        void Reset();
};

LimitInfo::LimitInfo()
    : mass_stop            ( -999999)
    , mass_lsp             ( -999999)
    , xsec                 ( -999999)
    , xsec_err             ( -999999)
    , ul_obs               ( -999999)
    , ul_obs_err           ( -999999)
    , ul_exp               ( -999999)
    , ul_exp_err           ( -999999)
    , ul_exp_1sigma_up     ( -999999)
    , ul_exp_1sigma_up_err ( -999999)
    , ul_exp_1sigma_dn     ( -999999)
    , ul_exp_1sigma_dn_err ( -999999)
    , ul_exp_2sigma_up     ( -999999)
    , ul_exp_2sigma_up_err ( -999999)
    , ul_exp_2sigma_dn     ( -999999)
    , ul_exp_2sigma_dn_err ( -999999)
    , excl_obs             ( 0      )
    , excl_obs_1sigma_up   ( 0      )
    , excl_obs_1sigma_dn   ( 0      )
    , excl_exp             ( 0      )
    , excl_exp_1sigma_up   ( 0      )
    , excl_exp_1sigma_dn   ( 0      )
{
}

void LimitInfo::Reset()
{
    mass_stop            = -999999;
    mass_lsp             = -999999;
    xsec                 = -999999;
    xsec_err             = -999999;
    ul_obs               = -999999;
    ul_obs_err           = -999999;
    ul_exp               = -999999;
    ul_exp_err           = -999999;
    ul_exp_1sigma_up     = -999999;
    ul_exp_1sigma_up_err = -999999;
    ul_exp_1sigma_dn     = -999999;
    ul_exp_1sigma_dn_err = -999999;
    ul_exp_2sigma_up     = -999999;
    ul_exp_2sigma_up_err = -999999;
    ul_exp_2sigma_dn     = -999999;
    ul_exp_2sigma_dn_err = -999999;
    excl_obs             = 0      ;
    excl_obs_1sigma_up   = 0      ;
    excl_obs_1sigma_dn   = 0      ;
    excl_exp             = 0      ;
    excl_exp_1sigma_up   = 0      ;
    excl_exp_1sigma_dn   = 0      ;
}

void LimitInfo::SetBranches(TTree& tree)
{
    tree.Branch("mass_stop"            , &mass_stop            ); 
    tree.Branch("mass_lsp"             , &mass_lsp             ); 
    tree.Branch("xsec"                 , &xsec                 ); 
    tree.Branch("xsec_err"             , &xsec_err             ); 
    tree.Branch("ul_obs"               , &ul_obs               ); 
    tree.Branch("ul_obs_err"           , &ul_obs_err           ); 
    tree.Branch("ul_exp"               , &ul_exp               ); 
    tree.Branch("ul_exp_err"           , &ul_exp_err           ); 
    tree.Branch("ul_exp_1sigma_up"     , &ul_exp_1sigma_up     ); 
    tree.Branch("ul_exp_1sigma_up_err" , &ul_exp_1sigma_up_err ); 
    tree.Branch("ul_exp_1sigma_dn"     , &ul_exp_1sigma_dn     ); 
    tree.Branch("ul_exp_1sigma_dn_err" , &ul_exp_1sigma_dn_err ); 
    tree.Branch("ul_exp_2sigma_up"     , &ul_exp_2sigma_up     ); 
    tree.Branch("ul_exp_2sigma_up_err" , &ul_exp_2sigma_up_err ); 
    tree.Branch("ul_exp_2sigma_dn"     , &ul_exp_2sigma_dn     ); 
    tree.Branch("ul_exp_2sigma_dn_err" , &ul_exp_2sigma_dn_err ); 
    tree.Branch("excl_obs"             , &excl_obs             ); 
    tree.Branch("excl_obs_1sigma_up"   , &excl_obs_1sigma_up   ); 
    tree.Branch("excl_obs_1sigma_dn"   , &excl_obs_1sigma_dn   ); 
    tree.Branch("excl_exp"             , &excl_exp             ); 
    tree.Branch("excl_exp_1sigma_up"   , &excl_exp_1sigma_up   ); 
    tree.Branch("excl_exp_1sigma_dn"   , &excl_exp_1sigma_dn   ); 
}

// sort by mass_stop and then mass_lsp
bool operator < (const LimitInfo& lhs, const LimitInfo& rhs)
{
    if (lhs.mass_stop < rhs.mass_stop) {return true; }
    if (lhs.mass_stop > rhs.mass_stop) {return false;}
    if (lhs.mass_lsp < rhs.mass_lsp)   {return true; }
    else {return false;}
}

ostream& operator << (ostream& os, const LimitInfo& limit_info)
{
    os << Form("%1.0f\t%1.0f\t%1.6f\t%1.6f\t%1.3f\t%1.3f\t%1.3f\t%1.3f\t%1.3f\t%1.3f\t%1.3f\t%1.3f\t%1.3f\t%1.3f\t%1.3f\t%1.3f\t%d\t%d\t%d\t%d\t%d\t%d",
        limit_info.mass_stop,
        limit_info.mass_lsp,
        limit_info.xsec,
        limit_info.xsec_err,
        limit_info.ul_obs,
        limit_info.ul_obs_err,
        limit_info.ul_exp,
        limit_info.ul_exp_err,
        limit_info.ul_exp_1sigma_up,
        limit_info.ul_exp_1sigma_up_err,
        limit_info.ul_exp_1sigma_dn,
        limit_info.ul_exp_1sigma_dn_err,
        limit_info.ul_exp_2sigma_up,
        limit_info.ul_exp_2sigma_up_err,
        limit_info.ul_exp_2sigma_dn,
        limit_info.ul_exp_2sigma_dn_err,
        limit_info.excl_obs,
        limit_info.excl_obs_1sigma_up,
        limit_info.excl_obs_1sigma_dn,
        limit_info.excl_exp,
        limit_info.excl_exp_1sigma_up,
        limit_info.excl_exp_1sigma_dn
    );
    return os;
}

// keep track of which Analysis
struct Analysis
{
    enum value_type
    {
        onelep,
        razor,
        combined,
        static_size
    };
};

void SetLimitInfo
(
    LimitInfo& limit_info,
    const TH2F& h_xsec, 
    const std::string& file_name
)
{
    const std::string raw_file_name = lt::filename(lt::string_remove_all(file_name, ".root"));
/*     std::cout << raw_file_name << std::endl; */
    const std::vector<std::string> split = lt::string_split(raw_file_name, "_");
/*     std::cout << lt::ArrayString(split) << std::endl; */
    if (lt::string_contains(raw_file_name, "_br"))
    {
        limit_info.mass_stop = lt::string_to_double(split.at(5));
        limit_info.mass_lsp  = lt::string_to_double(split.at(6));
    }
    else
    {
        limit_info.mass_stop = lt::string_to_double(split.at(4));
        limit_info.mass_lsp  = lt::string_to_double(split.at(5));
    }
    limit_info.xsec      = rt::GetBinContent2D(&h_xsec, limit_info.mass_stop, limit_info.mass_lsp);
    limit_info.xsec_err  = rt::GetBinError2D  (&h_xsec, limit_info.mass_stop, limit_info.mass_lsp);

    TChain chain("limit");
    chain.Add(file_name.c_str());
    double ul;
    double ul_err;
    chain.SetBranchAddress("limit"   , &ul    );
    chain.SetBranchAddress("limitErr", &ul_err);
    //************************************************************************************************************************************
    //*    Row   *     limit *  limitErr *        mh *      syst *      iToy *     iSeed *  iChannel *     t_cpu *    t_real * quantileE *
    //************************************************************************************************************************************
    //*        0 * 458.94241 * 19.426551 *       120 *         1 *         0 *      1234 *         0 * 0.0513333 * 11.885654 * 0.0227499 *
    //*        1 * 574.77644 * 4.9762625 *       120 *         1 *         0 *      1234 *         0 * 0.0128333 * 5.9013505 * 0.1586499 *
    //*        2 * 775.87554 * 27.388386 *       120 *         1 *         0 *      1234 *         0 * 0.0040000 * 0.8493257 *       0.5 *
    //*        3 * 1050.4895 * 14.983479 *       120 *         1 *         0 *      1234 *         0 * 0.0035000 * 0.6285593 * 0.8413500 *
    //*        4 * 1393.6381 * 67.220865 *       120 *         1 *         0 *      1234 *         0 * 0.0030000 * 0.2962681 * 0.9772499 *
    //*        5 * 689.73085 * 4.0671192 *       120 *         1 *         0 *      1234 *         0 * 0.0063333 * 2.8123662 *        -1 *
    //************************************************************************************************************************************

    // cross section UL
    chain.GetEntry(5);
    limit_info.ul_obs               = limit_info.xsec * ul;
    limit_info.ul_obs_err           = limit_info.xsec * ul_err;
    chain.GetEntry(2);
    limit_info.ul_exp               = limit_info.xsec * ul;
    limit_info.ul_exp_err           = limit_info.xsec * ul_err;
    chain.GetEntry(3);
    limit_info.ul_exp_1sigma_up     = limit_info.xsec * ul;
    limit_info.ul_exp_1sigma_up_err = limit_info.xsec * ul_err;
    chain.GetEntry(1);
    limit_info.ul_exp_1sigma_dn     = limit_info.xsec * ul;
    limit_info.ul_exp_1sigma_dn_err = limit_info.xsec * ul_err;
    chain.GetEntry(4);
    limit_info.ul_exp_2sigma_up     = limit_info.xsec * ul;
    limit_info.ul_exp_2sigma_up_err = limit_info.xsec * ul_err;
    chain.GetEntry(0);
    limit_info.ul_exp_2sigma_dn     = limit_info.xsec * ul;
    limit_info.ul_exp_2sigma_dn_err = limit_info.xsec * ul_err;

    // determine if point is excluded
    const float xsec     = limit_info.xsec; 
    const float xsec_err = limit_info.xsec_err; 
    const float xsec_up  = xsec + xsec_err;
    const float xsec_dn  = xsec - xsec_err;

    if (xsec    > limit_info.ul_obs) {limit_info.excl_obs           = 1;}
    if (xsec_up > limit_info.ul_obs) {limit_info.excl_obs_1sigma_up = 1;}
    if (xsec_dn > limit_info.ul_obs) {limit_info.excl_obs_1sigma_dn = 1;}

    if (xsec > limit_info.ul_exp          ) {limit_info.excl_exp           = 1;}
    if (xsec > limit_info.ul_exp_1sigma_up) {limit_info.excl_exp_1sigma_up = 1;}
    if (xsec > limit_info.ul_exp_1sigma_dn) {limit_info.excl_exp_1sigma_dn = 1;}

    return;
}

// results TTree
void CreateLimitResultsTree
(
    const std::string& sample_name,
    const Analysis::value_type analysis_type,
    const std::string& input_file_path,
    const std::string& output_file_name
)
{
    try
    {
        // get constants
        // ------------------------------------------------------------- //

        // get best SR histogram 
        const TH2F h_sr_best(*rt::GetHistFromRootFile<TH2F>("data/t2tt_onelep_bdt_AN-2013-89.root", "hbest"));

        // theoretical xsec
        const TH2F h_xsec(*rt::GetHistFromRootFile<TH2F>("data/stop_xsec_2D.root", "h_stop_xsec_2D"));

        // dummy histogram to get the bin information
        TH2F h_bins(h_sr_best);
        h_bins.Reset();
        const std::string xbin_label = h_bins.GetXaxis()->GetTitle();
        const std::string ybin_label = h_bins.GetYaxis()->GetTitle();
        const std::string zbin_label = "95%% C.L. upper limit on #sigma (pb)"; 

        // create the TTree
        // ------------------------------------------------------------- //

        // create tree
        lt::mkdir(lt::dirname(output_file_name), /*force=*/true);
        TFile output_file(output_file_name.c_str(), "RECREATE");
        TTree& tree = *(new TTree("tree", "stop combination limit and exclusion tree"));

        // set branches
        LimitInfo limit_info;
        limit_info.SetBranches(tree);

        // loop over masses and fill limits 
        // ------------------------------------------------------------- //

        for (int xbin = 1; xbin < h_bins.GetNbinsX(); ++xbin)
        {
            for (int ybin = 1; ybin < h_bins.GetNbinsY(); ++ybin)
            {
                // get the mass for that bin
                const float mass_stop = h_bins.GetXaxis()->GetBinCenter(xbin);
                const float mass_lsp  = h_bins.GetYaxis()->GetBinCenter(ybin);
                if (mass_lsp > (mass_stop - 100)) {continue;}

                // reset tree info
                limit_info.Reset();

                // get the best SR for that mass point
                const int sr_num                        = static_cast<int>(rt::GetBinContent2D(&h_sr_best, mass_stop, mass_lsp));
                const stop::SignalRegion::value_type sr = static_cast<stop::SignalRegion::value_type>(sr_num);
                const stop::SignalRegion::Info sr_info  = stop::GetSignalRegionInfo(sr);
                if (sr == stop::SignalRegion::sr0) {continue;}

                // get the appropriate filename for the combine output
                std::string limit_file_name = input_file_path + "/combine_output_";
                switch (analysis_type)
                {
                    case Analysis::razor    : limit_file_name += Form("razor_%s_%1.0f_%1.0f.root"      , sample_name.c_str(), mass_stop, mass_lsp);                        break;
                    case Analysis::onelep   : limit_file_name += Form("onelep_%s_%1.0f_%1.0f_%s.root"  , sample_name.c_str(), mass_stop, mass_lsp, sr_info.label.c_str()); break;
                    case Analysis::combined : limit_file_name += Form("combined_%s_%1.0f_%1.0f_%s.root", sample_name.c_str(), mass_stop, mass_lsp, sr_info.label.c_str()); break;
                    default:
                        std::cout << "[CreateLimitResultsTree] Error: invalid channel" << std::endl;
                        return;
                };
                if (not lt::file_exists(limit_file_name))
                {
                    std::cout << "[CreateLimitResultsTree] Error: file doesn't exist: " << limit_file_name << std::endl;
                    continue;
                }

                // set the values to the limit_info object
                SetLimitInfo(limit_info, h_xsec, limit_file_name);
/*                 if (lt::is_equal(mass_stop, 400.0) && lt::is_equal(mass_lsp, 100.0)) */
/*                 { */
/*                     cout << limit_info << endl; */
/*                 } */
                if ((Analysis::razor or Analysis::combined) and lt::is_equal(mass_lsp, 0.0f))
                {
                    cout << "skipping mass_lsp = 0 point" << endl;
                    continue; 
                }

                // fill the tree
                tree.Fill();
            }
        }

        // write output 
        // ------------------------------------------------------------- //

        tree.Write();
        output_file.Close();
    }
    catch (std::exception& e)
    {
        cerr << "[CreateLimitResultsTree] Error: " << e.what() << endl;
    }
}

// hard coded values 
void CreateLimitResultsTrees()
{
    // hard coded meta-data
    const std::string sample_name        = "t2tb_br0p3";
/*     const std::string sample_name        = "t2tb_br0p5"; */
/*     const std::string sample_name        = "t2tb_br0p5"; */
/*     const std::string sample_name        = "t2tt"; */
/*     const std::string sample_name        = "t2bw"; */
/*     const std::string method             = "hybrid"; */
    const std::string method             = "asymptotic";
    const std::string label              = "v0";
/*     const std::string limit_results_path = Form("/hadoop/cms/store/user/rwkelley/limits/stopcombo/%s/%s/%x", label.c_str(), method.c_str(), sample_name.c_str()); */
    const std::string limit_results_path = Form("output/limits/%s/%s/%s"                         , label.c_str(), method.c_str(), sample_name.c_str());
    const std::string output_file_stem   = Form("output/limit_trees/%s/%s/%s/limit_result_ntuple", label.c_str(), method.c_str(), sample_name.c_str());

    // create the limit ntuples
    CreateLimitResultsTree(sample_name, Analysis::razor   , limit_results_path, output_file_stem + "_razor.root"   ); 
    CreateLimitResultsTree(sample_name, Analysis::onelep  , limit_results_path, output_file_stem + "_onelep.root"  ); 
    CreateLimitResultsTree(sample_name, Analysis::combined, limit_results_path, output_file_stem + "_combined.root"); 
}

