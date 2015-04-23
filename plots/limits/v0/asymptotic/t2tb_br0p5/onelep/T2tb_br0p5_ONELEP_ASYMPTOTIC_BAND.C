{
//=========Macro generated from canvas: cBrazil_/cBrazil_
//=========  (Wed Apr 22 17:43:25 2015) by ROOT version5.34/03
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
   
   TH2D *h_ul_xsec_obs_smoothEMPTY = new TH2D("h_ul_xsec_obs_smoothEMPTY","Observed onelep #sigma #times Branching Fraction (t2tb_br0p5)EMPTY",31,137.5,912.5,29,-12.5,712.5);

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
   
   TH1F *Graph_diagonal32 = new TH1F("Graph_diagonal32","Graph",100,0,22000);
   Graph_diagonal32->SetMinimum(-2100);
   Graph_diagonal32->SetMaximum(21900);
   Graph_diagonal32->SetDirectory(0);
   Graph_diagonal32->SetStats(0);

   ci = TColor::GetColor("#0000ff");
   Graph_diagonal32->SetLineColor(ci);
   Graph_diagonal32->GetXaxis()->SetLabelSize(0.035);
   Graph_diagonal32->GetYaxis()->SetLabelSize(0.035);
   Graph_diagonal32->GetYaxis()->SetTitleOffset(1.2);
   graph->SetHistogram(Graph_diagonal32);
   
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
   
   TH1F *Graph_Graph_diagonal3233 = new TH1F("Graph_Graph_diagonal3233","Graph",100,0,22000);
   Graph_Graph_diagonal3233->SetMinimum(-2100);
   Graph_Graph_diagonal3233->SetMaximum(21900);
   Graph_Graph_diagonal3233->SetDirectory(0);
   Graph_Graph_diagonal3233->SetStats(0);

   ci = TColor::GetColor("#0000ff");
   Graph_Graph_diagonal3233->SetLineColor(ci);
   Graph_Graph_diagonal3233->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_diagonal3233->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_diagonal3233->GetYaxis()->SetTitleOffset(1.2);
   graph->SetHistogram(Graph_Graph_diagonal3233);
   
   graph->Draw("l");
   
   graph = new TGraph(24);
   graph->SetName("Graph");
   graph->SetTitle("Graph");

   ci = TColor::GetColor("#ffcc00");
   graph->SetFillColor(ci);
   graph->SetPoint(0,468.7870273,0);
   graph->SetPoint(1,475,14.82445438);
   graph->SetPoint(2,478.4001896,25);
   graph->SetPoint(3,475.4478853,50);
   graph->SetPoint(4,475,50.96883566);
   graph->SetPoint(5,460.2145098,75);
   graph->SetPoint(6,450,82.33056597);
   graph->SetPoint(7,425,89.29146778);
   graph->SetPoint(8,400,93.72465158);
   graph->SetPoint(9,375,92.15643843);
   graph->SetPoint(10,350,83.14338155);
   graph->SetPoint(11,332.5128566,75);
   graph->SetPoint(12,325,70.25075289);
   graph->SetPoint(13,300,53.53282062);
   graph->SetPoint(14,295.1000014,50);
   graph->SetPoint(15,275,28.71713944);
   graph->SetPoint(16,271.4603586,25);
   graph->SetPoint(17,261.5113023,0);
   graph->SetPoint(18,200,-12.5);
   graph->SetPoint(19,175,-12.5);
   graph->SetPoint(20,150,-12.5);
   graph->SetPoint(21,146.3349478,0);
   graph->SetPoint(22,125,1.630019028);
   graph->SetPoint(23,120.0570671,0);
   
   TH1F *Graph_Graph34 = new TH1F("Graph_Graph34","Graph",100,84.22275,514.2345);
   Graph_Graph34->SetMinimum(-23.12247);
   Graph_Graph34->SetMaximum(104.3471);
   Graph_Graph34->SetDirectory(0);
   Graph_Graph34->SetStats(0);

   ci = TColor::GetColor("#0000ff");
   Graph_Graph34->SetLineColor(ci);
   Graph_Graph34->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph34->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph34->GetYaxis()->SetTitleOffset(1.2);
   graph->SetHistogram(Graph_Graph34);
   
   graph->Draw("f");
   
   graph = new TGraph(32);
   graph->SetName("g_excl_xsec_obs");
   graph->SetTitle("g_excl_xsec_obs");

   ci = TColor::GetColor("#cccccc");
   graph->SetFillColor(ci);
   graph->SetLineWidth(4);
   graph->SetPoint(0,175,29.23912602);
   graph->SetPoint(1,175.0021716,25);
   graph->SetPoint(2,175,24.99566649);
   graph->SetPoint(3,150,16.59787916);
   graph->SetPoint(4,148.8058802,25);
   graph->SetPoint(5,150,26.70034245);
   graph->SetPoint(6,175,29.23912602);
   graph->SetPoint(7,150,-12.5);
   graph->SetPoint(8,175,-12.5);
   graph->SetPoint(9,200,-12.5);
   graph->SetPoint(10,271.8456259,0);
   graph->SetPoint(11,275,11.14007284);
   graph->SetPoint(12,278.8155289,25);
   graph->SetPoint(13,297.4920511,50);
   graph->SetPoint(14,300,52.37211401);
   graph->SetPoint(15,324.4543157,75);
   graph->SetPoint(16,325,75.4114807);
   graph->SetPoint(17,350,92.08680103);
   graph->SetPoint(18,362.4532978,100);
   graph->SetPoint(19,375,107.431087);
   graph->SetPoint(20,400,115.3912673);
   graph->SetPoint(21,425,111.5222973);
   graph->SetPoint(22,443.7393679,100);
   graph->SetPoint(23,450,95.11910938);
   graph->SetPoint(24,469.4580269,75);
   graph->SetPoint(25,475,63.52850344);
   graph->SetPoint(26,480.1064889,50);
   graph->SetPoint(27,480.9341579,25);
   graph->SetPoint(28,475,10.63032329);
   graph->SetPoint(29,469.664086,0);
   graph->SetPoint(30,1300,-1300);
   graph->SetPoint(31,-1300,-1300);
   
   TH1F *Graph_Graph_Graph_g_excl_xsec_obs182135 = new TH1F("Graph_Graph_Graph_g_excl_xsec_obs182135","g_excl_xsec_obs",100,-1560,1560);
   Graph_Graph_Graph_g_excl_xsec_obs182135->SetMinimum(-1441.539);
   Graph_Graph_Graph_g_excl_xsec_obs182135->SetMaximum(256.9304);
   Graph_Graph_Graph_g_excl_xsec_obs182135->SetDirectory(0);
   Graph_Graph_Graph_g_excl_xsec_obs182135->SetStats(0);

   ci = TColor::GetColor("#0000ff");
   Graph_Graph_Graph_g_excl_xsec_obs182135->SetLineColor(ci);
   Graph_Graph_Graph_g_excl_xsec_obs182135->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_Graph_g_excl_xsec_obs182135->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_Graph_g_excl_xsec_obs182135->GetYaxis()->SetTitleOffset(1.2);
   graph->SetHistogram(Graph_Graph_Graph_g_excl_xsec_obs182135);
   
   graph->Draw("l");
   
   graph = new TGraph(29);
   graph->SetName("g_excl_xsec_obs_p1");
   graph->SetTitle("g_excl_xsec_obs_p1");
   graph->SetFillColor(1);
   graph->SetLineWidth(2);
   graph->SetPoint(0,120.0369093,0);
   graph->SetPoint(1,125,1.551559719);
   graph->SetPoint(2,145.9890243,0);
   graph->SetPoint(3,150,-12.5);
   graph->SetPoint(4,175,-12.5);
   graph->SetPoint(5,200,-12.5);
   graph->SetPoint(6,256.6730663,0);
   graph->SetPoint(7,267.9086546,25);
   graph->SetPoint(8,275,33.24449754);
   graph->SetPoint(9,288.5292421,50);
   graph->SetPoint(10,300,60.83572692);
   graph->SetPoint(11,315.4419787,75);
   graph->SetPoint(12,325,82.11951155);
   graph->SetPoint(13,348.0882546,100);
   graph->SetPoint(14,350,101.2566773);
   graph->SetPoint(15,375,116.8223593);
   graph->SetPoint(16,392.475705,125);
   graph->SetPoint(17,400,128.0802889);
   graph->SetPoint(18,425,131.4731526);
   graph->SetPoint(19,445.8745011,125);
   graph->SetPoint(20,450,122.5004135);
   graph->SetPoint(21,475,104.1404054);
   graph->SetPoint(22,479.4931441,100);
   graph->SetPoint(23,497.1049841,75);
   graph->SetPoint(24,500,67.6234709);
   graph->SetPoint(25,504.0413287,50);
   graph->SetPoint(26,503.4393009,25);
   graph->SetPoint(27,500,14.54423337);
   graph->SetPoint(28,493.2139455,0);
   
   TH1F *Graph_Graph_Graph_g_excl_xsec_obs_p162236 = new TH1F("Graph_Graph_Graph_g_excl_xsec_obs_p162236","g_excl_xsec_obs_p1",100,81.63647,542.4418);
   Graph_Graph_Graph_g_excl_xsec_obs_p162236->SetMinimum(-26.89732);
   Graph_Graph_Graph_g_excl_xsec_obs_p162236->SetMaximum(145.8705);
   Graph_Graph_Graph_g_excl_xsec_obs_p162236->SetDirectory(0);
   Graph_Graph_Graph_g_excl_xsec_obs_p162236->SetStats(0);

   ci = TColor::GetColor("#0000ff");
   Graph_Graph_Graph_g_excl_xsec_obs_p162236->SetLineColor(ci);
   Graph_Graph_Graph_g_excl_xsec_obs_p162236->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_Graph_g_excl_xsec_obs_p162236->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_Graph_g_excl_xsec_obs_p162236->GetYaxis()->SetTitleOffset(1.2);
   graph->SetHistogram(Graph_Graph_Graph_g_excl_xsec_obs_p162236);
   
   graph->Draw("l");
   
   graph = new TGraph(18);
   graph->SetName("g_excl_xsec_obs_m1");
   graph->SetTitle("g_excl_xsec_obs_m1");

   ci = TColor::GetColor("#ff807e");
   graph->SetFillColor(ci);
   graph->SetLineWidth(2);
   graph->SetPoint(0,439.4261663,0);
   graph->SetPoint(1,450,24.35008804);
   graph->SetPoint(2,450.2547105,25);
   graph->SetPoint(3,450.358778,50);
   graph->SetPoint(4,450,50.73093774);
   graph->SetPoint(5,432.6358517,75);
   graph->SetPoint(6,425,81.07464537);
   graph->SetPoint(7,400.088313,100);
   graph->SetPoint(8,400,100.0299574);
   graph->SetPoint(9,399.7682255,100);
   graph->SetPoint(10,375,96.33009106);
   graph->SetPoint(11,350,81.94505912);
   graph->SetPoint(12,339.4187291,75);
   graph->SetPoint(13,325,62.63010803);
   graph->SetPoint(14,310.9217942,50);
   graph->SetPoint(15,300,34.50907599);
   graph->SetPoint(16,293.5223201,25);
   graph->SetPoint(17,291.407845,0);
   
   TH1F *Graph_Graph_Graph_g_excl_xsec_obs_m172337 = new TH1F("Graph_Graph_Graph_g_excl_xsec_obs_m172337","g_excl_xsec_obs_m1",100,275.5128,466.2539);
   Graph_Graph_Graph_g_excl_xsec_obs_m172337->SetMinimum(0);
   Graph_Graph_Graph_g_excl_xsec_obs_m172337->SetMaximum(110.033);
   Graph_Graph_Graph_g_excl_xsec_obs_m172337->SetDirectory(0);
   Graph_Graph_Graph_g_excl_xsec_obs_m172337->SetStats(0);

   ci = TColor::GetColor("#0000ff");
   Graph_Graph_Graph_g_excl_xsec_obs_m172337->SetLineColor(ci);
   Graph_Graph_Graph_g_excl_xsec_obs_m172337->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_Graph_g_excl_xsec_obs_m172337->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_Graph_g_excl_xsec_obs_m172337->GetYaxis()->SetTitleOffset(1.2);
   graph->SetHistogram(Graph_Graph_Graph_g_excl_xsec_obs_m172337);
   
   graph->Draw("l");
   
   graph = new TGraph(9);
   graph->SetName("g_excl_xsec_exp");
   graph->SetTitle("g_excl_xsec_exp");

   ci = TColor::GetColor("#ff807e");
   graph->SetFillColor(ci);
   graph->SetLineStyle(2);
   graph->SetLineWidth(4);
   graph->SetPoint(0,375,32.06846049);
   graph->SetPoint(1,350,38.2372258);
   graph->SetPoint(2,325,27.13703306);
   graph->SetPoint(3,322.2563036,25);
   graph->SetPoint(4,325,15.82015101);
   graph->SetPoint(5,350,3.063647159);
   graph->SetPoint(6,375,19.71807986);
   graph->SetPoint(7,378.3741894,25);
   graph->SetPoint(8,375,32.06846049);
   
   TH1F *Graph_Graph_Graph_g_excl_xsec_exp31938 = new TH1F("Graph_Graph_Graph_g_excl_xsec_exp31938","g_excl_xsec_exp",100,316.6445,383.986);
   Graph_Graph_Graph_g_excl_xsec_exp31938->SetMinimum(0);
   Graph_Graph_Graph_g_excl_xsec_exp31938->SetMaximum(41.75458);
   Graph_Graph_Graph_g_excl_xsec_exp31938->SetDirectory(0);
   Graph_Graph_Graph_g_excl_xsec_exp31938->SetStats(0);

   ci = TColor::GetColor("#0000ff");
   Graph_Graph_Graph_g_excl_xsec_exp31938->SetLineColor(ci);
   Graph_Graph_Graph_g_excl_xsec_exp31938->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_Graph_g_excl_xsec_exp31938->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_Graph_g_excl_xsec_exp31938->GetYaxis()->SetTitleOffset(1.2);
   graph->SetHistogram(Graph_Graph_Graph_g_excl_xsec_exp31938);
   
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
   
   TH1F *Graph_white39 = new TH1F("Graph_white39","white",100,75,975);
   Graph_white39->SetMinimum(435);
   Graph_white39->SetMaximum(615);
   Graph_white39->SetDirectory(0);
   Graph_white39->SetStats(0);

   ci = TColor::GetColor("#0000ff");
   Graph_white39->SetLineColor(ci);
   Graph_white39->GetXaxis()->SetLabelSize(0.035);
   Graph_white39->GetYaxis()->SetLabelSize(0.035);
   Graph_white39->GetYaxis()->SetTitleOffset(1.2);
   graph->SetHistogram(Graph_white39);
   
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
   
   TH1F *Graph_Graph_white3940 = new TH1F("Graph_Graph_white3940","white",100,75,975);
   Graph_Graph_white3940->SetMinimum(435);
   Graph_Graph_white3940->SetMaximum(615);
   Graph_Graph_white3940->SetDirectory(0);
   Graph_Graph_white3940->SetStats(0);

   ci = TColor::GetColor("#0000ff");
   Graph_Graph_white3940->SetLineColor(ci);
   Graph_Graph_white3940->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_white3940->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_white3940->GetYaxis()->SetTitleOffset(1.2);
   graph->SetHistogram(Graph_Graph_white3940);
   
   graph->Draw("l");
   TLatex *   tex = new TLatex(0.25,0.98,"CMS, L = 19.5 fb^{-1}, #sqrt{s} = 8 TeV");
tex->SetNDC();
   tex->SetTextAlign(13);
   tex->SetTextFont(42);
   tex->SetTextSize(0.038);
   tex->SetLineWidth(2);
   tex->Draw();
      tex = new TLatex(0.16,0.9,"pp #rightarrow #tilde{t}#tilde{t}, #tilde{t} #rightarrow t#tilde{#chi}^{0}_{1} / b#tilde{#chi}^{#pm}_{1}");
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
   
   TH1F *Graph_LObs41 = new TH1F("Graph_LObs41","LObs",100,166.7,230.3);
   Graph_LObs41->SetMinimum(518.9);
   Graph_LObs41->SetMaximum(520.1);
   Graph_LObs41->SetDirectory(0);
   Graph_LObs41->SetStats(0);

   ci = TColor::GetColor("#0000ff");
   Graph_LObs41->SetLineColor(ci);
   Graph_LObs41->GetXaxis()->SetLabelSize(0.035);
   Graph_LObs41->GetYaxis()->SetLabelSize(0.035);
   Graph_LObs41->GetYaxis()->SetTitleOffset(1.2);
   graph->SetHistogram(Graph_LObs41);
   
   graph->Draw("l");
   
   graph = new TGraph(2);
   graph->SetName("LObsM");
   graph->SetTitle("LObsM");
   graph->SetFillColor(1);
   graph->SetLineWidth(2);
   graph->SetMarkerStyle(20);
   graph->SetPoint(0,172,510);
   graph->SetPoint(1,225,510);
   
   TH1F *Graph_LObsM42 = new TH1F("Graph_LObsM42","LObsM",100,166.7,230.3);
   Graph_LObsM42->SetMinimum(509.9);
   Graph_LObsM42->SetMaximum(511.1);
   Graph_LObsM42->SetDirectory(0);
   Graph_LObsM42->SetStats(0);

   ci = TColor::GetColor("#0000ff");
   Graph_LObsM42->SetLineColor(ci);
   Graph_LObsM42->GetXaxis()->SetLabelSize(0.035);
   Graph_LObsM42->GetYaxis()->SetLabelSize(0.035);
   Graph_LObsM42->GetYaxis()->SetTitleOffset(1.2);
   graph->SetHistogram(Graph_LObsM42);
   
   graph->Draw("l");
   
   graph = new TGraph(2);
   graph->SetName("LObsP");
   graph->SetTitle("LObsP");
   graph->SetFillColor(1);
   graph->SetLineWidth(2);
   graph->SetMarkerStyle(20);
   graph->SetPoint(0,172,528);
   graph->SetPoint(1,225,528);
   
   TH1F *Graph_LObsP43 = new TH1F("Graph_LObsP43","LObsP",100,166.7,230.3);
   Graph_LObsP43->SetMinimum(527.9);
   Graph_LObsP43->SetMaximum(529.1);
   Graph_LObsP43->SetDirectory(0);
   Graph_LObsP43->SetStats(0);

   ci = TColor::GetColor("#0000ff");
   Graph_LObsP43->SetLineColor(ci);
   Graph_LObsP43->GetXaxis()->SetLabelSize(0.035);
   Graph_LObsP43->GetYaxis()->SetLabelSize(0.035);
   Graph_LObsP43->GetYaxis()->SetTitleOffset(1.2);
   graph->SetHistogram(Graph_LObsP43);
   
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
   
   TH1F *Graph_LExpPM44 = new TH1F("Graph_LExpPM44","LExpPM",100,166.7,230.3);
   Graph_LExpPM44->SetMinimum(469.2);
   Graph_LExpPM44->SetMaximum(490.8);
   Graph_LExpPM44->SetDirectory(0);
   Graph_LExpPM44->SetStats(0);

   ci = TColor::GetColor("#0000ff");
   Graph_LExpPM44->SetLineColor(ci);
   Graph_LExpPM44->GetXaxis()->SetLabelSize(0.035);
   Graph_LExpPM44->GetYaxis()->SetLabelSize(0.035);
   Graph_LExpPM44->GetYaxis()->SetTitleOffset(1.2);
   graph->SetHistogram(Graph_LExpPM44);
   
   graph->Draw("f");
   
   graph = new TGraph(2);
   graph->SetName("LExp");
   graph->SetTitle("LExp");
   graph->SetFillColor(1);
   graph->SetLineStyle(2);
   graph->SetLineWidth(4);
   graph->SetPoint(0,172,480);
   graph->SetPoint(1,225,480);
   
   TH1F *Graph_LExp45 = new TH1F("Graph_LExp45","LExp",100,166.7,230.3);
   Graph_LExp45->SetMinimum(479.9);
   Graph_LExp45->SetMaximum(481.1);
   Graph_LExp45->SetDirectory(0);
   Graph_LExp45->SetStats(0);

   ci = TColor::GetColor("#0000ff");
   Graph_LExp45->SetLineColor(ci);
   Graph_LExp45->GetXaxis()->SetLabelSize(0.035);
   Graph_LExp45->GetYaxis()->SetLabelSize(0.035);
   Graph_LExp45->GetYaxis()->SetTitleOffset(1.2);
   graph->SetHistogram(Graph_LExp45);
   
   graph->Draw("l");
   cBrazil_->Modified();
   cBrazil_->cd();
   cBrazil_->SetSelected(cBrazil_);
}
