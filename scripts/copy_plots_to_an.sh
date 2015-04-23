#!/bin/bash

an_path=docs/tdr/notes/AN-14-125/trunk
# cp plots/limits/v0/hybrid/t2tt/compare/p_exp_comparison.pdf  $an_path/figprd/p_mva1L_razor0L_compare_expul.pdf
# cp plots/limits/v0/hybrid/t2tt/compare/p_lands_combine_comparison_obs.pdf  $an_path/figprd/p_mva1L_lands_compare_exp.pdf
# cp plots/limits/v0/hybrid/t2tt/compare/p_lands_combine_comparison_exp.pdf  $an_path/figprd/p_mva1L_lands_compare_obs.pdf
# plots/limits/v0/hybrid/t2tt/combined/T2tt_COMBINED_HYBRID_* $an_path/
# plots/limits/v0/hybrid/t2tt/onelep/T2tt_ONELEP_HYBRID_*.pdf $an_path/
# plots/limits/v0/hybrid/t2tt/razor/T2tt_RAZOR_HYBRID_*.      $an_path/
cp plots/limits/v0/hybrid/t2tt/combined/T2tt_COMBINED_HYBRID_XSEC.C $an_path/figprd/INTERP/T2ttCOMBINED.C 
cp plots/limits/v0/hybrid/t2tt/onelep/T2tt_ONELEP_HYBRID_XSEC.C     $an_path/figprd/INTERP/T2ttBDT.C 
cp plots/limits/v0/hybrid/t2tt/razor/T2tt_RAZOR_HYBRID_XSEC.C       $an_path/figprd/INTERP/T2ttRazor.C 

cp plots/limits/v0/hybrid/t2tb_br0p5/combined/T2tb_br0p5_COMBINED_HYBRID_XSEC.C $an_path/figprd/INTERP/T2tbBR50_COMBINED.C 
cp plots/limits/v0/hybrid/t2tb_br0p5/onelep/T2tb_br0p5_ONELEP_HYBRID_XSEC.C     $an_path/figprd/INTERP/T2tbBR50_BDT.C 
cp plots/limits/v0/hybrid/t2tb_br0p5/razor/T2tb_br0p5_RAZOR_HYBRID_XSEC.C       $an_path/figprd/INTERP/T2tbBR50_Razor.C 

cp plots/limits/v0/hybrid/t2tb_br0p7/combined/T2tb_br0p7_COMBINED_HYBRID_XSEC.C $an_path/figprd/INTERP/T2tbBR70_COMBINED.C 
cp plots/limits/v0/hybrid/t2tb_br0p7/onelep/T2tb_br0p7_ONELEP_HYBRID_XSEC.C     $an_path/figprd/INTERP/T2tbBR70_BDT.C 
cp plots/limits/v0/hybrid/t2tb_br0p7/razor/T2tb_br0p7_RAZOR_HYBRID_XSEC.C       $an_path/figprd/INTERP/T2tbBR70_Razor.C 

cp plots/limits/v0/hybrid/t2tb_br0p3/combined/T2tb_br0p3_COMBINED_HYBRID_XSEC.C $an_path/figprd/INTERP/T2tbBR30_COMBINED.C 
cp plots/limits/v0/hybrid/t2tb_br0p3/onelep/T2tb_br0p3_ONELEP_HYBRID_XSEC.C     $an_path/figprd/INTERP/T2tbBR30_BDT.C 
cp plots/limits/v0/hybrid/t2tb_br0p3/razor/T2tb_br0p3_RAZOR_HYBRID_XSEC.C       $an_path/figprd/INTERP/T2tbBR30_Razor.C 

cp plots/limits/v0/hybrid/t2bw/combined/T2bw_COMBINED_HYBRID_XSEC.C $an_path/figprd/INTERP/T2bwCOMBINED.C 
cp plots/limits/v0/hybrid/t2bw/onelep/T2bw_ONELEP_HYBRID_XSEC.C     $an_path/figprd/INTERP/T2bwBDT.C 
cp plots/limits/v0/hybrid/t2bw/razor/T2bw_RAZOR_HYBRID_XSEC.C       $an_path/figprd/INTERP/T2bwRazor.C 

cp plots/limits/v0/hybrid/t2bri/combined/T2bri_COMBINED_HYBRID_XSEC.C $an_path/figprd/INTERP/T2briCOMBINED.C 
# cp plots/limits/v0/hybrid/t2bri/combined/h_ul_best_br_exp_smooth.C    $an_path/figprd/INTERP/h_ul_best_br_exp_smooth.C 
