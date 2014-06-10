#!/bin/bash

python scripts/stop_create_contour_hists.py --analysis razor    --method asymptotic
python scripts/stop_create_contour_hists.py --analysis onelep   --method asymptotic
python scripts/stop_create_contour_hists.py --analysis combined --method asymptotic
python scripts/stop_create_contour_hists.py --analysis razor    --method hybrid
python scripts/stop_create_contour_hists.py --analysis onelep   --method hybrid
python scripts/stop_create_contour_hists.py --analysis combined --method hybrid
