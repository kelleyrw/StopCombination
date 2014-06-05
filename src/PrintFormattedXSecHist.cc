#include "Analysis/StopCombination/interface/PrintFormattedXSecHist.h"
#include "Analysis/StopCombination/interface/SignalRegion.h"
#include "Analysis/StopCombination/interface/Sample.h"
#include "AnalysisTools/RootTools/interface/RootTools.h"
#include "AnalysisTools/LanguageTools/interface/LanguageTools.h"
#include "TStyle.h"
#include "TCanvas.h"
#include "TH2.h"
#include "TColor.h"

namespace stop
{
    void PrintFormattedXSecHist
    (
        TH2& hist,
        const std::string& plot_name,
        const std::string& path,
        const std::string& suffix,
        const std::string& draw_option,
        const std::string& paint_text_option,
        const float zmin,
        const float zmax
    )
    {
        TCanvas c1("c1", "c1", 600, 600);
        gStyle->SetPadRightMargin(0.10);
        if (lt::string_contains(lt::string_lower(draw_option), "colz"))
        {
            // set z axis
            hist.GetZaxis()->SetLabelFont(42);
            hist.GetZaxis()->SetTitleFont(42);
            hist.GetZaxis()->SetLabelSize(0.035);
            hist.GetZaxis()->SetTitleSize(0.035);

            // define the palette for z axis
            static const int NRGBs     = 5;
            static const int NCont     = 255;
            static double stops[NRGBs] = {0.00 , 0.34 , 0.61 , 0.84 , 1.00};
            static double red  [NRGBs] = {0.50 , 0.50 , 1.00 , 1.00 , 1.00};
            static double green[NRGBs] = {0.50 , 1.00 , 1.00 , 0.60 , 0.50};
            static double blue [NRGBs] = {1.00 , 1.00 , 0.50 , 0.40 , 0.50};
            TColor::CreateGradientColorTable(NRGBs, stops, red, green, blue, NCont);
            gStyle->SetNumberContours(NCont);
            hist.Draw("colz");
            hist.GetXaxis()->SetTitleOffset(1.2);
            hist.GetYaxis()->SetTitleOffset(1.5);
            hist.GetZaxis()->SetTitleOffset(1.4);
            gPad->SetRightMargin(0.16);
            gPad->SetLeftMargin(0.12);
            gPad->Update();
            gPad->SetLogz(true);
        }
        else
        {
            gStyle->SetPaintTextFormat(paint_text_option.c_str());
        }
        if (zmax > zmin)
        {
            hist.GetZaxis()->SetRangeUser(zmin, zmax);
        }
        const std::string file_name = Form("%s/%s.%s", path.c_str(), plot_name.c_str(), suffix.c_str());
        lt::mkdir(path, /*force=*/true);
        hist.Draw(draw_option.c_str());
        c1.Print(file_name.c_str());
    }

    void PrintFormattedXSecHist
    (
        TH1& hist,
        const std::string& plot_name,
        const std::string& path,
        const std::string& suffix,
        const std::string& draw_option,
        const std::string& paint_text_option,
        const float zmin,
        const float zmax
    )
    {
        PrintFormattedXSecHist
        (
            dynamic_cast<TH2&>(hist),
            plot_name,
            path,
            suffix,
            draw_option,
            paint_text_option,
             zmin,
            zmax
        );
    }

} // namspace stop

