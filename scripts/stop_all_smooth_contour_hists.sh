#!/bin/bash

function make_sms_plots
{
    sample=$1
    method=$2
    label=$3
    method_upper=`echo $method | awk '{print toupper($0)}'` 
    sample_upper=$(echo `echo ${sample:0:1} | tr '[a-z]' '[A-Z]'`${sample:1})
    result_dir="$HOME/Dropbox/Public/stop/plots/results/${sample}"
    
    # test inputs
    echo "sample         = " $sample
    echo "method         = " $method
    echo "method_upper   = " $method_upper
    echo "label          = " $label
    echo "result_dir     = " $result_dir
    
    # create the histograms and TGraphs
    python scripts/stop_create_contour_hists.py --sample $sample --analysis razor    --method $method
    python scripts/stop_create_contour_hists.py --sample $sample --analysis onelep   --method $method
    python scripts/stop_create_contour_hists.py --sample $sample --analysis combined --method $method
    
    # polished SMS plots
    python $CMSSW_BASE/src/AnalysisTools/PlotsSMS/python/makeSMSplots.py pset/${sample_upper}_SUS13004_${method_upper}.cfg plots/limits/${label}/${method}/${sample}/razor/${sample_upper}_RAZOR_${method_upper}_ 
    python $CMSSW_BASE/src/AnalysisTools/PlotsSMS/python/makeSMSplots.py pset/${sample_upper}_SUS13011_${method_upper}.cfg plots/limits/${label}/${method}/${sample}/onelep/${sample_upper}_ONELEP_${method_upper}_ 
    python $CMSSW_BASE/src/AnalysisTools/PlotsSMS/python/makeSMSplots.py pset/${sample_upper}_SUS14125_${method_upper}.cfg plots/limits/${label}/${method}/${sample}/combined/${sample_upper}_COMBINED_${method_upper}_ 
    
    # copy to drop box
    mkdir -p ${result_dir}
    cp $CMSSW_BASE/src/AnalysisTools/RootTools/tools/index.php                                         ${result_dir}/.
    cp plots/limits/${label}/${method}/${sample}/razor/${sample_upper}_RAZOR_${method_upper}_*.*       ${result_dir}/.
    cp plots/limits/${label}/${method}/${sample}/onelep/${sample_upper}_ONELEP_${method_upper}_*.*     ${result_dir}/.
    cp plots/limits/${label}/${method}/${sample}/combined/${sample_upper}_COMBINED_${method_upper}_*.* ${result_dir}/.
    ls -1 ${result_dir}
}

label="v0"

# make_sms_plots "t2tt"       "asymptotic" $label
# make_sms_plots "t2tb_br0p5" "asymptotic" $label
# make_sms_plots "t2tb_br0p7" "asymptotic" $label
# make_sms_plots "t2tb_br0p3" "asymptotic" $label
# make_sms_plots "t2bw"       "asymptotic" $label

# make_sms_plots "t2tt"       "hybrid" $label
# make_sms_plots "t2tb_br0p5" "hybrid" $label
# make_sms_plots "t2tb_br0p7" "hybrid" $label
# make_sms_plots "t2tb_br0p3" "hybrid" $label
# make_sms_plots "t2bw"       "hybrid" $label

# BR indepedent 
root -b -q -l "macros/CreateBRIndependentExcl.C+ (\"$label\", \"hybrid\")"
python $CMSSW_BASE/src/AnalysisTools/PlotsSMS/python/makeSMSplots.py pset/T2bri_SUS14125_HYBRID.cfg plots/limits/${label}/hybrid/t2bri/combined/T2bri_COMBINED_HYBRID_ 
# root -b -q -l "macros/CreateBRIndependentExcl.C+ (\"$label\", \"asymptotic\")"
# python $CMSSW_BASE/src/AnalysisTools/PlotsSMS/python/makeSMSplots.py pset/T2bri_SUS14125_ASYMPTOTIC.cfg plots/limits/${label}/asymptotic/t2bri/combined/T2bri_COMBINED_ASYMPTOTIC_ 
