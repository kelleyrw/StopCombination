#!/bin/bash

an_path=docs/tdr/notes/AN-14-125/trunk
cp plots/limits/v0/hybrid/t2tt/compare/p_exp_comparison.pdf  $an_path/figprd/p_mva1L_razor0L_compare_expul.pdf
cp plots/limits/v0/hybrid/t2tt/compare/p_lands_combine_comparison_obs.pdf  $an_path/figprd/p_mva1L_lands_compare_exp.pdf
cp plots/limits/v0/hybrid/t2tt/compare/p_lands_combine_comparison_exp.pdf  $an_path/figprd/p_mva1L_lands_compare_obs.pdf
# plots/limits/v0/hybrid//t2tt/combined/T2tt_COMBINED_HYBRID_* $an_path/
# plots/limits/v0/hybrid//t2tt/onelep/T2tt_ONELEP_HYBRID_*.pdf $an_path/
# plots/limits/v0/hybrid//t2tt/razor/T2tt_RAZOR_HYBRID_*.      $an_path/
cp plots/limits/v0/hybrid//t2tt/combined/T2tt_COMBINED_HYBRID_XSEC.pdf $an_path/figprd/INTERP/T2ttCOMBINED.pdf 
cp plots/limits/v0/hybrid//t2tt/onelep/T2tt_ONELEP_HYBRID_XSEC.pdf     $an_path/figprd/INTERP/T2ttBDT.pdf 
cp plots/limits/v0/hybrid//t2tt/razor/T2tt_RAZOR_HYBRID_XSEC.pdf       $an_path/figprd/INTERP/T2ttRazor.pdf 
