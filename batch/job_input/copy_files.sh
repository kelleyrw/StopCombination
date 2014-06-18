#!/bin/bash

# remove old cards
if [ -d t2tt ]; then rm -r t2tt; fi
if [ -d t2bw ]; then rm -r t2bw; fi
if [ -d t2tb_br0p5 ]; then rm -r t2tb_br0p5; fi

# copy relevant files
cp -r $CMSSW_BASE/src/Analysis/StopCombination/scripts/stop_produce_limit.py . 
cp -r $CMSSW_BASE/src/Analysis/StopCombination/cards/t2tt/combined       t2tt
cp -r $CMSSW_BASE/src/Analysis/StopCombination/cards/t2bw/combined       t2bw
cp -r $CMSSW_BASE/src/Analysis/StopCombination/cards/t2tb_br0p5/combined t2tb_br0p5 
cp -r $CMSSW_BASE/src/Analysis/StopCombination/batch/sweepRoot.cc .

# tar up inputs
tar -czf input.tgz  --exclude='*.git*' *
