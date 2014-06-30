#!/bin/bash

[ -z "$CMSSW_BASE" ] && echo "[setup.sh] need to set CMSSW_BASE" && exit 1;

pushd $CMSSW_BASE/src
eval `scramv1 runtime -sh`

# Checkout the analysis tools:
echo -e "[setup.sh] checking out AnalysisTools"
git clone https://github.com/kelleyrw/AnalysisTools.git
pushd AnalysisTools
git checkout stopcombo_V01-00-00
popd

# Checkout the fork of Higg's Combine limit setting tool:
echo -e "\n[setup.sh] checking out Higg's Combine"
git clone https://github.com/RazorCMS/HiggsAnalysis-CombinedLimit.git HiggsAnalysis/CombinedLimit
pushd HiggsAnalysis/CombinedLimit/
git checkout onelepcomb_032614
popd

# Compile:
echo -e "\n[setup.sh] compiling"
scram b -j20

# done
if [ $? -eq 0 ]; then
	echo -e "\n[setup.sh] setup successful"
else
	echo -e "\n[setup.sh] setup failed"
fi
