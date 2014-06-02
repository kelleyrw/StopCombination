#!/usr/bin/env python

# ------------------#
# imports
# ------------------#

from optparse import OptionParser
import os
import sys

# ------------------#
# parse inputs
# ------------------#

# parameter options
parser = OptionParser()
parser.add_option("--onelep_cards" , dest="onelep_path"  , default="cards/t2tt/onelep"              , type="string", help="path to the single lepton cards"    )
parser.add_option("--sample"       , dest="sample"       , default="t2tt"                           , type="string", help="sample (default t2tt)"              )
parser.add_option("--mass_stop"    , dest="mass_stop"    , default=-1                               , type="int"   , help="mass stop (-1 means full plane)"    )
parser.add_option("--mass_lsp"     , dest="mass_lsp"     , default=-1                               , type="int"   , help="mass LSP (-1 means full plane)"     )
parser.add_option("--interp_file"  , dest="interp_file"  , default="plots/interp/v0/t2tt_hists.root", type="string", help="file containing eff and systematics")
parser.add_option("--method"       , dest="method"       , default=4                                , type="int"   , help="method to use (default is 4)"       )
(options, args) = parser.parse_args()

# check for validity
def CheckOptions():
    # onelep_path
    if (not options.onelep_path):
        raise Exception("required onelep_path is missing")
    
    return

# ---------------------------#
# get the appropriate masses
# ---------------------------#

def GetStopMasses():
    default_masses = range(100, 825, 25)
    if (options.mass_stop < 0):
        return default_masses
    if options.mass_stop in default_masses:
        return range(options.mass_stop, options.mass_stop+1)
    else:
        raise ValueError("mass_stop = %s out of bounds -- must be in %s" % (options.mass_stop, default_masses))

def GetLSPMasses():
    default_masses = range(0, 725, 25)
    if (options.mass_lsp < 0):
        return default_masses
    if options.mass_lsp in default_masses:
        return range(options.mass_lsp, options.mass_lsp+1)
    else:
        raise ValueError("mass_lsp = %s out of bounds -- must be in %s" % (options.mass_lsp, default_masses))

# ---------------------------#
# get the SR name 
# ---------------------------#

def GetSRName(sr):
    bdt_label = [
        "bdt1l",
        "bdt1t",
        "bdt2",
        "bdt3",
        "bdt4",
        "bdt5"
    ]
    return bdt_label[sr]

# ------------------#
# "main program" 
# ------------------#

def main():
    
    try:
          # check the validity of the options
          CheckOptions()
    
          # sample
          sample = options.sample.lower()
    
          # make combined dir if doens't exist
          if (not os.path.exists(options.onelep_path)):
              os.makedirs(options.onelep_path)
    
          # loop over the selected masses create the card
          stop_masses = GetStopMasses()
          lsp_masses  = GetLSPMasses()
          mass_stop_offset = 100
          for sr in range(0,6,1):
              for mass_stop in stop_masses:
                  for mass_lsp in lsp_masses:
    
                      if (mass_stop < mass_lsp + mass_stop_offset):
                          continue
                  
                      sr_name     = GetSRName(sr)
                      output_file = "%s/%s_%d_%d_%s.txt" % (options.onelep_path, sample, mass_stop, mass_lsp, sr_name)
                      cmd = "stop_create_card --sample %s --interp %s --method %s --mass_stop %d --mass_lsp %d --sr %d --output %s" % \
                          (sample, options.interp_file, options.method, mass_stop, mass_lsp, sr, output_file) 
    
                      print cmd
                      os.system(cmd)
    
    except Exception, e:
        print "[stop_create_combined_card.pys] ERROR:", e
        return 1
    except:
        print "[stop_create_combined_card.pys] ERROR:", sys.exc_info()[0]
        return 1

# do it
if __name__ == '__main__':
    main()
