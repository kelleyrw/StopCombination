{
//=========Macro generated from canvas: cBrazil_/cBrazil_
//=========  (Mon Jun 30 07:34:38 2014) by ROOT version5.34/03
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
   graph->SetPoint(0,565.423314,0);
   graph->SetPoint(1,575,6.961013727);
   graph->SetPoint(2,595.4141183,25);
   graph->SetPoint(3,600,28.61542813);
   graph->SetPoint(4,624.3769461,50);
   graph->SetPoint(5,625,50.89031631);
   graph->SetPoint(6,640.9149224,75);
   graph->SetPoint(7,648.7477349,100);
   graph->SetPoint(8,650,113.3002666);
   graph->SetPoint(9,650.9856801,125);
   graph->SetPoint(10,650,140.7605358);
   graph->SetPoint(11,649.2687728,150);
   graph->SetPoint(12,641.7491368,175);
   graph->SetPoint(13,629.4131453,200);
   graph->SetPoint(14,625,207.148346);
   graph->SetPoint(15,605.0335325,225);
   graph->SetPoint(16,600,227.0806521);
   graph->SetPoint(17,575,228.3383112);
   graph->SetPoint(18,558.2461327,225);
   graph->SetPoint(19,550,222.7179917);
   graph->SetPoint(20,525,208.2560795);
   graph->SetPoint(21,508.2115472,200);
   graph->SetPoint(22,500,195.3535025);
   graph->SetPoint(23,475,180.3397381);
   graph->SetPoint(24,466.243855,175);
   graph->SetPoint(25,450,163.0181529);
   graph->SetPoint(26,433.9913624,150);
   graph->SetPoint(27,425,141.8934542);
   graph->SetPoint(28,406.7536642,125);
   graph->SetPoint(29,400,118.6780297);
   graph->SetPoint(30,379.7000267,100);
   graph->SetPoint(31,375,94.13664586);
   graph->SetPoint(32,361.9164843,75);
   graph->SetPoint(33,357.5078842,50);
   graph->SetPoint(34,358.2697475,25);
   graph->SetPoint(35,367.4099912,0);
   graph->SetPoint(36,310.6736726,0);
   graph->SetPoint(37,311.8596505,25);
   graph->SetPoint(38,325,37.75800603);
   graph->SetPoint(39,332.0235459,50);
   graph->SetPoint(40,328.4857383,75);
   graph->SetPoint(41,342.4715324,100);
   graph->SetPoint(42,350,108.5359503);
   graph->SetPoint(43,363.7471403,125);
   graph->SetPoint(44,375,140.5479702);
   graph->SetPoint(45,386.302053,150);
   graph->SetPoint(46,400,156.347564);
   graph->SetPoint(47,425,173.0172107);
   graph->SetPoint(48,427.6359785,175);
   graph->SetPoint(49,450,189.720151);
   graph->SetPoint(50,462.6119339,200);
   graph->SetPoint(51,475,208.2165484);
   graph->SetPoint(52,495.5732693,225);
   graph->SetPoint(53,500,227.7971714);
   graph->SetPoint(54,525,241.9159412);
   graph->SetPoint(55,537.692198,250);
   graph->SetPoint(56,550,256.7818431);
   graph->SetPoint(57,575,271.6456094);
   graph->SetPoint(58,582.7452726,275);
   graph->SetPoint(59,600,281.3765523);
   graph->SetPoint(60,625,284.1720561);
   graph->SetPoint(61,650,278.2807831);
   graph->SetPoint(62,658.1196564,275);
   graph->SetPoint(63,675,264.4067744);
   graph->SetPoint(64,686.5705105,250);
   graph->SetPoint(65,698.4775791,225);
   graph->SetPoint(66,700,219.121647);
   graph->SetPoint(67,704.4514148,200);
   graph->SetPoint(68,717.2512969,175);
   graph->SetPoint(69,722.794982,150);
   graph->SetPoint(70,725,135.4093594);
   graph->SetPoint(71,726.3027735,125);
   graph->SetPoint(72,725,119.5449766);
   graph->SetPoint(73,719.722222,100);
   graph->SetPoint(74,709.0120218,75);
   graph->SetPoint(75,700,64.82454364);
   graph->SetPoint(76,688.2070338,50);
   graph->SetPoint(77,675,35.9045114);
   graph->SetPoint(78,661.8443176,25);
   graph->SetPoint(79,650,12.69562426);
   graph->SetPoint(80,637.6498862,0);
   
   TH1F *Graph_Graph36 = new TH1F("Graph_Graph36","Graph",100,269.1108,767.8657);
   Graph_Graph36->SetMinimum(0);
   Graph_Graph36->SetMaximum(312.5893);
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
   graph->SetPoint(0,575.7565035,0);
   graph->SetPoint(1,600,17.4156593);
   graph->SetPoint(2,609.5658397,25);
   graph->SetPoint(3,625,36.24057486);
   graph->SetPoint(4,645.2165742,50);
   graph->SetPoint(5,650,54.58932082);
   graph->SetPoint(6,671.378692,75);
   graph->SetPoint(7,675,81.85633935);
   graph->SetPoint(8,685.5820921,100);
   graph->SetPoint(9,686.9157245,125);
   graph->SetPoint(10,681.0025061,150);
   graph->SetPoint(11,675,163.9244982);
   graph->SetPoint(12,667.8159706,175);
   graph->SetPoint(13,650,191.0085349);
   graph->SetPoint(14,642.9100415,200);
   graph->SetPoint(15,625,218.617967);
   graph->SetPoint(16,612.684319,225);
   graph->SetPoint(17,600,228.4173375);
   graph->SetPoint(18,575,230.5270095);
   graph->SetPoint(19,552.3526077,225);
   graph->SetPoint(20,550,224.3213818);
   graph->SetPoint(21,525,211.5339238);
   graph->SetPoint(22,500,201.1564796);
   graph->SetPoint(23,497.5247415,200);
   graph->SetPoint(24,475,185.7200262);
   graph->SetPoint(25,452.3755094,175);
   graph->SetPoint(26,450,173.4517419);
   graph->SetPoint(27,425,153.8568703);
   graph->SetPoint(28,419.3100082,150);
   graph->SetPoint(29,400,134.8833506);
   graph->SetPoint(30,387.3230854,125);
   graph->SetPoint(31,375,113.2155435);
   graph->SetPoint(32,359.9286423,100);
   graph->SetPoint(33,350,91.00347583);
   graph->SetPoint(34,331.9196396,75);
   graph->SetPoint(35,325,66.86772275);
   graph->SetPoint(36,311.1091083,50);
   graph->SetPoint(37,305.4783976,25);
   graph->SetPoint(38,312.6774457,0);
   graph->SetPoint(39,1300,-1300);
   graph->SetPoint(40,-1300,-1300);
   
   TH1F *Graph_Graph_Graph_g_excl_xsec_obs192337 = new TH1F("Graph_Graph_Graph_g_excl_xsec_obs192337","g_excl_xsec_obs",100,-1560,1560);
   Graph_Graph_Graph_g_excl_xsec_obs192337->SetMinimum(-1453.053);
   Graph_Graph_Graph_g_excl_xsec_obs192337->SetMaximum(383.5797);
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
   graph->SetPoint(0,609.5627957,0);
   graph->SetPoint(1,625,12.05964775);
   graph->SetPoint(2,642.0154894,25);
   graph->SetPoint(3,650,30.46623692);
   graph->SetPoint(4,675,48.63130692);
   graph->SetPoint(5,677.330989,50);
   graph->SetPoint(6,700,66.26598264);
   graph->SetPoint(7,710.43654,75);
   graph->SetPoint(8,725,99.29011289);
   graph->SetPoint(9,725.359533,100);
   graph->SetPoint(10,725,110.4545315);
   graph->SetPoint(11,724.3036197,125);
   graph->SetPoint(12,715.954265,150);
   graph->SetPoint(13,703.1306526,175);
   graph->SetPoint(14,700,178.5917971);
   graph->SetPoint(15,681.506896,200);
   graph->SetPoint(16,675,208.8397945);
   graph->SetPoint(17,656.3782778,225);
   graph->SetPoint(18,650,229.9919341);
   graph->SetPoint(19,625,242.9202891);
   graph->SetPoint(20,600,246.91961);
   graph->SetPoint(21,575,243.5608935);
   graph->SetPoint(22,550,234.1314571);
   graph->SetPoint(23,531.6217969,225);
   graph->SetPoint(24,525,221.4953029);
   graph->SetPoint(25,500,207.6685306);
   graph->SetPoint(26,483.7796509,200);
   graph->SetPoint(27,475,194.3822211);
   graph->SetPoint(28,450,180.3166159);
   graph->SetPoint(29,442.2769547,175);
   graph->SetPoint(30,425,160.9995564);
   graph->SetPoint(31,408.6459617,150);
   graph->SetPoint(32,400,143.2701588);
   graph->SetPoint(33,376.5792231,125);
   graph->SetPoint(34,375,123.4891807);
   graph->SetPoint(35,350,100.9216827);
   graph->SetPoint(36,348.569687,100);
   graph->SetPoint(37,325,78.48538083);
   graph->SetPoint(38,321.4457467,75);
   graph->SetPoint(39,300,50.68810549);
   graph->SetPoint(40,299.544466,50);
   graph->SetPoint(41,295.1274668,25);
   graph->SetPoint(42,298.0109313,0);
   
   TH1F *Graph_Graph_Graph_g_excl_xsec_obs_p172438 = new TH1F("Graph_Graph_Graph_g_excl_xsec_obs_p172438","g_excl_xsec_obs_p1",100,252.1043,768.3827);
   Graph_Graph_Graph_g_excl_xsec_obs_p172438->SetMinimum(0);
   Graph_Graph_Graph_g_excl_xsec_obs_p172438->SetMaximum(271.6116);
   Graph_Graph_Graph_g_excl_xsec_obs_p172438->SetDirectory(0);
   Graph_Graph_Graph_g_excl_xsec_obs_p172438->SetStats(0);

   ci = TColor::GetColor("#0000ff");
   Graph_Graph_Graph_g_excl_xsec_obs_p172438->SetLineColor(ci);
   Graph_Graph_Graph_g_excl_xsec_obs_p172438->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_Graph_g_excl_xsec_obs_p172438->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_Graph_g_excl_xsec_obs_p172438->GetYaxis()->SetTitleOffset(1.2);
   graph->SetHistogram(Graph_Graph_Graph_g_excl_xsec_obs_p172438);
   
   graph->Draw("l");
   
   graph = new TGraph(36);
   graph->SetName("g_excl_xsec_obs_m1");
   graph->SetTitle("g_excl_xsec_obs_m1");

   ci = TColor::GetColor("#ff807e");
   graph->SetFillColor(ci);
   graph->SetLineWidth(2);
   graph->SetPoint(0,529.3890971,0);
   graph->SetPoint(1,550,11.9488239);
   graph->SetPoint(2,575,24.86022183);
   graph->SetPoint(3,575.1887457,25);
   graph->SetPoint(4,600,41.21896415);
   graph->SetPoint(5,611.6062887,50);
   graph->SetPoint(6,625,66.0527035);
   graph->SetPoint(7,633.9444099,75);
   graph->SetPoint(8,644.3491308,100);
   graph->SetPoint(9,641.534294,125);
   graph->SetPoint(10,636.9246905,150);
   graph->SetPoint(11,626.6316889,175);
   graph->SetPoint(12,625,177.1848792);
   graph->SetPoint(13,605.6069535,200);
   graph->SetPoint(14,600,203.8044329);
   graph->SetPoint(15,575,213.1363079);
   graph->SetPoint(16,550,209.2916067);
   graph->SetPoint(17,525,201.5725447);
   graph->SetPoint(18,520.8539212,200);
   graph->SetPoint(19,500,189.5470223);
   graph->SetPoint(20,475,177.0578312);
   graph->SetPoint(21,470.543549,175);
   graph->SetPoint(22,450,161.8856568);
   graph->SetPoint(23,432.6489772,150);
   graph->SetPoint(24,425,144.038315);
   graph->SetPoint(25,400,126.4965424);
   graph->SetPoint(26,398.078978,125);
   graph->SetPoint(27,375,102.9419063);
   graph->SetPoint(28,371.6584342,100);
   graph->SetPoint(29,350,80.31736635);
   graph->SetPoint(30,343.9740862,75);
   graph->SetPoint(31,325,52.75041166);
   graph->SetPoint(32,322.7738847,50);
   graph->SetPoint(33,318.2370035,25);
   graph->SetPoint(34,325,6.646574643);
   graph->SetPoint(35,331.079856,0);
   
   TH1F *Graph_Graph_Graph_g_excl_xsec_obs_m182539 = new TH1F("Graph_Graph_Graph_g_excl_xsec_obs_m182539","g_excl_xsec_obs_m1",100,285.6258,676.9603);
   Graph_Graph_Graph_g_excl_xsec_obs_m182539->SetMinimum(0);
   Graph_Graph_Graph_g_excl_xsec_obs_m182539->SetMaximum(234.4499);
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
   graph->SetPoint(0,606.5527268,0);
   graph->SetPoint(1,625,19.7618033);
   graph->SetPoint(2,629.7479943,25);
   graph->SetPoint(3,650,43.67503183);
   graph->SetPoint(4,656.725053,50);
   graph->SetPoint(5,675,73.96888204);
   graph->SetPoint(6,675.7807294,75);
   graph->SetPoint(7,685.658803,100);
   graph->SetPoint(8,689.8412931,125);
   graph->SetPoint(9,688.1149893,150);
   graph->SetPoint(10,682.4053579,175);
   graph->SetPoint(11,675,196.4201474);
   graph->SetPoint(12,673.4673104,200);
   graph->SetPoint(13,663.9008506,225);
   graph->SetPoint(14,650,246.9518913);
   graph->SetPoint(15,646.3498154,250);
   graph->SetPoint(16,625,259.463537);
   graph->SetPoint(17,600,260.7516645);
   graph->SetPoint(18,575,253.2863561);
   graph->SetPoint(19,566.7907234,250);
   graph->SetPoint(20,550,242.4726078);
   graph->SetPoint(21,525,229.3312778);
   graph->SetPoint(22,516.5144833,225);
   graph->SetPoint(23,500,213.5828929);
   graph->SetPoint(24,477.4285554,200);
   graph->SetPoint(25,475,198.3435879);
   graph->SetPoint(26,450,179.393061);
   graph->SetPoint(27,444.0530167,175);
   graph->SetPoint(28,425,158.4096653);
   graph->SetPoint(29,415.8269729,150);
   graph->SetPoint(30,400,135.366445);
   graph->SetPoint(31,387.7719067,125);
   graph->SetPoint(32,375,112.8562463);
   graph->SetPoint(33,359.6973146,100);
   graph->SetPoint(34,350,86.63053637);
   graph->SetPoint(35,342.9589936,75);
   graph->SetPoint(36,343.3780491,50);
   graph->SetPoint(37,334.6655221,25);
   graph->SetPoint(38,336.8083053,0);
   
   TH1F *Graph_Graph_Graph_g_excl_xsec_exp32040 = new TH1F("Graph_Graph_Graph_g_excl_xsec_exp32040","g_excl_xsec_exp",100,299.1479,725.3589);
   Graph_Graph_Graph_g_excl_xsec_exp32040->SetMinimum(0);
   Graph_Graph_Graph_g_excl_xsec_exp32040->SetMaximum(286.8268);
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
