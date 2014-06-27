#ifndef STOP_SAMPLE_H
#define STOP_SAMPLE_H

#include <string>

class TChain;
class TH2F;

namespace stop
{
    // list of available samples
    class Sample
    {
        public:
            // samples
            enum value_type
            {
                t2tt,
                t2tb_br0p3,
                t2tb_br0p5,
                t2tb_br0p7,
                t2bw,
                static_size
            };

            // sample information
            struct Info
            {
                std::string name;           // short name
                std::string razor_name;     // the name Javier used
                std::string title;          // ROOT TLatex title
                std::string latex;          // real latex title
                std::string ntuple_path;    // logical name for path
                std::string ngen_file;      // path to "number generated" file 
                std::string ngen_hist_name; // name of the "number generated" histogram 
                double bratio;              // branching ratio to stop --> chi^+ b 
                Sample::value_type sample;  // redundant process enum
            };
    };

    // Get the Sample from a string
    Sample::value_type GetSampleFromName(const std::string& sample_name);

    // test if a string is on of the samples
    bool IsSample(const std::string& sample_name);

    // wrapper function to get the SampleInfo
    Sample::Info GetSampleInfo(const Sample::value_type& sample);
    Sample::Info GetSampleInfo(const std::string& sample_name);

    // get the chain from the Sample
    // NOTE: user in charge of deleting the TChain*
    TChain* GetSampleTChain(const Sample::value_type& sample); 

    // get the ngen histogram from the Sample
    // NOTE: user in charge of deleting the TH2*
    TH2F* GetSampleNGenHist(const Sample::value_type& sample);

} // namespace stop

#endif // STOP_SAMPLE_H
