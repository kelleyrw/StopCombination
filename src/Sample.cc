#include "Analysis/StopCombination/interface/Sample.h"
#include "AnalysisTools/LanguageTools/interface/LanguageTools.h"
#include <stdexcept>
#include <vector>
#include "TFile.h"
#include "TChain.h"
#include "TH2.h"

namespace stop
{
    // Array of Sample::Info's with the relevant metadata
    static const Sample::Info s_SampleInfos[Sample::static_size] = 
    {
        {
            // name
            "t2tt", 
            // razor name
            "T2tt", 
            // title
            "pp #rightarrow #tilde{t}  #tilde{t}*, #tilde{t} #rightarrow t #tilde{#chi}_{1}^{0}",
            // latex
            "pp \\rightarrow \\tilde{t}\\tilde{t}, \\tilde{t} \\rightarrow t \\tilde{\\chi}_{1}^{0}",
            // ntuple_path
            "/nfs-7/userdata/rwkelley/babies/stop/cms2V05-03-26_stoplooperV00-02-24/T2tt_mad/minibaby_V00-03-06/Skim_4jets_MET100_MT120/merged*root,"
            "/nfs-7/userdata/rwkelley/babies/stop/cms2V05-03-26_stoplooperV00-02-25/T2tt_mad/minibabies_V00-03-12/Skim_4jets_MET100_MT120/merged*root",
            // ngen_file
            "/nfs-7/userdata/rwkelley/babies/stop/cms2V05-03-26_stoplooperV00-02-25/T2tt_mad/minibabies_V00-03-12/Skim_4jets_MET100_MT120/myMassDB_T2tt_combined_lowmass_25GeVbins.root",
            // ngen_hist_name
            "masses",
            // branching ratio,
            1.0,
            // Sample
            Sample::t2tt
        },
        {
            // name
            "t2tb_br0p7", 
            // razor name
            "T2tb_70_30", 
            // title
            "pp #rightarrow #tilde{t}  #tilde{t}*, #tilde{t} #rightarrow t #tilde{#chi}_{1}^{0}/b #tilde{#chi}_{1}^{#pm}",
            // latex
            "pp \\rightarrow \\tilde{t}\\tilde{t}, \\tilde{t} \\rightarrow t \\tilde{\\chi}_{1}^{0}/b \\tilde{\\chi}_{1}^{\\pm}",
            // ntuple_path
            "/nfs-7/userdata/rwkelley/babies/stop/cms2V05-03-26_stoplooperV00-02-24/T2tt_mad/minibaby_V00-03-06/Skim_4jets_MET100_MT120/merged*root,"
            "/nfs-7/userdata/rwkelley/babies/stop/cms2V05-03-26_stoplooperV00-02-25/T2tt_mad/minibabies_V00-03-12/Skim_4jets_MET100_MT120/merged*root",
            // ngen_file
            "/nfs-7/userdata/rwkelley/babies/stop/cms2V05-03-26_stoplooperV00-02-25/T2tt_mad/minibabies_V00-03-12/Skim_4jets_MET100_MT120/myMassDB_T2tt_combined_lowmass_25GeVbins.root",
            // ngen_hist_name
            "masses",
            // branching ratio,
            0.7,
            // Sample
            Sample::t2tb_br0p7
        },
        {
            // name
            "t2tb_br0p5", 
            // razor name
            "T2tb", 
            // title
            "pp #rightarrow #tilde{t}  #tilde{t}*, #tilde{t} #rightarrow t #tilde{#chi}_{1}^{0}/b #tilde{#chi}_{1}^{#pm}",
            // latex
            "pp \\rightarrow \\tilde{t}\\tilde{t}, \\tilde{t} \\rightarrow t \\tilde{\\chi}_{1}^{0}/b \\tilde{\\chi}_{1}^{\\pm}",
            // ntuple_path
            "/nfs-7/userdata/rwkelley/babies/stop/cms2V05-03-26_stoplooperV00-02-24/T2tt_mad/minibaby_V00-03-06/Skim_4jets_MET100_MT120/merged*root,"
            "/nfs-7/userdata/rwkelley/babies/stop/cms2V05-03-26_stoplooperV00-02-25/T2tt_mad/minibabies_V00-03-12/Skim_4jets_MET100_MT120/merged*root",
            // ngen_file
            "/nfs-7/userdata/rwkelley/babies/stop/cms2V05-03-26_stoplooperV00-02-25/T2tt_mad/minibabies_V00-03-12/Skim_4jets_MET100_MT120/myMassDB_T2tt_combined_lowmass_25GeVbins.root",
            // ngen_hist_name
            "masses",
            // branching ratio,
            0.5,
            // Sample
            Sample::t2tb_br0p5
        },
        {
            // name
            "t2tb_br0p3", 
            // razor name
            "T2tb_30_70", 
            // title
            "pp #rightarrow #tilde{t}  #tilde{t}*, #tilde{t} #rightarrow t #tilde{#chi}_{1}^{0}/b #tilde{#chi}_{1}^{#pm}",
            // latex
            "pp \\rightarrow \\tilde{t}\\tilde{t}, \\tilde{t} \\rightarrow t \\tilde{\\chi}_{1}^{0}/b \\tilde{\\chi}_{1}^{\\pm}",
            // ntuple_path
            "/nfs-7/userdata/rwkelley/babies/stop/cms2V05-03-26_stoplooperV00-02-24/T2tt_mad/minibaby_V00-03-06/Skim_4jets_MET100_MT120/merged*root,"
            "/nfs-7/userdata/rwkelley/babies/stop/cms2V05-03-26_stoplooperV00-02-25/T2tt_mad/minibabies_V00-03-12/Skim_4jets_MET100_MT120/merged*root",
            // ngen_file
            "/nfs-7/userdata/rwkelley/babies/stop/cms2V05-03-26_stoplooperV00-02-25/T2tt_mad/minibabies_V00-03-12/Skim_4jets_MET100_MT120/myMassDB_T2tt_combined_lowmass_25GeVbins.root",
            // ngen_hist_name
            "masses",
            // branching ratio,
            0.3,
            // Sample
            Sample::t2tb_br0p3
        },
        {
            // name
            "t2bw", 
            // razor name
            "T2bw", 
            // title
            "pp #rightarrow #tilde{t}  #tilde{t}*, #tilde{t} #rightarrow b #tilde{#chi}_{1}^{#pm}",
            // latex
            "pp \\rightarrow \\tilde{t}\\tilde{t}, \\tilde{t} \\rightarrow b \\tilde{\\chi}_{1}^{\\pm}",
            // ntuple_path
            "/nfs-7/userdata/rwkelley/babies/stop/cms2V05-03-26_stoplooperV00-02-24/T2tt_mad/minibaby_V00-03-06/Skim_4jets_MET100_MT120/merged*root,"
            "/nfs-7/userdata/rwkelley/babies/stop/cms2V05-03-26_stoplooperV00-02-25/T2tt_mad/minibabies_V00-03-12/Skim_4jets_MET100_MT120/merged*root",
            // ngen_file
            "/nfs-7/userdata/rwkelley/babies/stop/cms2V05-03-26_stoplooperV00-02-25/T2tt_mad/minibabies_V00-03-12/Skim_4jets_MET100_MT120/myMassDB_T2tt_combined_lowmass_25GeVbins.root",
            // ngen_hist_name
            "masses",
            // branching ratio,
            0.0,
            // Sample
            Sample::t2bw
        }
    };

    
    // wrapper function to get the Sample::Info
    Sample::value_type GetSampleFromName(const std::string& sample_name)
    {
        Sample::value_type sample = Sample::static_size;
        for (size_t i = 0; i != Sample::static_size; i++)
        {
            if (std::string(s_SampleInfos[i].name) == sample_name)
            {
                sample = static_cast<Sample::value_type>(i);
                break;
            }
        }

        // throw if not found
        if (sample == Sample::static_size)
        {
            throw std::domain_error(Form("[stop::GetSampleInfo] Error: sample %s not found!", sample_name.c_str()));
        }

        return sample; 
    }

    // test if a string is a sample name 
    bool IsSample(const std::string& sample_name)
    {
        for (size_t i = 0; i != Sample::static_size; i++)
        {
            if (std::string(s_SampleInfos[i].name) == sample_name)
            {
                return true; 
            }
        }
        return false;
    }

    // wrapper function to get the SampleInfo
    Sample::Info GetSampleInfo(const Sample::value_type& sample)
    {
        return s_SampleInfos[sample]; 
    }

    Sample::Info GetSampleInfo(const std::string& sample_name)
    {
        Sample::value_type sample = GetSampleFromName(sample_name); 
        return GetSampleInfo(sample); 
    }

    // get the chain from the Sample
    // NOTE: user in charge of deleting the TChain*
    TChain* GetSampleTChain(const Sample::value_type& sample)
    {
        const Sample::Info info = GetSampleInfo(sample);

        // build the list of files
        std::vector<std::string> vpath = lt::string_split(info.ntuple_path, ",");

        // build the chain
        TChain* chain = new TChain("t");
        for (size_t i = 0; i != vpath.size(); i++)
        {
            // FIXME doesn't work for wild cards
            if (lt::ls(vpath.at(i)).empty()) 
            {
                throw std::domain_error(Form("[stop::GetSampleTChain] Error: sample file %s not found!", vpath.at(i).c_str()));
            }
            chain->Add(vpath.at(i).c_str());
        }
        return chain;
    }

    // get the ngen histogram from the Sample
    // NOTE: user in charge of deleting the TH2*
    TH2F* GetSampleNGenHist(const Sample::value_type& sample)
    {
        const Sample::Info info = GetSampleInfo(sample);
        TFile file(info.ngen_file.c_str());
        TH2F* const hist = dynamic_cast<TH2F*>(file.Get(info.ngen_hist_name.c_str()));
        hist->SetDirectory(NULL);
        return hist;
    }

} // namespace stop
