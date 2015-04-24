{
//=========Macro generated from canvas: cCONT_/cCONT_
//=========  (Thu Apr 23 17:01:13 2015) by ROOT version5.34/03
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
   
   TH2D *h_ul_xsec_obs_smoothEMPTY = new TH2D("h_ul_xsec_obs_smoothEMPTY","Observed razor #sigma #times Branching Fraction (t2tb_br0p3)EMPTY",31,137.5,912.5,29,-12.5,712.5);

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
   
   TH1F *Graph_g_excl_xsec_obs19 = new TH1F("Graph_g_excl_xsec_obs19","g_excl_xsec_obs",100,-1560,1560);
   Graph_g_excl_xsec_obs19->SetMinimum(-1453.053);
   Graph_g_excl_xsec_obs19->SetMaximum(383.5797);
   Graph_g_excl_xsec_obs19->SetDirectory(0);
   Graph_g_excl_xsec_obs19->SetStats(0);

   ci = TColor::GetColor("#0000ff");
   Graph_g_excl_xsec_obs19->SetLineColor(ci);
   Graph_g_excl_xsec_obs19->GetXaxis()->SetLabelSize(0.035);
   Graph_g_excl_xsec_obs19->GetYaxis()->SetLabelSize(0.035);
   Graph_g_excl_xsec_obs19->GetYaxis()->SetTitleOffset(1.2);
   graph->SetHistogram(Graph_g_excl_xsec_obs19);
   
   graph->Draw("f");
   
   graph = new TGraph(39);
   graph->SetName("g_excl_xsec_exp");
   graph->SetTitle("g_excl_xsec_exp");

   ci = TColor::GetColor("#ff807e");
   graph->SetFillColor(ci);

   ci = TColor::GetColor("#ff0000");
   graph->SetLineColor(ci);
   graph->SetLineStyle(7);
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
   
   TH1F *Graph_Graph_g_excl_xsec_exp320 = new TH1F("Graph_Graph_g_excl_xsec_exp320","g_excl_xsec_exp",100,299.1479,725.3589);
   Graph_Graph_g_excl_xsec_exp320->SetMinimum(0);
   Graph_Graph_g_excl_xsec_exp320->SetMaximum(286.8268);
   Graph_Graph_g_excl_xsec_exp320->SetDirectory(0);
   Graph_Graph_g_excl_xsec_exp320->SetStats(0);

   ci = TColor::GetColor("#0000ff");
   Graph_Graph_g_excl_xsec_exp320->SetLineColor(ci);
   Graph_Graph_g_excl_xsec_exp320->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_g_excl_xsec_exp320->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_g_excl_xsec_exp320->GetYaxis()->SetTitleOffset(1.2);
   graph->SetHistogram(Graph_Graph_g_excl_xsec_exp320);
   
   graph->Draw("l");
   
   graph = new TGraph(36);
   graph->SetName("g_excl_xsec_exp_p1");
   graph->SetTitle("g_excl_xsec_exp_p1");

   ci = TColor::GetColor("#ff807e");
   graph->SetFillColor(ci);

   ci = TColor::GetColor("#ff0000");
   graph->SetLineColor(ci);
   graph->SetLineStyle(7);
   graph->SetLineWidth(2);
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
   
   TH1F *Graph_Graph_g_excl_xsec_exp_p1421 = new TH1F("Graph_Graph_g_excl_xsec_exp_p1421","g_excl_xsec_exp_p1",100,328.1601,680.3335);
   Graph_Graph_g_excl_xsec_exp_p1421->SetMinimum(0);
   Graph_Graph_g_excl_xsec_exp_p1421->SetMaximum(251.1721);
   Graph_Graph_g_excl_xsec_exp_p1421->SetDirectory(0);
   Graph_Graph_g_excl_xsec_exp_p1421->SetStats(0);

   ci = TColor::GetColor("#0000ff");
   Graph_Graph_g_excl_xsec_exp_p1421->SetLineColor(ci);
   Graph_Graph_g_excl_xsec_exp_p1421->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_g_excl_xsec_exp_p1421->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_g_excl_xsec_exp_p1421->GetYaxis()->SetTitleOffset(1.2);
   graph->SetHistogram(Graph_Graph_g_excl_xsec_exp_p1421);
   
   graph->Draw("l");
   
   graph = new TGraph(45);
   graph->SetName("g_excl_xsec_exp_m1");
   graph->SetTitle("g_excl_xsec_exp_m1");

   ci = TColor::GetColor("#ff807e");
   graph->SetFillColor(ci);

   ci = TColor::GetColor("#ff0000");
   graph->SetLineColor(ci);
   graph->SetLineStyle(7);
   graph->SetLineWidth(2);
   graph->SetPoint(0,637.6498862,0);
   graph->SetPoint(1,650,12.69562426);
   graph->SetPoint(2,661.8443176,25);
   graph->SetPoint(3,675,35.9045114);
   graph->SetPoint(4,688.2070338,50);
   graph->SetPoint(5,700,64.82454364);
   graph->SetPoint(6,709.0120218,75);
   graph->SetPoint(7,719.722222,100);
   graph->SetPoint(8,725,119.5449766);
   graph->SetPoint(9,726.3027735,125);
   graph->SetPoint(10,725,135.4093594);
   graph->SetPoint(11,722.794982,150);
   graph->SetPoint(12,717.2512969,175);
   graph->SetPoint(13,704.4514148,200);
   graph->SetPoint(14,700,219.121647);
   graph->SetPoint(15,698.4775791,225);
   graph->SetPoint(16,686.5705105,250);
   graph->SetPoint(17,675,264.4067744);
   graph->SetPoint(18,658.1196564,275);
   graph->SetPoint(19,650,278.2807831);
   graph->SetPoint(20,625,284.1720561);
   graph->SetPoint(21,600,281.3765523);
   graph->SetPoint(22,582.7452726,275);
   graph->SetPoint(23,575,271.6456094);
   graph->SetPoint(24,550,256.7818431);
   graph->SetPoint(25,537.692198,250);
   graph->SetPoint(26,525,241.9159412);
   graph->SetPoint(27,500,227.7971714);
   graph->SetPoint(28,495.5732693,225);
   graph->SetPoint(29,475,208.2165484);
   graph->SetPoint(30,462.6119339,200);
   graph->SetPoint(31,450,189.720151);
   graph->SetPoint(32,427.6359785,175);
   graph->SetPoint(33,425,173.0172107);
   graph->SetPoint(34,400,156.347564);
   graph->SetPoint(35,386.302053,150);
   graph->SetPoint(36,375,140.5479702);
   graph->SetPoint(37,363.7471403,125);
   graph->SetPoint(38,350,108.5359503);
   graph->SetPoint(39,342.4715324,100);
   graph->SetPoint(40,328.4857383,75);
   graph->SetPoint(41,332.0235459,50);
   graph->SetPoint(42,325,37.75800603);
   graph->SetPoint(43,311.8596505,25);
   graph->SetPoint(44,310.6736726,0);
   
   TH1F *Graph_Graph_g_excl_xsec_exp_m1522 = new TH1F("Graph_Graph_g_excl_xsec_exp_m1522","g_excl_xsec_exp_m1",100,269.1108,767.8657);
   Graph_Graph_g_excl_xsec_exp_m1522->SetMinimum(0);
   Graph_Graph_g_excl_xsec_exp_m1522->SetMaximum(312.5893);
   Graph_Graph_g_excl_xsec_exp_m1522->SetDirectory(0);
   Graph_Graph_g_excl_xsec_exp_m1522->SetStats(0);

   ci = TColor::GetColor("#0000ff");
   Graph_Graph_g_excl_xsec_exp_m1522->SetLineColor(ci);
   Graph_Graph_g_excl_xsec_exp_m1522->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_g_excl_xsec_exp_m1522->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_g_excl_xsec_exp_m1522->GetYaxis()->SetTitleOffset(1.2);
   graph->SetHistogram(Graph_Graph_g_excl_xsec_exp_m1522);
   
   graph->Draw("l");
   
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
   
   TH1F *Graph_Graph_g_excl_xsec_obs1923 = new TH1F("Graph_Graph_g_excl_xsec_obs1923","g_excl_xsec_obs",100,-1560,1560);
   Graph_Graph_g_excl_xsec_obs1923->SetMinimum(-1453.053);
   Graph_Graph_g_excl_xsec_obs1923->SetMaximum(383.5797);
   Graph_Graph_g_excl_xsec_obs1923->SetDirectory(0);
   Graph_Graph_g_excl_xsec_obs1923->SetStats(0);

   ci = TColor::GetColor("#0000ff");
   Graph_Graph_g_excl_xsec_obs1923->SetLineColor(ci);
   Graph_Graph_g_excl_xsec_obs1923->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_g_excl_xsec_obs1923->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_g_excl_xsec_obs1923->GetYaxis()->SetTitleOffset(1.2);
   graph->SetHistogram(Graph_Graph_g_excl_xsec_obs1923);
   
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
   
   TH1F *Graph_Graph_g_excl_xsec_obs_p1724 = new TH1F("Graph_Graph_g_excl_xsec_obs_p1724","g_excl_xsec_obs_p1",100,252.1043,768.3827);
   Graph_Graph_g_excl_xsec_obs_p1724->SetMinimum(0);
   Graph_Graph_g_excl_xsec_obs_p1724->SetMaximum(271.6116);
   Graph_Graph_g_excl_xsec_obs_p1724->SetDirectory(0);
   Graph_Graph_g_excl_xsec_obs_p1724->SetStats(0);

   ci = TColor::GetColor("#0000ff");
   Graph_Graph_g_excl_xsec_obs_p1724->SetLineColor(ci);
   Graph_Graph_g_excl_xsec_obs_p1724->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_g_excl_xsec_obs_p1724->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_g_excl_xsec_obs_p1724->GetYaxis()->SetTitleOffset(1.2);
   graph->SetHistogram(Graph_Graph_g_excl_xsec_obs_p1724);
   
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
   
   TH1F *Graph_Graph_g_excl_xsec_obs_m1825 = new TH1F("Graph_Graph_g_excl_xsec_obs_m1825","g_excl_xsec_obs_m1",100,285.6258,676.9603);
   Graph_Graph_g_excl_xsec_obs_m1825->SetMinimum(0);
   Graph_Graph_g_excl_xsec_obs_m1825->SetMaximum(234.4499);
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
