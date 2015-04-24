{
//=========Macro generated from canvas: cCONT_/cCONT_
//=========  (Thu Apr 23 17:01:06 2015) by ROOT version5.34/03
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
   
   TH2D *h_ul_xsec_obs_smoothEMPTY = new TH2D("h_ul_xsec_obs_smoothEMPTY","Observed razor #sigma #times Branching Fraction (t2tb_br0p5)EMPTY",31,137.5,912.5,29,-12.5,712.5);

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
   
   TH1F *Graph_diagonal17 = new TH1F("Graph_diagonal17","Graph",100,0,22000);
   Graph_diagonal17->SetMinimum(-2100);
   Graph_diagonal17->SetMaximum(21900);
   Graph_diagonal17->SetDirectory(0);
   Graph_diagonal17->SetStats(0);

   ci = TColor::GetColor("#0000ff");
   Graph_diagonal17->SetLineColor(ci);
   Graph_diagonal17->GetXaxis()->SetLabelSize(0.035);
   Graph_diagonal17->GetYaxis()->SetLabelSize(0.035);
   Graph_diagonal17->GetYaxis()->SetTitleOffset(1.2);
   graph->SetHistogram(Graph_diagonal17);
   
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
   
   TH1F *Graph_Graph_diagonal1718 = new TH1F("Graph_Graph_diagonal1718","Graph",100,0,22000);
   Graph_Graph_diagonal1718->SetMinimum(-2100);
   Graph_Graph_diagonal1718->SetMaximum(21900);
   Graph_Graph_diagonal1718->SetDirectory(0);
   Graph_Graph_diagonal1718->SetStats(0);

   ci = TColor::GetColor("#0000ff");
   Graph_Graph_diagonal1718->SetLineColor(ci);
   Graph_Graph_diagonal1718->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_diagonal1718->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_diagonal1718->GetYaxis()->SetTitleOffset(1.2);
   graph->SetHistogram(Graph_Graph_diagonal1718);
   
   graph->Draw("l");
   
   graph = new TGraph(37);
   graph->SetName("g_excl_xsec_obs");
   graph->SetTitle("g_excl_xsec_obs");

   ci = TColor::GetColor("#cccccc");
   graph->SetFillColor(ci);
   graph->SetLineWidth(4);
   graph->SetPoint(0,607.568063,0);
   graph->SetPoint(1,625,17.51767774);
   graph->SetPoint(2,632.3745294,25);
   graph->SetPoint(3,650,43.92557286);
   graph->SetPoint(4,655.0730225,50);
   graph->SetPoint(5,671.0976969,75);
   graph->SetPoint(6,675,94.68644232);
   graph->SetPoint(7,676.0343149,100);
   graph->SetPoint(8,677.1901081,125);
   graph->SetPoint(9,675,132.8389689);
   graph->SetPoint(10,667.8887477,150);
   graph->SetPoint(11,650,174.6278146);
   graph->SetPoint(12,649.753943,175);
   graph->SetPoint(13,625,194.7387849);
   graph->SetPoint(14,614.3854698,200);
   graph->SetPoint(15,600,204.2035469);
   graph->SetPoint(16,575,205.1521672);
   graph->SetPoint(17,558.1649538,200);
   graph->SetPoint(18,550,196.8332582);
   graph->SetPoint(19,525,184.6229271);
   graph->SetPoint(20,500,176.6555083);
   graph->SetPoint(21,496.4622325,175);
   graph->SetPoint(22,475,160.875472);
   graph->SetPoint(23,458.2358687,150);
   graph->SetPoint(24,450,143.5581111);
   graph->SetPoint(25,425,125.0067099);
   graph->SetPoint(26,424.992006,125);
   graph->SetPoint(27,400,102.200937);
   graph->SetPoint(28,397.5294591,100);
   graph->SetPoint(29,378.4987477,75);
   graph->SetPoint(30,375,67.88482346);
   graph->SetPoint(31,362.2535476,50);
   graph->SetPoint(32,362.2214773,25);
   graph->SetPoint(33,375,4.22293486);
   graph->SetPoint(34,379.1608609,0);
   graph->SetPoint(35,1300,-1300);
   graph->SetPoint(36,-1300,-1300);
   
   TH1F *Graph_g_excl_xsec_obs19 = new TH1F("Graph_g_excl_xsec_obs19","g_excl_xsec_obs",100,-1560,1560);
   Graph_g_excl_xsec_obs19->SetMinimum(-1450.515);
   Graph_g_excl_xsec_obs19->SetMaximum(355.6674);
   Graph_g_excl_xsec_obs19->SetDirectory(0);
   Graph_g_excl_xsec_obs19->SetStats(0);

   ci = TColor::GetColor("#0000ff");
   Graph_g_excl_xsec_obs19->SetLineColor(ci);
   Graph_g_excl_xsec_obs19->GetXaxis()->SetLabelSize(0.035);
   Graph_g_excl_xsec_obs19->GetYaxis()->SetLabelSize(0.035);
   Graph_g_excl_xsec_obs19->GetYaxis()->SetTitleOffset(1.2);
   graph->SetHistogram(Graph_g_excl_xsec_obs19);
   
   graph->Draw("f");
   
   graph = new TGraph(36);
   graph->SetName("g_excl_xsec_exp");
   graph->SetTitle("g_excl_xsec_exp");

   ci = TColor::GetColor("#ff807e");
   graph->SetFillColor(ci);

   ci = TColor::GetColor("#ff0000");
   graph->SetLineColor(ci);
   graph->SetLineStyle(7);
   graph->SetLineWidth(4);
   graph->SetPoint(0,613.2908531,0);
   graph->SetPoint(1,625,14.25597387);
   graph->SetPoint(2,633.7587963,25);
   graph->SetPoint(3,650,43.42376511);
   graph->SetPoint(4,655.4263101,50);
   graph->SetPoint(5,669.6385003,75);
   graph->SetPoint(6,675,99.08929278);
   graph->SetPoint(7,675.1714349,100);
   graph->SetPoint(8,676.1665161,125);
   graph->SetPoint(9,675,131.3162446);
   graph->SetPoint(10,670.8030897,150);
   graph->SetPoint(11,661.9392925,175);
   graph->SetPoint(12,650,198.8256717);
   graph->SetPoint(13,649.2077333,200);
   graph->SetPoint(14,625.3173335,225);
   graph->SetPoint(15,625,225.16087);
   graph->SetPoint(16,600,230.1339648);
   graph->SetPoint(17,575,227.0367702);
   graph->SetPoint(18,569.2930469,225);
   graph->SetPoint(19,550,216.3123418);
   graph->SetPoint(20,525,202.9341061);
   graph->SetPoint(21,519.8974328,200);
   graph->SetPoint(22,500,186.9704243);
   graph->SetPoint(23,478.6593433,175);
   graph->SetPoint(24,475,172.5979187);
   graph->SetPoint(25,450,153.9255771);
   graph->SetPoint(26,444.997577,150);
   graph->SetPoint(27,425,131.9972615);
   graph->SetPoint(28,417.3455355,125);
   graph->SetPoint(29,400,107.9877888);
   graph->SetPoint(30,390.9858702,100);
   graph->SetPoint(31,375,81.16960713);
   graph->SetPoint(32,369.3053086,75);
   graph->SetPoint(33,356.7839493,50);
   graph->SetPoint(34,360.4552234,25);
   graph->SetPoint(35,370.8980913,0);
   
   TH1F *Graph_Graph_g_excl_xsec_exp320 = new TH1F("Graph_Graph_g_excl_xsec_exp320","g_excl_xsec_exp",100,324.8457,708.1048);
   Graph_Graph_g_excl_xsec_exp320->SetMinimum(0);
   Graph_Graph_g_excl_xsec_exp320->SetMaximum(253.1474);
   Graph_Graph_g_excl_xsec_exp320->SetDirectory(0);
   Graph_Graph_g_excl_xsec_exp320->SetStats(0);

   ci = TColor::GetColor("#0000ff");
   Graph_Graph_g_excl_xsec_exp320->SetLineColor(ci);
   Graph_Graph_g_excl_xsec_exp320->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_g_excl_xsec_exp320->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_g_excl_xsec_exp320->GetYaxis()->SetTitleOffset(1.2);
   graph->SetHistogram(Graph_Graph_g_excl_xsec_exp320);
   
   graph->Draw("l");
   
   graph = new TGraph(30);
   graph->SetName("g_excl_xsec_exp_p1");
   graph->SetTitle("g_excl_xsec_exp_p1");

   ci = TColor::GetColor("#ff807e");
   graph->SetFillColor(ci);

   ci = TColor::GetColor("#ff0000");
   graph->SetLineColor(ci);
   graph->SetLineStyle(7);
   graph->SetLineWidth(2);
   graph->SetPoint(0,563.0329788,0);
   graph->SetPoint(1,575,8.41949014);
   graph->SetPoint(2,593.2490915,25);
   graph->SetPoint(3,600,31.42910545);
   graph->SetPoint(4,617.760325,50);
   graph->SetPoint(5,625,63.74969389);
   graph->SetPoint(6,630.2053376,75);
   graph->SetPoint(7,630.5851257,100);
   graph->SetPoint(8,627.9304912,125);
   graph->SetPoint(9,625,137.4589066);
   graph->SetPoint(10,621.4488075,150);
   graph->SetPoint(11,607.0495979,175);
   graph->SetPoint(12,600,181.8406401);
   graph->SetPoint(13,575,192.3348994);
   graph->SetPoint(14,550,186.1929123);
   graph->SetPoint(15,525,176.6158091);
   graph->SetPoint(16,520.9514383,175);
   graph->SetPoint(17,500,165.7969346);
   graph->SetPoint(18,475,153.0816015);
   graph->SetPoint(19,470.0101254,150);
   graph->SetPoint(20,450,134.7641674);
   graph->SetPoint(21,438.3322381,125);
   graph->SetPoint(22,425,112.4564546);
   graph->SetPoint(23,412.3233456,100);
   graph->SetPoint(24,400,84.78981218);
   graph->SetPoint(25,392.5191461,75);
   graph->SetPoint(26,383.3149516,50);
   graph->SetPoint(27,390.9501836,25);
   graph->SetPoint(28,400,11.12854642);
   graph->SetPoint(29,410.5894113,0);
   
   TH1F *Graph_Graph_g_excl_xsec_exp_p1421 = new TH1F("Graph_Graph_g_excl_xsec_exp_p1421","g_excl_xsec_exp_p1",100,358.5879,655.3121);
   Graph_Graph_g_excl_xsec_exp_p1421->SetMinimum(0);
   Graph_Graph_g_excl_xsec_exp_p1421->SetMaximum(211.5684);
   Graph_Graph_g_excl_xsec_exp_p1421->SetDirectory(0);
   Graph_Graph_g_excl_xsec_exp_p1421->SetStats(0);

   ci = TColor::GetColor("#0000ff");
   Graph_Graph_g_excl_xsec_exp_p1421->SetLineColor(ci);
   Graph_Graph_g_excl_xsec_exp_p1421->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_g_excl_xsec_exp_p1421->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_g_excl_xsec_exp_p1421->GetYaxis()->SetTitleOffset(1.2);
   graph->SetHistogram(Graph_Graph_g_excl_xsec_exp_p1421);
   
   graph->Draw("l");
   
   graph = new TGraph(39);
   graph->SetName("g_excl_xsec_exp_m1");
   graph->SetTitle("g_excl_xsec_exp_m1");

   ci = TColor::GetColor("#ff807e");
   graph->SetFillColor(ci);

   ci = TColor::GetColor("#ff0000");
   graph->SetLineColor(ci);
   graph->SetLineStyle(7);
   graph->SetLineWidth(2);
   graph->SetPoint(0,654.3751032,0);
   graph->SetPoint(1,670.2474928,25);
   graph->SetPoint(2,675,33.16226912);
   graph->SetPoint(3,684.1528923,50);
   graph->SetPoint(4,696.8792699,75);
   graph->SetPoint(5,700,85.87778332);
   graph->SetPoint(6,703.8062548,100);
   graph->SetPoint(7,707.5258804,125);
   graph->SetPoint(8,708.2618417,150);
   graph->SetPoint(9,700,169.9379367);
   graph->SetPoint(10,697.8292563,175);
   graph->SetPoint(11,689.2269972,200);
   graph->SetPoint(12,676.1475872,225);
   graph->SetPoint(13,675,227.0346992);
   graph->SetPoint(14,658.7948474,250);
   graph->SetPoint(15,650,256.0212183);
   graph->SetPoint(16,625,257.6606668);
   graph->SetPoint(17,600,256.6346329);
   graph->SetPoint(18,580.4712193,250);
   graph->SetPoint(19,575,247.9873926);
   graph->SetPoint(20,550,232.9095045);
   graph->SetPoint(21,537.1964938,225);
   graph->SetPoint(22,525,215.9433378);
   graph->SetPoint(23,500,200.4342317);
   graph->SetPoint(24,499.1849133,200);
   graph->SetPoint(25,475,184.1745675);
   graph->SetPoint(26,461.5941852,175);
   graph->SetPoint(27,450,165.7980505);
   graph->SetPoint(28,429.874307,150);
   graph->SetPoint(29,425,145.5507153);
   graph->SetPoint(30,403.0550276,125);
   graph->SetPoint(31,400,121.9615115);
   graph->SetPoint(32,375,101.2562431);
   graph->SetPoint(33,373.4367126,100);
   graph->SetPoint(34,350.7093939,75);
   graph->SetPoint(35,350,73.75718486);
   graph->SetPoint(36,337.6532944,50);
   graph->SetPoint(37,334.1406098,25);
   graph->SetPoint(38,344.5906656,0);
   
   TH1F *Graph_Graph_g_excl_xsec_exp_m1522 = new TH1F("Graph_Graph_g_excl_xsec_exp_m1522","g_excl_xsec_exp_m1",100,296.7285,745.674);
   Graph_Graph_g_excl_xsec_exp_m1522->SetMinimum(0);
   Graph_Graph_g_excl_xsec_exp_m1522->SetMaximum(283.4267);
   Graph_Graph_g_excl_xsec_exp_m1522->SetDirectory(0);
   Graph_Graph_g_excl_xsec_exp_m1522->SetStats(0);

   ci = TColor::GetColor("#0000ff");
   Graph_Graph_g_excl_xsec_exp_m1522->SetLineColor(ci);
   Graph_Graph_g_excl_xsec_exp_m1522->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_g_excl_xsec_exp_m1522->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_g_excl_xsec_exp_m1522->GetYaxis()->SetTitleOffset(1.2);
   graph->SetHistogram(Graph_Graph_g_excl_xsec_exp_m1522);
   
   graph->Draw("l");
   
   graph = new TGraph(37);
   graph->SetName("g_excl_xsec_obs");
   graph->SetTitle("g_excl_xsec_obs");

   ci = TColor::GetColor("#cccccc");
   graph->SetFillColor(ci);
   graph->SetLineWidth(4);
   graph->SetPoint(0,607.568063,0);
   graph->SetPoint(1,625,17.51767774);
   graph->SetPoint(2,632.3745294,25);
   graph->SetPoint(3,650,43.92557286);
   graph->SetPoint(4,655.0730225,50);
   graph->SetPoint(5,671.0976969,75);
   graph->SetPoint(6,675,94.68644232);
   graph->SetPoint(7,676.0343149,100);
   graph->SetPoint(8,677.1901081,125);
   graph->SetPoint(9,675,132.8389689);
   graph->SetPoint(10,667.8887477,150);
   graph->SetPoint(11,650,174.6278146);
   graph->SetPoint(12,649.753943,175);
   graph->SetPoint(13,625,194.7387849);
   graph->SetPoint(14,614.3854698,200);
   graph->SetPoint(15,600,204.2035469);
   graph->SetPoint(16,575,205.1521672);
   graph->SetPoint(17,558.1649538,200);
   graph->SetPoint(18,550,196.8332582);
   graph->SetPoint(19,525,184.6229271);
   graph->SetPoint(20,500,176.6555083);
   graph->SetPoint(21,496.4622325,175);
   graph->SetPoint(22,475,160.875472);
   graph->SetPoint(23,458.2358687,150);
   graph->SetPoint(24,450,143.5581111);
   graph->SetPoint(25,425,125.0067099);
   graph->SetPoint(26,424.992006,125);
   graph->SetPoint(27,400,102.200937);
   graph->SetPoint(28,397.5294591,100);
   graph->SetPoint(29,378.4987477,75);
   graph->SetPoint(30,375,67.88482346);
   graph->SetPoint(31,362.2535476,50);
   graph->SetPoint(32,362.2214773,25);
   graph->SetPoint(33,375,4.22293486);
   graph->SetPoint(34,379.1608609,0);
   graph->SetPoint(35,1300,-1300);
   graph->SetPoint(36,-1300,-1300);
   
   TH1F *Graph_Graph_g_excl_xsec_obs1923 = new TH1F("Graph_Graph_g_excl_xsec_obs1923","g_excl_xsec_obs",100,-1560,1560);
   Graph_Graph_g_excl_xsec_obs1923->SetMinimum(-1450.515);
   Graph_Graph_g_excl_xsec_obs1923->SetMaximum(355.6674);
   Graph_Graph_g_excl_xsec_obs1923->SetDirectory(0);
   Graph_Graph_g_excl_xsec_obs1923->SetStats(0);

   ci = TColor::GetColor("#0000ff");
   Graph_Graph_g_excl_xsec_obs1923->SetLineColor(ci);
   Graph_Graph_g_excl_xsec_obs1923->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_g_excl_xsec_obs1923->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_g_excl_xsec_obs1923->GetYaxis()->SetTitleOffset(1.2);
   graph->SetHistogram(Graph_Graph_g_excl_xsec_obs1923);
   
   graph->Draw("l");
   
   graph = new TGraph(37);
   graph->SetName("g_excl_xsec_obs_p1");
   graph->SetTitle("g_excl_xsec_obs_p1");

   ci = TColor::GetColor("#ff807e");
   graph->SetFillColor(ci);
   graph->SetLineWidth(2);
   graph->SetPoint(0,642.6552223,0);
   graph->SetPoint(1,650,7.19151752);
   graph->SetPoint(2,667.6415188,25);
   graph->SetPoint(3,675,33.52098328);
   graph->SetPoint(4,690.9137568,50);
   graph->SetPoint(5,700,62.13995576);
   graph->SetPoint(6,708.4866281,75);
   graph->SetPoint(7,713.7271624,100);
   graph->SetPoint(8,711.1847095,125);
   graph->SetPoint(9,707.1273177,150);
   graph->SetPoint(10,700,164.3180565);
   graph->SetPoint(11,693.4083988,175);
   graph->SetPoint(12,675,195.1131202);
   graph->SetPoint(13,669.1519721,200);
   graph->SetPoint(14,650,210.1993722);
   graph->SetPoint(15,625,220.8081061);
   graph->SetPoint(16,600,223.4981767);
   graph->SetPoint(17,575,219.0748159);
   graph->SetPoint(18,550,207.6265697);
   graph->SetPoint(19,531.7866072,200);
   graph->SetPoint(20,525,196.3526163);
   graph->SetPoint(21,500,184.8001106);
   graph->SetPoint(22,479.3500048,175);
   graph->SetPoint(23,475,172.1041038);
   graph->SetPoint(24,450,154.1003131);
   graph->SetPoint(25,444.6048793,150);
   graph->SetPoint(26,425,133.7027948);
   graph->SetPoint(27,414.5470475,125);
   graph->SetPoint(28,400,111.8098297);
   graph->SetPoint(29,386.7520719,100);
   graph->SetPoint(30,375,85.68305508);
   graph->SetPoint(31,362.1632622,75);
   graph->SetPoint(32,350,60.48878163);
   graph->SetPoint(33,342.7843009,50);
   graph->SetPoint(34,340.9273866,25);
   graph->SetPoint(35,350,5.224342708);
   graph->SetPoint(36,353.1597003,0);
   
   TH1F *Graph_Graph_g_excl_xsec_obs_p1724 = new TH1F("Graph_Graph_g_excl_xsec_obs_p1724","g_excl_xsec_obs_p1",100,303.6474,751.0071);
   Graph_Graph_g_excl_xsec_obs_p1724->SetMinimum(0);
   Graph_Graph_g_excl_xsec_obs_p1724->SetMaximum(245.848);
   Graph_Graph_g_excl_xsec_obs_p1724->SetDirectory(0);
   Graph_Graph_g_excl_xsec_obs_p1724->SetStats(0);

   ci = TColor::GetColor("#0000ff");
   Graph_Graph_g_excl_xsec_obs_p1724->SetLineColor(ci);
   Graph_Graph_g_excl_xsec_obs_p1724->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_g_excl_xsec_obs_p1724->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_g_excl_xsec_obs_p1724->GetYaxis()->SetTitleOffset(1.2);
   graph->SetHistogram(Graph_Graph_g_excl_xsec_obs_p1724);
   
   graph->Draw("l");
   
   graph = new TGraph(31);
   graph->SetName("g_excl_xsec_obs_m1");
   graph->SetTitle("g_excl_xsec_obs_m1");

   ci = TColor::GetColor("#ff807e");
   graph->SetFillColor(ci);
   graph->SetLineWidth(2);
   graph->SetPoint(0,559.9242457,0);
   graph->SetPoint(1,575,7.964388878);
   graph->SetPoint(2,596.9206286,25);
   graph->SetPoint(3,600,27.66642432);
   graph->SetPoint(4,619.5807781,50);
   graph->SetPoint(5,625,61.84900086);
   graph->SetPoint(6,631.7497261,75);
   graph->SetPoint(7,635.1327594,100);
   graph->SetPoint(8,629.9077033,125);
   graph->SetPoint(9,625,142.0200863);
   graph->SetPoint(10,622.3297655,150);
   graph->SetPoint(11,602.5385337,175);
   graph->SetPoint(12,600,176.4489472);
   graph->SetPoint(13,575,184.8525289);
   graph->SetPoint(14,550,179.6193386);
   graph->SetPoint(15,534.8401471,175);
   graph->SetPoint(16,525,170.654703);
   graph->SetPoint(17,500,162.2303572);
   graph->SetPoint(18,475.9676613,150);
   graph->SetPoint(19,475,149.3254847);
   graph->SetPoint(20,450,130.4163833);
   graph->SetPoint(21,442.619901,125);
   graph->SetPoint(22,425,107.982953);
   graph->SetPoint(23,415.6601006,100);
   graph->SetPoint(24,400,78.80898364);
   graph->SetPoint(25,397.3799957,75);
   graph->SetPoint(26,386.3430543,50);
   graph->SetPoint(27,390.9783685,25);
   graph->SetPoint(28,400,15.87221053);
   graph->SetPoint(29,425,2.258678829);
   graph->SetPoint(30,431.7754092,0);
   
   TH1F *Graph_Graph_g_excl_xsec_obs_m1825 = new TH1F("Graph_Graph_g_excl_xsec_obs_m1825","g_excl_xsec_obs_m1",100,361.4641,660.0117);
   Graph_Graph_g_excl_xsec_obs_m1825->SetMinimum(0);
   Graph_Graph_g_excl_xsec_obs_m1825->SetMaximum(203.3378);
   Graph_Graph_g_excl_xsec_obs_m1825->SetDirectory(0);
   Graph_Graph_g_excl_xsec_obs_m1825->SetStats(0);

   ci = TColor::GetColor("#0000ff");
   Graph_Graph_g_excl_xsec_obs_m1825->SetLineColor(ci);
   Graph_Graph_g_excl_xsec_obs_m1825->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_g_excl_xsec_obs_m1825->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_g_excl_xsec_obs_m1825->GetYaxis()->SetTitleOffset(1.2);
   graph->SetHistogram(Graph_Graph_g_excl_xsec_obs_m1825);
   
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
   TLatex *   tex = new TLatex(0.25,0.98,"CMS, L = 19.4 fb^{-1}, #sqrt{s} = 8 TeV");
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
      tex = new TLatex(0.18,0.7,"Razor 0L");
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
   
   TH1F *Graph_LExp31 = new TH1F("Graph_LExp31","LExp",100,166.7,230.3);
   Graph_LExp31->SetMinimum(479.9);
   Graph_LExp31->SetMaximum(481.1);
   Graph_LExp31->SetDirectory(0);
   Graph_LExp31->SetStats(0);

   ci = TColor::GetColor("#0000ff");
   Graph_LExp31->SetLineColor(ci);
   Graph_LExp31->GetXaxis()->SetLabelSize(0.035);
   Graph_LExp31->GetYaxis()->SetLabelSize(0.035);
   Graph_LExp31->GetYaxis()->SetTitleOffset(1.2);
   graph->SetHistogram(Graph_LExp31);
   
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
   
   TH1F *Graph_LExpM32 = new TH1F("Graph_LExpM32","LExpM",100,166.7,230.3);
   Graph_LExpM32->SetMinimum(470.9);
   Graph_LExpM32->SetMaximum(472.1);
   Graph_LExpM32->SetDirectory(0);
   Graph_LExpM32->SetStats(0);

   ci = TColor::GetColor("#0000ff");
   Graph_LExpM32->SetLineColor(ci);
   Graph_LExpM32->GetXaxis()->SetLabelSize(0.035);
   Graph_LExpM32->GetYaxis()->SetLabelSize(0.035);
   Graph_LExpM32->GetYaxis()->SetTitleOffset(1.2);
   graph->SetHistogram(Graph_LExpM32);
   
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
   
   TH1F *Graph_LExpP33 = new TH1F("Graph_LExpP33","LExpP",100,166.7,230.3);
   Graph_LExpP33->SetMinimum(488.9);
   Graph_LExpP33->SetMaximum(490.1);
   Graph_LExpP33->SetDirectory(0);
   Graph_LExpP33->SetStats(0);

   ci = TColor::GetColor("#0000ff");
   Graph_LExpP33->SetLineColor(ci);
   Graph_LExpP33->GetXaxis()->SetLabelSize(0.035);
   Graph_LExpP33->GetYaxis()->SetLabelSize(0.035);
   Graph_LExpP33->GetYaxis()->SetTitleOffset(1.2);
   graph->SetHistogram(Graph_LExpP33);
   
   graph->Draw("l");
   cCONT_->Modified();
   cCONT_->cd();
   cCONT_->SetSelected(cCONT_);
}
