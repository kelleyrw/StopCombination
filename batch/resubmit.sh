#!/bin/bash

condor_submit condor_t2bw_method1_resubmit.cmd
condor_submit condor_t2bw_method3_resubmit.cmd
condor_submit condor_t2tb_br0p5_method1_resubmit.cmd
condor_submit condor_t2tb_br0p5_method3_resubmit.cmd
# condor_submit condor_t2tt_method1_resubmit.cmd                                          
# condor_submit condor_t2tt_method3_resubmit.cmd                                          
