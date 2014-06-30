{
//=========Macro generated from canvas: cBrazil_/cBrazil_
//=========  (Sun Jun 29 21:58:23 2014) by ROOT version5.34/03
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
   
   TH2D *h_ul_xsec_exp_smoothEMPTY = new TH2D("h_ul_xsec_exp_smoothEMPTY","Expected razor #sigma #times Branching Fraction (t2tb_br0p3)EMPTY",31,137.5,912.5,29,-12.5,712.5);

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
   graph->SetPoint(0,565.8157266,0);
   graph->SetPoint(1,575,6.731056627);
   graph->SetPoint(2,595.5034359,25);
   graph->SetPoint(3,600,28.55400183);
   graph->SetPoint(4,624.3827413,50);
   graph->SetPoint(5,625,50.88265276);
   graph->SetPoint(6,640.9085407,75);
   graph->SetPoint(7,648.7445671,100);
   graph->SetPoint(8,650,113.2917516);
   graph->SetPoint(9,650.9895104,125);
   graph->SetPoint(10,650,140.9408848);
   graph->SetPoint(11,649.2886504,150);
   graph->SetPoint(12,641.8113806,175);
   graph->SetPoint(13,629.5972375,200);
   graph->SetPoint(14,625,207.5865124);
   graph->SetPoint(15,606.0736254,225);
   graph->SetPoint(16,600,227.5689946);
   graph->SetPoint(17,575,228.8327738);
   graph->SetPoint(18,555.1850242,225);
   graph->SetPoint(19,550,223.5902562);
   graph->SetPoint(20,525,208.7844447);
   graph->SetPoint(21,507.1171897,200);
   graph->SetPoint(22,500,195.9733338);
   graph->SetPoint(23,475,180.6590864);
   graph->SetPoint(24,466.1317889,175);
   graph->SetPoint(25,450,162.5297312);
   graph->SetPoint(26,437.835989,150);
   graph->SetPoint(27,425,137.1661085);
   graph->SetPoint(28,415.1949726,125);
   graph->SetPoint(29,400,110.4403353);
   graph->SetPoint(30,385.6491232,100);
   graph->SetPoint(31,375,87.65273007);
   graph->SetPoint(32,365.9575322,75);
   graph->SetPoint(33,363.5464734,50);
   graph->SetPoint(34,363.717552,25);
   graph->SetPoint(35,370.9049573,0);
   graph->SetPoint(36,318.8320528,0);
   graph->SetPoint(37,325,15.7333842);
   graph->SetPoint(38,327.8165022,25);
   graph->SetPoint(39,343.961322,50);
   graph->SetPoint(40,338.0672704,75);
   graph->SetPoint(41,349.1810249,100);
   graph->SetPoint(42,350,100.5053937);
   graph->SetPoint(43,375,113.7054429);
   graph->SetPoint(44,388.2566955,125);
   graph->SetPoint(45,400,135.1042381);
   graph->SetPoint(46,413.9258143,150);
   graph->SetPoint(47,425,166.8145228);
   graph->SetPoint(48,433.616078,175);
   graph->SetPoint(49,450,189.2729974);
   graph->SetPoint(50,462.6103908,200);
   graph->SetPoint(51,475,208.2617224);
   graph->SetPoint(52,495.525473,225);
   graph->SetPoint(53,500,227.7421434);
   graph->SetPoint(54,525,242.0846977);
   graph->SetPoint(55,537.3741572,250);
   graph->SetPoint(56,550,256.687614);
   graph->SetPoint(57,575,271.0051897);
   graph->SetPoint(58,584.0119207,275);
   graph->SetPoint(59,600,280.7882235);
   graph->SetPoint(60,625,284.3459417);
   graph->SetPoint(61,650,278.8716731);
   graph->SetPoint(62,659.3515818,275);
   graph->SetPoint(63,675,264.8810925);
   graph->SetPoint(64,686.7721863,250);
   graph->SetPoint(65,698.541875,225);
   graph->SetPoint(66,700,219.325633);
   graph->SetPoint(67,704.471879,200);
   graph->SetPoint(68,717.2529276,175);
   graph->SetPoint(69,722.7893222,150);
   graph->SetPoint(70,725,135.3457674);
   graph->SetPoint(71,726.2925225,125);
   graph->SetPoint(72,725,119.5931882);
   graph->SetPoint(73,719.7043291,100);
   graph->SetPoint(74,708.9934205,75);
   graph->SetPoint(75,700,64.83658694);
   graph->SetPoint(76,688.2055706,50);
   graph->SetPoint(77,675,35.85788588);
   graph->SetPoint(78,661.9391086,25);
   graph->SetPoint(79,650,12.45709931);
   graph->SetPoint(80,638.0048014,0);
   
   TH1F *Graph_Graph36 = new TH1F("Graph_Graph36","Graph",100,278.086,767.0386);
   Graph_Graph36->SetMinimum(0);
   Graph_Graph36->SetMaximum(312.7805);
   Graph_Graph36->SetDirectory(0);
   Graph_Graph36->SetStats(0);

   ci = TColor::GetColor("#0000ff");
   Graph_Graph36->SetLineColor(ci);
   Graph_Graph36->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph36->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph36->GetYaxis()->SetTitleOffset(1.2);
   graph->SetHistogram(Graph_Graph36);
   
   graph->Draw("f");
   
   graph = new TGraph(40);
   graph->SetName("g_excl_xsec_obs");
   graph->SetTitle("g_excl_xsec_obs");

   ci = TColor::GetColor("#cccccc");
   graph->SetFillColor(ci);
   graph->SetLineWidth(4);
   graph->SetPoint(0,576.2609577,0);
   graph->SetPoint(1,600,17.23274283);
   graph->SetPoint(2,609.6929073,25);
   graph->SetPoint(3,625,36.18626105);
   graph->SetPoint(4,645.2244764,50);
   graph->SetPoint(5,650,54.58581525);
   graph->SetPoint(6,671.362672,75);
   graph->SetPoint(7,675,81.88471213);
   graph->SetPoint(8,685.5679559,100);
   graph->SetPoint(9,686.9111453,125);
   graph->SetPoint(10,681.0066658,150);
   graph->SetPoint(11,675,163.9559457);
   graph->SetPoint(12,667.8536384,175);
   graph->SetPoint(13,650,191.115673);
   graph->SetPoint(14,643.0368666,200);
   graph->SetPoint(15,625,218.9728197);
   graph->SetPoint(16,613.6361552,225);
   graph->SetPoint(17,600,228.7510711);
   graph->SetPoint(18,575,230.8519325);
   graph->SetPoint(19,550.6151224,225);
   graph->SetPoint(20,550,224.8243699);
   graph->SetPoint(21,525,211.8679379);
   graph->SetPoint(22,500,201.3954403);
   graph->SetPoint(23,496.9895466,200);
   graph->SetPoint(24,475,186.018544);
   graph->SetPoint(25,453.073978,175);
   graph->SetPoint(26,450,172.876286);
   graph->SetPoint(27,425.2728544,150);
   graph->SetPoint(28,425,149.7525336);
   graph->SetPoint(29,400.1728334,125);
   graph->SetPoint(30,400,124.8505322);
   graph->SetPoint(31,375,103.3613841);
   graph->SetPoint(32,368.577827,100);
   graph->SetPoint(33,350,77.82025188);
   graph->SetPoint(34,348.420609,75);
   graph->SetPoint(35,348.635935,50);
   graph->SetPoint(36,336.7337134,25);
   graph->SetPoint(37,332.8304851,0);
   graph->SetPoint(38,1300,-1300);
   graph->SetPoint(39,-1300,-1300);
   
   TH1F *Graph_Graph_Graph_g_excl_xsec_obs192337 = new TH1F("Graph_Graph_Graph_g_excl_xsec_obs192337","g_excl_xsec_obs",100,-1560,1560);
   Graph_Graph_Graph_g_excl_xsec_obs192337->SetMinimum(-1453.085);
   Graph_Graph_Graph_g_excl_xsec_obs192337->SetMaximum(383.9371);
   Graph_Graph_Graph_g_excl_xsec_obs192337->SetDirectory(0);
   Graph_Graph_Graph_g_excl_xsec_obs192337->SetStats(0);

   ci = TColor::GetColor("#0000ff");
   Graph_Graph_Graph_g_excl_xsec_obs192337->SetLineColor(ci);
   Graph_Graph_Graph_g_excl_xsec_obs192337->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_Graph_g_excl_xsec_obs192337->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_Graph_g_excl_xsec_obs192337->GetYaxis()->SetTitleOffset(1.2);
   graph->SetHistogram(Graph_Graph_Graph_g_excl_xsec_obs192337);
   
   graph->Draw("l");
   
   graph = new TGraph(42);
   graph->SetName("g_excl_xsec_obs_p1");
   graph->SetTitle("g_excl_xsec_obs_p1");

   ci = TColor::GetColor("#ff807e");
   graph->SetFillColor(ci);
   graph->SetLineWidth(2);
   graph->SetPoint(0,610.0081626,0);
   graph->SetPoint(1,625,11.82842456);
   graph->SetPoint(2,642.1401232,25);
   graph->SetPoint(3,650,30.39816171);
   graph->SetPoint(4,675,48.62529707);
   graph->SetPoint(5,677.3329484,50);
   graph->SetPoint(6,700,66.27781361);
   graph->SetPoint(7,710.4127721,75);
   graph->SetPoint(8,725,99.325858);
   graph->SetPoint(9,725.341512,100);
   graph->SetPoint(10,725,110.0127849);
   graph->SetPoint(11,724.2883962,125);
   graph->SetPoint(12,715.9489284,150);
   graph->SetPoint(13,703.1358633,175);
   graph->SetPoint(14,700,178.6015535);
   graph->SetPoint(15,681.5469616,200);
   graph->SetPoint(16,675,208.9349837);
   graph->SetPoint(17,656.6608841,225);
   graph->SetPoint(18,650,230.2945316);
   graph->SetPoint(19,625,243.3172478);
   graph->SetPoint(20,600,247.3796771);
   graph->SetPoint(21,575,243.9323018);
   graph->SetPoint(22,550,234.4607972);
   graph->SetPoint(23,530.8668126,225);
   graph->SetPoint(24,525,221.8928283);
   graph->SetPoint(25,500,207.8772421);
   graph->SetPoint(26,483.2053673,200);
   graph->SetPoint(27,475,194.7344498);
   graph->SetPoint(28,450,180.0765101);
   graph->SetPoint(29,443.8716737,175);
   graph->SetPoint(30,425,156.9374082);
   graph->SetPoint(31,420.119714,150);
   graph->SetPoint(32,400,129.9654912);
   graph->SetPoint(33,394.0281821,125);
   graph->SetPoint(34,375,108.58563);
   graph->SetPoint(35,358.5487785,100);
   graph->SetPoint(36,350,89.81503298);
   graph->SetPoint(37,341.7180107,75);
   graph->SetPoint(38,344.5408358,50);
   graph->SetPoint(39,325,25.91797344);
   graph->SetPoint(40,321.9468269,25);
   graph->SetPoint(41,315.1066541,0);
   
   TH1F *Graph_Graph_Graph_g_excl_xsec_obs_p172438 = new TH1F("Graph_Graph_Graph_g_excl_xsec_obs_p172438","g_excl_xsec_obs_p1",100,274.0832,766.365);
   Graph_Graph_Graph_g_excl_xsec_obs_p172438->SetMinimum(0);
   Graph_Graph_Graph_g_excl_xsec_obs_p172438->SetMaximum(272.1176);
   Graph_Graph_Graph_g_excl_xsec_obs_p172438->SetDirectory(0);
   Graph_Graph_Graph_g_excl_xsec_obs_p172438->SetStats(0);

   ci = TColor::GetColor("#0000ff");
   Graph_Graph_Graph_g_excl_xsec_obs_p172438->SetLineColor(ci);
   Graph_Graph_Graph_g_excl_xsec_obs_p172438->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_Graph_g_excl_xsec_obs_p172438->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_Graph_g_excl_xsec_obs_p172438->GetYaxis()->SetTitleOffset(1.2);
   graph->SetHistogram(Graph_Graph_Graph_g_excl_xsec_obs_p172438);
   
   graph->Draw("l");
   
   graph = new TGraph(33);
   graph->SetName("g_excl_xsec_obs_m1");
   graph->SetTitle("g_excl_xsec_obs_m1");

   ci = TColor::GetColor("#ff807e");
   graph->SetFillColor(ci);
   graph->SetLineWidth(2);
   graph->SetPoint(0,530.198239,0);
   graph->SetPoint(1,550,11.63781373);
   graph->SetPoint(2,575,24.74690589);
   graph->SetPoint(3,575.3380625,25);
   graph->SetPoint(4,600,41.17896447);
   graph->SetPoint(5,611.6191491,50);
   graph->SetPoint(6,625,66.0533241);
   graph->SetPoint(7,633.9349026,75);
   graph->SetPoint(8,644.3420526,100);
   graph->SetPoint(9,641.5388122,125);
   graph->SetPoint(10,636.9457522,150);
   graph->SetPoint(11,626.6959372,175);
   graph->SetPoint(12,625,177.2862093);
   graph->SetPoint(13,605.8725162,200);
   graph->SetPoint(14,600,204.0376741);
   graph->SetPoint(15,575,213.4993367);
   graph->SetPoint(16,550,209.6415184);
   graph->SetPoint(17,525,201.8430475);
   graph->SetPoint(18,520.1181198,200);
   graph->SetPoint(19,500,189.9510783);
   graph->SetPoint(20,475,177.3026382);
   graph->SetPoint(21,470.3037667,175);
   graph->SetPoint(22,450,161.2448771);
   graph->SetPoint(23,437.7512052,150);
   graph->SetPoint(24,425,138.4991685);
   graph->SetPoint(25,411.5783244,125);
   graph->SetPoint(26,400,114.9263338);
   graph->SetPoint(27,379.7852131,100);
   graph->SetPoint(28,375,94.10375997);
   graph->SetPoint(29,360.0041459,75);
   graph->SetPoint(30,358.370842,50);
   graph->SetPoint(31,351.4335052,25);
   graph->SetPoint(32,354.764713,0);
   
   TH1F *Graph_Graph_Graph_g_excl_xsec_obs_m182539 = new TH1F("Graph_Graph_Graph_g_excl_xsec_obs_m182539","g_excl_xsec_obs_m1",100,322.1427,673.6329);
   Graph_Graph_Graph_g_excl_xsec_obs_m182539->SetMinimum(0);
   Graph_Graph_Graph_g_excl_xsec_obs_m182539->SetMaximum(234.8493);
   Graph_Graph_Graph_g_excl_xsec_obs_m182539->SetDirectory(0);
   Graph_Graph_Graph_g_excl_xsec_obs_m182539->SetStats(0);

   ci = TColor::GetColor("#0000ff");
   Graph_Graph_Graph_g_excl_xsec_obs_m182539->SetLineColor(ci);
   Graph_Graph_Graph_g_excl_xsec_obs_m182539->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_Graph_g_excl_xsec_obs_m182539->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_Graph_g_excl_xsec_obs_m182539->GetYaxis()->SetTitleOffset(1.2);
   graph->SetHistogram(Graph_Graph_Graph_g_excl_xsec_obs_m182539);
   
   graph->Draw("l");
   
   graph = new TGraph(39);
   graph->SetName("g_excl_xsec_exp");
   graph->SetTitle("g_excl_xsec_exp");

   ci = TColor::GetColor("#ff807e");
   graph->SetFillColor(ci);
   graph->SetLineStyle(2);
   graph->SetLineWidth(4);
   graph->SetPoint(0,606.7988143,0);
   graph->SetPoint(1,625,19.64469665);
   graph->SetPoint(2,629.8144822,25);
   graph->SetPoint(3,650,43.65646628);
   graph->SetPoint(4,656.7272204,50);
   graph->SetPoint(5,675,73.98030733);
   graph->SetPoint(6,675.7715331,75);
   graph->SetPoint(7,685.6517779,100);
   graph->SetPoint(8,689.8393985,125);
   graph->SetPoint(9,688.1189139,150);
   graph->SetPoint(10,682.4209171,175);
   graph->SetPoint(11,675,196.5473248);
   graph->SetPoint(12,673.5293565,200);
   graph->SetPoint(13,664.0762215,225);
   graph->SetPoint(14,650,247.6226683);
   graph->SetPoint(15,647.2296467,250);
   graph->SetPoint(16,625,260.0070021);
   graph->SetPoint(17,600,260.9545024);
   graph->SetPoint(18,575,253.4630028);
   graph->SetPoint(19,565.8615598,250);
   graph->SetPoint(20,550,242.9210894);
   graph->SetPoint(21,525,229.6035638);
   graph->SetPoint(22,516.0180906,225);
   graph->SetPoint(23,500,213.8485998);
   graph->SetPoint(24,476.7389138,200);
   graph->SetPoint(25,475,198.8084733);
   graph->SetPoint(26,450,179.2155551);
   graph->SetPoint(27,445.1092544,175);
   graph->SetPoint(28,425,154.9647202);
   graph->SetPoint(29,421.8912831,150);
   graph->SetPoint(30,400,126.7014651);
   graph->SetPoint(31,398.0500466,125);
   graph->SetPoint(32,375,105.040491);
   graph->SetPoint(33,365.2123673,100);
   graph->SetPoint(34,350,78.40939144);
   graph->SetPoint(35,348.2853242,75);
   graph->SetPoint(36,349.1104938,50);
   graph->SetPoint(37,344.5652965,25);
   graph->SetPoint(38,343.3610586,0);
   
   TH1F *Graph_Graph_Graph_g_excl_xsec_exp32040 = new TH1F("Graph_Graph_Graph_g_excl_xsec_exp32040","g_excl_xsec_exp",100,308.7132,724.4872);
   Graph_Graph_Graph_g_excl_xsec_exp32040->SetMinimum(0);
   Graph_Graph_Graph_g_excl_xsec_exp32040->SetMaximum(287.05);
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
