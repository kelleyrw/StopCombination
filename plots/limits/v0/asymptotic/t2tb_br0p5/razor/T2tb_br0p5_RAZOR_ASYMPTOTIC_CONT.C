{
//=========Macro generated from canvas: cCONT_/cCONT_
//=========  (Wed Apr 22 17:43:17 2015) by ROOT version5.34/03
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
   
   graph = new TGraph(39);
   graph->SetName("g_excl_xsec_obs");
   graph->SetTitle("g_excl_xsec_obs");

   ci = TColor::GetColor("#cccccc");
   graph->SetFillColor(ci);
   graph->SetLineWidth(4);
   graph->SetPoint(0,646.6287026,0);
   graph->SetPoint(1,650,2.851850687);
   graph->SetPoint(2,672.9745469,25);
   graph->SetPoint(3,675,27.50627889);
   graph->SetPoint(4,698.4989561,50);
   graph->SetPoint(5,700,51.63292436);
   graph->SetPoint(6,715.4530945,75);
   graph->SetPoint(7,722.2205679,100);
   graph->SetPoint(8,711.1708792,125);
   graph->SetPoint(9,701.8537015,150);
   graph->SetPoint(10,700,152.070762);
   graph->SetPoint(11,675,174.213539);
   graph->SetPoint(12,670.45593,175);
   graph->SetPoint(13,650,177.0497994);
   graph->SetPoint(14,625,188.0292659);
   graph->SetPoint(15,600,196.9989309);
   graph->SetPoint(16,584.1686218,200);
   graph->SetPoint(17,575,201.0210442);
   graph->SetPoint(18,570.8964898,200);
   graph->SetPoint(19,550,194.2680965);
   graph->SetPoint(20,525,185.4522851);
   graph->SetPoint(21,500,177.554459);
   graph->SetPoint(22,494.5189873,175);
   graph->SetPoint(23,475,159.660282);
   graph->SetPoint(24,458.4114727,150);
   graph->SetPoint(25,450,144.2477486);
   graph->SetPoint(26,425,132.5426294);
   graph->SetPoint(27,412.8771729,125);
   graph->SetPoint(28,400,113.8381566);
   graph->SetPoint(29,387.3756298,100);
   graph->SetPoint(30,375,86.93117568);
   graph->SetPoint(31,350,75.6874675);
   graph->SetPoint(32,349.200125,75);
   graph->SetPoint(33,326.8551542,50);
   graph->SetPoint(34,325,46.47059233);
   graph->SetPoint(35,315.9996019,25);
   graph->SetPoint(36,321.090787,0);
   graph->SetPoint(37,1300,-1300);
   graph->SetPoint(38,-1300,-1300);
   
   TH1F *Graph_g_excl_xsec_obs19 = new TH1F("Graph_g_excl_xsec_obs19","g_excl_xsec_obs",100,-1560,1560);
   Graph_g_excl_xsec_obs19->SetMinimum(-1450.102);
   Graph_g_excl_xsec_obs19->SetMaximum(351.1231);
   Graph_g_excl_xsec_obs19->SetDirectory(0);
   Graph_g_excl_xsec_obs19->SetStats(0);

   ci = TColor::GetColor("#0000ff");
   Graph_g_excl_xsec_obs19->SetLineColor(ci);
   Graph_g_excl_xsec_obs19->GetXaxis()->SetLabelSize(0.035);
   Graph_g_excl_xsec_obs19->GetYaxis()->SetLabelSize(0.035);
   Graph_g_excl_xsec_obs19->GetYaxis()->SetTitleOffset(1.2);
   graph->SetHistogram(Graph_g_excl_xsec_obs19);
   
   graph->Draw("f");
   
   graph = new TGraph(41);
   graph->SetName("g_excl_xsec_exp");
   graph->SetTitle("g_excl_xsec_exp");

   ci = TColor::GetColor("#ff807e");
   graph->SetFillColor(ci);

   ci = TColor::GetColor("#ff0000");
   graph->SetLineColor(ci);
   graph->SetLineStyle(7);
   graph->SetLineWidth(4);
   graph->SetPoint(0,653.2167529,0);
   graph->SetPoint(1,672.8869275,25);
   graph->SetPoint(2,675,27.77391531);
   graph->SetPoint(3,690.6688772,50);
   graph->SetPoint(4,700,69.01473719);
   graph->SetPoint(5,702.7169695,75);
   graph->SetPoint(6,706.5338364,100);
   graph->SetPoint(7,705.2972029,125);
   graph->SetPoint(8,702.0999465,150);
   graph->SetPoint(9,700,159.2521777);
   graph->SetPoint(10,695.8053787,175);
   graph->SetPoint(11,684.9336091,200);
   graph->SetPoint(12,675,219.6638367);
   graph->SetPoint(13,671.7191417,225);
   graph->SetPoint(14,650.9639219,250);
   graph->SetPoint(15,650,250.677221);
   graph->SetPoint(16,625,258.8989783);
   graph->SetPoint(17,600,258.0821162);
   graph->SetPoint(18,575,250.7503744);
   graph->SetPoint(19,573.4176352,250);
   graph->SetPoint(20,550,236.5563451);
   graph->SetPoint(21,527.1123039,225);
   graph->SetPoint(22,525,223.7291001);
   graph->SetPoint(23,500,206.5325018);
   graph->SetPoint(24,489.2670061,200);
   graph->SetPoint(25,475,189.5796873);
   graph->SetPoint(26,452.3708888,175);
   graph->SetPoint(27,450,173.1406768);
   graph->SetPoint(28,425,151.9238103);
   graph->SetPoint(29,422.9005672,150);
   graph->SetPoint(30,400,127.6392012);
   graph->SetPoint(31,396.9324563,125);
   graph->SetPoint(32,375,104.1127005);
   graph->SetPoint(33,370.159706,100);
   graph->SetPoint(34,350,78.71565204);
   graph->SetPoint(35,346.2381298,75);
   graph->SetPoint(36,330.3061477,50);
   graph->SetPoint(37,325,30.83772638);
   graph->SetPoint(38,323.8347207,25);
   graph->SetPoint(39,325,19.09051755);
   graph->SetPoint(40,331.8610651,0);
   
   TH1F *Graph_Graph_g_excl_xsec_exp320 = new TH1F("Graph_Graph_g_excl_xsec_exp320","g_excl_xsec_exp",100,285.5648,744.8037);
   Graph_Graph_g_excl_xsec_exp320->SetMinimum(0);
   Graph_Graph_g_excl_xsec_exp320->SetMaximum(284.7889);
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
   graph->SetPoint(0,574.4410167,0);
   graph->SetPoint(1,575,0.4677642268);
   graph->SetPoint(2,598.6508687,25);
   graph->SetPoint(3,600,26.43105555);
   graph->SetPoint(4,620.3672718,50);
   graph->SetPoint(5,625,59.17411836);
   graph->SetPoint(6,632.1332123,75);
   graph->SetPoint(7,634.5892957,100);
   graph->SetPoint(8,632.5138645,125);
   graph->SetPoint(9,627.6353431,150);
   graph->SetPoint(10,625,157.7282187);
   graph->SetPoint(11,617.1536843,175);
   graph->SetPoint(12,600,194.7685501);
   graph->SetPoint(13,589.5494419,200);
   graph->SetPoint(14,575,203.6241465);
   graph->SetPoint(15,550,200.0571314);
   graph->SetPoint(16,549.8349387,200);
   graph->SetPoint(17,525,189.8872628);
   graph->SetPoint(18,500,178.8158705);
   graph->SetPoint(19,492.8246346,175);
   graph->SetPoint(20,475,163.6543057);
   graph->SetPoint(21,452.7862936,150);
   graph->SetPoint(22,450,147.9373654);
   graph->SetPoint(23,425,126.2188342);
   graph->SetPoint(24,423.676609,125);
   graph->SetPoint(25,400,102.7744406);
   graph->SetPoint(26,396.8754045,100);
   graph->SetPoint(27,375,75.17862786);
   graph->SetPoint(28,374.8331208,75);
   graph->SetPoint(29,364.5833231,50);
   graph->SetPoint(30,368.3417158,25);
   graph->SetPoint(31,375,10.98021661);
   graph->SetPoint(32,382.7878087,0);
   
   TH1F *Graph_Graph_g_excl_xsec_exp_p1421 = new TH1F("Graph_Graph_g_excl_xsec_exp_p1421","g_excl_xsec_exp_p1",100,337.5827,661.5899);
   Graph_Graph_g_excl_xsec_exp_p1421->SetMinimum(0);
   Graph_Graph_g_excl_xsec_exp_p1421->SetMaximum(223.9866);
   Graph_Graph_g_excl_xsec_exp_p1421->SetDirectory(0);
   Graph_Graph_g_excl_xsec_exp_p1421->SetStats(0);

   ci = TColor::GetColor("#0000ff");
   Graph_Graph_g_excl_xsec_exp_p1421->SetLineColor(ci);
   Graph_Graph_g_excl_xsec_exp_p1421->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_g_excl_xsec_exp_p1421->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_g_excl_xsec_exp_p1421->GetYaxis()->SetTitleOffset(1.2);
   graph->SetHistogram(Graph_Graph_g_excl_xsec_exp_p1421);
   
   graph->Draw("l");
   
   graph = new TGraph(48);
   graph->SetName("g_excl_xsec_exp_m1");
   graph->SetTitle("g_excl_xsec_exp_m1");

   ci = TColor::GetColor("#ff807e");
   graph->SetFillColor(ci);

   ci = TColor::GetColor("#ff0000");
   graph->SetLineColor(ci);
   graph->SetLineStyle(7);
   graph->SetLineWidth(2);
   graph->SetPoint(0,729.3146205,0);
   graph->SetPoint(1,746.6630767,25);
   graph->SetPoint(2,750,29.50946477);
   graph->SetPoint(3,764.4543923,50);
   graph->SetPoint(4,774.7908768,75);
   graph->SetPoint(5,775,76.17939735);
   graph->SetPoint(6,778.2993571,100);
   graph->SetPoint(7,778.5156793,125);
   graph->SetPoint(8,776.1762746,150);
   graph->SetPoint(9,775,154.7600766);
   graph->SetPoint(10,768.4219481,175);
   graph->SetPoint(11,759.4884528,200);
   graph->SetPoint(12,750,222.2184012);
   graph->SetPoint(13,748.7710211,225);
   graph->SetPoint(14,736.8965277,250);
   graph->SetPoint(15,725.4232504,275);
   graph->SetPoint(16,725,275.7877841);
   graph->SetPoint(17,707.7251282,300);
   graph->SetPoint(18,700,306.3077137);
   graph->SetPoint(19,675,312.7798421);
   graph->SetPoint(20,650,309.2713893);
   graph->SetPoint(21,625,303.2865815);
   graph->SetPoint(22,616.1622647,300);
   graph->SetPoint(23,600,292.6725983);
   graph->SetPoint(24,575,278.7182476);
   graph->SetPoint(25,569.0241744,275);
   graph->SetPoint(26,550,261.6461253);
   graph->SetPoint(27,530.3642129,250);
   graph->SetPoint(28,525,246.2376785);
   graph->SetPoint(29,500,228.8511395);
   graph->SetPoint(30,494.3469737,225);
   graph->SetPoint(31,475,209.6705012);
   graph->SetPoint(32,459.2812635,200);
   graph->SetPoint(33,450,192.6178688);
   graph->SetPoint(34,425.6688389,175);
   graph->SetPoint(35,425,174.4029492);
   graph->SetPoint(36,400,150.5494843);
   graph->SetPoint(37,399.384143,150);
   graph->SetPoint(38,375,127.3198578);
   graph->SetPoint(39,372.0552092,125);
   graph->SetPoint(40,350,105.0283425);
   graph->SetPoint(41,343.1238273,100);
   graph->SetPoint(42,325,82.303792);
   graph->SetPoint(43,317.1718608,75);
   graph->SetPoint(44,300,51.50446684);
   graph->SetPoint(45,299.0641242,50);
   graph->SetPoint(46,292.9301552,25);
   graph->SetPoint(47,292.3639145,0);
   
   TH1F *Graph_Graph_g_excl_xsec_exp_m1522 = new TH1F("Graph_Graph_g_excl_xsec_exp_m1522","g_excl_xsec_exp_m1",100,243.7487,827.1309);
   Graph_Graph_g_excl_xsec_exp_m1522->SetMinimum(0);
   Graph_Graph_g_excl_xsec_exp_m1522->SetMaximum(344.0578);
   Graph_Graph_g_excl_xsec_exp_m1522->SetDirectory(0);
   Graph_Graph_g_excl_xsec_exp_m1522->SetStats(0);

   ci = TColor::GetColor("#0000ff");
   Graph_Graph_g_excl_xsec_exp_m1522->SetLineColor(ci);
   Graph_Graph_g_excl_xsec_exp_m1522->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_g_excl_xsec_exp_m1522->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_g_excl_xsec_exp_m1522->GetYaxis()->SetTitleOffset(1.2);
   graph->SetHistogram(Graph_Graph_g_excl_xsec_exp_m1522);
   
   graph->Draw("l");
   
   graph = new TGraph(39);
   graph->SetName("g_excl_xsec_obs");
   graph->SetTitle("g_excl_xsec_obs");

   ci = TColor::GetColor("#cccccc");
   graph->SetFillColor(ci);
   graph->SetLineWidth(4);
   graph->SetPoint(0,646.6287026,0);
   graph->SetPoint(1,650,2.851850687);
   graph->SetPoint(2,672.9745469,25);
   graph->SetPoint(3,675,27.50627889);
   graph->SetPoint(4,698.4989561,50);
   graph->SetPoint(5,700,51.63292436);
   graph->SetPoint(6,715.4530945,75);
   graph->SetPoint(7,722.2205679,100);
   graph->SetPoint(8,711.1708792,125);
   graph->SetPoint(9,701.8537015,150);
   graph->SetPoint(10,700,152.070762);
   graph->SetPoint(11,675,174.213539);
   graph->SetPoint(12,670.45593,175);
   graph->SetPoint(13,650,177.0497994);
   graph->SetPoint(14,625,188.0292659);
   graph->SetPoint(15,600,196.9989309);
   graph->SetPoint(16,584.1686218,200);
   graph->SetPoint(17,575,201.0210442);
   graph->SetPoint(18,570.8964898,200);
   graph->SetPoint(19,550,194.2680965);
   graph->SetPoint(20,525,185.4522851);
   graph->SetPoint(21,500,177.554459);
   graph->SetPoint(22,494.5189873,175);
   graph->SetPoint(23,475,159.660282);
   graph->SetPoint(24,458.4114727,150);
   graph->SetPoint(25,450,144.2477486);
   graph->SetPoint(26,425,132.5426294);
   graph->SetPoint(27,412.8771729,125);
   graph->SetPoint(28,400,113.8381566);
   graph->SetPoint(29,387.3756298,100);
   graph->SetPoint(30,375,86.93117568);
   graph->SetPoint(31,350,75.6874675);
   graph->SetPoint(32,349.200125,75);
   graph->SetPoint(33,326.8551542,50);
   graph->SetPoint(34,325,46.47059233);
   graph->SetPoint(35,315.9996019,25);
   graph->SetPoint(36,321.090787,0);
   graph->SetPoint(37,1300,-1300);
   graph->SetPoint(38,-1300,-1300);
   
   TH1F *Graph_Graph_g_excl_xsec_obs1923 = new TH1F("Graph_Graph_g_excl_xsec_obs1923","g_excl_xsec_obs",100,-1560,1560);
   Graph_Graph_g_excl_xsec_obs1923->SetMinimum(-1450.102);
   Graph_Graph_g_excl_xsec_obs1923->SetMaximum(351.1231);
   Graph_Graph_g_excl_xsec_obs1923->SetDirectory(0);
   Graph_Graph_g_excl_xsec_obs1923->SetStats(0);

   ci = TColor::GetColor("#0000ff");
   Graph_Graph_g_excl_xsec_obs1923->SetLineColor(ci);
   Graph_Graph_g_excl_xsec_obs1923->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_g_excl_xsec_obs1923->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_g_excl_xsec_obs1923->GetYaxis()->SetTitleOffset(1.2);
   graph->SetHistogram(Graph_Graph_g_excl_xsec_obs1923);
   
   graph->Draw("l");
   
   graph = new TGraph(39);
   graph->SetName("g_excl_xsec_obs_p1");
   graph->SetTitle("g_excl_xsec_obs_p1");

   ci = TColor::GetColor("#ff807e");
   graph->SetFillColor(ci);
   graph->SetLineWidth(2);
   graph->SetPoint(0,689.5245265,0);
   graph->SetPoint(1,700,10.40415107);
   graph->SetPoint(2,714.0536912,25);
   graph->SetPoint(3,725,35.81103102);
   graph->SetPoint(4,738.918056,50);
   graph->SetPoint(5,750,64.0177734);
   graph->SetPoint(6,757.7882775,75);
   graph->SetPoint(7,762.3758345,100);
   graph->SetPoint(8,758.6201727,125);
   graph->SetPoint(9,750,146.5431884);
   graph->SetPoint(10,748.3449745,150);
   graph->SetPoint(11,731.1602566,175);
   graph->SetPoint(12,725,181.1392548);
   graph->SetPoint(13,700,194.3719166);
   graph->SetPoint(14,689.4332777,200);
   graph->SetPoint(15,675,206.7267305);
   graph->SetPoint(16,650,208.2687965);
   graph->SetPoint(17,625,212.7224479);
   graph->SetPoint(18,600,215.8337005);
   graph->SetPoint(19,575,215.4618308);
   graph->SetPoint(20,550,206.0002825);
   graph->SetPoint(21,532.8899913,200);
   graph->SetPoint(22,525,196.6640937);
   graph->SetPoint(23,500,185.4569293);
   graph->SetPoint(24,477.865244,175);
   graph->SetPoint(25,475,172.7233394);
   graph->SetPoint(26,450,155.6533694);
   graph->SetPoint(27,437.5847206,150);
   graph->SetPoint(28,425,143.2572482);
   graph->SetPoint(29,400,126.7590732);
   graph->SetPoint(30,397.6513032,125);
   graph->SetPoint(31,375,100.9867578);
   graph->SetPoint(32,373.5563021,100);
   graph->SetPoint(33,350,84.68346747);
   graph->SetPoint(34,338.7607675,75);
   graph->SetPoint(35,325,60.03554934);
   graph->SetPoint(36,313.6981208,50);
   graph->SetPoint(37,302.4783649,25);
   graph->SetPoint(38,308.1317987,0);
   
   TH1F *Graph_Graph_g_excl_xsec_obs_p1724 = new TH1F("Graph_Graph_g_excl_xsec_obs_p1724","g_excl_xsec_obs_p1",100,256.4886,808.3656);
   Graph_Graph_g_excl_xsec_obs_p1724->SetMinimum(0);
   Graph_Graph_g_excl_xsec_obs_p1724->SetMaximum(237.4171);
   Graph_Graph_g_excl_xsec_obs_p1724->SetDirectory(0);
   Graph_Graph_g_excl_xsec_obs_p1724->SetStats(0);

   ci = TColor::GetColor("#0000ff");
   Graph_Graph_g_excl_xsec_obs_p1724->SetLineColor(ci);
   Graph_Graph_g_excl_xsec_obs_p1724->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_g_excl_xsec_obs_p1724->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_g_excl_xsec_obs_p1724->GetYaxis()->SetTitleOffset(1.2);
   graph->SetHistogram(Graph_Graph_g_excl_xsec_obs_p1724);
   
   graph->Draw("l");
   
   graph = new TGraph(32);
   graph->SetName("g_excl_xsec_obs_m1");
   graph->SetTitle("g_excl_xsec_obs_m1");

   ci = TColor::GetColor("#ff807e");
   graph->SetFillColor(ci);
   graph->SetLineWidth(2);
   graph->SetPoint(0,586.8277061,0);
   graph->SetPoint(1,600,10.41205116);
   graph->SetPoint(2,617.0796401,25);
   graph->SetPoint(3,625,34.21788504);
   graph->SetPoint(4,638.0567266,50);
   graph->SetPoint(5,650,68.02709669);
   graph->SetPoint(6,654.1538688,75);
   graph->SetPoint(7,653.2567683,100);
   graph->SetPoint(8,650,103.9926492);
   graph->SetPoint(9,634.637758,125);
   graph->SetPoint(10,625,145.3432682);
   graph->SetPoint(11,622.6516488,150);
   graph->SetPoint(12,600,168.8327537);
   graph->SetPoint(13,590.7251399,175);
   graph->SetPoint(14,575,179.854985);
   graph->SetPoint(15,550,178.7370058);
   graph->SetPoint(16,530.3619208,175);
   graph->SetPoint(17,525,173.2220652);
   graph->SetPoint(18,500,162.9779024);
   graph->SetPoint(19,481.4585608,150);
   graph->SetPoint(20,475,144.9030151);
   graph->SetPoint(21,450,129.3569649);
   graph->SetPoint(22,437.4772899,125);
   graph->SetPoint(23,425,118.6132662);
   graph->SetPoint(24,402.358522,100);
   graph->SetPoint(25,400,96.98227244);
   graph->SetPoint(26,380.5343684,75);
   graph->SetPoint(27,375,70.98518004);
   graph->SetPoint(28,350,57.47036732);
   graph->SetPoint(29,343.4372438,50);
   graph->SetPoint(30,332.8774013,25);
   graph->SetPoint(31,340.2188008,0);
   
   TH1F *Graph_Graph_g_excl_xsec_obs_m1825 = new TH1F("Graph_Graph_g_excl_xsec_obs_m1825","g_excl_xsec_obs_m1",100,300.7498,686.2815);
   Graph_Graph_g_excl_xsec_obs_m1825->SetMinimum(0);
   Graph_Graph_g_excl_xsec_obs_m1825->SetMaximum(197.8405);
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
      tex = new TLatex(0.18,0.7,"Razor 0L Asymptotic");
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
