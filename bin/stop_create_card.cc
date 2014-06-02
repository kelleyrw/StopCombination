#include <iostream>
#include <fstream>
#include <string>
#include "Analysis/StopCombination/interface/Sample.h"
#include "Analysis/StopCombination/interface/StopYields.h"
#include "Analysis/StopCombination/interface/SignalRegion.h"
#include "AnalysisTools/LanguageTools/interface/LanguageTools.h"
#include "AnalysisTools/RootTools/interface/RootTools.h"
#include <boost/program_options.hpp>

struct card_info_t
{
    card_info_t() : sr_name("") {}
    std::string sr_name;
    unsigned int obs;
    unsigned int ngen;
    float xsec;
    float ttdil;
    float ttdil_unc;
    float ttslo;
    float ttslo_unc;
    float wjets;
    float wjets_unc;
    float rare;
    float rare_unc;
    float bkgd;
    float bkgd_unc;
    float acc;
    float trig_unc;
    float lep_unc_up;
    float lep_unc_dn;
    float isr_unc;
    float lumi_unc;
    float btag_unc;
    float btag_unc_up;
    float btag_unc_dn;
    float jes_unc;
    float jes_unc_up;
    float jes_unc_dn;
    float stat_unc;
    float total_unc;
};


void PrintCard(std::ostream &out, const card_info_t& info, const unsigned short method = 1)
{

// method 1: the background and signal systematics are fully factorized into componenents.
// method 2: the background systematic is combined into one number and signal systematics are factorized into componenents.
// method 3: the background systematic and signal systematics are combined into one number (what was originally used). 
// method 4: Same as method 1 with aditional fields to faciliate combination with razor using Higg's Combine 

    std::string card;
    switch (method)
    {
        case 1:
            // card string
            card = Form("imax 1 number of search regions\n"
                    "jmax 4  number of backgrounds ('*' = automatic)\n"
                    "kmax 10 number of nuisance parameters (sources of systematical uncertainties)\n"
                    "------------\n"
                    "       bin      %s\n"
                    "observation     %u\n"
                    "------------\n"
                    "bin                     %-12s%-12s%-12s%-12s%-12s\n"
                    "process                 signal      ttdil       ttslo       wjets       rare  \n"
                    "process                 0           1           2           3           4     \n"
                    "rate                    %-12.4e%-6.1f      %-6.1f      %-6.1f      %-6.1f\n"
                    "### Error Matrix\n"                                                        
                    "------------\n"                                                            
                    "ttdil            lnN    -           %1.3f       -           -           -     \n"
                    "ttslo            lnN    -           -           %1.3f       -           -     \n"
                    "wjets            lnN    -           -           -           %1.3f       -     \n"
                    "rare             lnN    -           -           -           -           %1.3f \n"
                    "trigger          lnN    %1.3f       -           -           -           -     \n"
                    "lep              lnN    %1.3f       -           -           -           -     \n"
                    "lumi             lnN    %1.3f       -           -           -           -     \n"
                    "Isr              lnN    %1.3f       -           -           -           -     \n"
                    "Btag             lnN    %1.3f       -           -           -           -     \n"
                    "Jes              lnN    %1.3f       -           -           -           -     \n"
                    , info.sr_name.c_str() 
                    , info.obs
                    , info.sr_name.c_str() 
                    , info.sr_name.c_str() 
                    , info.sr_name.c_str() 
                    , info.sr_name.c_str() 
                    , info.sr_name.c_str() 
                    , (lt::is_zero(info.acc) ? 1.0/static_cast<float>(info.ngen) : info.acc)
                    , info.ttdil
                    , info.ttslo
                    , info.wjets
                    , info.rare
                    , info.ttdil_unc
                    , info.ttslo_unc
                    , info.wjets_unc
                    , info.rare_unc
                    , info.trig_unc
                    , info.lep_unc_up
                    , info.lumi_unc
                    , info.isr_unc
                    , info.btag_unc
                    , info.jes_unc
                    );
            break;

        case 2:

            card = Form("imax 1 number of search regions\n"
                    "jmax 1 number of backgrounds ('*' = automatic)\n"
                    "kmax 7 number of nuisance parameters (sources of systematical uncertainties)\n"
                    "------------\n"
                    "       bin      %s\n"
                    "observation     %u\n"
                    "------------\n"
                    "bin                     %-12s%-12s\n"
                    "process                 signal      bkgd  \n"
                    "process                 0           1     \n"
                    "rate                    %-12.e%-6.1f\n"
                    "### Error Matrix\n"                       
                    "------------\n"                           
                    "bkgd_unc         lnN    -           %1.3f \n"
                    "trig_unc         lnN    %1.3f       -     \n"
                    "lep_unc          lnN    %1.3f       -     \n"
                    "lumi_unc         lnN    %1.3f       -     \n"
                    "isr_unc          lnN    %1.3f       -     \n"
                    "btag_unc         lnN    %1.3f       -     \n"
                    "jes_unc          lnN    %1.3f       -     \n"
                    , info.sr_name.c_str() 
                    , info.obs
                    , info.sr_name.c_str() 
                    , info.sr_name.c_str() 
                    , (lt::is_zero(info.acc) ? 1.0/static_cast<float>(info.ngen) : info.acc)
                    , info.bkgd
                    , info.bkgd_unc
                    , info.trig_unc
                    , info.lep_unc_up
                    , info.lumi_unc
                    , info.isr_unc
                    , info.btag_unc
                    , info.jes_unc
                    );
            break;

        case 3:

            card = Form("imax 1 number of search regions\n"
                    "jmax 1 number of backgrounds ('*' = automatic)\n"
                    "kmax 2 number of nuisance parameters (sources of systematical uncertainties)\n"
                    "------------\n"
                    "       bin      %s\n"
                    "observation     %u\n"
                    "------------\n"
                    "bin                     %-12s%-12s\n"
                    "process                 signal      bkgd  \n"
                    "process                 0           1     \n"
                    "rate                    %-12.4e%-1.1f\n"
                    "### Error Matrix\n"                       
                    "------------\n"                           
                    "bkgd_unc         lnN    -           %1.3f \n"
                    "signal_unc       lnN    %1.3f       -     \n"
                    , info.sr_name.c_str() 
                    , info.obs
                    , info.sr_name.c_str() 
                    , info.sr_name.c_str() 
                    , (lt::is_zero(info.acc) ? 1.0/static_cast<float>(info.ngen) : info.acc)
                    , info.bkgd
                    , info.bkgd_unc
                    , info.total_unc
                    );
            break;

        case 4:

            // card string
            card = Form("imax 1 number of search regions\n"
                    "jmax 4  number of backgrounds ('*' = automatic)\n"
                    "kmax 10 number of nuisance parameters (sources of systematical uncertainties)\n"
                    "------------\n"
                    "shapes * %s FAKE\n"
                    "------------\n"
                    "       bin      %s\n"
                    "observation     %u\n"
                    "------------\n"
                    "bin                     %-12s%-12s%-12s%-12s%-12s\n"
                    "process                 signal      ttdil       ttslo       wjets       rare  \n"
                    "process                 0           1           2           3           4     \n"
                    "rate                    %-12.4e%-6.1f      %-6.1f      %-6.1f      %-6.1f\n"
                    "### Error Matrix\n"                                                        
                    "------------\n"                                                            
                    "ttdil_1lep       lnN    -           %1.3f       -           -           -     \n"
                    "ttslo_1lep       lnN    -           -           %1.3f       -           -     \n"
                    "wjets_1lep       lnN    -           -           -           %1.3f       -     \n"
                    "rare_1lep        lnN    -           -           -           -           %1.3f \n"
                    "trig_1lep        lnN    %1.3f       -           -           -           -     \n"
                    "lep              lnN    %1.3f/%1.3f -           -           -           -     \n"
                    "Isr              lnN    %1.3f       -           -           -           -     \n"
                    "Btag             lnN    %1.3f/%1.3f -           -           -           -     \n"
                    "Jes              lnN    %1.3f/%1.3f -           -           -           -     \n"
                    "lumi             lnN    %1.3f       -           -           -           -     \n"
                    , info.sr_name.c_str() 
                    , info.sr_name.c_str() 
                    , info.obs
                    , info.sr_name.c_str() 
                    , info.sr_name.c_str() 
                    , info.sr_name.c_str() 
                    , info.sr_name.c_str() 
                    , info.sr_name.c_str() 
                    , (lt::is_zero(info.acc) ? 1.0/static_cast<float>(info.ngen) : info.acc) * info.xsec * 1000// lumi*xsec*acc convert to fb
                    , info.ttdil
                    , info.ttslo
                    , info.wjets
                    , info.rare
                    , info.ttdil_unc
                    , info.ttslo_unc
                    , info.wjets_unc
                    , info.rare_unc
                    , info.trig_unc
                    , info.lep_unc_dn
                    , info.lep_unc_up
                    , info.isr_unc
                    , info.btag_unc_dn
                    , info.btag_unc_up
                    , info.jes_unc_dn
                    , info.jes_unc_up
                    , info.lumi_unc
                    );
            break;

        default:
            throw std::runtime_error("[PrintCard] Error: method not supported");
    }

    // print it
    out << card;

    // done
    return;
}

const float GetValueFromScanHist(TH1* const hist, const float mass_stop, const float mass_lsp)
{
    TH2* const h2 = dynamic_cast<TH2*>(hist);
    const float value = rt::GetBinContent2D(h2, mass_stop, mass_lsp);
    if (lt::is_zero(value))
    {
        return 0.0;
    }
    else
    {
        return value;
    }
}

// main program
int main(int argc, char* argv[])
try
{
    using namespace std;

    // inputs
    // -------------------------------------------------------------------------------------------------//

    std::string interp_file = "";
    std::string output_file = "";
    std::string sample_name = "";
    int sr_num              = -1;
    double mass_stop        = -999999.0;
    double mass_lsp         = -999999.0;
    double lumi             = 19.5;
    unsigned short method   = 1;
    bool verbose            = false;

    const string method_desc =
"1: the background and signal systematics are fully factorized into componenents.\n"
"2: the background systematic is combined into one number and signal systematics are factorized into componenents.\n"
"3: the background systematic and signal systematics are combined into one number (what was originally used).\n"
"4: the background and signal systematics are fully factorized into componenents and the card is formatted for Higg's Combine.";

    namespace po = boost::program_options;
    po::options_description desc("Allowed options");
    desc.add_options()
        ("help"      , "print this menu")
        ("interp"      , po::value<std::string>(&interp_file)->required(), "REQUIRED: file to get the signal yields and systematics")
        ("sample"    , po::value<std::string>(&sample_name)->required()  , "REQUIRED: sample to run on"                             )
        ("mass_stop" , po::value<double>(&mass_stop)->required()         , "REQUIRED: mass stop value"                              )
        ("mass_lsp"  , po::value<double>(&mass_lsp)->required()          , "REQUIRED: mass lsp value"                               )
        ("sr"        , po::value<int>(&sr_num)->required()               , "REQUIRED: SRs to run on"                                )
        ("method"    , po::value<unsigned short>(&method)                , Form("Method:\n%s", method_desc.c_str())                 )
        ("output"    , po::value<std::string>(&output_file)              , "name of output file (blank = stdout)"                   )
        ("lumi"      , po::value<double>(&lumi)                          , Form("luminosity in fb^-1, default=%1.1f", lumi)         )
        ("verbose"   , po::value<bool>(&verbose)                         , Form("verbosity, default=%s", verbose ? "true" : "false"))
        ;

    // parse it
    try
    {
        po::variables_map vm;
        po::store(po::parse_command_line(argc, argv, desc), vm);

        if (vm.count("help")) 
        {
            cout << desc << "\n";
            return 1;
        }

        po::notify(vm);
    }
    catch (const std::exception& e)
    {
        cerr << e.what() << "\nexiting" << endl;
        cout << desc << "\n";
        return 1;
    }
    catch (...)
    {
        std::cerr << "Unknown error!" << "\n";
        return false;
    }


    if (verbose)
    {
        cout << "inputs:" << endl;
        cout << "output_file :\t" << output_file << endl;
        cout << "interp_file :\t" << interp_file << endl;
        cout << "sr          :\t" << sr_num      << endl;
        cout << "sample      :\t" << sample_name << endl;
        cout << "lumi        :\t" << lumi        << endl;
        cout << "verbose     :\t" << verbose     << endl;
        cout << "mass_stop   :\t" << mass_stop   << endl;
        cout << "mass_lsp    :\t" << mass_lsp    << endl;
    }

    // check that input file exists and is specified
    if (not interp_file.empty() and not lt::file_exists(interp_file))
    {
        cout << "[stop_create_card] ERROR: systematic histogram file " << interp_file << " not found" << endl;
        cout << desc << "\n";
        return 1;
    }

    // create the card
    // -------------------------------------------------------------------------------------------------//

    // extract data and background prediections
    const stop::SignalRegion::value_type signal_region = stop::GetSignalRegionFromName(Form("sr%d", sr_num));
    const stop::SignalRegion::Info signal_region_info  = stop::GetSignalRegionInfo(signal_region);
    const stop::Result& stop_result                    = stop::GetResult(signal_region);
    const stop::Sample::Info sample_info               = stop::GetSampleInfo(sample_name);

    // open systematic file
    rt::TH1Container hc(interp_file);
    if (verbose)
    {
        hc.List();
    }

    // fill the card info
    card_info_t info;
    info.sr_name   = stop::GetSignalRegionInfo(signal_region).label;
    info.obs       = stop_result.data.lep.value;
    info.ttdil     = stop_result.ttdil.lep.value; 
    info.ttslo     = stop_result.ttslo.lep.value; 
    info.wjets     = stop_result.wjets.lep.value; 
    info.rare      = stop_result.rare.lep.value; 
    info.bkgd      = stop_result.bkgd.lep.value; 
    info.ttdil_unc = 1.0 + stop_result.ttdil.lep.frac_error(); 
    info.ttslo_unc = 1.0 + stop_result.ttslo.lep.frac_error(); 
    info.wjets_unc = 1.0 + stop_result.wjets.lep.frac_error(); 
    info.rare_unc  = 1.0 + stop_result.rare.lep.frac_error(); 
    info.bkgd_unc  = 1.0 + stop_result.bkgd.lep.frac_error(); 

    info.xsec        = rt::GetBinContent1D(hc["h_xsec"], mass_stop);
    info.acc         = lumi*GetValueFromScanHist(hc["h_eff_"+signal_region_info.label], mass_stop, mass_lsp)*sample_info.bratio;
    info.ngen        = GetValueFromScanHist(hc["h_ngen"], mass_stop, mass_lsp);
    info.trig_unc    = 1.0 + GetValueFromScanHist(hc["h_err_trig_"  +signal_region_info.label], mass_stop, mass_lsp);
    info.lumi_unc    = 1.0 + GetValueFromScanHist(hc["h_err_lumi_"  +signal_region_info.label], mass_stop, mass_lsp);
    info.lep_unc_up  = 1.0 + GetValueFromScanHist(hc["h_err_leptup_"+signal_region_info.label], mass_stop, mass_lsp);
    info.lep_unc_dn  = 1.0 + GetValueFromScanHist(hc["h_err_leptdn_"+signal_region_info.label], mass_stop, mass_lsp);
    info.isr_unc     = 1.0 + GetValueFromScanHist(hc["h_err_noisr_" +signal_region_info.label], mass_stop, mass_lsp);
    info.btag_unc    = 1.0 + GetValueFromScanHist(hc["h_err_btag_"  +signal_region_info.label], mass_stop, mass_lsp);
    info.btag_unc_up = 1.0 + GetValueFromScanHist(hc["h_err_btagup_"+signal_region_info.label], mass_stop, mass_lsp);
    info.btag_unc_dn = 1.0 + GetValueFromScanHist(hc["h_err_btagdn_"+signal_region_info.label], mass_stop, mass_lsp);
    info.jes_unc     = 1.0 + GetValueFromScanHist(hc["h_err_jes_"   +signal_region_info.label], mass_stop, mass_lsp);
    info.jes_unc_up  = 1.0 + GetValueFromScanHist(hc["h_err_jesup_" +signal_region_info.label], mass_stop, mass_lsp);
    info.jes_unc_dn  = 1.0 + GetValueFromScanHist(hc["h_err_jesdn_" +signal_region_info.label], mass_stop, mass_lsp);
    info.stat_unc    = 1.0 + GetValueFromScanHist(hc["h_err_stats_" +signal_region_info.label], mass_stop, mass_lsp);
    info.total_unc   = 1.0 + GetValueFromScanHist(hc["h_err_total_" +signal_region_info.label], mass_stop, mass_lsp);

    // print the card
    if (output_file.empty())
    {
        PrintCard(std::cout, info, method);
    }
    else
    {
        lt::mkdir(lt::dirname(output_file), /*force=*/true);
        std::ofstream out(output_file.c_str(), std::ofstream::out);
        PrintCard(out, info, method);
        out.close();
    }

    // done
    return 0;
}
catch (std::exception& e)
{
    std::cerr << "[stop_interp_plots] Error: failed..." << std::endl;
    std::cerr << e.what() << std::endl;
    return 1;
}
