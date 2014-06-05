#include "Analysis/StopCombination/interface/SwissCrossInterpolate.h"
#include "TH2D.h"
#include <stdexcept>

// Analysis Tools
#include "AnalysisTools/RootTools/interface/RootTools.h"
#include "AnalysisTools/LanguageTools/interface/LanguageTools.h"

struct StepInfo
{
    int xplus;
    int xminus;
    int yplus;
    int yminus;
};

StepInfo GetStepInfo(const Direction::value_type dir_type)
{
    switch (dir_type)
    {
        case Direction::sw       :
        case Direction::ne       :
        case Direction::santa_fe : return StepInfo{1, -1, 1, -1}; break;
        case Direction::nw       :
        case Direction::se       : return StepInfo{-1, 1, 1, -1}; break;
        case Direction::n        :
        case Direction::s        :
        case Direction::ns       :
        case Direction::sn       : return StepInfo{0, 0, 1, -1}; break;
        case Direction::e        :
        case Direction::w        :
        case Direction::ew       :
        case Direction::we       : return StepInfo{1, -1, 0, 0}; break;
        default:
            throw std::invalid_argument("[GetStepInfo] Error: invalid Direction");
    }
}

// find absolute boundaries of the scan
// in most inefficient way possible (inefficient => simpler => hopefully fewer typos)
struct ScanBoundaryBins
{
    int xmin;
    int xmax;
    int ymin;
    int ymax;
};

// find absolute boundaries of the scan
ScanBoundaryBins GetScanBoundaryBins(const TH2D& h)
{
    ScanBoundaryBins scan_bins = {h.GetNbinsX(), 0, h.GetNbinsY(), 0};
    for (int xbin = 1; xbin <= h.GetNbinsX(); ++xbin)
    {
        for (int ybin = 1; ybin <= h.GetNbinsY(); ++ybin)
        {
            if (!lt::is_zero(h.GetBinContent(xbin, ybin)))
            {
                scan_bins.xmin = std::min(xbin, scan_bins.xmin);  
                scan_bins.ymin = std::min(ybin, scan_bins.ymin);  
                scan_bins.xmax = std::max(xbin, scan_bins.xmax);  
                scan_bins.xmax = std::max(ybin, scan_bins.ymax);  
            }
        }
    }
    return scan_bins;
}

// determine if bins are inside the scan
bool IsInsideScan(const ScanBoundaryBins scan_bins, const int xbin, const int ybin)
{
    return (scan_bins.xmin <= xbin && xbin <= scan_bins.xmax && scan_bins.ymin <= ybin && ybin <= scan_bins.ymax); 
}

// Tests if a bin is along a diagonal of the scan.
// Don't want to extrapolate past edge of scan in diagonal direction
bool IsAlongDiagonal(const TH2D& h, const int xbin, const int ybin)
{
  double sumNW = h.GetBinContent(xbin, ybin+1) + h.GetBinContent(xbin-1, ybin+1) + h.GetBinContent(xbin-1, ybin); // calculate three most "northwestern" neighbors
  double sumSE = h.GetBinContent(xbin, ybin-1) + h.GetBinContent(xbin+1, ybin-1) + h.GetBinContent(xbin+1, ybin); // calculate three most "southeastern" neighbors
  double sumSW = h.GetBinContent(xbin, ybin-1) + h.GetBinContent(xbin-1, ybin-1) + h.GetBinContent(xbin-1, ybin); // calculate three most "southwestern" neighbors
  double sumNE = h.GetBinContent(xbin, ybin+1) + h.GetBinContent(xbin+1, ybin+1) + h.GetBinContent(xbin+1, ybin); // calculate three most "northwestern" neighbors
  return ((sumNW==0 && sumSE!=0) || (sumNW!=0 && sumSE==0) || (sumSW==0 && sumNE!=0) || (sumSW!=0 && sumNE==0));
}

TH2D SwissCrossInterpolate(const TH2D& hist, const Direction::value_type first_step_dir)
{
    // make temporary histograms to store the results of both steps
    TH2D hist_copy(hist);
    TH2D hist_step1(hist); hist_step1.Reset();
    TH2D hist_step2(hist); hist_step2.Reset();

    // boundaries of the scan
    const ScanBoundaryBins scan_bins = GetScanBoundaryBins(hist_copy);

    // first step direction for interpolation
    const StepInfo first_step = GetStepInfo(first_step_dir);

    // loop over scan
    for (int xbin = 1; xbin <= hist.GetNbinsX(); ++xbin)
    {
        for (int ybin = 1; ybin <= hist.GetNbinsY(); ++ybin)
        {
            // do not extrapolate outside the scan
            if (IsInsideScan(scan_bins, xbin, ybin)) continue; 

            //point is not along the diagonal
            if (! IsAlongDiagonal(hist_copy, xbin, ybin)) 
            {
                double binContent          = hist_copy.GetBinContent(xbin, ybin);
                double binContentPlusStep  = hist_copy.GetBinContent(xbin + first_step.xplus , ybin + first_step.yplus );
                double binContentMinusStep = hist_copy.GetBinContent(xbin + first_step.xminus, ybin + first_step.yminus);
                int nFilled                = 0;
                if (binContentPlusStep !=0) nFilled++;
                if (binContentMinusStep!=0) nFilled++;
                // if we are at an empty bin and there are neighbors
                // in specified direction with non-zero entries
                if (lt::is_zero(binContent) && nFilled>0)
                {
                    // average over non-zero entries
                    binContent = (binContentPlusStep + binContentMinusStep)/static_cast<double>(nFilled);
                    hist_step1.SetBinContent(xbin, ybin, binContent);
                }
            }
            // point is along the diagonal; average SW-NE direction
            else
            {
                double binContent          = hist_copy.GetBinContent(xbin, ybin);
                double binContentPlusStep  = hist_copy.GetBinContent(xbin + 1, ybin + 1);
                double binContentMinusStep = hist_copy.GetBinContent(xbin - 1, ybin - 1);
                int nFilled                = 0;
                if (binContentPlusStep !=0) nFilled++;
                if (binContentMinusStep!=0) nFilled++;
                // if we are at an empty bin and there are neighbors
                // in specified direction with non-zero entries
                if (lt::is_zero(binContent) && nFilled==2)
                {
                    // average over non-zero entries
                    binContent = (binContentPlusStep + binContentMinusStep)/static_cast<double>(nFilled);
                    hist_step1.SetBinContent(xbin, ybin, binContent);
                }
            }
        }

        // add result of interpolation
        hist_copy.Add(&hist_step1);

        for (int xbin = 1; xbin <= hist.GetNbinsX(); ++xbin)
        {
            for (int ybin = 1; ybin <= hist.GetNbinsY(); ++ybin)
            {
                // do not extrapolate outside the scan
                if (IsInsideScan(scan_bins, xbin, ybin)) continue; 

                // no diagonal points 
                if (IsAlongDiagonal(hist_copy, xbin, ybin)) continue;

                double binContent = hist_copy.GetBinContent(xbin, ybin);

                // get entries for "Swiss Cross" average
                double binContentUp    = hist_copy.GetBinContent(xbin  , ybin+1);
                double binContentDown  = hist_copy.GetBinContent(xbin  , ybin-1);
                double binContentLeft  = hist_copy.GetBinContent(xbin-1, ybin  );
                double binContentRight = hist_copy.GetBinContent(xbin+1, ybin  );
                int nFilled=0;
                if(binContentUp   !=0) nFilled++;
                if(binContentDown !=0) nFilled++;
                if(binContentRight!=0) nFilled++;
                if(binContentLeft !=0) nFilled++;

                if (lt::is_zero(binContent) && nFilled>0)
                {
                    // only average over non-zero entries
                    binContent = (binContentUp+binContentDown+binContentRight+binContentLeft)/static_cast<double>(nFilled);
                    hist_step2.SetBinContent(xbin, ybin, binContent);
                }
            }
        }
        // add "Swiss Cross" average
        hist_copy.Add(&hist_step2);

    }
    return hist_copy;
}

// increases binning by factor of two and interpolates in specified direction
TH2D SwissCrossRebin(const TH2D& hist, const Direction::value_type first_step_dir)
{
    // bin widths are needed so as to not shift histogram by half a bin with each rebinning
    // assume constant binning
    const double binWidthX = hist.GetXaxis()->GetBinWidth(1);
    const double binWidthY = hist.GetYaxis()->GetBinWidth(1);

    TH2D histRebinned
    (
        Form("%s_rebin", hist.GetName()),
        hist.GetTitle(),
        2*hist.GetNbinsX(),
        hist.GetXaxis()->GetXmin()+binWidthX/4.0,
        hist.GetXaxis()->GetXmax()+binWidthX/4.0,
        2*hist.GetNbinsY(),
        hist.GetYaxis()->GetXmin()+binWidthY/4.0,
        hist.GetYaxis()->GetXmax()+binWidthY/4.0
    );

    // copy results from previous histogram
    for (int xbin = 1; xbin <= hist.GetNbinsX(); ++xbin)
    {
        for (int ybin = 1; ybin <= hist.GetNbinsY(); ++ybin)
        {
            const double binContent = hist.GetBinContent(xbin, ybin);
            histRebinned.SetBinContent(2*xbin-1, 2*ybin-1, binContent);
        }
    }
    histRebinned.SetMaximum(hist.GetMaximum());
    histRebinned.SetMinimum(hist.GetMinimum());

    // use interpolation to re-fill histogram
    TH2D histRebinnedInterpolated = SwissCrossInterpolate(histRebinned, first_step_dir);
    return histRebinnedInterpolated;
}
