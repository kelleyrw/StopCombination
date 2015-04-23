{
//=========Macro generated from canvas: cBrazil_/cBrazil_
//=========  (Thu Apr 23 07:28:22 2015) by ROOT version5.34/03
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
   
   TH2D *h_ul_xsec_obs_smoothEMPTY = new TH2D("h_ul_xsec_obs_smoothEMPTY","Observed razor #sigma #times Branching Fraction (t2bw)EMPTY",31,137.5,912.5,29,-12.5,712.5);

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
   
   graph = new TGraph(96);
   graph->SetName("Graph");
   graph->SetTitle("Graph");

   ci = TColor::GetColor("#ffcc00");
   graph->SetFillColor(ci);
   graph->SetPoint(0,581.3439521,0);
   graph->SetPoint(1,600,16.57589995);
   graph->SetPoint(2,608.2416089,25);
   graph->SetPoint(3,625,38.87965596);
   graph->SetPoint(4,637.9146286,50);
   graph->SetPoint(5,650,63.6114453);
   graph->SetPoint(6,660.9601763,75);
   graph->SetPoint(7,675,98.12020821);
   graph->SetPoint(8,676.1664099,100);
   graph->SetPoint(9,681.4428236,125);
   graph->SetPoint(10,680.5602703,150);
   graph->SetPoint(11,678.5682297,175);
   graph->SetPoint(12,675,190.7637383);
   graph->SetPoint(13,672.5409366,200);
   graph->SetPoint(14,665.4681066,225);
   graph->SetPoint(15,655.0410538,250);
   graph->SetPoint(16,650,256.6221143);
   graph->SetPoint(17,625,272.604841);
   graph->SetPoint(18,616.0534515,275);
   graph->SetPoint(19,600,277.0737234);
   graph->SetPoint(20,594.1840952,275);
   graph->SetPoint(21,575,267.7543463);
   graph->SetPoint(22,550,256.6888694);
   graph->SetPoint(23,536.914251,250);
   graph->SetPoint(24,525,242.7562596);
   graph->SetPoint(25,500,228.8179705);
   graph->SetPoint(26,493.7291511,225);
   graph->SetPoint(27,475,211.6956766);
   graph->SetPoint(28,454.2646813,200);
   graph->SetPoint(29,450,196.7874737);
   graph->SetPoint(30,425,176.8503207);
   graph->SetPoint(31,421.9813437,175);
   graph->SetPoint(32,400,156.7212399);
   graph->SetPoint(33,392.2587492,150);
   graph->SetPoint(34,375,134.3262048);
   graph->SetPoint(35,363.0401501,125);
   graph->SetPoint(36,350,113.2144313);
   graph->SetPoint(37,332.6864916,100);
   graph->SetPoint(38,325,92.41320037);
   graph->SetPoint(39,306.954581,75);
   graph->SetPoint(40,300,65.13890994);
   graph->SetPoint(41,290.4594775,50);
   graph->SetPoint(42,284.9410895,25);
   graph->SetPoint(43,288.2503472,0);
   graph->SetPoint(44,243.7762457,0);
   graph->SetPoint(45,246.5905602,25);
   graph->SetPoint(46,250,34.32226018);
   graph->SetPoint(47,257.0483818,50);
   graph->SetPoint(48,274.9998907,75);
   graph->SetPoint(49,275,75.00010927);
   graph->SetPoint(50,299.9998345,100);
   graph->SetPoint(51,300,100.0001655);
   graph->SetPoint(52,324.9999503,125);
   graph->SetPoint(53,325,125.0000497);
   graph->SetPoint(54,350,139.9891448);
   graph->SetPoint(55,362.1875064,150);
   graph->SetPoint(56,375,161.7907992);
   graph->SetPoint(57,388.0091737,175);
   graph->SetPoint(58,400,183.260335);
   graph->SetPoint(59,422.08798,200);
   graph->SetPoint(60,425,201.9768786);
   graph->SetPoint(61,450,221.1450738);
   graph->SetPoint(62,454.7909758,225);
   graph->SetPoint(63,475,241.5045837);
   graph->SetPoint(64,485.5370373,250);
   graph->SetPoint(65,500,262.3951786);
   graph->SetPoint(66,525,273.2459091);
   graph->SetPoint(67,528.131876,275);
   graph->SetPoint(68,550,285.1448766);
   graph->SetPoint(69,569.8695357,300);
   graph->SetPoint(70,575,303.0652433);
   graph->SetPoint(71,600,315.6076098);
   graph->SetPoint(72,618.3135653,325);
   graph->SetPoint(73,625,327.8168493);
   graph->SetPoint(74,650,334.8747587);
   graph->SetPoint(75,675,340.0592536);
   graph->SetPoint(76,700,329.9908489);
   graph->SetPoint(77,703.2305564,325);
   graph->SetPoint(78,717.1646952,300);
   graph->SetPoint(79,725,282.7845813);
   graph->SetPoint(80,727.9712615,275);
   graph->SetPoint(81,732.9643227,250);
   graph->SetPoint(82,736.6895896,225);
   graph->SetPoint(83,739.598955,200);
   graph->SetPoint(84,739.6046374,175);
   graph->SetPoint(85,742.1708165,150);
   graph->SetPoint(86,745.5406416,125);
   graph->SetPoint(87,738.4204636,100);
   graph->SetPoint(88,725,75.44167017);
   graph->SetPoint(89,724.7098057,75);
   graph->SetPoint(90,700,57.16334028);
   graph->SetPoint(91,692.9427604,50);
   graph->SetPoint(92,675,34.19943512);
   graph->SetPoint(93,662.0926678,25);
   graph->SetPoint(94,650,11.67613327);
   graph->SetPoint(95,640.4505734,0);
   
   TH1F *Graph_Graph36 = new TH1F("Graph_Graph36","Graph",100,193.5998,795.7171);
   Graph_Graph36->SetMinimum(0);
   Graph_Graph36->SetMaximum(374.0652);
   Graph_Graph36->SetDirectory(0);
   Graph_Graph36->SetStats(0);

   ci = TColor::GetColor("#0000ff");
   Graph_Graph36->SetLineColor(ci);
   Graph_Graph36->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph36->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph36->GetYaxis()->SetTitleOffset(1.2);
   graph->SetHistogram(Graph_Graph36);
   
   graph->Draw("f");
   
   graph = new TGraph(50);
   graph->SetName("g_excl_xsec_obs");
   graph->SetTitle("g_excl_xsec_obs");

   ci = TColor::GetColor("#cccccc");
   graph->SetFillColor(ci);
   graph->SetLineWidth(4);
   graph->SetPoint(0,574.9442602,0);
   graph->SetPoint(1,575,0.03876282504);
   graph->SetPoint(2,600,22.78497956);
   graph->SetPoint(3,602.3839084,25);
   graph->SetPoint(4,625,39.72717022);
   graph->SetPoint(5,644.6106397,50);
   graph->SetPoint(6,650,53.93885324);
   graph->SetPoint(7,675,70.34968443);
   graph->SetPoint(8,687.2486126,75);
   graph->SetPoint(9,700,84.79908395);
   graph->SetPoint(10,713.9764526,100);
   graph->SetPoint(11,718.1045073,125);
   graph->SetPoint(12,711.0512692,150);
   graph->SetPoint(13,701.9272729,175);
   graph->SetPoint(14,700,177.8756765);
   graph->SetPoint(15,685.9213667,200);
   graph->SetPoint(16,675,223.5228863);
   graph->SetPoint(17,674.0219425,225);
   graph->SetPoint(18,658.0400767,250);
   graph->SetPoint(19,650,256.6667655);
   graph->SetPoint(20,625,268.3863454);
   graph->SetPoint(21,609.2188987,275);
   graph->SetPoint(22,600,276.8617504);
   graph->SetPoint(23,582.9296998,275);
   graph->SetPoint(24,575,273.6829643);
   graph->SetPoint(25,550,259.2666996);
   graph->SetPoint(26,531.6185738,250);
   graph->SetPoint(27,525,246.5126454);
   graph->SetPoint(28,500,230.5855198);
   graph->SetPoint(29,491.0336115,225);
   graph->SetPoint(30,475,214.1655535);
   graph->SetPoint(31,450,201.5208761);
   graph->SetPoint(32,447.9886218,200);
   graph->SetPoint(33,425,180.1823405);
   graph->SetPoint(34,414.7132745,175);
   graph->SetPoint(35,400,165.3791238);
   graph->SetPoint(36,375.123545,150);
   graph->SetPoint(37,375,149.9007591);
   graph->SetPoint(38,350,129.5538765);
   graph->SetPoint(39,345.0118206,125);
   graph->SetPoint(40,325,109.4074762);
   graph->SetPoint(41,312.218642,100);
   graph->SetPoint(42,300,86.67690766);
   graph->SetPoint(43,290.0288357,75);
   graph->SetPoint(44,275,56.85821551);
   graph->SetPoint(45,270.1159902,50);
   graph->SetPoint(46,255.9371031,25);
   graph->SetPoint(47,252.1120804,0);
   graph->SetPoint(48,1300,-1300);
   graph->SetPoint(49,-1300,-1300);
   
   TH1F *Graph_Graph_Graph_g_excl_xsec_obs192337 = new TH1F("Graph_Graph_Graph_g_excl_xsec_obs192337","g_excl_xsec_obs",100,-1560,1560);
   Graph_Graph_Graph_g_excl_xsec_obs192337->SetMinimum(-1457.686);
   Graph_Graph_Graph_g_excl_xsec_obs192337->SetMaximum(434.5479);
   Graph_Graph_Graph_g_excl_xsec_obs192337->SetDirectory(0);
   Graph_Graph_Graph_g_excl_xsec_obs192337->SetStats(0);

   ci = TColor::GetColor("#0000ff");
   Graph_Graph_Graph_g_excl_xsec_obs192337->SetLineColor(ci);
   Graph_Graph_Graph_g_excl_xsec_obs192337->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_Graph_g_excl_xsec_obs192337->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_Graph_g_excl_xsec_obs192337->GetYaxis()->SetTitleOffset(1.2);
   graph->SetHistogram(Graph_Graph_Graph_g_excl_xsec_obs192337);
   
   graph->Draw("l");
   
   graph = new TGraph(52);
   graph->SetName("g_excl_xsec_obs_p1");
   graph->SetTitle("g_excl_xsec_obs_p1");

   ci = TColor::GetColor("#ff807e");
   graph->SetFillColor(ci);
   graph->SetLineWidth(2);
   graph->SetPoint(0,598.0743121,0);
   graph->SetPoint(1,600,1.716266526);
   graph->SetPoint(2,625,24.43018409);
   graph->SetPoint(3,625.7373197,25);
   graph->SetPoint(4,650,38.19263591);
   graph->SetPoint(5,675,49.9224707);
   graph->SetPoint(6,675.2344421,50);
   graph->SetPoint(7,700,60.22985344);
   graph->SetPoint(8,725,71.62835111);
   graph->SetPoint(9,731.144091,75);
   graph->SetPoint(10,748.0795134,100);
   graph->SetPoint(11,750,109.8492033);
   graph->SetPoint(12,751.8104766,125);
   graph->SetPoint(13,750,129.951461);
   graph->SetPoint(14,740.2756503,150);
   graph->SetPoint(15,730.6352949,175);
   graph->SetPoint(16,725,191.9727832);
   graph->SetPoint(17,720.4820679,200);
   graph->SetPoint(18,708.6236078,225);
   graph->SetPoint(19,700,242.8040424);
   graph->SetPoint(20,695.8524843,250);
   graph->SetPoint(21,675,274.3606868);
   graph->SetPoint(22,674.0948769,275);
   graph->SetPoint(23,650,283.4321575);
   graph->SetPoint(24,625,289.49675);
   graph->SetPoint(25,600,288.9373755);
   graph->SetPoint(26,575,283.3852611);
   graph->SetPoint(27,557.6195914,275);
   graph->SetPoint(28,550,270.3863104);
   graph->SetPoint(29,525,255.0358506);
   graph->SetPoint(30,516.3925155,250);
   graph->SetPoint(31,500,238.8381194);
   graph->SetPoint(32,478.0220736,225);
   graph->SetPoint(33,475,222.9412197);
   graph->SetPoint(34,450,207.3312648);
   graph->SetPoint(35,440.3528473,200);
   graph->SetPoint(36,425,186.7199779);
   graph->SetPoint(37,401.5301758,175);
   graph->SetPoint(38,400,174.006183);
   graph->SetPoint(39,375,156.4456118);
   graph->SetPoint(40,363.3741413,150);
   graph->SetPoint(41,350,139.1364862);
   graph->SetPoint(42,334.5516647,125);
   graph->SetPoint(43,325,117.5448701);
   graph->SetPoint(44,300.858848,100);
   graph->SetPoint(45,300,99.07205308);
   graph->SetPoint(46,279.4171083,75);
   graph->SetPoint(47,275,69.67300177);
   graph->SetPoint(48,260.9825305,50);
   graph->SetPoint(49,250,32.7545612);
   graph->SetPoint(50,245.6227139,25);
   graph->SetPoint(51,240.2938679,0);
   
   TH1F *Graph_Graph_Graph_g_excl_xsec_obs_p172438 = new TH1F("Graph_Graph_Graph_g_excl_xsec_obs_p172438","g_excl_xsec_obs_p1",100,189.1422,802.9621);
   Graph_Graph_Graph_g_excl_xsec_obs_p172438->SetMinimum(0);
   Graph_Graph_Graph_g_excl_xsec_obs_p172438->SetMaximum(318.4464);
   Graph_Graph_Graph_g_excl_xsec_obs_p172438->SetDirectory(0);
   Graph_Graph_Graph_g_excl_xsec_obs_p172438->SetStats(0);

   ci = TColor::GetColor("#0000ff");
   Graph_Graph_Graph_g_excl_xsec_obs_p172438->SetLineColor(ci);
   Graph_Graph_Graph_g_excl_xsec_obs_p172438->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_Graph_g_excl_xsec_obs_p172438->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_Graph_g_excl_xsec_obs_p172438->GetYaxis()->SetTitleOffset(1.2);
   graph->SetHistogram(Graph_Graph_Graph_g_excl_xsec_obs_p172438);
   
   graph->Draw("l");
   
   graph = new TGraph(45);
   graph->SetName("g_excl_xsec_obs_m1");
   graph->SetTitle("g_excl_xsec_obs_m1");

   ci = TColor::GetColor("#ff807e");
   graph->SetFillColor(ci);
   graph->SetLineWidth(2);
   graph->SetPoint(0,544.8578835,0);
   graph->SetPoint(1,550,3.87288226);
   graph->SetPoint(2,575,20.9848351);
   graph->SetPoint(3,579.298549,25);
   graph->SetPoint(4,600,38.96347825);
   graph->SetPoint(5,617.0030292,50);
   graph->SetPoint(6,625,57.82865502);
   graph->SetPoint(7,648.9096066,75);
   graph->SetPoint(8,650,76.41682693);
   graph->SetPoint(9,670.6529,100);
   graph->SetPoint(10,675,110.8760806);
   graph->SetPoint(11,679.844094,125);
   graph->SetPoint(12,675.5145383,150);
   graph->SetPoint(13,675,152.5946299);
   graph->SetPoint(14,669.4205524,175);
   graph->SetPoint(15,655.5691659,200);
   graph->SetPoint(16,650,208.219517);
   graph->SetPoint(17,639.167767,225);
   graph->SetPoint(18,625,240.7220667);
   graph->SetPoint(19,611.5069723,250);
   graph->SetPoint(20,600,255.7232933);
   graph->SetPoint(21,575,255.7657757);
   graph->SetPoint(22,558.3645317,250);
   graph->SetPoint(23,550,247.2197782);
   graph->SetPoint(24,525,235.1877735);
   graph->SetPoint(25,506.4382064,225);
   graph->SetPoint(26,500,220.8391869);
   graph->SetPoint(27,475,205.3898872);
   graph->SetPoint(28,463.4309804,200);
   graph->SetPoint(29,450,191.7329525);
   graph->SetPoint(30,428.00501,175);
   graph->SetPoint(31,425,172.5482585);
   graph->SetPoint(32,400,156.7520645);
   graph->SetPoint(33,389.0688401,150);
   graph->SetPoint(34,375,138.7060394);
   graph->SetPoint(35,357.5408125,125);
   graph->SetPoint(36,350,118.6502504);
   graph->SetPoint(37,325,101.2700823);
   graph->SetPoint(38,323.3031462,100);
   graph->SetPoint(39,300.8649698,75);
   graph->SetPoint(40,300,73.98144967);
   graph->SetPoint(41,281.3695396,50);
   graph->SetPoint(42,275,37.67554898);
   graph->SetPoint(43,268.8394078,25);
   graph->SetPoint(44,267.7837558,0);
   
   TH1F *Graph_Graph_Graph_g_excl_xsec_obs_m182539 = new TH1F("Graph_Graph_Graph_g_excl_xsec_obs_m182539","g_excl_xsec_obs_m1",100,226.5777,721.0501);
   Graph_Graph_Graph_g_excl_xsec_obs_m182539->SetMinimum(0);
   Graph_Graph_Graph_g_excl_xsec_obs_m182539->SetMaximum(281.3424);
   Graph_Graph_Graph_g_excl_xsec_obs_m182539->SetDirectory(0);
   Graph_Graph_Graph_g_excl_xsec_obs_m182539->SetStats(0);

   ci = TColor::GetColor("#0000ff");
   Graph_Graph_Graph_g_excl_xsec_obs_m182539->SetLineColor(ci);
   Graph_Graph_Graph_g_excl_xsec_obs_m182539->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_Graph_g_excl_xsec_obs_m182539->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_Graph_g_excl_xsec_obs_m182539->GetYaxis()->SetTitleOffset(1.2);
   graph->SetHistogram(Graph_Graph_Graph_g_excl_xsec_obs_m182539);
   
   graph->Draw("l");
   
   graph = new TGraph(48);
   graph->SetName("g_excl_xsec_exp");
   graph->SetTitle("g_excl_xsec_exp");

   ci = TColor::GetColor("#ff807e");
   graph->SetFillColor(ci);
   graph->SetLineStyle(2);
   graph->SetLineWidth(4);
   graph->SetPoint(0,615.0982346,0);
   graph->SetPoint(1,625,10.7358974);
   graph->SetPoint(2,637.0617617,25);
   graph->SetPoint(3,650,36.06652064);
   graph->SetPoint(4,668.9645071,50);
   graph->SetPoint(5,675,55.75353112);
   graph->SetPoint(6,697.3606438,75);
   graph->SetPoint(7,700,79.03693514);
   graph->SetPoint(8,710.8953606,100);
   graph->SetPoint(9,716.6489353,125);
   graph->SetPoint(10,713.5512359,150);
   graph->SetPoint(11,710.7103747,175);
   graph->SetPoint(12,707.1461388,200);
   graph->SetPoint(13,703.1660894,225);
   graph->SetPoint(14,700.8206539,250);
   graph->SetPoint(15,700,253.6760341);
   graph->SetPoint(16,692.8903913,275);
   graph->SetPoint(17,678.5098059,300);
   graph->SetPoint(18,675,303.3080272);
   graph->SetPoint(19,650,312.7958318);
   graph->SetPoint(20,625,310.8627357);
   graph->SetPoint(21,600,303.1688447);
   graph->SetPoint(22,593.0450691,300);
   graph->SetPoint(23,575,289.8462846);
   graph->SetPoint(24,550,275.3319789);
   graph->SetPoint(25,549.455433,275);
   graph->SetPoint(26,525,258.218801);
   graph->SetPoint(27,510.7859782,250);
   graph->SetPoint(28,500,242.6923404);
   graph->SetPoint(29,475,226.3366794);
   graph->SetPoint(30,473.0367266,225);
   graph->SetPoint(31,450,208.4193676);
   graph->SetPoint(32,437.2276802,200);
   graph->SetPoint(33,425,189.8649465);
   graph->SetPoint(34,400.0517178,175);
   graph->SetPoint(35,400,174.9566612);
   graph->SetPoint(36,375,151.0933549);
   graph->SetPoint(37,373.4903962,150);
   graph->SetPoint(38,350,131.0348348);
   graph->SetPoint(39,341.0230313,125);
   graph->SetPoint(40,325,112.5553117);
   graph->SetPoint(41,309.4605519,100);
   graph->SetPoint(42,300,90.12772165);
   graph->SetPoint(43,286.158844,75);
   graph->SetPoint(44,275,60.2618577);
   graph->SetPoint(45,268.1977713,50);
   graph->SetPoint(46,256.0841648,25);
   graph->SetPoint(47,255.0605411,0);
   
   TH1F *Graph_Graph_Graph_g_excl_xsec_exp32040 = new TH1F("Graph_Graph_Graph_g_excl_xsec_exp32040","g_excl_xsec_exp",100,208.9017,762.8078);
   Graph_Graph_Graph_g_excl_xsec_exp32040->SetMinimum(0);
   Graph_Graph_Graph_g_excl_xsec_exp32040->SetMaximum(344.0754);
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
