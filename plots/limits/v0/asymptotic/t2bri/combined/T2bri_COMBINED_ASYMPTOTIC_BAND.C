{
//=========Macro generated from canvas: cBrazil_/cBrazil_
//=========  (Thu Apr 23 17:01:20 2015) by ROOT version5.34/03
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
   
   TH2D *h_ul_xsec_obs_smoothEMPTY = new TH2D("h_ul_xsec_obs_smoothEMPTY","Observed combined #sigma #times Branching Fraction (t2tt)EMPTY",31,137.5,912.5,29,-12.5,712.5);

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
   
   graph = new TGraph(75);
   graph->SetName("Graph");
   graph->SetTitle("Graph");

   ci = TColor::GetColor("#ffcc00");
   graph->SetFillColor(ci);
   graph->SetPoint(0,583.8550116,0);
   graph->SetPoint(1,599.53791,25);
   graph->SetPoint(2,600,25.59612949);
   graph->SetPoint(3,617.5962464,50);
   graph->SetPoint(4,625,63.62252378);
   graph->SetPoint(5,630.7283675,75);
   graph->SetPoint(6,634.0546057,100);
   graph->SetPoint(7,629.5851995,125);
   graph->SetPoint(8,625,135.7630438);
   graph->SetPoint(9,616.4241651,150);
   graph->SetPoint(10,600,164.9226808);
   graph->SetPoint(11,575,173.6012638);
   graph->SetPoint(12,550,170.7939786);
   graph->SetPoint(13,525,162.539134);
   graph->SetPoint(14,500,152.8371152);
   graph->SetPoint(15,493.7573481,150);
   graph->SetPoint(16,475,139.3631563);
   graph->SetPoint(17,450,126.6228737);
   graph->SetPoint(18,447.4050259,125);
   graph->SetPoint(19,425,108.6116353);
   graph->SetPoint(20,412.8629295,100);
   graph->SetPoint(21,400,88.61148786);
   graph->SetPoint(22,384.3778448,75);
   graph->SetPoint(23,375,63.05507773);
   graph->SetPoint(24,363.8953278,50);
   graph->SetPoint(25,353.4737509,25);
   graph->SetPoint(26,353.6553703,0);
   graph->SetPoint(27,272.1333453,0);
   graph->SetPoint(28,275,12.25929317);
   graph->SetPoint(29,278.3295419,25);
   graph->SetPoint(30,292.2953958,50);
   graph->SetPoint(31,300,58.67261802);
   graph->SetPoint(32,315.8813021,75);
   graph->SetPoint(33,325,82.01065377);
   graph->SetPoint(34,346.5249911,100);
   graph->SetPoint(35,350,102.3124717);
   graph->SetPoint(36,375,121.031676);
   graph->SetPoint(37,379.7058984,125);
   graph->SetPoint(38,400,139.7016787);
   graph->SetPoint(39,412.6558301,150);
   graph->SetPoint(40,425,158.6600564);
   graph->SetPoint(41,446.6014029,175);
   graph->SetPoint(42,450,177.1058123);
   graph->SetPoint(43,475,191.8921303);
   graph->SetPoint(44,486.9098357,200);
   graph->SetPoint(45,500,207.2240299);
   graph->SetPoint(46,525,223.4689108);
   graph->SetPoint(47,527.3816947,225);
   graph->SetPoint(48,550,236.9015817);
   graph->SetPoint(49,570.4978802,250);
   graph->SetPoint(50,575,252.3900655);
   graph->SetPoint(51,600,264.7525296);
   graph->SetPoint(52,620.313208,275);
   graph->SetPoint(53,625,276.9372392);
   graph->SetPoint(54,650,284.073028);
   graph->SetPoint(55,675,288.5277539);
   graph->SetPoint(56,700,285.573309);
   graph->SetPoint(57,717.7860228,275);
   graph->SetPoint(58,725,267.7202609);
   graph->SetPoint(59,737.0881897,250);
   graph->SetPoint(60,750,225.5592592);
   graph->SetPoint(61,750.257781,225);
   graph->SetPoint(62,760.1017485,200);
   graph->SetPoint(63,768.5261913,175);
   graph->SetPoint(64,774.8994489,150);
   graph->SetPoint(65,775,149.0912757);
   graph->SetPoint(66,777.0054168,125);
   graph->SetPoint(67,775.5036257,100);
   graph->SetPoint(68,775,98.28985148);
   graph->SetPoint(69,766.6555995,75);
   graph->SetPoint(70,750.0440186,50);
   graph->SetPoint(71,750,49.9472737);
   graph->SetPoint(72,727.5133945,25);
   graph->SetPoint(73,725,20.98536327);
   graph->SetPoint(74,710.4229229,0);
   
   TH1F *Graph_Graph36 = new TH1F("Graph_Graph36","Graph",100,221.6461,827.4926);
   Graph_Graph36->SetMinimum(0);
   Graph_Graph36->SetMaximum(317.3805);
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
   graph->SetPoint(0,601.8732999,0);
   graph->SetPoint(1,623.5221377,25);
   graph->SetPoint(2,625,26.14035419);
   graph->SetPoint(3,650,43.65655971);
   graph->SetPoint(4,663.2118676,50);
   graph->SetPoint(5,675,57.49884501);
   graph->SetPoint(6,700,70.21590088);
   graph->SetPoint(7,708.9882176,75);
   graph->SetPoint(8,724.907158,100);
   graph->SetPoint(9,722.4897626,125);
   graph->SetPoint(10,711.8921294,150);
   graph->SetPoint(11,700,171.1036912);
   graph->SetPoint(12,697.7950038,175);
   graph->SetPoint(13,676.1634333,200);
   graph->SetPoint(14,675,200.9113401);
   graph->SetPoint(15,650,211.0976815);
   graph->SetPoint(16,625,216.0826823);
   graph->SetPoint(17,600,217.6498178);
   graph->SetPoint(18,575,216.1145102);
   graph->SetPoint(19,550,212.2222851);
   graph->SetPoint(20,525,207.6056842);
   graph->SetPoint(21,500,201.7502033);
   graph->SetPoint(22,497.0754788,200);
   graph->SetPoint(23,475,184.7393321);
   graph->SetPoint(24,461.3817815,175);
   graph->SetPoint(25,450,166.6403407);
   graph->SetPoint(26,425,150.1107828);
   graph->SetPoint(27,424.8335731,150);
   graph->SetPoint(28,400,130.2214473);
   graph->SetPoint(29,392.2080612,125);
   graph->SetPoint(30,375,110.8213469);
   graph->SetPoint(31,359.6317594,100);
   graph->SetPoint(32,350,91.58056436);
   graph->SetPoint(33,330.2870157,75);
   graph->SetPoint(34,325,69.49282214);
   graph->SetPoint(35,309.0880602,50);
   graph->SetPoint(36,300,34.22014453);
   graph->SetPoint(37,295.727508,25);
   graph->SetPoint(38,290.600262,0);
   graph->SetPoint(39,1300,-1300);
   graph->SetPoint(40,-1300,-1300);
   
   TH1F *Graph_Graph_Graph_g_excl_xsec_obs192337 = new TH1F("Graph_Graph_Graph_g_excl_xsec_obs192337","g_excl_xsec_obs",100,-1560,1560);
   Graph_Graph_Graph_g_excl_xsec_obs192337->SetMinimum(-1451.765);
   Graph_Graph_Graph_g_excl_xsec_obs192337->SetMaximum(369.4148);
   Graph_Graph_Graph_g_excl_xsec_obs192337->SetDirectory(0);
   Graph_Graph_Graph_g_excl_xsec_obs192337->SetStats(0);

   ci = TColor::GetColor("#0000ff");
   Graph_Graph_Graph_g_excl_xsec_obs192337->SetLineColor(ci);
   Graph_Graph_Graph_g_excl_xsec_obs192337->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_Graph_g_excl_xsec_obs192337->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_Graph_g_excl_xsec_obs192337->GetYaxis()->SetTitleOffset(1.2);
   graph->SetHistogram(Graph_Graph_Graph_g_excl_xsec_obs192337);
   
   graph->Draw("l");
   
   graph = new TGraph(44);
   graph->SetName("g_excl_xsec_obs_p1");
   graph->SetTitle("g_excl_xsec_obs_p1");
   graph->SetFillColor(ci);
   graph->SetLineWidth(2);
   graph->SetPoint(0,626.6898426,0);
   graph->SetPoint(1,650,20.88388711);
   graph->SetPoint(2,655.8128925,25);
   graph->SetPoint(3,675,35.09177932);
   graph->SetPoint(4,700,45.06648936);
   graph->SetPoint(5,712.9470732,50);
   graph->SetPoint(6,725,56.13316905);
   graph->SetPoint(7,750,74.08341107);
   graph->SetPoint(8,750.987377,75);
   graph->SetPoint(9,762.574135,100);
   graph->SetPoint(10,763.0957983,125);
   graph->SetPoint(11,756.001704,150);
   graph->SetPoint(12,750,161.3890782);
   graph->SetPoint(13,741.0968529,175);
   graph->SetPoint(14,725,196.606094);
   graph->SetPoint(15,722.4198905,200);
   graph->SetPoint(16,700.15904,225);
   graph->SetPoint(17,700,225.1201481);
   graph->SetPoint(18,675,234.8302072);
   graph->SetPoint(19,650,238.2596245);
   graph->SetPoint(20,625,237.9606835);
   graph->SetPoint(21,600,235.1566483);
   graph->SetPoint(22,575,230.9379386);
   graph->SetPoint(23,550,225.9892895);
   graph->SetPoint(24,545.4039977,225);
   graph->SetPoint(25,525,219.3116279);
   graph->SetPoint(26,500,209.9598065);
   graph->SetPoint(27,483.5499438,200);
   graph->SetPoint(28,475,194.035669);
   graph->SetPoint(29,450,175.5574064);
   graph->SetPoint(30,449.2619368,175);
   graph->SetPoint(31,425,155.95594);
   graph->SetPoint(32,415.98794,150);
   graph->SetPoint(33,400,137.3317477);
   graph->SetPoint(34,381.6084703,125);
   graph->SetPoint(35,375,119.5525414);
   graph->SetPoint(36,350,101.4638321);
   graph->SetPoint(37,347.8647735,100);
   graph->SetPoint(38,325,79.84543771);
   graph->SetPoint(39,320.1678522,75);
   graph->SetPoint(40,300,51.8713951);
   graph->SetPoint(41,298.6683664,50);
   graph->SetPoint(42,286.6320408,25);
   graph->SetPoint(43,279.7370021,0);
   
   TH1F *Graph_Graph_Graph_g_excl_xsec_obs_p172438 = new TH1F("Graph_Graph_Graph_g_excl_xsec_obs_p172438","g_excl_xsec_obs_p1",100,231.4011,811.4317);
   Graph_Graph_Graph_g_excl_xsec_obs_p172438->SetMinimum(0);
   Graph_Graph_Graph_g_excl_xsec_obs_p172438->SetMaximum(262.0856);
   Graph_Graph_Graph_g_excl_xsec_obs_p172438->SetDirectory(0);
   Graph_Graph_Graph_g_excl_xsec_obs_p172438->SetStats(0);

   ci = TColor::GetColor("#0000ff");
   Graph_Graph_Graph_g_excl_xsec_obs_p172438->SetLineColor(ci);
   Graph_Graph_Graph_g_excl_xsec_obs_p172438->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_Graph_g_excl_xsec_obs_p172438->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_Graph_g_excl_xsec_obs_p172438->GetYaxis()->SetTitleOffset(1.2);
   graph->SetHistogram(Graph_Graph_Graph_g_excl_xsec_obs_p172438);
   
   graph->Draw("l");
   
   graph = new TGraph(34);
   graph->SetName("g_excl_xsec_obs_m1");
   graph->SetTitle("g_excl_xsec_obs_m1");
   graph->SetFillColor(ci);
   graph->SetLineWidth(2);
   graph->SetPoint(0,566.1368936,0);
   graph->SetPoint(1,575,9.069670023);
   graph->SetPoint(2,589.770803,25);
   graph->SetPoint(3,600,33.26261573);
   graph->SetPoint(4,620.7034535,50);
   graph->SetPoint(5,625,54.35604001);
   graph->SetPoint(6,650,74.06818942);
   graph->SetPoint(7,651.5093102,75);
   graph->SetPoint(8,670.4382834,100);
   graph->SetPoint(9,672.3903135,125);
   graph->SetPoint(10,665.0449306,150);
   graph->SetPoint(11,650,170.034724);
   graph->SetPoint(12,644.4317837,175);
   graph->SetPoint(13,625,185.0255243);
   graph->SetPoint(14,600,193.9314064);
   graph->SetPoint(15,575,197.5912098);
   graph->SetPoint(16,550,196.7368215);
   graph->SetPoint(17,525,193.125519);
   graph->SetPoint(18,500,186.9780992);
   graph->SetPoint(19,475,175.4429952);
   graph->SetPoint(20,474.3679066,175);
   graph->SetPoint(21,450,157.3726788);
   graph->SetPoint(22,438.7103512,150);
   graph->SetPoint(23,425,139.6835039);
   graph->SetPoint(24,404.0611355,125);
   graph->SetPoint(25,400,121.3838154);
   graph->SetPoint(26,375,102.0901524);
   graph->SetPoint(27,372.0441014,100);
   graph->SetPoint(28,350,80.67025636);
   graph->SetPoint(29,343.2367223,75);
   graph->SetPoint(30,325,56.04910152);
   graph->SetPoint(31,320.1410006,50);
   graph->SetPoint(32,307.4444727,25);
   graph->SetPoint(33,302.189154,0);
   
   TH1F *Graph_Graph_Graph_g_excl_xsec_obs_m182539 = new TH1F("Graph_Graph_Graph_g_excl_xsec_obs_m182539","g_excl_xsec_obs_m1",100,265.169,709.4104);
   Graph_Graph_Graph_g_excl_xsec_obs_m182539->SetMinimum(0);
   Graph_Graph_Graph_g_excl_xsec_obs_m182539->SetMaximum(217.3503);
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
   graph->SetFillColor(ci);
   graph->SetLineStyle(2);
   graph->SetLineWidth(4);
   graph->SetPoint(0,646.8454311,0);
   graph->SetPoint(1,650,5.148762667);
   graph->SetPoint(2,661.870788,25);
   graph->SetPoint(3,675,40.55691682);
   graph->SetPoint(4,683.1055378,50);
   graph->SetPoint(5,700,74.61948584);
   graph->SetPoint(6,700.2515613,75);
   graph->SetPoint(7,706.9111294,100);
   graph->SetPoint(8,706.9909235,125);
   graph->SetPoint(9,703.4265107,150);
   graph->SetPoint(10,700,162.9141229);
   graph->SetPoint(11,696.0210774,175);
   graph->SetPoint(12,683.0079846,200);
   graph->SetPoint(13,675,210.3761102);
   graph->SetPoint(14,657.1873534,225);
   graph->SetPoint(15,650,228.4648562);
   graph->SetPoint(16,625,232.6254667);
   graph->SetPoint(17,600,229.79871);
   graph->SetPoint(18,582.9231355,225);
   graph->SetPoint(19,575,222.2653694);
   graph->SetPoint(20,550,209.7348122);
   graph->SetPoint(21,528.2661499,200);
   graph->SetPoint(22,525,198.2104863);
   graph->SetPoint(23,500,183.2992537);
   graph->SetPoint(24,483.7881103,175);
   graph->SetPoint(25,475,169.3779974);
   graph->SetPoint(26,450,154.1205301);
   graph->SetPoint(27,443.621467,150);
   graph->SetPoint(28,425,135.7609896);
   graph->SetPoint(29,409.9888724,125);
   graph->SetPoint(30,400,116.7560942);
   graph->SetPoint(31,377.7285956,100);
   graph->SetPoint(32,375,97.44153048);
   graph->SetPoint(33,350,76.14904564);
   graph->SetPoint(34,348.5168486,75);
   graph->SetPoint(35,325,50.45592933);
   graph->SetPoint(36,324.5754295,50);
   graph->SetPoint(37,313.4665839,25);
   graph->SetPoint(38,310.3717478,0);
   
   TH1F *Graph_Graph_Graph_g_excl_xsec_exp32040 = new TH1F("Graph_Graph_Graph_g_excl_xsec_exp32040","g_excl_xsec_exp",100,270.7098,746.6528);
   Graph_Graph_Graph_g_excl_xsec_exp32040->SetMinimum(0);
   Graph_Graph_Graph_g_excl_xsec_exp32040->SetMaximum(255.888);
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
      tex = new TLatex(0.55,0.82,"");
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
