#!/bin/bash

CARD_PATH=$CMSSW_BASE/src/StopAnalysis/CombinedExclusions/batch/job_input

# scans
OUTPUT_PATH=limits/stopcombo/v0/hybrid
METHOD=3 # 1: asymptotic, 2: hybrid new, 3: hybrid new with pre-generated grid
./writeConfig.sh t2tt $CARD_PATH/t2tt $OUTPUT_PATH/t2tt $METHOD                

OUTPUT_PATH=limits/stopcombo/v0/asymptotic
METHOD=1
./writeConfig.sh t2tt $CARD_PATH/t2tt $OUTPUT_PATH/t2tt $METHOD
