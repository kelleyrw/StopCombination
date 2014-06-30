{
//=========Macro generated from canvas: cCONT_/cCONT_
//=========  (Sun Jun 29 21:58:50 2014) by ROOT version5.34/03
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
   
   TH2D *h_ul_xsec_exp_smoothEMPTY = new TH2D("h_ul_xsec_exp_smoothEMPTY","Expected razor #sigma #times Branching Fraction (t2bw)EMPTY",31,137.5,912.5,29,-12.5,712.5);

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
   
   graph = new TGraph(49);
   graph->SetName("g_excl_xsec_obs");
   graph->SetTitle("g_excl_xsec_obs");

   ci = TColor::GetColor("#cccccc");
   graph->SetFillColor(ci);
   graph->SetLineWidth(4);
   graph->SetPoint(0,575.0270779,0);
   graph->SetPoint(1,600,22.76237391);
   graph->SetPoint(2,602.4028806,25);
   graph->SetPoint(3,625,39.72114871);
   graph->SetPoint(4,644.6093687,50);
   graph->SetPoint(5,650,53.94025297);
   graph->SetPoint(6,675,70.35413451);
   graph->SetPoint(7,687.2314765,75);
   graph->SetPoint(8,700,84.81367361);
   graph->SetPoint(9,713.96061,100);
   graph->SetPoint(10,718.0911347,125);
   graph->SetPoint(11,711.0462066,150);
   graph->SetPoint(12,701.9309903,175);
   graph->SetPoint(13,700,177.8842141);
   graph->SetPoint(14,685.9493629,200);
   graph->SetPoint(15,675,223.6704806);
   graph->SetPoint(16,674.1257083,225);
   graph->SetPoint(17,658.2970084,250);
   graph->SetPoint(18,650,256.9614502);
   graph->SetPoint(19,625,268.8480148);
   graph->SetPoint(20,610.0855346,275);
   graph->SetPoint(21,600,277.0068144);
   graph->SetPoint(22,587.0645769,275);
   graph->SetPoint(23,575,272.2483403);
   graph->SetPoint(24,550,254.9907181);
   graph->SetPoint(25,543.9174203,250);
   graph->SetPoint(26,525,237.4646141);
   graph->SetPoint(27,500,225.7662021);
   graph->SetPoint(28,497.6638632,225);
   graph->SetPoint(29,475,211.9647155);
   graph->SetPoint(30,450,201.373885);
   graph->SetPoint(31,448.0742482,200);
   graph->SetPoint(32,425,180.2813527);
   graph->SetPoint(33,414.5390491,175);
   graph->SetPoint(34,400,165.4574615);
   graph->SetPoint(35,375.0937393,150);
   graph->SetPoint(36,375,149.9245568);
   graph->SetPoint(37,350,129.5498244);
   graph->SetPoint(38,345.0190413,125);
   graph->SetPoint(39,325,109.3983207);
   graph->SetPoint(40,312.2323644,100);
   graph->SetPoint(41,300,86.6615756);
   graph->SetPoint(42,290.0422069,75);
   graph->SetPoint(43,275,56.84293153);
   graph->SetPoint(44,270.1266033,50);
   graph->SetPoint(45,255.9395938,25);
   graph->SetPoint(46,252.0686947,0);
   graph->SetPoint(47,1300,-1300);
   graph->SetPoint(48,-1300,-1300);
   
   TH1F *Graph_g_excl_xsec_obs19 = new TH1F("Graph_g_excl_xsec_obs19","g_excl_xsec_obs",100,-1560,1560);
   Graph_g_excl_xsec_obs19->SetMinimum(-1457.701);
   Graph_g_excl_xsec_obs19->SetMaximum(434.7075);
   Graph_g_excl_xsec_obs19->SetDirectory(0);
   Graph_g_excl_xsec_obs19->SetStats(0);

   ci = TColor::GetColor("#0000ff");
   Graph_g_excl_xsec_obs19->SetLineColor(ci);
   Graph_g_excl_xsec_obs19->GetXaxis()->SetLabelSize(0.035);
   Graph_g_excl_xsec_obs19->GetYaxis()->SetLabelSize(0.035);
   Graph_g_excl_xsec_obs19->GetYaxis()->SetTitleOffset(1.2);
   graph->SetHistogram(Graph_g_excl_xsec_obs19);
   
   graph->Draw("f");
   
   graph = new TGraph(48);
   graph->SetName("g_excl_xsec_exp");
   graph->SetTitle("g_excl_xsec_exp");

   ci = TColor::GetColor("#ff807e");
   graph->SetFillColor(ci);

   ci = TColor::GetColor("#ff0000");
   graph->SetLineColor(ci);
   graph->SetLineStyle(7);
   graph->SetLineWidth(4);
   graph->SetPoint(0,615.179899,0);
   graph->SetPoint(1,625,10.67150572);
   graph->SetPoint(2,637.0817916,25);
   graph->SetPoint(3,650,36.05635051);
   graph->SetPoint(4,668.9610293,50);
   graph->SetPoint(5,675,55.75795394);
   graph->SetPoint(6,697.3478393,75);
   graph->SetPoint(7,700,79.05645174);
   graph->SetPoint(8,710.8846534,100);
   graph->SetPoint(9,716.639068,125);
   graph->SetPoint(10,713.5458395,150);
   graph->SetPoint(11,710.7089424,175);
   graph->SetPoint(12,707.1522141,200);
   graph->SetPoint(13,703.1864769,225);
   graph->SetPoint(14,700.8731733,250);
   graph->SetPoint(15,700,253.9768167);
   graph->SetPoint(16,693.1158057,275);
   graph->SetPoint(17,679.1006569,300);
   graph->SetPoint(18,675,303.9650937);
   graph->SetPoint(19,650,313.6265695);
   graph->SetPoint(20,625,311.4704948);
   graph->SetPoint(21,600,303.4286744);
   graph->SetPoint(22,593.0516841,300);
   graph->SetPoint(23,575,289.0888444);
   graph->SetPoint(24,557.3384204,275);
   graph->SetPoint(25,550,269.8926009);
   graph->SetPoint(26,525.1013522,250);
   graph->SetPoint(27,525,249.9259388);
   graph->SetPoint(28,500,232.9723496);
   graph->SetPoint(29,477.4217137,225);
   graph->SetPoint(30,475,223.3802401);
   graph->SetPoint(31,450,207.9541766);
   graph->SetPoint(32,437.2073537,200);
   graph->SetPoint(33,425,189.9763434);
   graph->SetPoint(34,400,175.0373283);
   graph->SetPoint(35,399.9476662,175);
   graph->SetPoint(36,375,151.1098537);
   graph->SetPoint(37,373.4713345,150);
   graph->SetPoint(38,350,131.0302255);
   graph->SetPoint(39,341.0353134,125);
   graph->SetPoint(40,325,112.5424148);
   graph->SetPoint(41,309.4781282,100);
   graph->SetPoint(42,300,90.10897138);
   graph->SetPoint(43,286.1766517,75);
   graph->SetPoint(44,275,60.23954557);
   graph->SetPoint(45,268.2119952,50);
   graph->SetPoint(46,256.0874914,25);
   graph->SetPoint(47,255.0077596,0);
   
   TH1F *Graph_Graph_g_excl_xsec_exp320 = new TH1F("Graph_Graph_g_excl_xsec_exp320","g_excl_xsec_exp",100,208.8446,762.8022);
   Graph_Graph_g_excl_xsec_exp320->SetMinimum(0);
   Graph_Graph_g_excl_xsec_exp320->SetMaximum(344.9892);
   Graph_Graph_g_excl_xsec_exp320->SetDirectory(0);
   Graph_Graph_g_excl_xsec_exp320->SetStats(0);

   ci = TColor::GetColor("#0000ff");
   Graph_Graph_g_excl_xsec_exp320->SetLineColor(ci);
   Graph_Graph_g_excl_xsec_exp320->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_g_excl_xsec_exp320->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_g_excl_xsec_exp320->GetYaxis()->SetTitleOffset(1.2);
   graph->SetHistogram(Graph_Graph_g_excl_xsec_exp320);
   
   graph->Draw("l");
   
   graph = new TGraph(44);
   graph->SetName("g_excl_xsec_exp_p1");
   graph->SetTitle("g_excl_xsec_exp_p1");

   ci = TColor::GetColor("#ff807e");
   graph->SetFillColor(ci);

   ci = TColor::GetColor("#ff0000");
   graph->SetLineColor(ci);
   graph->SetLineStyle(7);
   graph->SetLineWidth(2);
   graph->SetPoint(0,581.4222093,0);
   graph->SetPoint(1,600,16.53655831);
   graph->SetPoint(2,608.2604482,25);
   graph->SetPoint(3,625,38.87171286);
   graph->SetPoint(4,637.9136596,50);
   graph->SetPoint(5,650,63.61428202);
   graph->SetPoint(6,660.9549563,75);
   graph->SetPoint(7,675,98.126302);
   graph->SetPoint(8,676.1626493,100);
   graph->SetPoint(9,681.4427255,125);
   graph->SetPoint(10,680.5671313,150);
   graph->SetPoint(11,678.5859543,175);
   graph->SetPoint(12,675,190.9027821);
   graph->SetPoint(13,672.5904267,200);
   graph->SetPoint(14,665.5740977,225);
   graph->SetPoint(15,655.2881623,250);
   graph->SetPoint(16,650,257.042752);
   graph->SetPoint(17,625,273.2066814);
   graph->SetPoint(18,618.0738209,275);
   graph->SetPoint(19,600,277.261215);
   graph->SetPoint(20,594.6074625,275);
   graph->SetPoint(21,575,266.6014173);
   graph->SetPoint(22,550,253.0858127);
   graph->SetPoint(23,546.1671212,250);
   graph->SetPoint(24,525,234.6538379);
   graph->SetPoint(25,500,225.0693286);
   graph->SetPoint(26,499.7882811,225);
   graph->SetPoint(27,475,209.8250157);
   graph->SetPoint(28,454.5694472,200);
   graph->SetPoint(29,450,196.6667082);
   graph->SetPoint(30,425,176.9468565);
   graph->SetPoint(31,421.8293443,175);
   graph->SetPoint(32,400,156.7838092);
   graph->SetPoint(33,392.2173125,150);
   graph->SetPoint(34,375,134.3380415);
   graph->SetPoint(35,363.0404298,125);
   graph->SetPoint(36,350,113.2086337);
   graph->SetPoint(37,332.69918,100);
   graph->SetPoint(38,325,92.39985004);
   graph->SetPoint(39,306.9698022,75);
   graph->SetPoint(40,300,65.11840086);
   graph->SetPoint(41,290.4713692,50);
   graph->SetPoint(42,284.9402189,25);
   graph->SetPoint(43,288.2022604,0);
   
   TH1F *Graph_Graph_g_excl_xsec_exp_p1421 = new TH1F("Graph_Graph_g_excl_xsec_exp_p1421","g_excl_xsec_exp_p1",100,245.29,721.093);
   Graph_Graph_g_excl_xsec_exp_p1421->SetMinimum(0);
   Graph_Graph_g_excl_xsec_exp_p1421->SetMaximum(304.9873);
   Graph_Graph_g_excl_xsec_exp_p1421->SetDirectory(0);
   Graph_Graph_g_excl_xsec_exp_p1421->SetStats(0);

   ci = TColor::GetColor("#0000ff");
   Graph_Graph_g_excl_xsec_exp_p1421->SetLineColor(ci);
   Graph_Graph_g_excl_xsec_exp_p1421->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_g_excl_xsec_exp_p1421->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_g_excl_xsec_exp_p1421->GetYaxis()->SetTitleOffset(1.2);
   graph->SetHistogram(Graph_Graph_g_excl_xsec_exp_p1421);
   
   graph->Draw("l");
   
   graph = new TGraph(52);
   graph->SetName("g_excl_xsec_exp_m1");
   graph->SetTitle("g_excl_xsec_exp_m1");

   ci = TColor::GetColor("#ff807e");
   graph->SetFillColor(ci);

   ci = TColor::GetColor("#ff0000");
   graph->SetLineColor(ci);
   graph->SetLineStyle(7);
   graph->SetLineWidth(2);
   graph->SetPoint(0,640.5675131,0);
   graph->SetPoint(1,650,11.57665079);
   graph->SetPoint(2,662.1264245,25);
   graph->SetPoint(3,675,34.18380843);
   graph->SetPoint(4,692.9356377,50);
   graph->SetPoint(5,700,57.17282509);
   graph->SetPoint(6,724.6812633,75);
   graph->SetPoint(7,725,75.48516626);
   graph->SetPoint(8,738.3961901,100);
   graph->SetPoint(9,745.5182487,125);
   graph->SetPoint(10,742.1527446,150);
   graph->SetPoint(11,739.5895156,175);
   graph->SetPoint(12,739.5851074,200);
   graph->SetPoint(13,736.6854496,225);
   graph->SetPoint(14,732.9931015,250);
   graph->SetPoint(15,728.0955964,275);
   graph->SetPoint(16,725,283.3338442);
   graph->SetPoint(17,717.6256646,300);
   graph->SetPoint(18,704.3008483,325);
   graph->SetPoint(19,700,331.6879347);
   graph->SetPoint(20,675,341.3335858);
   graph->SetPoint(21,650,335.7394445);
   graph->SetPoint(22,625,328.3637015);
   graph->SetPoint(23,617.0049311,325);
   graph->SetPoint(24,600,316.1790053);
   graph->SetPoint(25,575,302.665049);
   graph->SetPoint(26,571.5805343,300);
   graph->SetPoint(27,550,279.7317981);
   graph->SetPoint(28,546.5982796,275);
   graph->SetPoint(29,525,255.7411218);
   graph->SetPoint(30,514.0395426,250);
   graph->SetPoint(31,500,241.7392601);
   graph->SetPoint(32,475,232.9687145);
   graph->SetPoint(33,457.632611,225);
   graph->SetPoint(34,450,219.7146733);
   graph->SetPoint(35,425,202.0557537);
   graph->SetPoint(36,421.9216145,200);
   graph->SetPoint(37,400,183.3788068);
   graph->SetPoint(38,387.9111432,175);
   graph->SetPoint(39,375,161.838748);
   graph->SetPoint(40,362.1789063,150);
   graph->SetPoint(41,350,139.9828016);
   graph->SetPoint(42,325,125.000049);
   graph->SetPoint(43,324.999951,125);
   graph->SetPoint(44,300,100.0001648);
   graph->SetPoint(45,299.9998352,100);
   graph->SetPoint(46,275,75.00010842);
   graph->SetPoint(47,274.9998916,75);
   graph->SetPoint(48,257.0757864,50);
   graph->SetPoint(49,250,34.28974784);
   graph->SetPoint(50,246.5943826,25);
   graph->SetPoint(51,243.7093352,0);
   
   TH1F *Graph_Graph_g_excl_xsec_exp_m1522 = new TH1F("Graph_Graph_g_excl_xsec_exp_m1522","g_excl_xsec_exp_m1",100,193.5284,795.6991);
   Graph_Graph_g_excl_xsec_exp_m1522->SetMinimum(0);
   Graph_Graph_g_excl_xsec_exp_m1522->SetMaximum(375.4669);
   Graph_Graph_g_excl_xsec_exp_m1522->SetDirectory(0);
   Graph_Graph_g_excl_xsec_exp_m1522->SetStats(0);

   ci = TColor::GetColor("#0000ff");
   Graph_Graph_g_excl_xsec_exp_m1522->SetLineColor(ci);
   Graph_Graph_g_excl_xsec_exp_m1522->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_g_excl_xsec_exp_m1522->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_g_excl_xsec_exp_m1522->GetYaxis()->SetTitleOffset(1.2);
   graph->SetHistogram(Graph_Graph_g_excl_xsec_exp_m1522);
   
   graph->Draw("l");
   
   graph = new TGraph(49);
   graph->SetName("g_excl_xsec_obs");
   graph->SetTitle("g_excl_xsec_obs");

   ci = TColor::GetColor("#cccccc");
   graph->SetFillColor(ci);
   graph->SetLineWidth(4);
   graph->SetPoint(0,575.0270779,0);
   graph->SetPoint(1,600,22.76237391);
   graph->SetPoint(2,602.4028806,25);
   graph->SetPoint(3,625,39.72114871);
   graph->SetPoint(4,644.6093687,50);
   graph->SetPoint(5,650,53.94025297);
   graph->SetPoint(6,675,70.35413451);
   graph->SetPoint(7,687.2314765,75);
   graph->SetPoint(8,700,84.81367361);
   graph->SetPoint(9,713.96061,100);
   graph->SetPoint(10,718.0911347,125);
   graph->SetPoint(11,711.0462066,150);
   graph->SetPoint(12,701.9309903,175);
   graph->SetPoint(13,700,177.8842141);
   graph->SetPoint(14,685.9493629,200);
   graph->SetPoint(15,675,223.6704806);
   graph->SetPoint(16,674.1257083,225);
   graph->SetPoint(17,658.2970084,250);
   graph->SetPoint(18,650,256.9614502);
   graph->SetPoint(19,625,268.8480148);
   graph->SetPoint(20,610.0855346,275);
   graph->SetPoint(21,600,277.0068144);
   graph->SetPoint(22,587.0645769,275);
   graph->SetPoint(23,575,272.2483403);
   graph->SetPoint(24,550,254.9907181);
   graph->SetPoint(25,543.9174203,250);
   graph->SetPoint(26,525,237.4646141);
   graph->SetPoint(27,500,225.7662021);
   graph->SetPoint(28,497.6638632,225);
   graph->SetPoint(29,475,211.9647155);
   graph->SetPoint(30,450,201.373885);
   graph->SetPoint(31,448.0742482,200);
   graph->SetPoint(32,425,180.2813527);
   graph->SetPoint(33,414.5390491,175);
   graph->SetPoint(34,400,165.4574615);
   graph->SetPoint(35,375.0937393,150);
   graph->SetPoint(36,375,149.9245568);
   graph->SetPoint(37,350,129.5498244);
   graph->SetPoint(38,345.0190413,125);
   graph->SetPoint(39,325,109.3983207);
   graph->SetPoint(40,312.2323644,100);
   graph->SetPoint(41,300,86.6615756);
   graph->SetPoint(42,290.0422069,75);
   graph->SetPoint(43,275,56.84293153);
   graph->SetPoint(44,270.1266033,50);
   graph->SetPoint(45,255.9395938,25);
   graph->SetPoint(46,252.0686947,0);
   graph->SetPoint(47,1300,-1300);
   graph->SetPoint(48,-1300,-1300);
   
   TH1F *Graph_Graph_g_excl_xsec_obs1923 = new TH1F("Graph_Graph_g_excl_xsec_obs1923","g_excl_xsec_obs",100,-1560,1560);
   Graph_Graph_g_excl_xsec_obs1923->SetMinimum(-1457.701);
   Graph_Graph_g_excl_xsec_obs1923->SetMaximum(434.7075);
   Graph_Graph_g_excl_xsec_obs1923->SetDirectory(0);
   Graph_Graph_g_excl_xsec_obs1923->SetStats(0);

   ci = TColor::GetColor("#0000ff");
   Graph_Graph_g_excl_xsec_obs1923->SetLineColor(ci);
   Graph_Graph_g_excl_xsec_obs1923->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_g_excl_xsec_obs1923->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_g_excl_xsec_obs1923->GetYaxis()->SetTitleOffset(1.2);
   graph->SetHistogram(Graph_Graph_g_excl_xsec_obs1923);
   
   graph->Draw("l");
   
   graph = new TGraph(52);
   graph->SetName("g_excl_xsec_obs_p1");
   graph->SetTitle("g_excl_xsec_obs_p1");

   ci = TColor::GetColor("#ff807e");
   graph->SetFillColor(ci);
   graph->SetLineWidth(2);
   graph->SetPoint(0,598.1592881,0);
   graph->SetPoint(1,600,1.64341681);
   graph->SetPoint(2,625,24.40925923);
   graph->SetPoint(3,625.7624576,25);
   graph->SetPoint(4,650,38.18554466);
   graph->SetPoint(5,675,49.92451988);
   graph->SetPoint(6,675.2279996,50);
   graph->SetPoint(7,700,60.23607372);
   graph->SetPoint(8,725,71.63935589);
   graph->SetPoint(9,731.1214743,75);
   graph->SetPoint(10,748.0562267,100);
   graph->SetPoint(11,750,109.9636925);
   graph->SetPoint(12,751.7989395,125);
   graph->SetPoint(13,750,129.9183142);
   graph->SetPoint(14,740.2629533,150);
   graph->SetPoint(15,730.6266983,175);
   graph->SetPoint(16,725,191.957528);
   graph->SetPoint(17,720.4797226,200);
   graph->SetPoint(18,708.6478654,225);
   graph->SetPoint(19,700,242.9467326);
   graph->SetPoint(20,695.9638818,250);
   graph->SetPoint(21,675,274.7737784);
   graph->SetPoint(22,674.6859169,275);
   graph->SetPoint(23,650,283.8292884);
   graph->SetPoint(24,625,290.0218939);
   graph->SetPoint(25,600,289.173327);
   graph->SetPoint(26,575,282.646888);
   graph->SetPoint(27,563.8149443,275);
   graph->SetPoint(28,550,264.6922764);
   graph->SetPoint(29,532.3252969,250);
   graph->SetPoint(30,525,245.0994545);
   graph->SetPoint(31,500,230.2147843);
   graph->SetPoint(32,484.2833118,225);
   graph->SetPoint(33,475,219.6122798);
   graph->SetPoint(34,450,206.910199);
   graph->SetPoint(35,440.3629661,200);
   graph->SetPoint(36,425,186.8261553);
   graph->SetPoint(37,401.3684774,175);
   graph->SetPoint(38,400,174.1078558);
   graph->SetPoint(39,375,156.4679002);
   graph->SetPoint(40,363.3622332,150);
   graph->SetPoint(41,350,139.1331469);
   graph->SetPoint(42,334.5639249,125);
   graph->SetPoint(43,325,117.5336172);
   graph->SetPoint(44,300.8768048,100);
   graph->SetPoint(45,300,99.05262343);
   graph->SetPoint(46,279.4343014,75);
   graph->SetPoint(47,275,69.65251835);
   graph->SetPoint(48,260.996347,50);
   graph->SetPoint(49,250,32.7435323);
   graph->SetPoint(50,245.6248304,25);
   graph->SetPoint(51,240.2530571,0);
   
   TH1F *Graph_Graph_g_excl_xsec_obs_p1724 = new TH1F("Graph_Graph_g_excl_xsec_obs_p1724","g_excl_xsec_obs_p1",100,189.0985,802.9535);
   Graph_Graph_g_excl_xsec_obs_p1724->SetMinimum(0);
   Graph_Graph_g_excl_xsec_obs_p1724->SetMaximum(319.0241);
   Graph_Graph_g_excl_xsec_obs_p1724->SetDirectory(0);
   Graph_Graph_g_excl_xsec_obs_p1724->SetStats(0);

   ci = TColor::GetColor("#0000ff");
   Graph_Graph_g_excl_xsec_obs_p1724->SetLineColor(ci);
   Graph_Graph_g_excl_xsec_obs_p1724->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_g_excl_xsec_obs_p1724->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_g_excl_xsec_obs_p1724->GetYaxis()->SetTitleOffset(1.2);
   graph->SetHistogram(Graph_Graph_g_excl_xsec_obs_p1724);
   
   graph->Draw("l");
   
   graph = new TGraph(45);
   graph->SetName("g_excl_xsec_obs_m1");
   graph->SetTitle("g_excl_xsec_obs_m1");

   ci = TColor::GetColor("#ff807e");
   graph->SetFillColor(ci);
   graph->SetLineWidth(2);
   graph->SetPoint(0,544.943883,0);
   graph->SetPoint(1,550,3.813748565);
   graph->SetPoint(2,575,20.9625424);
   graph->SetPoint(3,579.3144746,25);
   graph->SetPoint(4,600,38.95746119);
   graph->SetPoint(5,617.0033586,50);
   graph->SetPoint(6,625,57.82876707);
   graph->SetPoint(7,648.9056838,75);
   graph->SetPoint(8,650,76.42169775);
   graph->SetPoint(9,670.6498814,100);
   graph->SetPoint(10,675,110.8785481);
   graph->SetPoint(11,679.8451926,125);
   graph->SetPoint(12,675.5261385,150);
   graph->SetPoint(13,675,152.6624602);
   graph->SetPoint(14,669.4645141,175);
   graph->SetPoint(15,655.6617679,200);
   graph->SetPoint(16,650,208.410169);
   graph->SetPoint(17,639.378274,225);
   graph->SetPoint(18,625,241.1056671);
   graph->SetPoint(19,612.0266965,250);
   graph->SetPoint(20,600,255.9411728);
   graph->SetPoint(21,575,254.8213686);
   graph->SetPoint(22,565.7553544,250);
   graph->SetPoint(23,550,243.0106549);
   graph->SetPoint(24,525,229.8297737);
   graph->SetPoint(25,513.9544571,225);
   graph->SetPoint(26,500,216.3397229);
   graph->SetPoint(27,475,204.3171511);
   graph->SetPoint(28,464.065553,200);
   graph->SetPoint(29,450,191.6713234);
   graph->SetPoint(30,427.8038359,175);
   graph->SetPoint(31,425,172.7079691);
   graph->SetPoint(32,400,156.8070672);
   graph->SetPoint(33,389.0225212,150);
   graph->SetPoint(34,375,138.7216032);
   graph->SetPoint(35,357.5433039,125);
   graph->SetPoint(36,350,118.6451197);
   graph->SetPoint(37,325,101.2630243);
   graph->SetPoint(38,323.312741,100);
   graph->SetPoint(39,300.8785407,75);
   graph->SetPoint(40,300,73.96551076);
   graph->SetPoint(41,281.381121,50);
   graph->SetPoint(42,275,37.66214153);
   graph->SetPoint(43,268.8404131,25);
   graph->SetPoint(44,267.7491471,0);
   
   TH1F *Graph_Graph_g_excl_xsec_obs_m1825 = new TH1F("Graph_Graph_g_excl_xsec_obs_m1825","g_excl_xsec_obs_m1",100,226.5395,721.0548);
   Graph_Graph_g_excl_xsec_obs_m1825->SetMinimum(0);
   Graph_Graph_g_excl_xsec_obs_m1825->SetMaximum(281.5353);
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
