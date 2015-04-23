{
//=========Macro generated from canvas: cCONT_/cCONT_
//=========  (Wed Apr 22 17:45:03 2015) by ROOT version5.34/03
   TCanvas *cCONT_ = new TCanvas("cCONT_", "cCONT_",0,0,600,600);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   cCONT_->SetHighLightColor(2);
   cCONT_->Range(-6.716415,-107.6923,1112.687,661.5385);
   cCONT_->SetFillColor(0);
   cCONT_->SetBorderMode(0);
   cCONT_->SetBorderSize(2);
   cCONT_->SetLogz();
   cCONT_->SetTickx(1);
   cCONT_->SetTicky(1);
   cCONT_->SetLeftMargin(0.14);
   cCONT_->SetRightMargin(0.19);
   cCONT_->SetTopMargin(0.08);
   cCONT_->SetBottomMargin(0.14);
   cCONT_->SetFrameBorderMode(0);
   cCONT_->SetFrameBorderMode(0);
   
   TH2D *emptyHisto = new TH2D("emptyHisto","",1,150,900,1,0,600);

   Int_t ci;   // for color index setting
   ci = TColor::GetColor("#0000ff");
   emptyHisto->SetLineColor(ci);
   emptyHisto->GetXaxis()->SetTitle("m_{#tilde{t}} (GeV)");
   emptyHisto->GetXaxis()->SetNdivisions(409);
   emptyHisto->GetXaxis()->SetLabelFont(42);
   emptyHisto->GetXaxis()->SetTitleSize(0.05);
   emptyHisto->GetXaxis()->SetTitleOffset(1.2);
   emptyHisto->GetXaxis()->SetTitleFont(42);
   emptyHisto->GetYaxis()->SetTitle("m_{#tilde{#chi}^{0}} (GeV)");
   emptyHisto->GetYaxis()->SetNdivisions(408);
   emptyHisto->GetYaxis()->SetLabelFont(42);
   emptyHisto->GetYaxis()->SetTitleSize(0.05);
   emptyHisto->GetYaxis()->SetTitleOffset(1.35);
   emptyHisto->GetYaxis()->SetTitleFont(42);
   emptyHisto->Draw("");
   
   TH2D *h_ul_xsec_obs_smoothEMPTY = new TH2D("h_ul_xsec_obs_smoothEMPTY","Observed onelep #sigma #times Branching Fraction (t2bw)EMPTY",31,137.5,912.5,29,-12.5,712.5);

   ci = TColor::GetColor("#0000ff");
   h_ul_xsec_obs_smoothEMPTY->SetLineColor(ci);
   h_ul_xsec_obs_smoothEMPTY->GetXaxis()->SetLabelSize(0.035);
   h_ul_xsec_obs_smoothEMPTY->GetYaxis()->SetLabelSize(0.035);
   h_ul_xsec_obs_smoothEMPTY->GetYaxis()->SetTitleOffset(1.2);
   h_ul_xsec_obs_smoothEMPTY->Draw("SAME");
   
   TGraph *graph = new TGraph(3);
   graph->SetName("diagonal");
   graph->SetTitle("Graph");

   ci = TColor::GetColor("#cccccc");
   graph->SetLineColor(ci);
   graph->SetLineStyle(2);
   graph->SetPoint(0,0,-100);
   graph->SetPoint(1,20000,19900);
   graph->SetPoint(2,150,900);
   
   TH1F *Graph_diagonal11 = new TH1F("Graph_diagonal11","Graph",100,0,22000);
   Graph_diagonal11->SetMinimum(-2100);
   Graph_diagonal11->SetMaximum(21900);
   Graph_diagonal11->SetDirectory(0);
   Graph_diagonal11->SetStats(0);

   ci = TColor::GetColor("#0000ff");
   Graph_diagonal11->SetLineColor(ci);
   Graph_diagonal11->GetXaxis()->SetLabelSize(0.035);
   Graph_diagonal11->GetYaxis()->SetLabelSize(0.035);
   Graph_diagonal11->GetYaxis()->SetTitleOffset(1.2);
   graph->SetHistogram(Graph_diagonal11);
   
   graph->Draw("f");
   
   graph = new TGraph(3);
   graph->SetName("diagonal");
   graph->SetTitle("Graph");

   ci = TColor::GetColor("#cccccc");
   graph->SetLineColor(ci);
   graph->SetLineStyle(2);
   graph->SetPoint(0,0,-100);
   graph->SetPoint(1,20000,19900);
   graph->SetPoint(2,150,900);
   
   TH1F *Graph_Graph_diagonal1112 = new TH1F("Graph_Graph_diagonal1112","Graph",100,0,22000);
   Graph_Graph_diagonal1112->SetMinimum(-2100);
   Graph_Graph_diagonal1112->SetMaximum(21900);
   Graph_Graph_diagonal1112->SetDirectory(0);
   Graph_Graph_diagonal1112->SetStats(0);

   ci = TColor::GetColor("#0000ff");
   Graph_Graph_diagonal1112->SetLineColor(ci);
   Graph_Graph_diagonal1112->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_diagonal1112->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_diagonal1112->GetYaxis()->SetTitleOffset(1.2);
   graph->SetHistogram(Graph_Graph_diagonal1112);
   
   graph->Draw("l");
   
   graph = new TGraph(2);
   graph->SetName("g_excl_xsec_obs");
   graph->SetTitle("g_excl_xsec_obs");

   ci = TColor::GetColor("#cccccc");
   graph->SetFillColor(ci);
   graph->SetLineWidth(4);
   graph->SetPoint(0,1300,-1300);
   graph->SetPoint(1,-1300,-1300);
   
   TH1F *Graph_g_excl_xsec_obs13 = new TH1F("Graph_g_excl_xsec_obs13","g_excl_xsec_obs",100,-1560,1560);
   Graph_g_excl_xsec_obs13->SetMinimum(-1300.1);
   Graph_g_excl_xsec_obs13->SetMaximum(-1298.9);
   Graph_g_excl_xsec_obs13->SetDirectory(0);
   Graph_g_excl_xsec_obs13->SetStats(0);

   ci = TColor::GetColor("#0000ff");
   Graph_g_excl_xsec_obs13->SetLineColor(ci);
   Graph_g_excl_xsec_obs13->GetXaxis()->SetLabelSize(0.035);
   Graph_g_excl_xsec_obs13->GetYaxis()->SetLabelSize(0.035);
   Graph_g_excl_xsec_obs13->GetYaxis()->SetTitleOffset(1.2);
   graph->SetHistogram(Graph_g_excl_xsec_obs13);
   
   graph->Draw("f");
   
   graph = new TGraph(0);
   graph->SetName("g_excl_xsec_exp");
   graph->SetTitle("g_excl_xsec_exp");
   graph->SetFillColor(1);

   ci = TColor::GetColor("#ff0000");
   graph->SetLineColor(ci);
   graph->SetLineStyle(7);
   graph->SetLineWidth(4);
   graph->Draw("l");
   
   graph = new TGraph(0);
   graph->SetName("g_excl_xsec_exp_p1");
   graph->SetTitle("g_excl_xsec_exp_p1");
   graph->SetFillColor(1);

   ci = TColor::GetColor("#ff0000");
   graph->SetLineColor(ci);
   graph->SetLineStyle(7);
   graph->SetLineWidth(2);
   graph->Draw("l");
   
   graph = new TGraph(0);
   graph->SetName("g_excl_xsec_exp_m1");
   graph->SetTitle("g_excl_xsec_exp_m1");
   graph->SetFillColor(1);

   ci = TColor::GetColor("#ff0000");
   graph->SetLineColor(ci);
   graph->SetLineStyle(7);
   graph->SetLineWidth(2);
   graph->Draw("l");
   
   graph = new TGraph(2);
   graph->SetName("g_excl_xsec_obs");
   graph->SetTitle("g_excl_xsec_obs");

   ci = TColor::GetColor("#cccccc");
   graph->SetFillColor(ci);
   graph->SetLineWidth(4);
   graph->SetPoint(0,1300,-1300);
   graph->SetPoint(1,-1300,-1300);
   
   TH1F *Graph_Graph_g_excl_xsec_obs1314 = new TH1F("Graph_Graph_g_excl_xsec_obs1314","g_excl_xsec_obs",100,-1560,1560);
   Graph_Graph_g_excl_xsec_obs1314->SetMinimum(-1300.1);
   Graph_Graph_g_excl_xsec_obs1314->SetMaximum(-1298.9);
   Graph_Graph_g_excl_xsec_obs1314->SetDirectory(0);
   Graph_Graph_g_excl_xsec_obs1314->SetStats(0);

   ci = TColor::GetColor("#0000ff");
   Graph_Graph_g_excl_xsec_obs1314->SetLineColor(ci);
   Graph_Graph_g_excl_xsec_obs1314->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_g_excl_xsec_obs1314->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_g_excl_xsec_obs1314->GetYaxis()->SetTitleOffset(1.2);
   graph->SetHistogram(Graph_Graph_g_excl_xsec_obs1314);
   
   graph->Draw("l");
   
   graph = new TGraph(0);
   graph->SetName("g_excl_xsec_obs_p1");
   graph->SetTitle("g_excl_xsec_obs_p1");
   graph->SetFillColor(1);
   graph->SetLineWidth(2);
   graph->Draw("l");
   
   graph = new TGraph(0);
   graph->SetName("g_excl_xsec_obs_m1");
   graph->SetTitle("g_excl_xsec_obs_m1");
   graph->SetFillColor(1);
   graph->SetLineWidth(2);
   graph->Draw("l");
   
   TH2D *emptyHisto__2 = new TH2D("emptyHisto__2","",1,150,900,1,0,600);
   emptyHisto__2->SetDirectory(0);

   ci = TColor::GetColor("#0000ff");
   emptyHisto__2->SetLineColor(ci);
   emptyHisto__2->GetXaxis()->SetTitle("m_{#tilde{t}} (GeV)");
   emptyHisto__2->GetXaxis()->SetNdivisions(409);
   emptyHisto__2->GetXaxis()->SetLabelFont(42);
   emptyHisto__2->GetXaxis()->SetTitleSize(0.05);
   emptyHisto__2->GetXaxis()->SetTitleOffset(1.2);
   emptyHisto__2->GetXaxis()->SetTitleFont(42);
   emptyHisto__2->GetYaxis()->SetTitle("m_{#tilde{#chi}^{0}} (GeV)");
   emptyHisto__2->GetYaxis()->SetNdivisions(408);
   emptyHisto__2->GetYaxis()->SetLabelFont(42);
   emptyHisto__2->GetYaxis()->SetTitleSize(0.05);
   emptyHisto__2->GetYaxis()->SetTitleOffset(1.35);
   emptyHisto__2->GetYaxis()->SetTitleFont(42);
   emptyHisto__2->Draw("sameaxis");
   
   graph = new TGraph(5);
   graph->SetName("white");
   graph->SetTitle("white");
   graph->SetLineWidth(3);
   graph->SetPoint(0,150,600);
   graph->SetPoint(1,900,600);
   graph->SetPoint(2,900,450);
   graph->SetPoint(3,150,450);
   graph->SetPoint(4,150,600);
   
   TH1F *Graph_white15 = new TH1F("Graph_white15","white",100,75,975);
   Graph_white15->SetMinimum(435);
   Graph_white15->SetMaximum(615);
   Graph_white15->SetDirectory(0);
   Graph_white15->SetStats(0);

   ci = TColor::GetColor("#0000ff");
   Graph_white15->SetLineColor(ci);
   Graph_white15->GetXaxis()->SetLabelSize(0.035);
   Graph_white15->GetYaxis()->SetLabelSize(0.035);
   Graph_white15->GetYaxis()->SetTitleOffset(1.2);
   graph->SetHistogram(Graph_white15);
   
   graph->Draw("f");
   
   graph = new TGraph(5);
   graph->SetName("white");
   graph->SetTitle("white");
   graph->SetLineWidth(3);
   graph->SetPoint(0,150,600);
   graph->SetPoint(1,900,600);
   graph->SetPoint(2,900,450);
   graph->SetPoint(3,150,450);
   graph->SetPoint(4,150,600);
   
   TH1F *Graph_Graph_white1516 = new TH1F("Graph_Graph_white1516","white",100,75,975);
   Graph_Graph_white1516->SetMinimum(435);
   Graph_Graph_white1516->SetMaximum(615);
   Graph_Graph_white1516->SetDirectory(0);
   Graph_Graph_white1516->SetStats(0);

   ci = TColor::GetColor("#0000ff");
   Graph_Graph_white1516->SetLineColor(ci);
   Graph_Graph_white1516->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_white1516->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_white1516->GetYaxis()->SetTitleOffset(1.2);
   graph->SetHistogram(Graph_Graph_white1516);
   
   graph->Draw("l");
   TLatex *   tex = new TLatex(0.25,0.98,"CMS, L = 19.5 fb^{-1}, #sqrt{s} = 8 TeV");
tex->SetNDC();
   tex->SetTextAlign(13);
   tex->SetTextFont(42);
   tex->SetTextSize(0.038);
   tex->SetLineWidth(2);
   tex->Draw();
      tex = new TLatex(0.16,0.9,"pp #rightarrow #tilde{t}#tilde{t}, #tilde{t} #rightarrow b#tilde{#chi}^{#pm}_{1}");
tex->SetNDC();
   tex->SetTextAlign(13);
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
      tex = new TLatex(0.56,0.88,"NLO+NLL exclusion");
tex->SetNDC();
   tex->SetTextAlign(13);
   tex->SetTextFont(42);
   tex->SetTextSize(0.03);
   tex->SetLineWidth(2);
   tex->Draw();
      tex = new TLatex(0.55,0.82,"m_{#tilde{#chi}^{#pm}}-m_{#tilde{#chi}^{0}} = 5 GeV");
tex->SetNDC();
   tex->SetTextAlign(13);
   tex->SetTextFont(42);
   tex->SetTextSize(0.038);
   tex->SetLineWidth(2);
   tex->Draw();
      tex = new TLatex(0.18,0.7,"MVA 1L Asymptotic");
tex->SetNDC();
   tex->SetTextAlign(13);
   tex->SetTextFont(42);
   tex->SetTextSize(0.038);
   tex->SetLineWidth(2);
   tex->Draw();
      tex = new TLatex(232,510,"Observed #pm 1 #sigma_{theory}");
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
      tex = new TLatex(232,471,"Expected #pm 1 #sigma_{experiment}");
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   
   graph = new TGraph(2);
   graph->SetName("LObs");
   graph->SetTitle("LObs");
   graph->SetFillColor(1);
   graph->SetLineWidth(4);
   graph->SetMarkerStyle(20);
   graph->SetPoint(0,172,519);
   graph->SetPoint(1,225,519);
   
   TH1F *Graph_LObs17 = new TH1F("Graph_LObs17","LObs",100,166.7,230.3);
   Graph_LObs17->SetMinimum(518.9);
   Graph_LObs17->SetMaximum(520.1);
   Graph_LObs17->SetDirectory(0);
   Graph_LObs17->SetStats(0);

   ci = TColor::GetColor("#0000ff");
   Graph_LObs17->SetLineColor(ci);
   Graph_LObs17->GetXaxis()->SetLabelSize(0.035);
   Graph_LObs17->GetYaxis()->SetLabelSize(0.035);
   Graph_LObs17->GetYaxis()->SetTitleOffset(1.2);
   graph->SetHistogram(Graph_LObs17);
   
   graph->Draw("l");
   
   graph = new TGraph(2);
   graph->SetName("LObsM");
   graph->SetTitle("LObsM");
   graph->SetFillColor(1);
   graph->SetLineWidth(2);
   graph->SetMarkerStyle(20);
   graph->SetPoint(0,172,510);
   graph->SetPoint(1,225,510);
   
   TH1F *Graph_LObsM18 = new TH1F("Graph_LObsM18","LObsM",100,166.7,230.3);
   Graph_LObsM18->SetMinimum(509.9);
   Graph_LObsM18->SetMaximum(511.1);
   Graph_LObsM18->SetDirectory(0);
   Graph_LObsM18->SetStats(0);

   ci = TColor::GetColor("#0000ff");
   Graph_LObsM18->SetLineColor(ci);
   Graph_LObsM18->GetXaxis()->SetLabelSize(0.035);
   Graph_LObsM18->GetYaxis()->SetLabelSize(0.035);
   Graph_LObsM18->GetYaxis()->SetTitleOffset(1.2);
   graph->SetHistogram(Graph_LObsM18);
   
   graph->Draw("l");
   
   graph = new TGraph(2);
   graph->SetName("LObsP");
   graph->SetTitle("LObsP");
   graph->SetFillColor(1);
   graph->SetLineWidth(2);
   graph->SetMarkerStyle(20);
   graph->SetPoint(0,172,528);
   graph->SetPoint(1,225,528);
   
   TH1F *Graph_LObsP19 = new TH1F("Graph_LObsP19","LObsP",100,166.7,230.3);
   Graph_LObsP19->SetMinimum(527.9);
   Graph_LObsP19->SetMaximum(529.1);
   Graph_LObsP19->SetDirectory(0);
   Graph_LObsP19->SetStats(0);

   ci = TColor::GetColor("#0000ff");
   Graph_LObsP19->SetLineColor(ci);
   Graph_LObsP19->GetXaxis()->SetLabelSize(0.035);
   Graph_LObsP19->GetYaxis()->SetLabelSize(0.035);
   Graph_LObsP19->GetYaxis()->SetTitleOffset(1.2);
   graph->SetHistogram(Graph_LObsP19);
   
   graph->Draw("l");
   
   graph = new TGraph(2);
   graph->SetName("LExp");
   graph->SetTitle("LExp");
   graph->SetFillColor(1);

   ci = TColor::GetColor("#ff0000");
   graph->SetLineColor(ci);
   graph->SetLineStyle(7);
   graph->SetLineWidth(4);
   graph->SetPoint(0,172,480);
   graph->SetPoint(1,225,480);
   
   TH1F *Graph_LExp20 = new TH1F("Graph_LExp20","LExp",100,166.7,230.3);
   Graph_LExp20->SetMinimum(479.9);
   Graph_LExp20->SetMaximum(481.1);
   Graph_LExp20->SetDirectory(0);
   Graph_LExp20->SetStats(0);

   ci = TColor::GetColor("#0000ff");
   Graph_LExp20->SetLineColor(ci);
   Graph_LExp20->GetXaxis()->SetLabelSize(0.035);
   Graph_LExp20->GetYaxis()->SetLabelSize(0.035);
   Graph_LExp20->GetYaxis()->SetTitleOffset(1.2);
   graph->SetHistogram(Graph_LExp20);
   
   graph->Draw("l");
   
   graph = new TGraph(2);
   graph->SetName("LExpM");
   graph->SetTitle("LExpM");
   graph->SetFillColor(1);

   ci = TColor::GetColor("#ff0000");
   graph->SetLineColor(ci);
   graph->SetLineStyle(7);
   graph->SetLineWidth(2);
   graph->SetPoint(0,172,471);
   graph->SetPoint(1,225,471);
   
   TH1F *Graph_LExpM21 = new TH1F("Graph_LExpM21","LExpM",100,166.7,230.3);
   Graph_LExpM21->SetMinimum(470.9);
   Graph_LExpM21->SetMaximum(472.1);
   Graph_LExpM21->SetDirectory(0);
   Graph_LExpM21->SetStats(0);

   ci = TColor::GetColor("#0000ff");
   Graph_LExpM21->SetLineColor(ci);
   Graph_LExpM21->GetXaxis()->SetLabelSize(0.035);
   Graph_LExpM21->GetYaxis()->SetLabelSize(0.035);
   Graph_LExpM21->GetYaxis()->SetTitleOffset(1.2);
   graph->SetHistogram(Graph_LExpM21);
   
   graph->Draw("l");
   
   graph = new TGraph(2);
   graph->SetName("LExpP");
   graph->SetTitle("LExpP");
   graph->SetFillColor(1);

   ci = TColor::GetColor("#ff0000");
   graph->SetLineColor(ci);
   graph->SetLineStyle(7);
   graph->SetLineWidth(2);
   graph->SetPoint(0,172,489);
   graph->SetPoint(1,225,489);
   
   TH1F *Graph_LExpP22 = new TH1F("Graph_LExpP22","LExpP",100,166.7,230.3);
   Graph_LExpP22->SetMinimum(488.9);
   Graph_LExpP22->SetMaximum(490.1);
   Graph_LExpP22->SetDirectory(0);
   Graph_LExpP22->SetStats(0);

   ci = TColor::GetColor("#0000ff");
   Graph_LExpP22->SetLineColor(ci);
   Graph_LExpP22->GetXaxis()->SetLabelSize(0.035);
   Graph_LExpP22->GetYaxis()->SetLabelSize(0.035);
   Graph_LExpP22->GetYaxis()->SetTitleOffset(1.2);
   graph->SetHistogram(Graph_LExpP22);
   
   graph->Draw("l");
   cCONT_->Modified();
   cCONT_->cd();
   cCONT_->SetSelected(cCONT_);
}
