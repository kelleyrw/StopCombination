{
//=========Macro generated from canvas: cCONT_/cCONT_
//=========  (Thu Apr 23 07:28:00 2015) by ROOT version5.34/03
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
   
   TH2D *h_ul_xsec_obs_smoothEMPTY = new TH2D("h_ul_xsec_obs_smoothEMPTY","Observed onelep #sigma #times Branching Fraction (t2tb_br0p7)EMPTY",31,137.5,912.5,29,-12.5,712.5);

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
   
   graph = new TGraph(53);
   graph->SetName("g_excl_xsec_obs");
   graph->SetTitle("g_excl_xsec_obs");

   ci = TColor::GetColor("#cccccc");
   graph->SetFillColor(ci);
   graph->SetLineWidth(4);
   graph->SetPoint(0,100,0.2368427476);
   graph->SetPoint(1,125,13.14569004);
   graph->SetPoint(2,135.9718729,25);
   graph->SetPoint(3,150,44.97506456);
   graph->SetPoint(4,155.8269757,50);
   graph->SetPoint(5,175,57.76065985);
   graph->SetPoint(6,192.7546954,75);
   graph->SetPoint(7,200,85.34012849);
   graph->SetPoint(8,218.2105524,100);
   graph->SetPoint(9,225,105.6515986);
   graph->SetPoint(10,250,118.3713754);
   graph->SetPoint(11,250.0074832,100);
   graph->SetPoint(12,250,99.98725956);
   graph->SetPoint(13,225.0291063,75);
   graph->SetPoint(14,225,74.94820896);
   graph->SetPoint(15,200.0619373,50);
   graph->SetPoint(16,200,49.88397636);
   graph->SetPoint(17,175.1138261,25);
   graph->SetPoint(18,175,24.77285856);
   graph->SetPoint(19,150.1821855,0);
   graph->SetPoint(20,150,-12.5);
   graph->SetPoint(21,175,-12.5);
   graph->SetPoint(22,200,-12.5);
   graph->SetPoint(23,199.999174,0);
   graph->SetPoint(24,200,0.000825989432);
   graph->SetPoint(25,224.9997159,25);
   graph->SetPoint(26,225,25.0002841);
   graph->SetPoint(27,249.9997658,50);
   graph->SetPoint(28,250,50.0002342);
   graph->SetPoint(29,274.9999503,75);
   graph->SetPoint(30,275,75.00004971);
   graph->SetPoint(31,300,92.16915974);
   graph->SetPoint(32,310.3755583,100);
   graph->SetPoint(33,325,108.9024472);
   graph->SetPoint(34,347.4169586,125);
   graph->SetPoint(35,350,126.5682409);
   graph->SetPoint(36,375,140.6963284);
   graph->SetPoint(37,391.8248128,150);
   graph->SetPoint(38,400,153.8272729);
   graph->SetPoint(39,425,158.5367122);
   graph->SetPoint(40,450,160.6251471);
   graph->SetPoint(41,475,161.4213174);
   graph->SetPoint(42,500,161.0971989);
   graph->SetPoint(43,519.908762,150);
   graph->SetPoint(44,525,145.0959442);
   graph->SetPoint(45,535.3952495,125);
   graph->SetPoint(46,540.0983228,100);
   graph->SetPoint(47,544.4728114,75);
   graph->SetPoint(48,549.551222,50);
   graph->SetPoint(49,549.1106529,25);
   graph->SetPoint(50,546.3140509,0);
   graph->SetPoint(51,1300,-1300);
   graph->SetPoint(52,-1300,-1300);
   
   TH1F *Graph_g_excl_xsec_obs19 = new TH1F("Graph_g_excl_xsec_obs19","g_excl_xsec_obs",100,-1560,1560);
   Graph_g_excl_xsec_obs19->SetMinimum(-1446.142);
   Graph_g_excl_xsec_obs19->SetMaximum(307.5634);
   Graph_g_excl_xsec_obs19->SetDirectory(0);
   Graph_g_excl_xsec_obs19->SetStats(0);

   ci = TColor::GetColor("#0000ff");
   Graph_g_excl_xsec_obs19->SetLineColor(ci);
   Graph_g_excl_xsec_obs19->GetXaxis()->SetLabelSize(0.035);
   Graph_g_excl_xsec_obs19->GetYaxis()->SetLabelSize(0.035);
   Graph_g_excl_xsec_obs19->GetYaxis()->SetTitleOffset(1.2);
   graph->SetHistogram(Graph_g_excl_xsec_obs19);
   
   graph->Draw("f");
   
   graph = new TGraph(50);
   graph->SetName("g_excl_xsec_exp");
   graph->SetTitle("g_excl_xsec_exp");
   graph->SetFillColor(1);

   ci = TColor::GetColor("#ff0000");
   graph->SetLineColor(ci);
   graph->SetLineStyle(7);
   graph->SetLineWidth(4);
   graph->SetPoint(0,100,0.02847877644);
   graph->SetPoint(1,125,8.229296113);
   graph->SetPoint(2,140.5474853,25);
   graph->SetPoint(3,150,38.45506387);
   graph->SetPoint(4,163.3439385,50);
   graph->SetPoint(5,175,54.83264691);
   graph->SetPoint(6,195.7702392,75);
   graph->SetPoint(7,200,80.91817331);
   graph->SetPoint(8,223.5915192,100);
   graph->SetPoint(9,225,101.2015508);
   graph->SetPoint(10,250,101.867095);
   graph->SetPoint(11,250.0009134,100);
   graph->SetPoint(12,250,99.99844454);
   graph->SetPoint(13,225.0214616,75);
   graph->SetPoint(14,225,74.96180264);
   graph->SetPoint(15,200.049967,50);
   graph->SetPoint(16,200,49.90636046);
   graph->SetPoint(17,175.0916904,25);
   graph->SetPoint(18,175,24.81686837);
   graph->SetPoint(19,150.1275505,0);
   graph->SetPoint(20,150,-12.5);
   graph->SetPoint(21,175,-12.5);
   graph->SetPoint(22,200,-12.5);
   graph->SetPoint(23,199.9994796,0);
   graph->SetPoint(24,200,0.0005204015922);
   graph->SetPoint(25,225,24.68564228);
   graph->SetPoint(26,225.3240499,25);
   graph->SetPoint(27,250,47.11284212);
   graph->SetPoint(28,252.7714061,50);
   graph->SetPoint(29,275,64.98867457);
   graph->SetPoint(30,288.7140168,75);
   graph->SetPoint(31,300,80.93397764);
   graph->SetPoint(32,325,97.0946382);
   graph->SetPoint(33,329.6358448,100);
   graph->SetPoint(34,350,109.7520347);
   graph->SetPoint(35,375,122.8098512);
   graph->SetPoint(36,381.6202578,125);
   graph->SetPoint(37,400,129.8487764);
   graph->SetPoint(38,425,134.5415996);
   graph->SetPoint(39,450,135.4780243);
   graph->SetPoint(40,475,131.6464513);
   graph->SetPoint(41,490.8024972,125);
   graph->SetPoint(42,500,118.7357036);
   graph->SetPoint(43,513.9263954,100);
   graph->SetPoint(44,523.159452,75);
   graph->SetPoint(45,525,68.40427723);
   graph->SetPoint(46,529.0926397,50);
   graph->SetPoint(47,528.8397798,25);
   graph->SetPoint(48,525,4.702000793);
   graph->SetPoint(49,523.9037815,0);
   
   TH1F *Graph_Graph_g_excl_xsec_exp320 = new TH1F("Graph_Graph_g_excl_xsec_exp320","g_excl_xsec_exp",100,57.09074,572.0019);
   Graph_Graph_g_excl_xsec_exp320->SetMinimum(-27.2978);
   Graph_Graph_g_excl_xsec_exp320->SetMaximum(150.2758);
   Graph_Graph_g_excl_xsec_exp320->SetDirectory(0);
   Graph_Graph_g_excl_xsec_exp320->SetStats(0);

   ci = TColor::GetColor("#0000ff");
   Graph_Graph_g_excl_xsec_exp320->SetLineColor(ci);
   Graph_Graph_g_excl_xsec_exp320->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_g_excl_xsec_exp320->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_g_excl_xsec_exp320->GetYaxis()->SetTitleOffset(1.2);
   graph->SetHistogram(Graph_Graph_g_excl_xsec_exp320);
   
   graph->Draw("l");
   
   graph = new TGraph(22);
   graph->SetName("g_excl_xsec_exp_p1");
   graph->SetTitle("g_excl_xsec_exp_p1");
   graph->SetFillColor(1);

   ci = TColor::GetColor("#ff0000");
   graph->SetLineColor(ci);
   graph->SetLineStyle(7);
   graph->SetLineWidth(2);
   graph->SetPoint(0,119.8332039,0);
   graph->SetPoint(1,125,1.492750277);
   graph->SetPoint(2,147.3011899,0);
   graph->SetPoint(3,150,-12.5);
   graph->SetPoint(4,175,-12.5);
   graph->SetPoint(5,200,-12.5);
   graph->SetPoint(6,256.0516898,0);
   graph->SetPoint(7,267.4473384,25);
   graph->SetPoint(8,275,32.98723898);
   graph->SetPoint(9,290.8614711,50);
   graph->SetPoint(10,300,56.5790837);
   graph->SetPoint(11,324.7552174,75);
   graph->SetPoint(12,325,75.14592357);
   graph->SetPoint(13,350,86.94942182);
   graph->SetPoint(14,375,96.37468915);
   graph->SetPoint(15,400,97.09407159);
   graph->SetPoint(16,425,87.17579313);
   graph->SetPoint(17,450,77.10308673);
   graph->SetPoint(18,452.7414024,75);
   graph->SetPoint(19,467.4717446,50);
   graph->SetPoint(20,470.2811056,25);
   graph->SetPoint(21,460.0159213,0);
   
   TH1F *Graph_Graph_g_excl_xsec_exp_p1421 = new TH1F("Graph_Graph_g_excl_xsec_exp_p1421","g_excl_xsec_exp_p1",100,84.78841,505.3259);
   Graph_Graph_g_excl_xsec_exp_p1421->SetMinimum(-23.45941);
   Graph_Graph_g_excl_xsec_exp_p1421->SetMaximum(108.0535);
   Graph_Graph_g_excl_xsec_exp_p1421->SetDirectory(0);
   Graph_Graph_g_excl_xsec_exp_p1421->SetStats(0);

   ci = TColor::GetColor("#0000ff");
   Graph_Graph_g_excl_xsec_exp_p1421->SetLineColor(ci);
   Graph_Graph_g_excl_xsec_exp_p1421->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_g_excl_xsec_exp_p1421->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_g_excl_xsec_exp_p1421->GetYaxis()->SetTitleOffset(1.2);
   graph->SetHistogram(Graph_Graph_g_excl_xsec_exp_p1421);
   
   graph->Draw("l");
   
   graph = new TGraph(56);
   graph->SetName("g_excl_xsec_exp_m1");
   graph->SetTitle("g_excl_xsec_exp_m1");
   graph->SetFillColor(1);

   ci = TColor::GetColor("#ff0000");
   graph->SetLineColor(ci);
   graph->SetLineStyle(7);
   graph->SetLineWidth(2);
   graph->SetPoint(0,100,0.3764010862);
   graph->SetPoint(1,125,18.40513674);
   graph->SetPoint(2,131.0836459,25);
   graph->SetPoint(3,149.9670528,50);
   graph->SetPoint(4,150,50.03294721);
   graph->SetPoint(5,175,60.52584371);
   graph->SetPoint(6,189.9068485,75);
   graph->SetPoint(7,200,89.53772964);
   graph->SetPoint(8,213.0254702,100);
   graph->SetPoint(9,225,109.8541756);
   graph->SetPoint(10,246.5615799,125);
   graph->SetPoint(11,250,126.0199884);
   graph->SetPoint(12,275,133.6068099);
   graph->SetPoint(13,275.0031595,125);
   graph->SetPoint(14,275,124.9948085);
   graph->SetPoint(15,250.0119437,100);
   graph->SetPoint(16,250,99.97966792);
   graph->SetPoint(17,225.0342002,75);
   graph->SetPoint(18,225,74.93915473);
   graph->SetPoint(19,200.0700616,50);
   graph->SetPoint(20,200,49.86879499);
   graph->SetPoint(21,175.1285613,25);
   graph->SetPoint(22,175,24.74360527);
   graph->SetPoint(23,150.2191593,0);
   graph->SetPoint(24,150,-12.5);
   graph->SetPoint(25,175,-12.5);
   graph->SetPoint(26,200,-12.5);
   graph->SetPoint(27,199.9990262,0);
   graph->SetPoint(28,200,0.0009737529828);
   graph->SetPoint(29,224.9995166,25);
   graph->SetPoint(30,225,25.00048336);
   graph->SetPoint(31,249.999567,50);
   graph->SetPoint(32,250,50.000433);
   graph->SetPoint(33,274.999745,75);
   graph->SetPoint(34,275,75.00025499);
   graph->SetPoint(35,300,97.721769);
   graph->SetPoint(36,303.0363664,100);
   graph->SetPoint(37,325,112.4327669);
   graph->SetPoint(38,345.0254359,125);
   graph->SetPoint(39,350,127.4682948);
   graph->SetPoint(40,375,138.2639281);
   graph->SetPoint(41,398.3723025,150);
   graph->SetPoint(42,400,150.7000332);
   graph->SetPoint(43,425,159.0205571);
   graph->SetPoint(44,450,162.8192179);
   graph->SetPoint(45,475,161.18018);
   graph->SetPoint(46,500,156.4258522);
   graph->SetPoint(47,512.7975198,150);
   graph->SetPoint(48,525,140.9186542);
   graph->SetPoint(49,539.7036954,125);
   graph->SetPoint(50,550,106.6523289);
   graph->SetPoint(51,553.2113084,100);
   graph->SetPoint(52,561.5330429,75);
   graph->SetPoint(53,565.9796994,50);
   graph->SetPoint(54,566.8033882,25);
   graph->SetPoint(55,562.3338382,0);
   
   TH1F *Graph_Graph_g_excl_xsec_exp_m1522 = new TH1F("Graph_Graph_g_excl_xsec_exp_m1522","g_excl_xsec_exp_m1",100,53.31966,613.4837);
   Graph_Graph_g_excl_xsec_exp_m1522->SetMinimum(-30.03192);
   Graph_Graph_g_excl_xsec_exp_m1522->SetMaximum(180.3511);
   Graph_Graph_g_excl_xsec_exp_m1522->SetDirectory(0);
   Graph_Graph_g_excl_xsec_exp_m1522->SetStats(0);

   ci = TColor::GetColor("#0000ff");
   Graph_Graph_g_excl_xsec_exp_m1522->SetLineColor(ci);
   Graph_Graph_g_excl_xsec_exp_m1522->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_g_excl_xsec_exp_m1522->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_g_excl_xsec_exp_m1522->GetYaxis()->SetTitleOffset(1.2);
   graph->SetHistogram(Graph_Graph_g_excl_xsec_exp_m1522);
   
   graph->Draw("l");
   
   graph = new TGraph(53);
   graph->SetName("g_excl_xsec_obs");
   graph->SetTitle("g_excl_xsec_obs");

   ci = TColor::GetColor("#cccccc");
   graph->SetFillColor(ci);
   graph->SetLineWidth(4);
   graph->SetPoint(0,100,0.2368427476);
   graph->SetPoint(1,125,13.14569004);
   graph->SetPoint(2,135.9718729,25);
   graph->SetPoint(3,150,44.97506456);
   graph->SetPoint(4,155.8269757,50);
   graph->SetPoint(5,175,57.76065985);
   graph->SetPoint(6,192.7546954,75);
   graph->SetPoint(7,200,85.34012849);
   graph->SetPoint(8,218.2105524,100);
   graph->SetPoint(9,225,105.6515986);
   graph->SetPoint(10,250,118.3713754);
   graph->SetPoint(11,250.0074832,100);
   graph->SetPoint(12,250,99.98725956);
   graph->SetPoint(13,225.0291063,75);
   graph->SetPoint(14,225,74.94820896);
   graph->SetPoint(15,200.0619373,50);
   graph->SetPoint(16,200,49.88397636);
   graph->SetPoint(17,175.1138261,25);
   graph->SetPoint(18,175,24.77285856);
   graph->SetPoint(19,150.1821855,0);
   graph->SetPoint(20,150,-12.5);
   graph->SetPoint(21,175,-12.5);
   graph->SetPoint(22,200,-12.5);
   graph->SetPoint(23,199.999174,0);
   graph->SetPoint(24,200,0.000825989432);
   graph->SetPoint(25,224.9997159,25);
   graph->SetPoint(26,225,25.0002841);
   graph->SetPoint(27,249.9997658,50);
   graph->SetPoint(28,250,50.0002342);
   graph->SetPoint(29,274.9999503,75);
   graph->SetPoint(30,275,75.00004971);
   graph->SetPoint(31,300,92.16915974);
   graph->SetPoint(32,310.3755583,100);
   graph->SetPoint(33,325,108.9024472);
   graph->SetPoint(34,347.4169586,125);
   graph->SetPoint(35,350,126.5682409);
   graph->SetPoint(36,375,140.6963284);
   graph->SetPoint(37,391.8248128,150);
   graph->SetPoint(38,400,153.8272729);
   graph->SetPoint(39,425,158.5367122);
   graph->SetPoint(40,450,160.6251471);
   graph->SetPoint(41,475,161.4213174);
   graph->SetPoint(42,500,161.0971989);
   graph->SetPoint(43,519.908762,150);
   graph->SetPoint(44,525,145.0959442);
   graph->SetPoint(45,535.3952495,125);
   graph->SetPoint(46,540.0983228,100);
   graph->SetPoint(47,544.4728114,75);
   graph->SetPoint(48,549.551222,50);
   graph->SetPoint(49,549.1106529,25);
   graph->SetPoint(50,546.3140509,0);
   graph->SetPoint(51,1300,-1300);
   graph->SetPoint(52,-1300,-1300);
   
   TH1F *Graph_Graph_g_excl_xsec_obs1923 = new TH1F("Graph_Graph_g_excl_xsec_obs1923","g_excl_xsec_obs",100,-1560,1560);
   Graph_Graph_g_excl_xsec_obs1923->SetMinimum(-1446.142);
   Graph_Graph_g_excl_xsec_obs1923->SetMaximum(307.5634);
   Graph_Graph_g_excl_xsec_obs1923->SetDirectory(0);
   Graph_Graph_g_excl_xsec_obs1923->SetStats(0);

   ci = TColor::GetColor("#0000ff");
   Graph_Graph_g_excl_xsec_obs1923->SetLineColor(ci);
   Graph_Graph_g_excl_xsec_obs1923->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_g_excl_xsec_obs1923->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_g_excl_xsec_obs1923->GetYaxis()->SetTitleOffset(1.2);
   graph->SetHistogram(Graph_Graph_g_excl_xsec_obs1923);
   
   graph->Draw("l");
   
   graph = new TGraph(58);
   graph->SetName("g_excl_xsec_obs_p1");
   graph->SetTitle("g_excl_xsec_obs_p1");
   graph->SetFillColor(1);
   graph->SetLineWidth(2);
   graph->SetPoint(0,100,0.3788157033);
   graph->SetPoint(1,125,17.59896833);
   graph->SetPoint(2,131.8540161,25);
   graph->SetPoint(3,149.976322,50);
   graph->SetPoint(4,150,50.02367797);
   graph->SetPoint(5,175,60.41821529);
   graph->SetPoint(6,190.0323872,75);
   graph->SetPoint(7,200,89.17925561);
   graph->SetPoint(8,213.4355082,100);
   graph->SetPoint(9,225,109.635052);
   graph->SetPoint(10,246.9394859,125);
   graph->SetPoint(11,250,125.9034756);
   graph->SetPoint(12,275,133.2931037);
   graph->SetPoint(13,275.0035861,125);
   graph->SetPoint(14,275,124.9941047);
   graph->SetPoint(15,250.0134131,100);
   graph->SetPoint(16,250,99.97716006);
   graph->SetPoint(17,225.039272,75);
   graph->SetPoint(18,225,74.92999029);
   graph->SetPoint(19,200.0801219,50);
   graph->SetPoint(20,200,49.84997966);
   graph->SetPoint(21,175.1480821,25);
   graph->SetPoint(22,175,24.70382799);
   graph->SetPoint(23,150.2523244,0);
   graph->SetPoint(24,150,-12.5);
   graph->SetPoint(25,175,-12.5);
   graph->SetPoint(26,200,-12.5);
   graph->SetPoint(27,199.9989567,0);
   graph->SetPoint(28,200,0.001043303218);
   graph->SetPoint(29,224.9994274,25);
   graph->SetPoint(30,225,25.00057262);
   graph->SetPoint(31,249.9994744,50);
   graph->SetPoint(32,250,50.00052555);
   graph->SetPoint(33,274.9996356,75);
   graph->SetPoint(34,275,75.00036443);
   graph->SetPoint(35,299.9999436,100);
   graph->SetPoint(36,300,100.0000564);
   graph->SetPoint(37,325,116.3570686);
   graph->SetPoint(38,337.0146198,125);
   graph->SetPoint(39,350,132.9027494);
   graph->SetPoint(40,375,149.1558946);
   graph->SetPoint(41,376.5254907,150);
   graph->SetPoint(42,400,160.9987339);
   graph->SetPoint(43,425,168.6718252);
   graph->SetPoint(44,450,174.8057756);
   graph->SetPoint(45,451.2611078,175);
   graph->SetPoint(46,475,178.3132535);
   graph->SetPoint(47,500,181.8779349);
   graph->SetPoint(48,525,178.7491924);
   graph->SetPoint(49,531.3801974,175);
   graph->SetPoint(50,548.4054571,150);
   graph->SetPoint(51,550,146.656811);
   graph->SetPoint(52,556.3624294,125);
   graph->SetPoint(53,558.1917685,100);
   graph->SetPoint(54,562.0155923,75);
   graph->SetPoint(55,567.181849,50);
   graph->SetPoint(56,567.7208118,25);
   graph->SetPoint(57,565.5028693,0);
   
   TH1F *Graph_Graph_g_excl_xsec_obs_p1724 = new TH1F("Graph_Graph_g_excl_xsec_obs_p1724","g_excl_xsec_obs_p1",100,53.22792,614.4929);
   Graph_Graph_g_excl_xsec_obs_p1724->SetMinimum(-31.93779);
   Graph_Graph_g_excl_xsec_obs_p1724->SetMaximum(201.3157);
   Graph_Graph_g_excl_xsec_obs_p1724->SetDirectory(0);
   Graph_Graph_g_excl_xsec_obs_p1724->SetStats(0);

   ci = TColor::GetColor("#0000ff");
   Graph_Graph_g_excl_xsec_obs_p1724->SetLineColor(ci);
   Graph_Graph_g_excl_xsec_obs_p1724->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_g_excl_xsec_obs_p1724->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_g_excl_xsec_obs_p1724->GetYaxis()->SetTitleOffset(1.2);
   graph->SetHistogram(Graph_Graph_g_excl_xsec_obs_p1724);
   
   graph->Draw("l");
   
   graph = new TGraph(49);
   graph->SetName("g_excl_xsec_obs_m1");
   graph->SetTitle("g_excl_xsec_obs_m1");
   graph->SetFillColor(1);
   graph->SetLineWidth(2);
   graph->SetPoint(0,100,0.0376247914);
   graph->SetPoint(1,125,8.692412379);
   graph->SetPoint(2,140.0818394,25);
   graph->SetPoint(3,150,39.15658057);
   graph->SetPoint(4,162.5144855,50);
   graph->SetPoint(5,175,55.10310581);
   graph->SetPoint(6,195.4646814,75);
   graph->SetPoint(7,200,81.50099903);
   graph->SetPoint(8,222.9935641,100);
   graph->SetPoint(9,225,101.6681463);
   graph->SetPoint(10,250,103.8081664);
   graph->SetPoint(11,250.0015515,100);
   graph->SetPoint(12,250,99.99735906);
   graph->SetPoint(13,225.0189149,75);
   graph->SetPoint(14,225,74.96642764);
   graph->SetPoint(15,200.0437622,50);
   graph->SetPoint(16,200,49.91797307);
   graph->SetPoint(17,175.0794774,25);
   graph->SetPoint(18,175,24.84188909);
   graph->SetPoint(19,150.1116756,0);
   graph->SetPoint(20,150,-12.5);
   graph->SetPoint(21,175,-12.5);
   graph->SetPoint(22,200,-12.5);
   graph->SetPoint(23,199.9994675,0);
   graph->SetPoint(24,200,0.0005324832882);
   graph->SetPoint(25,225,20.29300238);
   graph->SetPoint(26,229.9717753,25);
   graph->SetPoint(27,250,43.24707214);
   graph->SetPoint(28,256.2120566,50);
   graph->SetPoint(29,275,64.02761978);
   graph->SetPoint(30,287.9584952,75);
   graph->SetPoint(31,300,82.66589808);
   graph->SetPoint(32,322.6640063,100);
   graph->SetPoint(33,325,101.4478258);
   graph->SetPoint(34,350,116.4354563);
   graph->SetPoint(35,361.7466355,125);
   graph->SetPoint(36,375,132.2367623);
   graph->SetPoint(37,400,142.5551954);
   graph->SetPoint(38,425,147.1463006);
   graph->SetPoint(39,450,145.0892222);
   graph->SetPoint(40,475,141.2944606);
   graph->SetPoint(41,500,131.9233116);
   graph->SetPoint(42,506.8166162,125);
   graph->SetPoint(43,520.3184416,100);
   graph->SetPoint(44,525,84.48980244);
   graph->SetPoint(45,526.8311293,75);
   graph->SetPoint(46,531.1380046,50);
   graph->SetPoint(47,531.1207164,25);
   graph->SetPoint(48,525.6476957,0);
   
   TH1F *Graph_Graph_g_excl_xsec_obs_m1825 = new TH1F("Graph_Graph_g_excl_xsec_obs_m1825","g_excl_xsec_obs_m1",100,56.8862,574.2518);
   Graph_Graph_g_excl_xsec_obs_m1825->SetMinimum(-28.46463);
   Graph_Graph_g_excl_xsec_obs_m1825->SetMaximum(163.1109);
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
      tex = new TLatex(0.18,0.7,"MVA 1L");
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
