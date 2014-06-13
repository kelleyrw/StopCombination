#!/bin/bash

# create the histograms and TGraphs
# python scripts/stop_create_contour_hists.py --analysis razor    --method asymptotic
# python scripts/stop_create_contour_hists.py --analysis onelep   --method asymptotic
# python scripts/stop_create_contour_hists.py --analysis combined --method asymptotic
# python scripts/stop_create_contour_hists.py --analysis razor    --method hybrid
# python scripts/stop_create_contour_hists.py --analysis onelep   --method hybrid
# python scripts/stop_create_contour_hists.py --analysis combined --method hybrid

# polished SMS plots
python $CMSSW_BASE/src/AnalysisTools/PlotsSMS/python/makeSMSplots.py pset/T2tt_SUS13004_ASYMPTOTIC.cfg plots/limits/v0/asymptotic/t2tt/razor/T2tt_RAZOR_ASYMPTOTIC_ 
python $CMSSW_BASE/src/AnalysisTools/PlotsSMS/python/makeSMSplots.py pset/T2tt_SUS13011_ASYMPTOTIC.cfg plots/limits/v0/asymptotic/t2tt/onelep/T2tt_ONELEP_ASYMPTOTIC_ 
python $CMSSW_BASE/src/AnalysisTools/PlotsSMS/python/makeSMSplots.py pset/T2tt_SUS14125_ASYMPTOTIC.cfg plots/limits/v0/asymptotic/t2tt/combined/T2tt_COMBINED_ASYMPTOTIC_ 

python $CMSSW_BASE/src/AnalysisTools/PlotsSMS/python/makeSMSplots.py pset/T2tt_SUS13004_HYBRID.cfg plots/limits/v0/hybrid/t2tt/razor/T2tt_RAZOR_HYBRID_ 
python $CMSSW_BASE/src/AnalysisTools/PlotsSMS/python/makeSMSplots.py pset/T2tt_SUS13011_HYBRID.cfg plots/limits/v0/hybrid/t2tt/onelep/T2tt_ONELEP_HYBRID_ 
python $CMSSW_BASE/src/AnalysisTools/PlotsSMS/python/makeSMSplots.py pset/T2tt_SUS14125_HYBRID.cfg plots/limits/v0/hybrid/t2tt/combined/T2tt_COMBINED_HYBRID_ 

# copy to drop box
cp $CMSSW_BASE/src/AnalysisTools/RootTools/tools/index.php                  ~/Dropbox/Public/stop/plots/results/
cp plots/limits/v0/asymptotic/t2tt/combined/T2tt_COMBINED_ASYMPTOTIC_BAND.* ~/Dropbox/Public/stop/plots/results/
cp plots/limits/v0/asymptotic/t2tt/combined/T2tt_COMBINED_ASYMPTOTIC_CONT.* ~/Dropbox/Public/stop/plots/results/
cp plots/limits/v0/asymptotic/t2tt/combined/T2tt_COMBINED_ASYMPTOTIC_XSEC.* ~/Dropbox/Public/stop/plots/results/
cp plots/limits/v0/asymptotic/t2tt/onelep/T2tt_ONELEP_ASYMPTOTIC_BAND.*     ~/Dropbox/Public/stop/plots/results/
cp plots/limits/v0/asymptotic/t2tt/onelep/T2tt_ONELEP_ASYMPTOTIC_CONT.*     ~/Dropbox/Public/stop/plots/results/
cp plots/limits/v0/asymptotic/t2tt/onelep/T2tt_ONELEP_ASYMPTOTIC_XSEC.*     ~/Dropbox/Public/stop/plots/results/
cp plots/limits/v0/asymptotic/t2tt/razor/T2tt_RAZOR_ASYMPTOTIC_BAND.*       ~/Dropbox/Public/stop/plots/results/
cp plots/limits/v0/asymptotic/t2tt/razor/T2tt_RAZOR_ASYMPTOTIC_CONT.*       ~/Dropbox/Public/stop/Plots/results/
cp plots/limits/v0/asymptotic/t2tt/razor/T2tt_RAZOR_ASYMPTOTIC_XSEC.*       ~/Dropbox/Public/stop/Plots/results/
cp plots/limits/v0/hybrid/t2tt/combined/T2tt_COMBINED_HYBRID_BAND.*         ~/Dropbox/Public/stop/Plots/results/
cp plots/limits/v0/hybrid/t2tt/combined/T2tt_COMBINED_HYBRID_CONT.*         ~/Dropbox/Public/stop/Plots/results/
cp plots/limits/v0/hybrid/t2tt/combined/T2tt_COMBINED_HYBRID_XSEC.*         ~/Dropbox/Public/stop/Plots/results/
cp plots/limits/v0/hybrid/t2tt/onelep/T2tt_ONELEP_HYBRID_BAND.*             ~/Dropbox/Public/stop/Plots/results/
cp plots/limits/v0/hybrid/t2tt/onelep/T2tt_ONELEP_HYBRID_CONT.*             ~/Dropbox/Public/stop/Plots/results/
cp plots/limits/v0/hybrid/t2tt/onelep/T2tt_ONELEP_HYBRID_XSEC.*             ~/Dropbox/Public/stop/Plots/results/
cp plots/limits/v0/hybrid/t2tt/razor/T2tt_RAZOR_HYBRID_BAND.*               ~/Dropbox/Public/stop/Plots/results/
cp plots/limits/v0/hybrid/t2tt/razor/T2tt_RAZOR_HYBRID_CONT.*               ~/Dropbox/Public/stop/Plots/results/
cp plots/limits/v0/hybrid/t2tt/razor/T2tt_RAZOR_HYBRID_XSEC.*               ~/Dropbox/Public/stop/Plots/results/
