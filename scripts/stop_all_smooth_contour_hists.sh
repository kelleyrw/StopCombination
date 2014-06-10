#!/bin/bash

# create the histograms and TGraphs
python scripts/stop_create_contour_hists.py --analysis razor    --method asymptotic
python scripts/stop_create_contour_hists.py --analysis onelep   --method asymptotic
python scripts/stop_create_contour_hists.py --analysis combined --method asymptotic
python scripts/stop_create_contour_hists.py --analysis razor    --method hybrid
python scripts/stop_create_contour_hists.py --analysis onelep   --method hybrid
python scripts/stop_create_contour_hists.py --analysis combined --method hybrid

# polished SMS plots
python $CMSSW_BASE/src/AnalysisTools/PlotsSMS/python/makeSMSplots.py pset/T2tt_SUS13004_ASYMPTOTIC.cfg plots/limits/v0/asymptotic/t2tt/razor/T2tt_RAZOR_ASYMPTOTIC_ 
python $CMSSW_BASE/src/AnalysisTools/PlotsSMS/python/makeSMSplots.py pset/T2tt_SUS13011_ASYMPTOTIC.cfg plots/limits/v0/asymptotic/t2tt/onelep/T2tt_ONELEP_ASYMPTOTIC_ 
python $CMSSW_BASE/src/AnalysisTools/PlotsSMS/python/makeSMSplots.py pset/T2tt_SUS14125_ASYMPTOTIC.cfg plots/limits/v0/asymptotic/t2tt/combined/T2tt_COMBINED_ASYMPTOTIC_ 

python $CMSSW_BASE/src/AnalysisTools/PlotsSMS/python/makeSMSplots.py pset/T2tt_SUS13004_HYBRID.cfg plots/limits/v0/hybrid/t2tt/razor/T2tt_RAZOR_HYBRID_ 
python $CMSSW_BASE/src/AnalysisTools/PlotsSMS/python/makeSMSplots.py pset/T2tt_SUS13011_HYBRID.cfg plots/limits/v0/hybrid/t2tt/onelep/T2tt_ONELEP_HYBRID_ 
python $CMSSW_BASE/src/AnalysisTools/PlotsSMS/python/makeSMSplots.py pset/T2tt_SUS14125_HYBRID.cfg plots/limits/v0/hybrid/t2tt/combined/T2tt_COMBINED_HYBRID_ 
