#!/bin/bash

[ -z "$CMSSW_BASE" ] && echo "Need to set CMSSW_BASE" && exit 1;

pushd $CMSSW_BASE/src
eval `scramv1 runtime -sh`

#Checkout the analysis tools:
git clone https://github.com/kelleyrw/AnalysisTools.git

#Checkout the fork of Higg's Combine limit setting tool:
git clone https://github.com/RazorCMS/HiggsAnalysis-CombinedLimit.git HiggsAnalysis/CombinedLimit
pushd HiggsAnalysis/CombinedLimit/
git checkout onelepcomb_032614
popd

#Checkout CMS2's CORE (TODO: refactor AnalysisTools so that this is not dependent)
git clone https://github.com/cmstas/Dictionaries.git CMS2/Dictionaries
git clone https://github.com/cmstas/CORE.git CMS2/NtupleMacrosCore
pushd CMS2/NtupleMacrosCore
git pull
git checkout scram_compliant
./setup/setupCoreForSCRAM.sh setup/cms2_ntuple_postprocess_05.03.23.root
popd

# Compile:
scram b -j20
