{
//=========Macro generated from canvas: cCONT_/cCONT_
//=========  (Thu Apr 23 17:00:50 2015) by ROOT version5.34/03
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
   
   TH1F *Graph_diagonal16 = new TH1F("Graph_diagonal16","Graph",100,0,22000);
   Graph_diagonal16->SetMinimum(-2100);
   Graph_diagonal16->SetMaximum(21900);
   Graph_diagonal16->SetDirectory(0);
   Graph_diagonal16->SetStats(0);

   ci = TColor::GetColor("#0000ff");
   Graph_diagonal16->SetLineColor(ci);
   Graph_diagonal16->GetXaxis()->SetLabelSize(0.035);
   Graph_diagonal16->GetYaxis()->SetLabelSize(0.035);
   Graph_diagonal16->GetYaxis()->SetTitleOffset(1.2);
   graph->SetHistogram(Graph_diagonal16);
   
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
   
   TH1F *Graph_Graph_diagonal1617 = new TH1F("Graph_Graph_diagonal1617","Graph",100,0,22000);
   Graph_Graph_diagonal1617->SetMinimum(-2100);
   Graph_Graph_diagonal1617->SetMaximum(21900);
   Graph_Graph_diagonal1617->SetDirectory(0);
   Graph_Graph_diagonal1617->SetStats(0);

   ci = TColor::GetColor("#0000ff");
   Graph_Graph_diagonal1617->SetLineColor(ci);
   Graph_Graph_diagonal1617->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_diagonal1617->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_diagonal1617->GetYaxis()->SetTitleOffset(1.2);
   graph->SetHistogram(Graph_Graph_diagonal1617);
   
   graph->Draw("l");
   
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
   
   TH1F *Graph_g_excl_xsec_obs18 = new TH1F("Graph_g_excl_xsec_obs18","g_excl_xsec_obs",100,-1560,1560);
   Graph_g_excl_xsec_obs18->SetMinimum(-1441.539);
   Graph_g_excl_xsec_obs18->SetMaximum(256.9304);
   Graph_g_excl_xsec_obs18->SetDirectory(0);
   Graph_g_excl_xsec_obs18->SetStats(0);

   ci = TColor::GetColor("#0000ff");
   Graph_g_excl_xsec_obs18->SetLineColor(ci);
   Graph_g_excl_xsec_obs18->GetXaxis()->SetLabelSize(0.035);
   Graph_g_excl_xsec_obs18->GetYaxis()->SetLabelSize(0.035);
   Graph_g_excl_xsec_obs18->GetYaxis()->SetTitleOffset(1.2);
   graph->SetHistogram(Graph_g_excl_xsec_obs18);
   
   graph->Draw("f");
   
   graph = new TGraph(9);
   graph->SetName("g_excl_xsec_exp");
   graph->SetTitle("g_excl_xsec_exp");

   ci = TColor::GetColor("#ff807e");
   graph->SetFillColor(ci);

   ci = TColor::GetColor("#ff0000");
   graph->SetLineColor(ci);
   graph->SetLineStyle(7);
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
   
   TH1F *Graph_Graph_g_excl_xsec_exp319 = new TH1F("Graph_Graph_g_excl_xsec_exp319","g_excl_xsec_exp",100,316.6445,383.986);
   Graph_Graph_g_excl_xsec_exp319->SetMinimum(0);
   Graph_Graph_g_excl_xsec_exp319->SetMaximum(41.75458);
   Graph_Graph_g_excl_xsec_exp319->SetDirectory(0);
   Graph_Graph_g_excl_xsec_exp319->SetStats(0);

   ci = TColor::GetColor("#0000ff");
   Graph_Graph_g_excl_xsec_exp319->SetLineColor(ci);
   Graph_Graph_g_excl_xsec_exp319->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_g_excl_xsec_exp319->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_g_excl_xsec_exp319->GetYaxis()->SetTitleOffset(1.2);
   graph->SetHistogram(Graph_Graph_g_excl_xsec_exp319);
   
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
   
   graph = new TGraph(24);
   graph->SetName("g_excl_xsec_exp_m1");
   graph->SetTitle("g_excl_xsec_exp_m1");
   graph->SetFillColor(1);

   ci = TColor::GetColor("#ff0000");
   graph->SetLineColor(ci);
   graph->SetLineStyle(7);
   graph->SetLineWidth(2);
   graph->SetPoint(0,120.0570671,0);
   graph->SetPoint(1,125,1.630019028);
   graph->SetPoint(2,146.3349478,0);
   graph->SetPoint(3,150,-12.5);
   graph->SetPoint(4,175,-12.5);
   graph->SetPoint(5,200,-12.5);
   graph->SetPoint(6,261.5113023,0);
   graph->SetPoint(7,271.4603586,25);
   graph->SetPoint(8,275,28.71713944);
   graph->SetPoint(9,295.1000014,50);
   graph->SetPoint(10,300,53.53282062);
   graph->SetPoint(11,325,70.25075289);
   graph->SetPoint(12,332.5128566,75);
   graph->SetPoint(13,350,83.14338155);
   graph->SetPoint(14,375,92.15643843);
   graph->SetPoint(15,400,93.72465158);
   graph->SetPoint(16,425,89.29146778);
   graph->SetPoint(17,450,82.33056597);
   graph->SetPoint(18,460.2145098,75);
   graph->SetPoint(19,475,50.96883566);
   graph->SetPoint(20,475.4478853,50);
   graph->SetPoint(21,478.4001896,25);
   graph->SetPoint(22,475,14.82445438);
   graph->SetPoint(23,468.7870273,0);
   
   TH1F *Graph_Graph_g_excl_xsec_exp_m1420 = new TH1F("Graph_Graph_g_excl_xsec_exp_m1420","g_excl_xsec_exp_m1",100,84.22275,514.2345);
   Graph_Graph_g_excl_xsec_exp_m1420->SetMinimum(-23.12247);
   Graph_Graph_g_excl_xsec_exp_m1420->SetMaximum(104.3471);
   Graph_Graph_g_excl_xsec_exp_m1420->SetDirectory(0);
   Graph_Graph_g_excl_xsec_exp_m1420->SetStats(0);

   ci = TColor::GetColor("#0000ff");
   Graph_Graph_g_excl_xsec_exp_m1420->SetLineColor(ci);
   Graph_Graph_g_excl_xsec_exp_m1420->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_g_excl_xsec_exp_m1420->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_g_excl_xsec_exp_m1420->GetYaxis()->SetTitleOffset(1.2);
   graph->SetHistogram(Graph_Graph_g_excl_xsec_exp_m1420);
   
   graph->Draw("l");
   
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
   
   TH1F *Graph_Graph_g_excl_xsec_obs1821 = new TH1F("Graph_Graph_g_excl_xsec_obs1821","g_excl_xsec_obs",100,-1560,1560);
   Graph_Graph_g_excl_xsec_obs1821->SetMinimum(-1441.539);
   Graph_Graph_g_excl_xsec_obs1821->SetMaximum(256.9304);
   Graph_Graph_g_excl_xsec_obs1821->SetDirectory(0);
   Graph_Graph_g_excl_xsec_obs1821->SetStats(0);

   ci = TColor::GetColor("#0000ff");
   Graph_Graph_g_excl_xsec_obs1821->SetLineColor(ci);
   Graph_Graph_g_excl_xsec_obs1821->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_g_excl_xsec_obs1821->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_g_excl_xsec_obs1821->GetYaxis()->SetTitleOffset(1.2);
   graph->SetHistogram(Graph_Graph_g_excl_xsec_obs1821);
   
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
   
   TH1F *Graph_Graph_g_excl_xsec_obs_p1622 = new TH1F("Graph_Graph_g_excl_xsec_obs_p1622","g_excl_xsec_obs_p1",100,81.63647,542.4418);
   Graph_Graph_g_excl_xsec_obs_p1622->SetMinimum(-26.89732);
   Graph_Graph_g_excl_xsec_obs_p1622->SetMaximum(145.8705);
   Graph_Graph_g_excl_xsec_obs_p1622->SetDirectory(0);
   Graph_Graph_g_excl_xsec_obs_p1622->SetStats(0);

   ci = TColor::GetColor("#0000ff");
   Graph_Graph_g_excl_xsec_obs_p1622->SetLineColor(ci);
   Graph_Graph_g_excl_xsec_obs_p1622->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_g_excl_xsec_obs_p1622->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_g_excl_xsec_obs_p1622->GetYaxis()->SetTitleOffset(1.2);
   graph->SetHistogram(Graph_Graph_g_excl_xsec_obs_p1622);
   
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
   
   TH1F *Graph_Graph_g_excl_xsec_obs_m1723 = new TH1F("Graph_Graph_g_excl_xsec_obs_m1723","g_excl_xsec_obs_m1",100,275.5128,466.2539);
   Graph_Graph_g_excl_xsec_obs_m1723->SetMinimum(0);
   Graph_Graph_g_excl_xsec_obs_m1723->SetMaximum(110.033);
   Graph_Graph_g_excl_xsec_obs_m1723->SetDirectory(0);
   Graph_Graph_g_excl_xsec_obs_m1723->SetStats(0);

   ci = TColor::GetColor("#0000ff");
   Graph_Graph_g_excl_xsec_obs_m1723->SetLineColor(ci);
   Graph_Graph_g_excl_xsec_obs_m1723->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_g_excl_xsec_obs_m1723->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_g_excl_xsec_obs_m1723->GetYaxis()->SetTitleOffset(1.2);
   graph->SetHistogram(Graph_Graph_g_excl_xsec_obs_m1723);
   
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
   
   TH1F *Graph_white24 = new TH1F("Graph_white24","white",100,75,975);
   Graph_white24->SetMinimum(435);
   Graph_white24->SetMaximum(615);
   Graph_white24->SetDirectory(0);
   Graph_white24->SetStats(0);

   ci = TColor::GetColor("#0000ff");
   Graph_white24->SetLineColor(ci);
   Graph_white24->GetXaxis()->SetLabelSize(0.035);
   Graph_white24->GetYaxis()->SetLabelSize(0.035);
   Graph_white24->GetYaxis()->SetTitleOffset(1.2);
   graph->SetHistogram(Graph_white24);
   
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
   
   TH1F *Graph_Graph_white2425 = new TH1F("Graph_Graph_white2425","white",100,75,975);
   Graph_Graph_white2425->SetMinimum(435);
   Graph_Graph_white2425->SetMaximum(615);
   Graph_Graph_white2425->SetDirectory(0);
   Graph_Graph_white2425->SetStats(0);

   ci = TColor::GetColor("#0000ff");
   Graph_Graph_white2425->SetLineColor(ci);
   Graph_Graph_white2425->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_white2425->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_white2425->GetYaxis()->SetTitleOffset(1.2);
   graph->SetHistogram(Graph_Graph_white2425);
   
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
   
   TH1F *Graph_LObs26 = new TH1F("Graph_LObs26","LObs",100,166.7,230.3);
   Graph_LObs26->SetMinimum(518.9);
   Graph_LObs26->SetMaximum(520.1);
   Graph_LObs26->SetDirectory(0);
   Graph_LObs26->SetStats(0);

   ci = TColor::GetColor("#0000ff");
   Graph_LObs26->SetLineColor(ci);
   Graph_LObs26->GetXaxis()->SetLabelSize(0.035);
   Graph_LObs26->GetYaxis()->SetLabelSize(0.035);
   Graph_LObs26->GetYaxis()->SetTitleOffset(1.2);
   graph->SetHistogram(Graph_LObs26);
   
   graph->Draw("l");
   
   graph = new TGraph(2);
   graph->SetName("LObsM");
   graph->SetTitle("LObsM");
   graph->SetFillColor(1);
   graph->SetLineWidth(2);
   graph->SetMarkerStyle(20);
   graph->SetPoint(0,172,510);
   graph->SetPoint(1,225,510);
   
   TH1F *Graph_LObsM27 = new TH1F("Graph_LObsM27","LObsM",100,166.7,230.3);
   Graph_LObsM27->SetMinimum(509.9);
   Graph_LObsM27->SetMaximum(511.1);
   Graph_LObsM27->SetDirectory(0);
   Graph_LObsM27->SetStats(0);

   ci = TColor::GetColor("#0000ff");
   Graph_LObsM27->SetLineColor(ci);
   Graph_LObsM27->GetXaxis()->SetLabelSize(0.035);
   Graph_LObsM27->GetYaxis()->SetLabelSize(0.035);
   Graph_LObsM27->GetYaxis()->SetTitleOffset(1.2);
   graph->SetHistogram(Graph_LObsM27);
   
   graph->Draw("l");
   
   graph = new TGraph(2);
   graph->SetName("LObsP");
   graph->SetTitle("LObsP");
   graph->SetFillColor(1);
   graph->SetLineWidth(2);
   graph->SetMarkerStyle(20);
   graph->SetPoint(0,172,528);
   graph->SetPoint(1,225,528);
   
   TH1F *Graph_LObsP28 = new TH1F("Graph_LObsP28","LObsP",100,166.7,230.3);
   Graph_LObsP28->SetMinimum(527.9);
   Graph_LObsP28->SetMaximum(529.1);
   Graph_LObsP28->SetDirectory(0);
   Graph_LObsP28->SetStats(0);

   ci = TColor::GetColor("#0000ff");
   Graph_LObsP28->SetLineColor(ci);
   Graph_LObsP28->GetXaxis()->SetLabelSize(0.035);
   Graph_LObsP28->GetYaxis()->SetLabelSize(0.035);
   Graph_LObsP28->GetYaxis()->SetTitleOffset(1.2);
   graph->SetHistogram(Graph_LObsP28);
   
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
   
   TH1F *Graph_LExp29 = new TH1F("Graph_LExp29","LExp",100,166.7,230.3);
   Graph_LExp29->SetMinimum(479.9);
   Graph_LExp29->SetMaximum(481.1);
   Graph_LExp29->SetDirectory(0);
   Graph_LExp29->SetStats(0);

   ci = TColor::GetColor("#0000ff");
   Graph_LExp29->SetLineColor(ci);
   Graph_LExp29->GetXaxis()->SetLabelSize(0.035);
   Graph_LExp29->GetYaxis()->SetLabelSize(0.035);
   Graph_LExp29->GetYaxis()->SetTitleOffset(1.2);
   graph->SetHistogram(Graph_LExp29);
   
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
   
   TH1F *Graph_LExpM30 = new TH1F("Graph_LExpM30","LExpM",100,166.7,230.3);
   Graph_LExpM30->SetMinimum(470.9);
   Graph_LExpM30->SetMaximum(472.1);
   Graph_LExpM30->SetDirectory(0);
   Graph_LExpM30->SetStats(0);

   ci = TColor::GetColor("#0000ff");
   Graph_LExpM30->SetLineColor(ci);
   Graph_LExpM30->GetXaxis()->SetLabelSize(0.035);
   Graph_LExpM30->GetYaxis()->SetLabelSize(0.035);
   Graph_LExpM30->GetYaxis()->SetTitleOffset(1.2);
   graph->SetHistogram(Graph_LExpM30);
   
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
   
   TH1F *Graph_LExpP31 = new TH1F("Graph_LExpP31","LExpP",100,166.7,230.3);
   Graph_LExpP31->SetMinimum(488.9);
   Graph_LExpP31->SetMaximum(490.1);
   Graph_LExpP31->SetDirectory(0);
   Graph_LExpP31->SetStats(0);

   ci = TColor::GetColor("#0000ff");
   Graph_LExpP31->SetLineColor(ci);
   Graph_LExpP31->GetXaxis()->SetLabelSize(0.035);
   Graph_LExpP31->GetYaxis()->SetLabelSize(0.035);
   Graph_LExpP31->GetYaxis()->SetTitleOffset(1.2);
   graph->SetHistogram(Graph_LExpP31);
   
   graph->Draw("l");
   cCONT_->Modified();
   cCONT_->cd();
   cCONT_->SetSelected(cCONT_);
}
