{
//=========Macro generated from canvas: cBrazil_/cBrazil_
//=========  (Sun Jun 29 21:58:31 2014) by ROOT version5.34/03
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
   
   TH2D *h_ul_xsec_exp_smoothEMPTY = new TH2D("h_ul_xsec_exp_smoothEMPTY","Expected combined #sigma #times Branching Fraction (t2tb_br0p3)EMPTY",31,137.5,912.5,29,-12.5,712.5);

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
   
   graph = new TGraph(82);
   graph->SetName("Graph");
   graph->SetTitle("Graph");

   ci = TColor::GetColor("#ffcc00");
   graph->SetFillColor(ci);
   graph->SetPoint(0,571.7059175,0);
   graph->SetPoint(1,575,2.423164348);
   graph->SetPoint(2,600,24.51052542);
   graph->SetPoint(3,600.4520471,25);
   graph->SetPoint(4,625,48.87770301);
   graph->SetPoint(5,626.0936448,50);
   graph->SetPoint(6,642.6944233,75);
   graph->SetPoint(7,650,97.03003839);
   graph->SetPoint(8,650.9408408,100);
   graph->SetPoint(9,652.1166249,125);
   graph->SetPoint(10,650.0949665,150);
   graph->SetPoint(11,650,150.5094054);
   graph->SetPoint(12,644.4236595,175);
   graph->SetPoint(13,634.2210549,200);
   graph->SetPoint(14,625,215.1846502);
   graph->SetPoint(15,613.1796813,225);
   graph->SetPoint(16,600,229.9923188);
   graph->SetPoint(17,575,229.6272228);
   graph->SetPoint(18,554.8238294,225);
   graph->SetPoint(19,550,223.4524201);
   graph->SetPoint(20,525,209.2522669);
   graph->SetPoint(21,506.1958364,200);
   graph->SetPoint(22,500,196.5120728);
   graph->SetPoint(23,475,181.3377444);
   graph->SetPoint(24,464.7564819,175);
   graph->SetPoint(25,450,163.7480053);
   graph->SetPoint(26,433.0561804,150);
   graph->SetPoint(27,425,142.7717313);
   graph->SetPoint(28,406.0591744,125);
   graph->SetPoint(29,400,119.2509977);
   graph->SetPoint(30,377.5728279,100);
   graph->SetPoint(31,375,96.95273289);
   graph->SetPoint(32,355.4606481,75);
   graph->SetPoint(33,350,64.78504634);
   graph->SetPoint(34,342.1935288,50);
   graph->SetPoint(35,341.2001434,25);
   graph->SetPoint(36,350,1.797013094);
   graph->SetPoint(37,350.9197392,0);
   graph->SetPoint(38,289.221778,0);
   graph->SetPoint(39,291.5135937,25);
   graph->SetPoint(40,300,47.16378491);
   graph->SetPoint(41,301.0059777,50);
   graph->SetPoint(42,318.5475819,75);
   graph->SetPoint(43,325,82.25077814);
   graph->SetPoint(44,340.9703323,100);
   graph->SetPoint(45,350,107.8238312);
   graph->SetPoint(46,367.8499503,125);
   graph->SetPoint(47,375,130.6098351);
   graph->SetPoint(48,398.2847619,150);
   graph->SetPoint(49,400,151.2114659);
   graph->SetPoint(50,425,170.2485787);
   graph->SetPoint(51,430.638805,175);
   graph->SetPoint(52,450,188.9274646);
   graph->SetPoint(53,463.5358569,200);
   graph->SetPoint(54,475,207.1153125);
   graph->SetPoint(55,498.6468035,225);
   graph->SetPoint(56,500,225.8394118);
   graph->SetPoint(57,525,238.5238496);
   graph->SetPoint(58,543.8915088,250);
   graph->SetPoint(59,550,253.3392193);
   graph->SetPoint(60,575,266.3587265);
   graph->SetPoint(61,590.7061251,275);
   graph->SetPoint(62,600,279.5854036);
   graph->SetPoint(63,625,285.5130764);
   graph->SetPoint(64,650,280.5525572);
   graph->SetPoint(65,658.3540742,275);
   graph->SetPoint(66,675,255.8562077);
   graph->SetPoint(67,678.80283,250);
   graph->SetPoint(68,689.4192622,225);
   graph->SetPoint(69,697.1790454,200);
   graph->SetPoint(70,700,191.0302453);
   graph->SetPoint(71,704.3294657,175);
   graph->SetPoint(72,710.0379905,150);
   graph->SetPoint(73,709.5533529,125);
   graph->SetPoint(74,706.5925925,100);
   graph->SetPoint(75,701.18771,75);
   graph->SetPoint(76,700,73.47698938);
   graph->SetPoint(77,683.5282419,50);
   graph->SetPoint(78,675,41.19975535);
   graph->SetPoint(79,655.536375,25);
   graph->SetPoint(80,650,18.63869255);
   graph->SetPoint(81,634.5798545,0);
   
   TH1F *Graph_Graph36 = new TH1F("Graph_Graph36","Graph",100,247.1402,752.1196);
   Graph_Graph36->SetMinimum(0);
   Graph_Graph36->SetMaximum(314.0644);
   Graph_Graph36->SetDirectory(0);
   Graph_Graph36->SetStats(0);

   ci = TColor::GetColor("#0000ff");
   Graph_Graph36->SetLineColor(ci);
   Graph_Graph36->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph36->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph36->GetYaxis()->SetTitleOffset(1.2);
   graph->SetHistogram(Graph_Graph36);
   
   graph->Draw("f");
   
   graph = new TGraph(41);
   graph->SetName("g_excl_xsec_obs");
   graph->SetTitle("g_excl_xsec_obs");

   ci = TColor::GetColor("#cccccc");
   graph->SetFillColor(ci);
   graph->SetLineWidth(4);
   graph->SetPoint(0,589.8776763,0);
   graph->SetPoint(1,600,8.137365633);
   graph->SetPoint(2,618.232094,25);
   graph->SetPoint(3,625,30.81771717);
   graph->SetPoint(4,648.777001,50);
   graph->SetPoint(5,650,51.32849596);
   graph->SetPoint(6,671.2359746,75);
   graph->SetPoint(7,675,83.43615492);
   graph->SetPoint(8,683.0479322,100);
   graph->SetPoint(9,685.764774,125);
   graph->SetPoint(10,682.1310641,150);
   graph->SetPoint(11,675,169.9735185);
   graph->SetPoint(12,672.4283619,175);
   graph->SetPoint(13,650.7622453,200);
   graph->SetPoint(14,650,200.8010333);
   graph->SetPoint(15,629.6442111,225);
   graph->SetPoint(16,625,228.2337596);
   graph->SetPoint(17,600,234.8593795);
   graph->SetPoint(18,575,234.7057086);
   graph->SetPoint(19,550,227.9466283);
   graph->SetPoint(20,543.7801753,225);
   graph->SetPoint(21,525,215.2231127);
   graph->SetPoint(22,500,203.4961006);
   graph->SetPoint(23,491.961705,200);
   graph->SetPoint(24,475,189.9426046);
   graph->SetPoint(25,450,177.1246796);
   graph->SetPoint(26,446.9087353,175);
   graph->SetPoint(27,425,157.4558633);
   graph->SetPoint(28,414.0150651,150);
   graph->SetPoint(29,400,139.0190153);
   graph->SetPoint(30,379.6588499,125);
   graph->SetPoint(31,375,120.8635262);
   graph->SetPoint(32,353.1570948,100);
   graph->SetPoint(33,350,96.75813854);
   graph->SetPoint(34,329.1438635,75);
   graph->SetPoint(35,325,69.51752256);
   graph->SetPoint(36,309.6443375,50);
   graph->SetPoint(37,301.6528479,25);
   graph->SetPoint(38,302.5443806,0);
   graph->SetPoint(39,1300,-1300);
   graph->SetPoint(40,-1300,-1300);
   
   TH1F *Graph_Graph_Graph_g_excl_xsec_obs192337 = new TH1F("Graph_Graph_Graph_g_excl_xsec_obs192337","g_excl_xsec_obs",100,-1560,1560);
   Graph_Graph_Graph_g_excl_xsec_obs192337->SetMinimum(-1453.486);
   Graph_Graph_Graph_g_excl_xsec_obs192337->SetMaximum(388.3453);
   Graph_Graph_Graph_g_excl_xsec_obs192337->SetDirectory(0);
   Graph_Graph_Graph_g_excl_xsec_obs192337->SetStats(0);

   ci = TColor::GetColor("#0000ff");
   Graph_Graph_Graph_g_excl_xsec_obs192337->SetLineColor(ci);
   Graph_Graph_Graph_g_excl_xsec_obs192337->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_Graph_g_excl_xsec_obs192337->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_Graph_g_excl_xsec_obs192337->GetYaxis()->SetTitleOffset(1.2);
   graph->SetHistogram(Graph_Graph_Graph_g_excl_xsec_obs192337);
   
   graph->Draw("l");
   
   graph = new TGraph(43);
   graph->SetName("g_excl_xsec_obs_p1");
   graph->SetTitle("g_excl_xsec_obs_p1");

   ci = TColor::GetColor("#ff807e");
   graph->SetFillColor(ci);
   graph->SetLineWidth(2);
   graph->SetPoint(0,623.0908263,0);
   graph->SetPoint(1,625,1.719181216);
   graph->SetPoint(2,650,23.79199263);
   graph->SetPoint(3,651.2946585,25);
   graph->SetPoint(4,675,45.86651212);
   graph->SetPoint(5,681.0540228,50);
   graph->SetPoint(6,700,65.83262329);
   graph->SetPoint(7,712.979789,75);
   graph->SetPoint(8,721.9333021,100);
   graph->SetPoint(9,719.4031869,125);
   graph->SetPoint(10,715.2383058,150);
   graph->SetPoint(11,705.1401034,175);
   graph->SetPoint(12,700,181.7962782);
   graph->SetPoint(13,685.7886049,200);
   graph->SetPoint(14,675,214.0657148);
   graph->SetPoint(15,664.2250138,225);
   graph->SetPoint(16,650,238.0596708);
   graph->SetPoint(17,626.1271862,250);
   graph->SetPoint(18,625,250.2675974);
   graph->SetPoint(19,600,253.0650672);
   graph->SetPoint(20,584.0071397,250);
   graph->SetPoint(21,575,248.1656294);
   graph->SetPoint(22,550,238.2389154);
   graph->SetPoint(23,525,225.7568223);
   graph->SetPoint(24,523.6747198,225);
   graph->SetPoint(25,500,210.5017431);
   graph->SetPoint(26,476.1596457,200);
   graph->SetPoint(27,475,199.3053671);
   graph->SetPoint(28,450,183.824214);
   graph->SetPoint(29,437.2367746,175);
   graph->SetPoint(30,425,165.1591913);
   graph->SetPoint(31,402.4904816,150);
   graph->SetPoint(32,400,148.0598714);
   graph->SetPoint(33,375,128.473276);
   graph->SetPoint(34,370.65991,125);
   graph->SetPoint(35,350,104.8943457);
   graph->SetPoint(36,343.2455347,100);
   graph->SetPoint(37,325,81.13299733);
   graph->SetPoint(38,319.2565323,75);
   graph->SetPoint(39,300,52.60606455);
   graph->SetPoint(40,298.156285,50);
   graph->SetPoint(41,290.8850793,25);
   graph->SetPoint(42,288.6582847,0);
   
   TH1F *Graph_Graph_Graph_g_excl_xsec_obs_p172438 = new TH1F("Graph_Graph_Graph_g_excl_xsec_obs_p172438","g_excl_xsec_obs_p1",100,245.3308,765.2608);
   Graph_Graph_Graph_g_excl_xsec_obs_p172438->SetMinimum(0);
   Graph_Graph_Graph_g_excl_xsec_obs_p172438->SetMaximum(278.3716);
   Graph_Graph_Graph_g_excl_xsec_obs_p172438->SetDirectory(0);
   Graph_Graph_Graph_g_excl_xsec_obs_p172438->SetStats(0);

   ci = TColor::GetColor("#0000ff");
   Graph_Graph_Graph_g_excl_xsec_obs_p172438->SetLineColor(ci);
   Graph_Graph_Graph_g_excl_xsec_obs_p172438->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_Graph_g_excl_xsec_obs_p172438->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_Graph_g_excl_xsec_obs_p172438->GetYaxis()->SetTitleOffset(1.2);
   graph->SetHistogram(Graph_Graph_Graph_g_excl_xsec_obs_p172438);
   
   graph->Draw("l");
   
   graph = new TGraph(35);
   graph->SetName("g_excl_xsec_obs_m1");
   graph->SetTitle("g_excl_xsec_obs_m1");

   ci = TColor::GetColor("#ff807e");
   graph->SetFillColor(ci);
   graph->SetLineWidth(2);
   graph->SetPoint(0,548.9005388,0);
   graph->SetPoint(1,550,0.7277347963);
   graph->SetPoint(2,575,17.63696248);
   graph->SetPoint(3,583.8675679,25);
   graph->SetPoint(4,600,36.68153609);
   graph->SetPoint(5,614.9159397,50);
   graph->SetPoint(6,625,63.40081021);
   graph->SetPoint(7,635.1355803,75);
   graph->SetPoint(8,644.4796247,100);
   graph->SetPoint(9,641.9989189,125);
   graph->SetPoint(10,638.5591919,150);
   graph->SetPoint(11,630.8892166,175);
   graph->SetPoint(12,625,185.0624775);
   graph->SetPoint(13,614.5996609,200);
   graph->SetPoint(14,600,210.6476003);
   graph->SetPoint(15,575,218.7727633);
   graph->SetPoint(16,550,213.2270847);
   graph->SetPoint(17,525,204.2020484);
   graph->SetPoint(18,513.9797883,200);
   graph->SetPoint(19,500,193.2975436);
   graph->SetPoint(20,475,180.5798421);
   graph->SetPoint(21,463.1329966,175);
   graph->SetPoint(22,450,166.4734822);
   graph->SetPoint(23,425.5854247,150);
   graph->SetPoint(24,425,149.5514749);
   graph->SetPoint(25,400,129.9781593);
   graph->SetPoint(26,392.7707289,125);
   graph->SetPoint(27,375,109.23172);
   graph->SetPoint(28,365.3722215,100);
   graph->SetPoint(29,350,84.1712078);
   graph->SetPoint(30,341.1828001,75);
   graph->SetPoint(31,325,53.63519041);
   graph->SetPoint(32,322.1914987,50);
   graph->SetPoint(33,315.1338904,25);
   graph->SetPoint(34,320.6975304,0);
   
   TH1F *Graph_Graph_Graph_g_excl_xsec_obs_m182539 = new TH1F("Graph_Graph_Graph_g_excl_xsec_obs_m182539","g_excl_xsec_obs_m1",100,282.1993,677.4142);
   Graph_Graph_Graph_g_excl_xsec_obs_m182539->SetMinimum(0);
   Graph_Graph_Graph_g_excl_xsec_obs_m182539->SetMaximum(240.65);
   Graph_Graph_Graph_g_excl_xsec_obs_m182539->SetDirectory(0);
   Graph_Graph_Graph_g_excl_xsec_obs_m182539->SetStats(0);

   ci = TColor::GetColor("#0000ff");
   Graph_Graph_Graph_g_excl_xsec_obs_m182539->SetLineColor(ci);
   Graph_Graph_Graph_g_excl_xsec_obs_m182539->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_Graph_g_excl_xsec_obs_m182539->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_Graph_g_excl_xsec_obs_m182539->GetYaxis()->SetTitleOffset(1.2);
   graph->SetHistogram(Graph_Graph_Graph_g_excl_xsec_obs_m182539);
   
   graph->Draw("l");
   
   graph = new TGraph(40);
   graph->SetName("g_excl_xsec_exp");
   graph->SetTitle("g_excl_xsec_exp");

   ci = TColor::GetColor("#ff807e");
   graph->SetFillColor(ci);
   graph->SetLineStyle(2);
   graph->SetLineWidth(4);
   graph->SetPoint(0,610.4158438,0);
   graph->SetPoint(1,625,16.01224482);
   graph->SetPoint(2,632.7473892,25);
   graph->SetPoint(3,650,41.87734099);
   graph->SetPoint(4,657.9979888,50);
   graph->SetPoint(5,675,72.35150825);
   graph->SetPoint(6,677.0959056,75);
   graph->SetPoint(7,685.1395886,100);
   graph->SetPoint(8,687.6120847,125);
   graph->SetPoint(9,685.7823065,150);
   graph->SetPoint(10,681.4661893,175);
   graph->SetPoint(11,675,198.3584247);
   graph->SetPoint(12,674.4632463,200);
   graph->SetPoint(13,664.4656402,225);
   graph->SetPoint(14,650,248.2811102);
   graph->SetPoint(15,648.0186556,250);
   graph->SetPoint(16,625,259.9419052);
   graph->SetPoint(17,600,262.0986798);
   graph->SetPoint(18,575,254.7345665);
   graph->SetPoint(19,562.9826121,250);
   graph->SetPoint(20,550,244.015073);
   graph->SetPoint(21,525,229.7974354);
   graph->SetPoint(22,516.1130851,225);
   graph->SetPoint(23,500,213.8258123);
   graph->SetPoint(24,475.1288126,200);
   graph->SetPoint(25,475,199.9132412);
   graph->SetPoint(26,450,180.5440177);
   graph->SetPoint(27,442.6035414,175);
   graph->SetPoint(28,425,159.526614);
   graph->SetPoint(29,413.6600084,150);
   graph->SetPoint(30,400,137.7732917);
   graph->SetPoint(31,383.0824348,125);
   graph->SetPoint(32,375,118.1319594);
   graph->SetPoint(33,352.8337874,100);
   graph->SetPoint(34,350,96.81503443);
   graph->SetPoint(35,329.6477085,75);
   graph->SetPoint(36,325,66.31494129);
   graph->SetPoint(37,317.0799232,50);
   graph->SetPoint(38,313.7921118,25);
   graph->SetPoint(39,318.0505985,0);
   
   TH1F *Graph_Graph_Graph_g_excl_xsec_exp32040 = new TH1F("Graph_Graph_Graph_g_excl_xsec_exp32040","g_excl_xsec_exp",100,276.4101,724.9941);
   Graph_Graph_Graph_g_excl_xsec_exp32040->SetMinimum(0);
   Graph_Graph_Graph_g_excl_xsec_exp32040->SetMaximum(288.3085);
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
      tex = new TLatex(0.18,0.7,"MVA 1L Razor 0L");
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
