#!/bin/bash

# remove old cards
rm -r t2tt

# copy relevant files
cp -r $CMSSW_BASE/src/Analysis/StopCombination/scripts/stop_produce_limit.py . 
cp -r $CMSSW_BASE/src/Analysis/StopCombination/cards/t2tt/combined t2tt 
cp -r $CMSSW_BASE/src/Analysis/StopCombination/batch/sweepRoot.cc .

# tar up inputs
tar -czf input.tgz  --exclude='*.git*' *
