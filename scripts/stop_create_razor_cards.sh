#!/bin/bash

# sample="t2tb_br0p3"
# sample_full="T2tb_30_70"
sample="t2bw"
sample_full="T2bw"
# input_path="/Users/rwk7t/Development/CMSSW_6_1_2_Analysis/src/StopAnalysis/CombinedExclusions/cards/from_javier_17jun2014/${sample_full}"
input_path="$CMSSW_BASE/src/Analysis/StopCombination/cards/$sample/razor"
output_path="$CMSSW_BASE/src/Analysis/StopCombination/cards/$sample/razor"

# copy cards to correct place
mkdir -p $output_path
cp $input_path/razor_combine_MultiJet_${sample_full}_MG_* $output_path/.
cp $input_path/razor_combine_Jet2b_${sample_full}_MG_*    $output_path/.

# move to output_path
pushd $output_path

for multi_card in $(ls razor_combine_MultiJet_${sample_full}_*.txt);
do
    # other cards
    jet2b_card=$(echo $multi_card | sed 's/MultiJet/Jet2b/g')
    had_card=$(echo $multi_card | sed 's/MultiJet/Had/g')

    # command
    cmd="combineCards.py MultiJet=$multi_card Jet2b=$jet2b_card > $had_card"
    echo $cmd
    eval $cmd
done

popd
