{
//=========Macro generated from canvas: cCONT_/cCONT_
//=========  (Wed Apr 22 17:43:32 2015) by ROOT version5.34/03
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
   
   TH2D *h_ul_xsec_obs_smoothEMPTY = new TH2D("h_ul_xsec_obs_smoothEMPTY","Observed combined #sigma #times Branching Fraction (t2tb_br0p5)EMPTY",31,137.5,912.5,29,-12.5,712.5);

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
   
   graph = new TGraph(52);
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
   graph->SetPoint(10,245.9734834,0);
   graph->SetPoint(11,250,3.580303992);
   graph->SetPoint(12,263.5005008,25);
   graph->SetPoint(13,275,38.06392925);
   graph->SetPoint(14,283.5017883,50);
   graph->SetPoint(15,300,70.62128919);
   graph->SetPoint(16,305.0399598,75);
   graph->SetPoint(17,325,92.47331535);
   graph->SetPoint(18,332.9661949,100);
   graph->SetPoint(19,350,110.9362007);
   graph->SetPoint(20,366.1607112,125);
   graph->SetPoint(21,375,131.3662329);
   graph->SetPoint(22,400,147.9389101);
   graph->SetPoint(23,403.8578531,150);
   graph->SetPoint(24,425,158.7274035);
   graph->SetPoint(25,450,174.4338799);
   graph->SetPoint(26,450.8529383,175);
   graph->SetPoint(27,475,189.2577462);
   graph->SetPoint(28,493.5617868,200);
   graph->SetPoint(29,500,202.2852879);
   graph->SetPoint(30,525,207.2079628);
   graph->SetPoint(31,550,212.7783304);
   graph->SetPoint(32,575,218.8416926);
   graph->SetPoint(33,600,213.6616192);
   graph->SetPoint(34,625,204.8078131);
   graph->SetPoint(35,639.6424529,200);
   graph->SetPoint(36,650,195.2690187);
   graph->SetPoint(37,675,189.4351601);
   graph->SetPoint(38,698.3159112,175);
   graph->SetPoint(39,700,173.3401756);
   graph->SetPoint(40,719.1049708,150);
   graph->SetPoint(41,725,137.4827406);
   graph->SetPoint(42,729.7930289,125);
   graph->SetPoint(43,735.3494107,100);
   graph->SetPoint(44,729.7548035,75);
   graph->SetPoint(45,725,67.07565957);
   graph->SetPoint(46,714.6750673,50);
   graph->SetPoint(47,700,31.19474192);
   graph->SetPoint(48,694.8636181,25);
   graph->SetPoint(49,678.0025917,0);
   graph->SetPoint(50,1300,-1300);
   graph->SetPoint(51,-1300,-1300);
   
   TH1F *Graph_g_excl_xsec_obs19 = new TH1F("Graph_g_excl_xsec_obs19","g_excl_xsec_obs",100,-1560,1560);
   Graph_g_excl_xsec_obs19->SetMinimum(-1451.884);
   Graph_g_excl_xsec_obs19->SetMaximum(370.7259);
   Graph_g_excl_xsec_obs19->SetDirectory(0);
   Graph_g_excl_xsec_obs19->SetStats(0);

   ci = TColor::GetColor("#0000ff");
   Graph_g_excl_xsec_obs19->SetLineColor(ci);
   Graph_g_excl_xsec_obs19->GetXaxis()->SetLabelSize(0.035);
   Graph_g_excl_xsec_obs19->GetYaxis()->SetLabelSize(0.035);
   Graph_g_excl_xsec_obs19->GetYaxis()->SetTitleOffset(1.2);
   graph->SetHistogram(Graph_g_excl_xsec_obs19);
   
   graph->Draw("f");
   
   graph = new TGraph(42);
   graph->SetName("g_excl_xsec_exp");
   graph->SetTitle("g_excl_xsec_exp");

   ci = TColor::GetColor("#ff807e");
   graph->SetFillColor(ci);

   ci = TColor::GetColor("#ff0000");
   graph->SetLineColor(ci);
   graph->SetLineStyle(7);
   graph->SetLineWidth(4);
   graph->SetPoint(0,664.7050396,0);
   graph->SetPoint(1,675,16.35097958);
   graph->SetPoint(2,679.9783786,25);
   graph->SetPoint(3,695.6527065,50);
   graph->SetPoint(4,700,59.66606161);
   graph->SetPoint(5,706.350391,75);
   graph->SetPoint(6,709.9424711,100);
   graph->SetPoint(7,708.8281725,125);
   graph->SetPoint(8,705.4917589,150);
   graph->SetPoint(9,700,174.2629138);
   graph->SetPoint(10,699.8034522,175);
   graph->SetPoint(11,689.0059888,200);
   graph->SetPoint(12,676.5074938,225);
   graph->SetPoint(13,675,227.3636521);
   graph->SetPoint(14,655.916118,250);
   graph->SetPoint(15,650,254.06108);
   graph->SetPoint(16,625,261.4060651);
   graph->SetPoint(17,600,260.1007899);
   graph->SetPoint(18,575,252.308181);
   graph->SetPoint(19,569.9780126,250);
   graph->SetPoint(20,550,238.8744621);
   graph->SetPoint(21,525,225.9994903);
   graph->SetPoint(22,523.2128784,225);
   graph->SetPoint(23,500,209.0142034);
   graph->SetPoint(24,484.5266844,200);
   graph->SetPoint(25,475,193.2504449);
   graph->SetPoint(26,450,176.9629521);
   graph->SetPoint(27,447.0420239,175);
   graph->SetPoint(28,425,156.8816719);
   graph->SetPoint(29,416.3786466,150);
   graph->SetPoint(30,400,135.2838295);
   graph->SetPoint(31,385.8985975,125);
   graph->SetPoint(32,375,115.7184424);
   graph->SetPoint(33,352.977795,100);
   graph->SetPoint(34,350,97.32027156);
   graph->SetPoint(35,325,77.21298729);
   graph->SetPoint(36,321.9999594,75);
   graph->SetPoint(37,300,53.8273906);
   graph->SetPoint(38,296.1060578,50);
   graph->SetPoint(39,278.8595052,25);
   graph->SetPoint(40,275,14.7521368);
   graph->SetPoint(41,268.8847507,0);
   
   TH1F *Graph_Graph_g_excl_xsec_exp320 = new TH1F("Graph_Graph_g_excl_xsec_exp320","g_excl_xsec_exp",100,224.779,754.0482);
   Graph_Graph_g_excl_xsec_exp320->SetMinimum(0);
   Graph_Graph_g_excl_xsec_exp320->SetMaximum(287.5467);
   Graph_Graph_g_excl_xsec_exp320->SetDirectory(0);
   Graph_Graph_g_excl_xsec_exp320->SetStats(0);

   ci = TColor::GetColor("#0000ff");
   Graph_Graph_g_excl_xsec_exp320->SetLineColor(ci);
   Graph_Graph_g_excl_xsec_exp320->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_g_excl_xsec_exp320->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_g_excl_xsec_exp320->GetYaxis()->SetTitleOffset(1.2);
   graph->SetHistogram(Graph_Graph_g_excl_xsec_exp320);
   
   graph->Draw("l");
   
   graph = new TGraph(33);
   graph->SetName("g_excl_xsec_exp_p1");
   graph->SetTitle("g_excl_xsec_exp_p1");

   ci = TColor::GetColor("#ff807e");
   graph->SetFillColor(ci);

   ci = TColor::GetColor("#ff0000");
   graph->SetLineColor(ci);
   graph->SetLineStyle(7);
   graph->SetLineWidth(2);
   graph->SetPoint(0,589.3897614,0);
   graph->SetPoint(1,600,13.56527651);
   graph->SetPoint(2,607.6352412,25);
   graph->SetPoint(3,625,47.4729709);
   graph->SetPoint(4,626.7604979,50);
   graph->SetPoint(5,637.0802312,75);
   graph->SetPoint(6,639.3751436,100);
   graph->SetPoint(7,637.285399,125);
   graph->SetPoint(8,632.1716855,150);
   graph->SetPoint(9,625,170.3623017);
   graph->SetPoint(10,622.8086519,175);
   graph->SetPoint(11,600.6299092,200);
   graph->SetPoint(12,600,200.426207);
   graph->SetPoint(13,575,206.8376907);
   graph->SetPoint(14,550,202.6689616);
   graph->SetPoint(15,541.7987027,200);
   graph->SetPoint(16,525,193.5228847);
   graph->SetPoint(17,500,181.6279221);
   graph->SetPoint(18,487.0070273,175);
   graph->SetPoint(19,475,167.6158048);
   graph->SetPoint(20,450,152.1300183);
   graph->SetPoint(21,446.959207,150);
   graph->SetPoint(22,425,131.6425384);
   graph->SetPoint(23,416.6113738,125);
   graph->SetPoint(24,400,110.759407);
   graph->SetPoint(25,385.4621943,100);
   graph->SetPoint(26,375,89.82754088);
   graph->SetPoint(27,356.9548266,75);
   graph->SetPoint(28,350,66.34158392);
   graph->SetPoint(29,334.7356533,50);
   graph->SetPoint(30,325,33.90582091);
   graph->SetPoint(31,319.8015224,25);
   graph->SetPoint(32,320.1732842,0);
   
   TH1F *Graph_Graph_g_excl_xsec_exp_p1421 = new TH1F("Graph_Graph_g_excl_xsec_exp_p1421","g_excl_xsec_exp_p1",100,287.8442,671.3325);
   Graph_Graph_g_excl_xsec_exp_p1421->SetMinimum(0);
   Graph_Graph_g_excl_xsec_exp_p1421->SetMaximum(227.5215);
   Graph_Graph_g_excl_xsec_exp_p1421->SetDirectory(0);
   Graph_Graph_g_excl_xsec_exp_p1421->SetStats(0);

   ci = TColor::GetColor("#0000ff");
   Graph_Graph_g_excl_xsec_exp_p1421->SetLineColor(ci);
   Graph_Graph_g_excl_xsec_exp_p1421->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_g_excl_xsec_exp_p1421->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_g_excl_xsec_exp_p1421->GetYaxis()->SetTitleOffset(1.2);
   graph->SetHistogram(Graph_Graph_g_excl_xsec_exp_p1421);
   
   graph->Draw("l");
   
   graph = new TGraph(58);
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
   graph->SetPoint(6,199.9997908,0);
   graph->SetPoint(7,200,0.0002092025193);
   graph->SetPoint(8,225,8.808980504);
   graph->SetPoint(9,242.4771493,25);
   graph->SetPoint(10,250,33.10536722);
   graph->SetPoint(11,263.2331058,50);
   graph->SetPoint(12,275,61.15458717);
   graph->SetPoint(13,288.8249822,75);
   graph->SetPoint(14,300,82.95982163);
   graph->SetPoint(15,321.0180944,100);
   graph->SetPoint(16,325,102.4883516);
   graph->SetPoint(17,350,119.3051023);
   graph->SetPoint(18,356.9770734,125);
   graph->SetPoint(19,375,137.1864735);
   graph->SetPoint(20,390.1710277,150);
   graph->SetPoint(21,400,157.5474781);
   graph->SetPoint(22,419.7459039,175);
   graph->SetPoint(23,425,178.4938354);
   graph->SetPoint(24,450,197.4647823);
   graph->SetPoint(25,453.2922832,200);
   graph->SetPoint(26,475,212.7785327);
   graph->SetPoint(27,490.852087,225);
   graph->SetPoint(28,500,230.9666747);
   graph->SetPoint(29,525,248.9944214);
   graph->SetPoint(30,526.4629612,250);
   graph->SetPoint(31,550,263.6115538);
   graph->SetPoint(32,566.5576672,275);
   graph->SetPoint(33,575,280.1118931);
   graph->SetPoint(34,600,294.4407259);
   graph->SetPoint(35,612.6149637,300);
   graph->SetPoint(36,625,304.4680873);
   graph->SetPoint(37,650,310.8286098);
   graph->SetPoint(38,675,314.9160103);
   graph->SetPoint(39,700,309.3468922);
   graph->SetPoint(40,711.58375,300);
   graph->SetPoint(41,725,281.2415582);
   graph->SetPoint(42,728.3489087,275);
   graph->SetPoint(43,740.049362,250);
   graph->SetPoint(44,750,228.7275651);
   graph->SetPoint(45,751.5440818,225);
   graph->SetPoint(46,762.1485465,200);
   graph->SetPoint(47,770.9813591,175);
   graph->SetPoint(48,775,162.3846433);
   graph->SetPoint(49,778.0515899,150);
   graph->SetPoint(50,780.3525973,125);
   graph->SetPoint(51,780.1426077,100);
   graph->SetPoint(52,776.7149813,75);
   graph->SetPoint(53,775,69.11477528);
   graph->SetPoint(54,767.7350042,50);
   graph->SetPoint(55,752.0156866,25);
   graph->SetPoint(56,750,21.10355658);
   graph->SetPoint(57,738.3688563,0);
   
   TH1F *Graph_Graph_g_excl_xsec_exp_m1522 = new TH1F("Graph_Graph_g_excl_xsec_exp_m1522","g_excl_xsec_exp_m1",100,54.02751,846.3822);
   Graph_Graph_g_excl_xsec_exp_m1522->SetMinimum(-45.2416);
   Graph_Graph_g_excl_xsec_exp_m1522->SetMaximum(347.6576);
   Graph_Graph_g_excl_xsec_exp_m1522->SetDirectory(0);
   Graph_Graph_g_excl_xsec_exp_m1522->SetStats(0);

   ci = TColor::GetColor("#0000ff");
   Graph_Graph_g_excl_xsec_exp_m1522->SetLineColor(ci);
   Graph_Graph_g_excl_xsec_exp_m1522->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_g_excl_xsec_exp_m1522->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_g_excl_xsec_exp_m1522->GetYaxis()->SetTitleOffset(1.2);
   graph->SetHistogram(Graph_Graph_g_excl_xsec_exp_m1522);
   
   graph->Draw("l");
   
   graph = new TGraph(52);
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
   graph->SetPoint(10,245.9734834,0);
   graph->SetPoint(11,250,3.580303992);
   graph->SetPoint(12,263.5005008,25);
   graph->SetPoint(13,275,38.06392925);
   graph->SetPoint(14,283.5017883,50);
   graph->SetPoint(15,300,70.62128919);
   graph->SetPoint(16,305.0399598,75);
   graph->SetPoint(17,325,92.47331535);
   graph->SetPoint(18,332.9661949,100);
   graph->SetPoint(19,350,110.9362007);
   graph->SetPoint(20,366.1607112,125);
   graph->SetPoint(21,375,131.3662329);
   graph->SetPoint(22,400,147.9389101);
   graph->SetPoint(23,403.8578531,150);
   graph->SetPoint(24,425,158.7274035);
   graph->SetPoint(25,450,174.4338799);
   graph->SetPoint(26,450.8529383,175);
   graph->SetPoint(27,475,189.2577462);
   graph->SetPoint(28,493.5617868,200);
   graph->SetPoint(29,500,202.2852879);
   graph->SetPoint(30,525,207.2079628);
   graph->SetPoint(31,550,212.7783304);
   graph->SetPoint(32,575,218.8416926);
   graph->SetPoint(33,600,213.6616192);
   graph->SetPoint(34,625,204.8078131);
   graph->SetPoint(35,639.6424529,200);
   graph->SetPoint(36,650,195.2690187);
   graph->SetPoint(37,675,189.4351601);
   graph->SetPoint(38,698.3159112,175);
   graph->SetPoint(39,700,173.3401756);
   graph->SetPoint(40,719.1049708,150);
   graph->SetPoint(41,725,137.4827406);
   graph->SetPoint(42,729.7930289,125);
   graph->SetPoint(43,735.3494107,100);
   graph->SetPoint(44,729.7548035,75);
   graph->SetPoint(45,725,67.07565957);
   graph->SetPoint(46,714.6750673,50);
   graph->SetPoint(47,700,31.19474192);
   graph->SetPoint(48,694.8636181,25);
   graph->SetPoint(49,678.0025917,0);
   graph->SetPoint(50,1300,-1300);
   graph->SetPoint(51,-1300,-1300);
   
   TH1F *Graph_Graph_g_excl_xsec_obs1923 = new TH1F("Graph_Graph_g_excl_xsec_obs1923","g_excl_xsec_obs",100,-1560,1560);
   Graph_Graph_g_excl_xsec_obs1923->SetMinimum(-1451.884);
   Graph_Graph_g_excl_xsec_obs1923->SetMaximum(370.7259);
   Graph_Graph_g_excl_xsec_obs1923->SetDirectory(0);
   Graph_Graph_g_excl_xsec_obs1923->SetStats(0);

   ci = TColor::GetColor("#0000ff");
   Graph_Graph_g_excl_xsec_obs1923->SetLineColor(ci);
   Graph_Graph_g_excl_xsec_obs1923->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_g_excl_xsec_obs1923->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_g_excl_xsec_obs1923->GetYaxis()->SetTitleOffset(1.2);
   graph->SetHistogram(Graph_Graph_g_excl_xsec_obs1923);
   
   graph->Draw("l");
   
   graph = new TGraph(49);
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
   graph->SetPoint(6,225.1857188,0);
   graph->SetPoint(7,250,21.80259579);
   graph->SetPoint(8,252.0161509,25);
   graph->SetPoint(9,274.145908,50);
   graph->SetPoint(10,275,50.7982177);
   graph->SetPoint(11,295.108005,75);
   graph->SetPoint(12,300,80.36658781);
   graph->SetPoint(13,321.8485657,100);
   graph->SetPoint(14,325,101.8963957);
   graph->SetPoint(15,350,118.6777336);
   graph->SetPoint(16,357.2775941,125);
   graph->SetPoint(17,375,137.7313561);
   graph->SetPoint(18,392.6168094,150);
   graph->SetPoint(19,400,154.0255716);
   graph->SetPoint(20,425,166.8380769);
   graph->SetPoint(21,437.7470305,175);
   graph->SetPoint(22,450,182.3360792);
   graph->SetPoint(23,474.0015122,200);
   graph->SetPoint(24,475,200.5109805);
   graph->SetPoint(25,500,209.6981152);
   graph->SetPoint(26,525,217.1091694);
   graph->SetPoint(27,546.8177078,225);
   graph->SetPoint(28,550,226.2501354);
   graph->SetPoint(29,575,233.5386114);
   graph->SetPoint(30,600,234.1096625);
   graph->SetPoint(31,625,231.8731247);
   graph->SetPoint(32,649.421215,225);
   graph->SetPoint(33,650,224.8106425);
   graph->SetPoint(34,675,223.2817348);
   graph->SetPoint(35,700,213.9015354);
   graph->SetPoint(36,723.9119883,200);
   graph->SetPoint(37,725,199.3845106);
   graph->SetPoint(38,747.0872434,175);
   graph->SetPoint(39,750,170.3710579);
   graph->SetPoint(40,761.3610886,150);
   graph->SetPoint(41,769.4543538,125);
   graph->SetPoint(42,772.4168668,100);
   graph->SetPoint(43,768.2409958,75);
   graph->SetPoint(44,752.7774273,50);
   graph->SetPoint(45,750,46.8743357);
   graph->SetPoint(46,732.2603133,25);
   graph->SetPoint(47,725,14.09016265);
   graph->SetPoint(48,715.0811385,0);
   
   TH1F *Graph_Graph_g_excl_xsec_obs_p1724 = new TH1F("Graph_Graph_g_excl_xsec_obs_p1724","g_excl_xsec_obs_p1",100,54.79891,837.6549);
   Graph_Graph_g_excl_xsec_obs_p1724->SetMinimum(-37.16097);
   Graph_Graph_g_excl_xsec_obs_p1724->SetMaximum(258.7706);
   Graph_Graph_g_excl_xsec_obs_p1724->SetDirectory(0);
   Graph_Graph_g_excl_xsec_obs_p1724->SetStats(0);

   ci = TColor::GetColor("#0000ff");
   Graph_Graph_g_excl_xsec_obs_p1724->SetLineColor(ci);
   Graph_Graph_g_excl_xsec_obs_p1724->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_g_excl_xsec_obs_p1724->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_g_excl_xsec_obs_p1724->GetYaxis()->SetTitleOffset(1.2);
   graph->SetHistogram(Graph_Graph_g_excl_xsec_obs_p1724);
   
   graph->Draw("l");
   
   graph = new TGraph(35);
   graph->SetName("g_excl_xsec_obs_m1");
   graph->SetTitle("g_excl_xsec_obs_m1");

   ci = TColor::GetColor("#ff807e");
   graph->SetFillColor(ci);
   graph->SetLineWidth(2);
   graph->SetPoint(0,631.1226093,0);
   graph->SetPoint(1,649.2872919,25);
   graph->SetPoint(2,650,26.195705);
   graph->SetPoint(3,662.5137589,50);
   graph->SetPoint(4,675,73.25790401);
   graph->SetPoint(5,676.1244185,75);
   graph->SetPoint(6,676.2004255,100);
   graph->SetPoint(7,675,105.4286107);
   graph->SetPoint(8,667.367176,125);
   graph->SetPoint(9,650,144.4517293);
   graph->SetPoint(10,647.4181822,150);
   graph->SetPoint(11,625,170.2031842);
   graph->SetPoint(12,619.9791418,175);
   graph->SetPoint(13,600,186.7452442);
   graph->SetPoint(14,575,198.8702442);
   graph->SetPoint(15,550,198.4350923);
   graph->SetPoint(16,525,195.1526629);
   graph->SetPoint(17,500,189.6739256);
   graph->SetPoint(18,475,177.4097762);
   graph->SetPoint(19,470.8030095,175);
   graph->SetPoint(20,450,161.5057045);
   graph->SetPoint(21,425,150.6167302);
   graph->SetPoint(22,423.5290907,150);
   graph->SetPoint(23,400,137.2666198);
   graph->SetPoint(24,375,125.0011097);
   graph->SetPoint(25,374.9984645,125);
   graph->SetPoint(26,350,103.1946677);
   graph->SetPoint(27,345.0086469,100);
   graph->SetPoint(28,325,81.13794102);
   graph->SetPoint(29,318.113033,75);
   graph->SetPoint(30,300,59.05426952);
   graph->SetPoint(31,292.7666441,50);
   graph->SetPoint(32,275,25.03284132);
   graph->SetPoint(33,274.9711148,25);
   graph->SetPoint(34,263.8670445,0);
   
   TH1F *Graph_Graph_g_excl_xsec_obs_m1825 = new TH1F("Graph_Graph_g_excl_xsec_obs_m1825","g_excl_xsec_obs_m1",100,222.6337,717.4338);
   Graph_Graph_g_excl_xsec_obs_m1825->SetMinimum(0);
   Graph_Graph_g_excl_xsec_obs_m1825->SetMaximum(218.7573);
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
      tex = new TLatex(0.18,0.7,"MVA 1L Razor 0L Asymptotic");
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
