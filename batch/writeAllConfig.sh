#!/bin/bash

CARD_PATH=$CMSSW_BASE/src/Analysis/StopCombination/batch/job_input

# scans
OUTPUT_PATH=limits/stopcombo/v0/hybrid
METHOD=3 # 1: asymptotic, 2: hybrid new, 3: hybrid new with pre-generated grid
./writeConfig.sh t2tt       $CARD_PATH/t2tt       $OUTPUT_PATH/t2tt       $METHOD                
./writeConfig.sh t2tb_br0p3 $CARD_PATH/t2tb_br0p3 $OUTPUT_PATH/t2tb_br0p3 $METHOD
./writeConfig.sh t2tb_br0p5 $CARD_PATH/t2tb_br0p5 $OUTPUT_PATH/t2tb_br0p5 $METHOD
./writeConfig.sh t2tb_br0p7 $CARD_PATH/t2tb_br0p7 $OUTPUT_PATH/t2tb_br0p7 $METHOD
./writeConfig.sh t2bw       $CARD_PATH/t2bw       $OUTPUT_PATH/t2bw       $METHOD

OUTPUT_PATH=limits/stopcombo/v0/asymptotic
METHOD=1
./writeConfig.sh t2tt       $CARD_PATH/t2tt       $OUTPUT_PATH/t2tt       $METHOD
./writeConfig.sh t2tb_br0p3 $CARD_PATH/t2tb_br0p3 $OUTPUT_PATH/t2tb_br0p3 $METHOD
./writeConfig.sh t2tb_br0p5 $CARD_PATH/t2tb_br0p5 $OUTPUT_PATH/t2tb_br0p5 $METHOD
./writeConfig.sh t2tb_br0p7 $CARD_PATH/t2tb_br0p7 $OUTPUT_PATH/t2tb_br0p7 $METHOD
./writeConfig.sh t2bw       $CARD_PATH/t2bw       $OUTPUT_PATH/t2bw       $METHOD
