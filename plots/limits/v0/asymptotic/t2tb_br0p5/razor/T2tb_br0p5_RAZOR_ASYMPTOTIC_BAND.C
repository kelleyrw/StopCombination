{
//=========Macro generated from canvas: cBrazil_/cBrazil_
//=========  (Mon Jun 30 07:31:26 2014) by ROOT version5.34/03
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
   
   TH2D *h_ul_xsec_exp_smoothEMPTY = new TH2D("h_ul_xsec_exp_smoothEMPTY","Expected razor #sigma #times Branching Fraction (t2tb_br0p5)EMPTY",31,137.5,912.5,29,-12.5,712.5);

   ci = TColor::GetColor("#0000ff");
   h_ul_xsec_exp_smoothEMPTY->SetLineColor(ci);
   h_ul_xsec_exp_smoothEMPTY->GetXaxis()->SetLabelSize(0.035);
   h_ul_xsec_exp_smoothEMPTY->GetYaxis()->SetLabelSize(0.035);
   h_ul_xsec_exp_smoothEMPTY->GetYaxis()->SetTitleOffset(1.2);
   h_ul_xsec_exp_smoothEMPTY->Draw("SAME");
   
   TGraph *graph = new TGraph(3);
   graph->SetName("diagonal");
   graph->SetTitle("Graph");

   ci = TColor::GetColor("#cccccc");
   graph->SetLineColor(ci);
   graph->SetLineStyle(2);
   graph->SetPoint(0,0,-100);
   graph->SetPoint(1,20000,19900);
   graph->SetPoint(2,150,900);
   
   TH1F *Graph_diagonal34 = new TH1F("Graph_diagonal34","Graph",100,0,22000);
   Graph_diagonal34->SetMinimum(-2100);
   Graph_diagonal34->SetMaximum(21900);
   Graph_diagonal34->SetDirectory(0);
   Graph_diagonal34->SetStats(0);

   ci = TColor::GetColor("#0000ff");
   Graph_diagonal34->SetLineColor(ci);
   Graph_diagonal34->GetXaxis()->SetLabelSize(0.035);
   Graph_diagonal34->GetYaxis()->SetLabelSize(0.035);
   Graph_diagonal34->GetYaxis()->SetTitleOffset(1.2);
   graph->SetHistogram(Graph_diagonal34);
   
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
   
   TH1F *Graph_Graph_diagonal3435 = new TH1F("Graph_Graph_diagonal3435","Graph",100,0,22000);
   Graph_Graph_diagonal3435->SetMinimum(-2100);
   Graph_Graph_diagonal3435->SetMaximum(21900);
   Graph_Graph_diagonal3435->SetDirectory(0);
   Graph_Graph_diagonal3435->SetStats(0);

   ci = TColor::GetColor("#0000ff");
   Graph_Graph_diagonal3435->SetLineColor(ci);
   Graph_Graph_diagonal3435->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_diagonal3435->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_diagonal3435->GetYaxis()->SetTitleOffset(1.2);
   graph->SetHistogram(Graph_Graph_diagonal3435);
   
   graph->Draw("l");
   
   graph = new TGraph(81);
   graph->SetName("Graph");
   graph->SetTitle("Graph");

   ci = TColor::GetColor("#ffcc00");
   graph->SetFillColor(ci);
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
   graph->SetPoint(33,292.3639145,0);
   graph->SetPoint(34,292.9301552,25);
   graph->SetPoint(35,299.0641242,50);
   graph->SetPoint(36,300,51.50446684);
   graph->SetPoint(37,317.1718608,75);
   graph->SetPoint(38,325,82.303792);
   graph->SetPoint(39,343.1238273,100);
   graph->SetPoint(40,350,105.0283425);
   graph->SetPoint(41,372.0552092,125);
   graph->SetPoint(42,375,127.3198578);
   graph->SetPoint(43,399.384143,150);
   graph->SetPoint(44,400,150.5494843);
   graph->SetPoint(45,425,174.4029492);
   graph->SetPoint(46,425.6688389,175);
   graph->SetPoint(47,450,192.6178688);
   graph->SetPoint(48,459.2812635,200);
   graph->SetPoint(49,475,209.6705012);
   graph->SetPoint(50,494.3469737,225);
   graph->SetPoint(51,500,228.8511395);
   graph->SetPoint(52,525,246.2376785);
   graph->SetPoint(53,530.3642129,250);
   graph->SetPoint(54,550,261.6461253);
   graph->SetPoint(55,569.0241744,275);
   graph->SetPoint(56,575,278.7182476);
   graph->SetPoint(57,600,292.6725983);
   graph->SetPoint(58,616.1622647,300);
   graph->SetPoint(59,625,303.2865815);
   graph->SetPoint(60,650,309.2713893);
   graph->SetPoint(61,675,312.7798421);
   graph->SetPoint(62,700,306.3077137);
   graph->SetPoint(63,707.7251282,300);
   graph->SetPoint(64,725,275.7877841);
   graph->SetPoint(65,725.4232504,275);
   graph->SetPoint(66,736.8965277,250);
   graph->SetPoint(67,748.7710211,225);
   graph->SetPoint(68,750,222.2184012);
   graph->SetPoint(69,759.4884528,200);
   graph->SetPoint(70,768.4219481,175);
   graph->SetPoint(71,775,154.7600766);
   graph->SetPoint(72,776.1762746,150);
   graph->SetPoint(73,778.5156793,125);
   graph->SetPoint(74,778.2993571,100);
   graph->SetPoint(75,775,76.17939735);
   graph->SetPoint(76,774.7908768,75);
   graph->SetPoint(77,764.4543923,50);
   graph->SetPoint(78,750,29.50946477);
   graph->SetPoint(79,746.6630767,25);
   graph->SetPoint(80,729.3146205,0);
   
   TH1F *Graph_Graph36 = new TH1F("Graph_Graph36","Graph",100,243.7487,827.1309);
   Graph_Graph36->SetMinimum(0);
   Graph_Graph36->SetMaximum(344.0578);
   Graph_Graph36->SetDirectory(0);
   Graph_Graph36->SetStats(0);

   ci = TColor::GetColor("#0000ff");
   Graph_Graph36->SetLineColor(ci);
   Graph_Graph36->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph36->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph36->GetYaxis()->SetTitleOffset(1.2);
   graph->SetHistogram(Graph_Graph36);
   
   graph->Draw("f");
   
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
   
   TH1F *Graph_Graph_Graph_g_excl_xsec_obs192337 = new TH1F("Graph_Graph_Graph_g_excl_xsec_obs192337","g_excl_xsec_obs",100,-1560,1560);
   Graph_Graph_Graph_g_excl_xsec_obs192337->SetMinimum(-1450.102);
   Graph_Graph_Graph_g_excl_xsec_obs192337->SetMaximum(351.1231);
   Graph_Graph_Graph_g_excl_xsec_obs192337->SetDirectory(0);
   Graph_Graph_Graph_g_excl_xsec_obs192337->SetStats(0);

   ci = TColor::GetColor("#0000ff");
   Graph_Graph_Graph_g_excl_xsec_obs192337->SetLineColor(ci);
   Graph_Graph_Graph_g_excl_xsec_obs192337->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_Graph_g_excl_xsec_obs192337->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_Graph_g_excl_xsec_obs192337->GetYaxis()->SetTitleOffset(1.2);
   graph->SetHistogram(Graph_Graph_Graph_g_excl_xsec_obs192337);
   
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
   
   TH1F *Graph_Graph_Graph_g_excl_xsec_obs_p172438 = new TH1F("Graph_Graph_Graph_g_excl_xsec_obs_p172438","g_excl_xsec_obs_p1",100,256.4886,808.3656);
   Graph_Graph_Graph_g_excl_xsec_obs_p172438->SetMinimum(0);
   Graph_Graph_Graph_g_excl_xsec_obs_p172438->SetMaximum(237.4171);
   Graph_Graph_Graph_g_excl_xsec_obs_p172438->SetDirectory(0);
   Graph_Graph_Graph_g_excl_xsec_obs_p172438->SetStats(0);

   ci = TColor::GetColor("#0000ff");
   Graph_Graph_Graph_g_excl_xsec_obs_p172438->SetLineColor(ci);
   Graph_Graph_Graph_g_excl_xsec_obs_p172438->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_Graph_g_excl_xsec_obs_p172438->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_Graph_g_excl_xsec_obs_p172438->GetYaxis()->SetTitleOffset(1.2);
   graph->SetHistogram(Graph_Graph_Graph_g_excl_xsec_obs_p172438);
   
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
   
   TH1F *Graph_Graph_Graph_g_excl_xsec_obs_m182539 = new TH1F("Graph_Graph_Graph_g_excl_xsec_obs_m182539","g_excl_xsec_obs_m1",100,300.7498,686.2815);
   Graph_Graph_Graph_g_excl_xsec_obs_m182539->SetMinimum(0);
   Graph_Graph_Graph_g_excl_xsec_obs_m182539->SetMaximum(197.8405);
   Graph_Graph_Graph_g_excl_xsec_obs_m182539->SetDirectory(0);
   Graph_Graph_Graph_g_excl_xsec_obs_m182539->SetStats(0);

   ci = TColor::GetColor("#0000ff");
   Graph_Graph_Graph_g_excl_xsec_obs_m182539->SetLineColor(ci);
   Graph_Graph_Graph_g_excl_xsec_obs_m182539->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_Graph_g_excl_xsec_obs_m182539->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_Graph_g_excl_xsec_obs_m182539->GetYaxis()->SetTitleOffset(1.2);
   graph->SetHistogram(Graph_Graph_Graph_g_excl_xsec_obs_m182539);
   
   graph->Draw("l");
   
   graph = new TGraph(41);
   graph->SetName("g_excl_xsec_exp");
   graph->SetTitle("g_excl_xsec_exp");

   ci = TColor::GetColor("#ff807e");
   graph->SetFillColor(ci);
   graph->SetLineStyle(2);
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
   
   TH1F *Graph_Graph_Graph_g_excl_xsec_exp32040 = new TH1F("Graph_Graph_Graph_g_excl_xsec_exp32040","g_excl_xsec_exp",100,285.5648,744.8037);
   Graph_Graph_Graph_g_excl_xsec_exp32040->SetMinimum(0);
   Graph_Graph_Graph_g_excl_xsec_exp32040->SetMaximum(284.7889);
   Graph_Graph_Graph_g_excl_xsec_exp32040->SetDirectory(0);
   Graph_Graph_Graph_g_excl_xsec_exp32040->SetStats(0);

   ci = TColor::GetColor("#0000ff");
   Graph_Graph_Graph_g_excl_xsec_exp32040->SetLineColor(ci);
   Graph_Graph_Graph_g_excl_xsec_exp32040->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_Graph_g_excl_xsec_exp32040->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_Graph_g_excl_xsec_exp32040->GetYaxis()->SetTitleOffset(1.2);
   graph->SetHistogram(Graph_Graph_Graph_g_excl_xsec_exp32040);
   
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
   
   TH1F *Graph_white41 = new TH1F("Graph_white41","white",100,75,975);
   Graph_white41->SetMinimum(435);
   Graph_white41->SetMaximum(615);
   Graph_white41->SetDirectory(0);
   Graph_white41->SetStats(0);

   ci = TColor::GetColor("#0000ff");
   Graph_white41->SetLineColor(ci);
   Graph_white41->GetXaxis()->SetLabelSize(0.035);
   Graph_white41->GetYaxis()->SetLabelSize(0.035);
   Graph_white41->GetYaxis()->SetTitleOffset(1.2);
   graph->SetHistogram(Graph_white41);
   
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
   
   TH1F *Graph_Graph_white4142 = new TH1F("Graph_Graph_white4142","white",100,75,975);
   Graph_Graph_white4142->SetMinimum(435);
   Graph_Graph_white4142->SetMaximum(615);
   Graph_Graph_white4142->SetDirectory(0);
   Graph_Graph_white4142->SetStats(0);

   ci = TColor::GetColor("#0000ff");
   Graph_Graph_white4142->SetLineColor(ci);
   Graph_Graph_white4142->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_white4142->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_white4142->GetYaxis()->SetTitleOffset(1.2);
   graph->SetHistogram(Graph_Graph_white4142);
   
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
   
   TH1F *Graph_LObs43 = new TH1F("Graph_LObs43","LObs",100,166.7,230.3);
   Graph_LObs43->SetMinimum(518.9);
   Graph_LObs43->SetMaximum(520.1);
   Graph_LObs43->SetDirectory(0);
   Graph_LObs43->SetStats(0);

   ci = TColor::GetColor("#0000ff");
   Graph_LObs43->SetLineColor(ci);
   Graph_LObs43->GetXaxis()->SetLabelSize(0.035);
   Graph_LObs43->GetYaxis()->SetLabelSize(0.035);
   Graph_LObs43->GetYaxis()->SetTitleOffset(1.2);
   graph->SetHistogram(Graph_LObs43);
   
   graph->Draw("l");
   
   graph = new TGraph(2);
   graph->SetName("LObsM");
   graph->SetTitle("LObsM");
   graph->SetFillColor(1);
   graph->SetLineWidth(2);
   graph->SetMarkerStyle(20);
   graph->SetPoint(0,172,510);
   graph->SetPoint(1,225,510);
   
   TH1F *Graph_LObsM44 = new TH1F("Graph_LObsM44","LObsM",100,166.7,230.3);
   Graph_LObsM44->SetMinimum(509.9);
   Graph_LObsM44->SetMaximum(511.1);
   Graph_LObsM44->SetDirectory(0);
   Graph_LObsM44->SetStats(0);

   ci = TColor::GetColor("#0000ff");
   Graph_LObsM44->SetLineColor(ci);
   Graph_LObsM44->GetXaxis()->SetLabelSize(0.035);
   Graph_LObsM44->GetYaxis()->SetLabelSize(0.035);
   Graph_LObsM44->GetYaxis()->SetTitleOffset(1.2);
   graph->SetHistogram(Graph_LObsM44);
   
   graph->Draw("l");
   
   graph = new TGraph(2);
   graph->SetName("LObsP");
   graph->SetTitle("LObsP");
   graph->SetFillColor(1);
   graph->SetLineWidth(2);
   graph->SetMarkerStyle(20);
   graph->SetPoint(0,172,528);
   graph->SetPoint(1,225,528);
   
   TH1F *Graph_LObsP45 = new TH1F("Graph_LObsP45","LObsP",100,166.7,230.3);
   Graph_LObsP45->SetMinimum(527.9);
   Graph_LObsP45->SetMaximum(529.1);
   Graph_LObsP45->SetDirectory(0);
   Graph_LObsP45->SetStats(0);

   ci = TColor::GetColor("#0000ff");
   Graph_LObsP45->SetLineColor(ci);
   Graph_LObsP45->GetXaxis()->SetLabelSize(0.035);
   Graph_LObsP45->GetYaxis()->SetLabelSize(0.035);
   Graph_LObsP45->GetYaxis()->SetTitleOffset(1.2);
   graph->SetHistogram(Graph_LObsP45);
   
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
   
   TH1F *Graph_LExpPM46 = new TH1F("Graph_LExpPM46","LExpPM",100,166.7,230.3);
   Graph_LExpPM46->SetMinimum(469.2);
   Graph_LExpPM46->SetMaximum(490.8);
   Graph_LExpPM46->SetDirectory(0);
   Graph_LExpPM46->SetStats(0);

   ci = TColor::GetColor("#0000ff");
   Graph_LExpPM46->SetLineColor(ci);
   Graph_LExpPM46->GetXaxis()->SetLabelSize(0.035);
   Graph_LExpPM46->GetYaxis()->SetLabelSize(0.035);
   Graph_LExpPM46->GetYaxis()->SetTitleOffset(1.2);
   graph->SetHistogram(Graph_LExpPM46);
   
   graph->Draw("f");
   
   graph = new TGraph(2);
   graph->SetName("LExp");
   graph->SetTitle("LExp");
   graph->SetFillColor(1);
   graph->SetLineStyle(2);
   graph->SetLineWidth(4);
   graph->SetPoint(0,172,480);
   graph->SetPoint(1,225,480);
   
   TH1F *Graph_LExp47 = new TH1F("Graph_LExp47","LExp",100,166.7,230.3);
   Graph_LExp47->SetMinimum(479.9);
   Graph_LExp47->SetMaximum(481.1);
   Graph_LExp47->SetDirectory(0);
   Graph_LExp47->SetStats(0);

   ci = TColor::GetColor("#0000ff");
   Graph_LExp47->SetLineColor(ci);
   Graph_LExp47->GetXaxis()->SetLabelSize(0.035);
   Graph_LExp47->GetYaxis()->SetLabelSize(0.035);
   Graph_LExp47->GetYaxis()->SetTitleOffset(1.2);
   graph->SetHistogram(Graph_LExp47);
   
   graph->Draw("l");
   cBrazil_->Modified();
   cBrazil_->cd();
   cBrazil_->SetSelected(cBrazil_);
}
