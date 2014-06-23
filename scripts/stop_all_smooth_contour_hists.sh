#!/bin/bash

function make_sms_plots
{
    model=$1
    model_official=$2
    method=$3
    label=$4
    method_upper=`echo $method | awk '{print toupper($0)}'` 
    result_dir="$HOME/Dropbox/Public/stop/plots/results/${model}"
    
    # test inputs
    echo "model          = " $model
    echo "model_official = " $model_official
    echo "method         = " $method
    echo "method_upper   = " $method_upper
    echo "label          = " $label
    echo "result_dir     = " $result_dir
    
    # create the histograms and TGraphs
    python scripts/stop_create_contour_hists.py --model $model --analysis razor    --method $method
    python scripts/stop_create_contour_hists.py --model $model --analysis onelep   --method $method
    python scripts/stop_create_contour_hists.py --model $model --analysis combined --method $method
    
    # polished SMS plots
    python $CMSSW_BASE/src/AnalysisTools/PlotsSMS/python/makeSMSplots.py pset/${model_official}_SUS13004_${method_upper}.cfg plots/limits/${label}/${method}/${model}/razor/${model_official}_RAZOR_${method_upper}_ 
    python $CMSSW_BASE/src/AnalysisTools/PlotsSMS/python/makeSMSplots.py pset/${model_official}_SUS13011_${method_upper}.cfg plots/limits/${label}/${method}/${model}/onelep/${model_official}_ONELEP_${method_upper}_ 
    python $CMSSW_BASE/src/AnalysisTools/PlotsSMS/python/makeSMSplots.py pset/${model_official}_SUS14125_${method_upper}.cfg plots/limits/${label}/${method}/${model}/combined/${model_official}_COMBINED_${method_upper}_ 
    
    # copy to drop box
    mkdir -p ${result_dir}
    cp $CMSSW_BASE/src/AnalysisTools/RootTools/tools/index.php                                          ${result_dir}/.
    cp plots/limits/${label}/${method}/${model}/razor/${model_official}_RAZOR_${method_upper}_*.*       ${result_dir}/.
    cp plots/limits/${label}/${method}/${model}/onelep/${model_official}_ONELEP_${method_upper}_*.*     ${result_dir}/.
    cp plots/limits/${label}/${method}/${model}/combined/${model_official}_COMBINED_${method_upper}_*.* ${result_dir}/.
    ls -1 ${result_dir}
}

label="v0"

make_sms_plots "t2tt"       "T2tt" "asymptotic" $label
make_sms_plots "t2tb_br0p5" "T2tb" "asymptotic" $label
make_sms_plots "t2bw"       "T2bw" "asymptotic" $label

make_sms_plots "t2tt"       "T2tt"  "hybrid" $label
make_sms_plots "t2tb_br0p5" "T2tb"  "hybrid" $label
make_sms_plots "t2bw"       "T2bw"  "hybrid" $label

# BR indepedent 
python $CMSSW_BASE/src/AnalysisTools/PlotsSMS/python/makeSMSplots.py pset/T2bri_SUS14125_${method_upper}.cfg plots/limits/${label}/${method}/${model}/combined/T2bri_COMBINED_${method_upper}_ 
