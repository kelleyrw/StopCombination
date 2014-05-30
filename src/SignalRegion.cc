#include "Analysis/StopCombination/interface/SignalRegion.h"
#include <stdexcept>
#include "TString.h"

namespace stop
{
    // hold the information for the signal regions
    static const SignalRegion::Info s_SignalRegionInfos[SignalRegion::static_size] =
    {
        // BDT signal regions infos
        // name label    title         latex  
        {"sr0" , "pres"  , "Preselection" , "Preselection"},
        {"sr1" , "bdt1l" , "BDT1 Loose"   , "BDT1 Loose"  },
        {"sr2" , "bdt1t" , "BDT1 Tight"   , "BDT1 Tight"  },
        {"sr3" , "bdt2"  , "BDT2"         , "BDT2"        },
        {"sr4" , "bdt3"  , "BDT3"         , "BDT3"        },
        {"sr5" , "bdt4"  , "BDT4"         , "BDT4"        },
        {"sr6" , "bdt5"  , "BDT5"         , "BDT5"        }
    };

    // wrapper function to get the SignalRegionInfo
    SignalRegion::value_type GetSignalRegionFromNumber(const unsigned int signal_region_number)
    {
        const std::string sr_name = Form("sr%d", signal_region_number);
        return GetSignalRegionFromName(sr_name);
    }

    // wrapper function to get the SignalRegionInfo
    SignalRegion::value_type GetSignalRegionFromName(const std::string& signal_region_name)
    {
        SignalRegion::value_type signal_region = SignalRegion::static_size;
        for (size_t sr = 0; sr != SignalRegion::static_size; sr++)
        {
            if (std::string(s_SignalRegionInfos[sr].name) == signal_region_name)
            {
                signal_region = static_cast<SignalRegion::value_type>(sr);
                break;
            }
        }

        // throw if not found
        if (signal_region == SignalRegion::static_size)
        {
            throw std::domain_error(Form("[stop::GetSignalRegionFromName] ERROR: signal_region %s not found!", signal_region_name.c_str()));
        }

        return signal_region;
    }

    // wrapper function to get the SignalRegionInfo
    SignalRegion::Info GetSignalRegionInfo(const SignalRegion::value_type& signal_region)
    {
        // edge cases 
        if (signal_region == SignalRegion::static_size)
        {
            throw std::domain_error("[stop::GetSignalRegionInfo] ERROR: signal_region not found!");
        }
        return s_SignalRegionInfos[signal_region];
    }

    // Get the SignalRegionType from a string
    SignalRegion::Info GetSignalRegionInfo(const std::string& signal_region_name)
    {
        const SignalRegion::value_type signal_region = GetSignalRegionFromName(signal_region_name);
        return GetSignalRegionInfo(signal_region);
    }

} // namespace stop
