{
//=========Macro generated from canvas: cBrazil_/cBrazil_
//=========  (Thu Apr 23 17:01:00 2015) by ROOT version5.34/03
   TCanvas *cBrazil_ = new TCanvas("cBrazil_", "cBrazil_",0,0,600,600);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   cBrazil_->SetHighLightColor(2);
   cBrazil_->Range(-6.716415,-107.6923,1112.687,661.5385);
   cBrazil_->SetFillColor(0);
   cBrazil_->SetBorderMode(0);
   cBrazil_->SetBorderSize(2);
   cBrazil_->SetLogz();
   cBrazil_->SetTickx(1);
   cBrazil_->SetTicky(1);
   cBrazil_->SetLeftMargin(0.14);
   cBrazil_->SetRightMargin(0.19);
   cBrazil_->SetTopMargin(0.08);
   cBrazil_->SetBottomMargin(0.14);
   cBrazil_->SetFrameBorderMode(0);
   cBrazil_->SetFrameBorderMode(0);
   
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
   
   TH1F *Graph_diagonal23 = new TH1F("Graph_diagonal23","Graph",100,0,22000);
   Graph_diagonal23->SetMinimum(-2100);
   Graph_diagonal23->SetMaximum(21900);
   Graph_diagonal23->SetDirectory(0);
   Graph_diagonal23->SetStats(0);

   ci = TColor::GetColor("#0000ff");
   Graph_diagonal23->SetLineColor(ci);
   Graph_diagonal23->GetXaxis()->SetLabelSize(0.035);
   Graph_diagonal23->GetYaxis()->SetLabelSize(0.035);
   Graph_diagonal23->GetYaxis()->SetTitleOffset(1.2);
   graph->SetHistogram(Graph_diagonal23);
   
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
   
   TH1F *Graph_Graph_diagonal2324 = new TH1F("Graph_Graph_diagonal2324","Graph",100,0,22000);
   Graph_Graph_diagonal2324->SetMinimum(-2100);
   Graph_Graph_diagonal2324->SetMaximum(21900);
   Graph_Graph_diagonal2324->SetDirectory(0);
   Graph_Graph_diagonal2324->SetStats(0);

   ci = TColor::GetColor("#0000ff");
   Graph_Graph_diagonal2324->SetLineColor(ci);
   Graph_Graph_diagonal2324->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_diagonal2324->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_diagonal2324->GetYaxis()->SetTitleOffset(1.2);
   graph->SetHistogram(Graph_Graph_diagonal2324);
   
   graph->Draw("l");
   
   graph = new TGraph(2);
   graph->SetName("g_excl_xsec_obs");
   graph->SetTitle("g_excl_xsec_obs");

   ci = TColor::GetColor("#cccccc");
   graph->SetFillColor(ci);
   graph->SetLineWidth(4);
   graph->SetPoint(0,1300,-1300);
   graph->SetPoint(1,-1300,-1300);
   
   TH1F *Graph_Graph_Graph_g_excl_xsec_obs131425 = new TH1F("Graph_Graph_Graph_g_excl_xsec_obs131425","g_excl_xsec_obs",100,-1560,1560);
   Graph_Graph_Graph_g_excl_xsec_obs131425->SetMinimum(-1300.1);
   Graph_Graph_Graph_g_excl_xsec_obs131425->SetMaximum(-1298.9);
   Graph_Graph_Graph_g_excl_xsec_obs131425->SetDirectory(0);
   Graph_Graph_Graph_g_excl_xsec_obs131425->SetStats(0);

   ci = TColor::GetColor("#0000ff");
   Graph_Graph_Graph_g_excl_xsec_obs131425->SetLineColor(ci);
   Graph_Graph_Graph_g_excl_xsec_obs131425->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_Graph_g_excl_xsec_obs131425->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_Graph_g_excl_xsec_obs131425->GetYaxis()->SetTitleOffset(1.2);
   graph->SetHistogram(Graph_Graph_Graph_g_excl_xsec_obs131425);
   
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
   
   graph = new TGraph(0);
   graph->SetName("g_excl_xsec_exp");
   graph->SetTitle("g_excl_xsec_exp");
   graph->SetFillColor(1);
   graph->SetLineStyle(2);
   graph->SetLineWidth(4);
   graph->Draw("l");
   
   TH2D *emptyHisto__3 = new TH2D("emptyHisto__3","",1,150,900,1,0,600);
   emptyHisto__3->SetDirectory(0);

   ci = TColor::GetColor("#0000ff");
   emptyHisto__3->SetLineColor(ci);
   emptyHisto__3->GetXaxis()->SetTitle("m_{#tilde{t}} (GeV)");
   emptyHisto__3->GetXaxis()->SetNdivisions(409);
   emptyHisto__3->GetXaxis()->SetLabelFont(42);
   emptyHisto__3->GetXaxis()->SetTitleSize(0.05);
   emptyHisto__3->GetXaxis()->SetTitleOffset(1.2);
   emptyHisto__3->GetXaxis()->SetTitleFont(42);
   emptyHisto__3->GetYaxis()->SetTitle("m_{#tilde{#chi}^{0}} (GeV)");
   emptyHisto__3->GetYaxis()->SetNdivisions(408);
   emptyHisto__3->GetYaxis()->SetLabelFont(42);
   emptyHisto__3->GetYaxis()->SetTitleSize(0.05);
   emptyHisto__3->GetYaxis()->SetTitleOffset(1.35);
   emptyHisto__3->GetYaxis()->SetTitleFont(42);
   emptyHisto__3->Draw("sameaxis");
   
   graph = new TGraph(5);
   graph->SetName("white");
   graph->SetTitle("white");
   graph->SetLineWidth(3);
   graph->SetPoint(0,150,600);
   graph->SetPoint(1,900,600);
   graph->SetPoint(2,900,450);
   graph->SetPoint(3,150,450);
   graph->SetPoint(4,150,600);
   
   TH1F *Graph_white26 = new TH1F("Graph_white26","white",100,75,975);
   Graph_white26->SetMinimum(435);
   Graph_white26->SetMaximum(615);
   Graph_white26->SetDirectory(0);
   Graph_white26->SetStats(0);

   ci = TColor::GetColor("#0000ff");
   Graph_white26->SetLineColor(ci);
   Graph_white26->GetXaxis()->SetLabelSize(0.035);
   Graph_white26->GetYaxis()->SetLabelSize(0.035);
   Graph_white26->GetYaxis()->SetTitleOffset(1.2);
   graph->SetHistogram(Graph_white26);
   
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
   
   TH1F *Graph_Graph_white2627 = new TH1F("Graph_Graph_white2627","white",100,75,975);
   Graph_Graph_white2627->SetMinimum(435);
   Graph_Graph_white2627->SetMaximum(615);
   Graph_Graph_white2627->SetDirectory(0);
   Graph_Graph_white2627->SetStats(0);

   ci = TColor::GetColor("#0000ff");
   Graph_Graph_white2627->SetLineColor(ci);
   Graph_Graph_white2627->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_white2627->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_white2627->GetYaxis()->SetTitleOffset(1.2);
   graph->SetHistogram(Graph_Graph_white2627);
   
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
   
   TH1F *Graph_LObs28 = new TH1F("Graph_LObs28","LObs",100,166.7,230.3);
   Graph_LObs28->SetMinimum(518.9);
   Graph_LObs28->SetMaximum(520.1);
   Graph_LObs28->SetDirectory(0);
   Graph_LObs28->SetStats(0);

   ci = TColor::GetColor("#0000ff");
   Graph_LObs28->SetLineColor(ci);
   Graph_LObs28->GetXaxis()->SetLabelSize(0.035);
   Graph_LObs28->GetYaxis()->SetLabelSize(0.035);
   Graph_LObs28->GetYaxis()->SetTitleOffset(1.2);
   graph->SetHistogram(Graph_LObs28);
   
   graph->Draw("l");
   
   graph = new TGraph(2);
   graph->SetName("LObsM");
   graph->SetTitle("LObsM");
   graph->SetFillColor(1);
   graph->SetLineWidth(2);
   graph->SetMarkerStyle(20);
   graph->SetPoint(0,172,510);
   graph->SetPoint(1,225,510);
   
   TH1F *Graph_LObsM29 = new TH1F("Graph_LObsM29","LObsM",100,166.7,230.3);
   Graph_LObsM29->SetMinimum(509.9);
   Graph_LObsM29->SetMaximum(511.1);
   Graph_LObsM29->SetDirectory(0);
   Graph_LObsM29->SetStats(0);

   ci = TColor::GetColor("#0000ff");
   Graph_LObsM29->SetLineColor(ci);
   Graph_LObsM29->GetXaxis()->SetLabelSize(0.035);
   Graph_LObsM29->GetYaxis()->SetLabelSize(0.035);
   Graph_LObsM29->GetYaxis()->SetTitleOffset(1.2);
   graph->SetHistogram(Graph_LObsM29);
   
   graph->Draw("l");
   
   graph = new TGraph(2);
   graph->SetName("LObsP");
   graph->SetTitle("LObsP");
   graph->SetFillColor(1);
   graph->SetLineWidth(2);
   graph->SetMarkerStyle(20);
   graph->SetPoint(0,172,528);
   graph->SetPoint(1,225,528);
   
   TH1F *Graph_LObsP30 = new TH1F("Graph_LObsP30","LObsP",100,166.7,230.3);
   Graph_LObsP30->SetMinimum(527.9);
   Graph_LObsP30->SetMaximum(529.1);
   Graph_LObsP30->SetDirectory(0);
   Graph_LObsP30->SetStats(0);

   ci = TColor::GetColor("#0000ff");
   Graph_LObsP30->SetLineColor(ci);
   Graph_LObsP30->GetXaxis()->SetLabelSize(0.035);
   Graph_LObsP30->GetYaxis()->SetLabelSize(0.035);
   Graph_LObsP30->GetYaxis()->SetTitleOffset(1.2);
   graph->SetHistogram(Graph_LObsP30);
   
   graph->Draw("l");
   
   graph = new TGraph(4);
   graph->SetName("LExpPM");
   graph->SetTitle("LExpPM");

   ci = TColor::GetColor("#ffcc00");
   graph->SetFillColor(ci);
   graph->SetLineStyle(3);
   graph->SetPoint(0,172,471);
   graph->SetPoint(1,225,471);
   graph->SetPoint(2,225,489);
   graph->SetPoint(3,172,489);
   
   TH1F *Graph_LExpPM31 = new TH1F("Graph_LExpPM31","LExpPM",100,166.7,230.3);
   Graph_LExpPM31->SetMinimum(469.2);
   Graph_LExpPM31->SetMaximum(490.8);
   Graph_LExpPM31->SetDirectory(0);
   Graph_LExpPM31->SetStats(0);

   ci = TColor::GetColor("#0000ff");
   Graph_LExpPM31->SetLineColor(ci);
   Graph_LExpPM31->GetXaxis()->SetLabelSize(0.035);
   Graph_LExpPM31->GetYaxis()->SetLabelSize(0.035);
   Graph_LExpPM31->GetYaxis()->SetTitleOffset(1.2);
   graph->SetHistogram(Graph_LExpPM31);
   
   graph->Draw("f");
   
   graph = new TGraph(2);
   graph->SetName("LExp");
   graph->SetTitle("LExp");
   graph->SetFillColor(1);
   graph->SetLineStyle(2);
   graph->SetLineWidth(4);
   graph->SetPoint(0,172,480);
   graph->SetPoint(1,225,480);
   
   TH1F *Graph_LExp32 = new TH1F("Graph_LExp32","LExp",100,166.7,230.3);
   Graph_LExp32->SetMinimum(479.9);
   Graph_LExp32->SetMaximum(481.1);
   Graph_LExp32->SetDirectory(0);
   Graph_LExp32->SetStats(0);

   ci = TColor::GetColor("#0000ff");
   Graph_LExp32->SetLineColor(ci);
   Graph_LExp32->GetXaxis()->SetLabelSize(0.035);
   Graph_LExp32->GetYaxis()->SetLabelSize(0.035);
   Graph_LExp32->GetYaxis()->SetTitleOffset(1.2);
   graph->SetHistogram(Graph_LExp32);
   
   graph->Draw("l");
   cBrazil_->Modified();
   cBrazil_->cd();
   cBrazil_->SetSelected(cBrazil_);
}
