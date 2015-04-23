{
//=========Macro generated from canvas: cCONT_/cCONT_
//=========  (Thu Apr 23 07:28:50 2015) by ROOT version5.34/03
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
   
   graph = new TGraph(38);
   graph->SetName("g_excl_xsec_obs");
   graph->SetTitle("g_excl_xsec_obs");

   ci = TColor::GetColor("#cccccc");
   graph->SetFillColor(ci);
   graph->SetLineWidth(4);
   graph->SetPoint(0,598.5841288,0);
   graph->SetPoint(1,600,1.447343396);
   graph->SetPoint(2,619.3375599,25);
   graph->SetPoint(3,625,29.99328705);
   graph->SetPoint(4,646.5596281,50);
   graph->SetPoint(5,650,54.04061287);
   graph->SetPoint(6,670.0318493,75);
   graph->SetPoint(7,675,86.63412046);
   graph->SetPoint(8,681.1196397,100);
   graph->SetPoint(9,682.148321,125);
   graph->SetPoint(10,676.6938397,150);
   graph->SetPoint(11,675,153.5568668);
   graph->SetPoint(12,661.3400246,175);
   graph->SetPoint(13,650,184.3505146);
   graph->SetPoint(14,625,198.5730525);
   graph->SetPoint(15,619.7730168,200);
   graph->SetPoint(16,600,202.9336322);
   graph->SetPoint(17,575,201.3149824);
   graph->SetPoint(18,568.841864,200);
   graph->SetPoint(19,550,194.795926);
   graph->SetPoint(20,525,185.9928288);
   graph->SetPoint(21,500,177.0502454);
   graph->SetPoint(22,495.4664814,175);
   graph->SetPoint(23,475,163.1064574);
   graph->SetPoint(24,451.8208057,150);
   graph->SetPoint(25,450,148.8172956);
   graph->SetPoint(26,425,129.7258979);
   graph->SetPoint(27,417.661347,125);
   graph->SetPoint(28,400,111.4420592);
   graph->SetPoint(29,383.0197359,100);
   graph->SetPoint(30,375,92.85553766);
   graph->SetPoint(31,353.8273504,75);
   graph->SetPoint(32,350,70.53676912);
   graph->SetPoint(33,335.6634375,50);
   graph->SetPoint(34,326.6446974,25);
   graph->SetPoint(35,326.8894461,0);
   graph->SetPoint(36,1300,-1300);
   graph->SetPoint(37,-1300,-1300);
   
   TH1F *Graph_g_excl_xsec_obs19 = new TH1F("Graph_g_excl_xsec_obs19","g_excl_xsec_obs",100,-1560,1560);
   Graph_g_excl_xsec_obs19->SetMinimum(-1450.293);
   Graph_g_excl_xsec_obs19->SetMaximum(353.227);
   Graph_g_excl_xsec_obs19->SetDirectory(0);
   Graph_g_excl_xsec_obs19->SetStats(0);

   ci = TColor::GetColor("#0000ff");
   Graph_g_excl_xsec_obs19->SetLineColor(ci);
   Graph_g_excl_xsec_obs19->GetXaxis()->SetLabelSize(0.035);
   Graph_g_excl_xsec_obs19->GetYaxis()->SetLabelSize(0.035);
   Graph_g_excl_xsec_obs19->GetYaxis()->SetTitleOffset(1.2);
   graph->SetHistogram(Graph_g_excl_xsec_obs19);
   
   graph->Draw("f");
   
   graph = new TGraph(33);
   graph->SetName("g_excl_xsec_exp");
   graph->SetTitle("g_excl_xsec_exp");
   graph->SetFillColor(ci);

   ci = TColor::GetColor("#ff0000");
   graph->SetLineColor(ci);
   graph->SetLineStyle(7);
   graph->SetLineWidth(4);
   graph->SetPoint(0,618.5683398,0);
   graph->SetPoint(1,625,10.2171959);
   graph->SetPoint(2,633.2695466,25);
   graph->SetPoint(3,650,46.59096459);
   graph->SetPoint(4,652.5704598,50);
   graph->SetPoint(5,666.3218289,75);
   graph->SetPoint(6,671.8873108,100);
   graph->SetPoint(7,671.3333532,125);
   graph->SetPoint(8,665.3829453,150);
   graph->SetPoint(9,652.8614101,175);
   graph->SetPoint(10,650,178.6185486);
   graph->SetPoint(11,625,198.943368);
   graph->SetPoint(12,620.9854325,200);
   graph->SetPoint(13,600,202.8765886);
   graph->SetPoint(14,578.8386741,200);
   graph->SetPoint(15,575,199.332718);
   graph->SetPoint(16,550,188.7733726);
   graph->SetPoint(17,525,178.1141544);
   graph->SetPoint(18,518.0860685,175);
   graph->SetPoint(19,500,165.0759685);
   graph->SetPoint(20,475,152.5074909);
   graph->SetPoint(21,470.2485552,150);
   graph->SetPoint(22,450,137.3607668);
   graph->SetPoint(23,430.3673629,125);
   graph->SetPoint(24,425,120.8982901);
   graph->SetPoint(25,400,101.9609661);
   graph->SetPoint(26,397.1647986,100);
   graph->SetPoint(27,375,79.8656515);
   graph->SetPoint(28,369.0024099,75);
   graph->SetPoint(29,350,53.16888774);
   graph->SetPoint(30,347.5603585,50);
   graph->SetPoint(31,341.8796065,25);
   graph->SetPoint(32,343.332107,0);
   
   TH1F *Graph_Graph_g_excl_xsec_exp320 = new TH1F("Graph_Graph_g_excl_xsec_exp320","g_excl_xsec_exp",100,308.8788,704.8881);
   Graph_Graph_g_excl_xsec_exp320->SetMinimum(0);
   Graph_Graph_g_excl_xsec_exp320->SetMaximum(223.1642);
   Graph_Graph_g_excl_xsec_exp320->SetDirectory(0);
   Graph_Graph_g_excl_xsec_exp320->SetStats(0);

   ci = TColor::GetColor("#0000ff");
   Graph_Graph_g_excl_xsec_exp320->SetLineColor(ci);
   Graph_Graph_g_excl_xsec_exp320->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_g_excl_xsec_exp320->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_g_excl_xsec_exp320->GetYaxis()->SetTitleOffset(1.2);
   graph->SetHistogram(Graph_Graph_g_excl_xsec_exp320);
   
   graph->Draw("l");
   
   graph = new TGraph(26);
   graph->SetName("g_excl_xsec_exp_p1");
   graph->SetTitle("g_excl_xsec_exp_p1");
   graph->SetFillColor(ci);

   ci = TColor::GetColor("#ff0000");
   graph->SetLineColor(ci);
   graph->SetLineStyle(7);
   graph->SetLineWidth(2);
   graph->SetPoint(0,579.4763621,0);
   graph->SetPoint(1,596.1620405,25);
   graph->SetPoint(2,600,29.82703666);
   graph->SetPoint(3,614.1259884,50);
   graph->SetPoint(4,625,72.73380233);
   graph->SetPoint(5,625.9761777,75);
   graph->SetPoint(6,628.0270189,100);
   graph->SetPoint(7,625,122.9856673);
   graph->SetPoint(8,624.5535185,125);
   graph->SetPoint(9,605.0617232,150);
   graph->SetPoint(10,600,152.8892686);
   graph->SetPoint(11,575,157.6481786);
   graph->SetPoint(12,550,155.6928693);
   graph->SetPoint(13,525,150.0426525);
   graph->SetPoint(14,524.8901631,150);
   graph->SetPoint(15,500,138.2814291);
   graph->SetPoint(16,475,127.0420043);
   graph->SetPoint(17,470.9178695,125);
   graph->SetPoint(18,450,111.8412964);
   graph->SetPoint(19,432.3067873,100);
   graph->SetPoint(20,425,92.56312457);
   graph->SetPoint(21,408.4472782,75);
   graph->SetPoint(22,400.9343944,50);
   graph->SetPoint(23,420.5120567,25);
   graph->SetPoint(24,425,19.1230455);
   graph->SetPoint(25,433.1588458,0);
   
   TH1F *Graph_Graph_g_excl_xsec_exp_p1421 = new TH1F("Graph_Graph_g_excl_xsec_exp_p1421","g_excl_xsec_exp_p1",100,378.2251,650.7363);
   Graph_Graph_g_excl_xsec_exp_p1421->SetMinimum(0);
   Graph_Graph_g_excl_xsec_exp_p1421->SetMaximum(173.413);
   Graph_Graph_g_excl_xsec_exp_p1421->SetDirectory(0);
   Graph_Graph_g_excl_xsec_exp_p1421->SetStats(0);

   ci = TColor::GetColor("#0000ff");
   Graph_Graph_g_excl_xsec_exp_p1421->SetLineColor(ci);
   Graph_Graph_g_excl_xsec_exp_p1421->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_g_excl_xsec_exp_p1421->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_g_excl_xsec_exp_p1421->GetYaxis()->SetTitleOffset(1.2);
   graph->SetHistogram(Graph_Graph_g_excl_xsec_exp_p1421);
   
   graph->Draw("l");
   
   graph = new TGraph(39);
   graph->SetName("g_excl_xsec_exp_m1");
   graph->SetTitle("g_excl_xsec_exp_m1");
   graph->SetFillColor(ci);

   ci = TColor::GetColor("#ff0000");
   graph->SetLineColor(ci);
   graph->SetLineStyle(7);
   graph->SetLineWidth(2);
   graph->SetPoint(0,639.9349792,0);
   graph->SetPoint(1,650,16.21916714);
   graph->SetPoint(2,655.3244053,25);
   graph->SetPoint(3,675,47.99355931);
   graph->SetPoint(4,676.722397,50);
   graph->SetPoint(5,693.3434827,75);
   graph->SetPoint(6,700,94.46958032);
   graph->SetPoint(7,701.8120678,100);
   graph->SetPoint(8,702.9462875,125);
   graph->SetPoint(9,700.5556984,150);
   graph->SetPoint(10,700,152.1546935);
   graph->SetPoint(11,692.4774131,175);
   graph->SetPoint(12,678.9371069,200);
   graph->SetPoint(13,675,204.5838241);
   graph->SetPoint(14,650.0536116,225);
   graph->SetPoint(15,650,225.0247281);
   graph->SetPoint(16,625,230.2348428);
   graph->SetPoint(17,600,228.4121033);
   graph->SetPoint(18,586.4771769,225);
   graph->SetPoint(19,575,221.3170358);
   graph->SetPoint(20,550,209.0431928);
   graph->SetPoint(21,529.8212261,200);
   graph->SetPoint(22,525,197.3423635);
   graph->SetPoint(23,500,182.8531429);
   graph->SetPoint(24,484.4831637,175);
   graph->SetPoint(25,475,169.2514721);
   graph->SetPoint(26,450,153.6909955);
   graph->SetPoint(27,444.3942508,150);
   graph->SetPoint(28,425,135.1535731);
   graph->SetPoint(29,409.4068251,125);
   graph->SetPoint(30,400,117.4110075);
   graph->SetPoint(31,375,100.2227818);
   graph->SetPoint(32,374.680644,100);
   graph->SetPoint(33,350,77.95496562);
   graph->SetPoint(34,346.655497,75);
   graph->SetPoint(35,326.8618883,50);
   graph->SetPoint(36,325,45.3836029);
   graph->SetPoint(37,318.2256754,25);
   graph->SetPoint(38,316.7339251,0);
   
   TH1F *Graph_Graph_g_excl_xsec_exp_m1522 = new TH1F("Graph_Graph_g_excl_xsec_exp_m1522","g_excl_xsec_exp_m1",100,278.1127,741.5675);
   Graph_Graph_g_excl_xsec_exp_m1522->SetMinimum(0);
   Graph_Graph_g_excl_xsec_exp_m1522->SetMaximum(253.2583);
   Graph_Graph_g_excl_xsec_exp_m1522->SetDirectory(0);
   Graph_Graph_g_excl_xsec_exp_m1522->SetStats(0);

   ci = TColor::GetColor("#0000ff");
   Graph_Graph_g_excl_xsec_exp_m1522->SetLineColor(ci);
   Graph_Graph_g_excl_xsec_exp_m1522->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_g_excl_xsec_exp_m1522->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_g_excl_xsec_exp_m1522->GetYaxis()->SetTitleOffset(1.2);
   graph->SetHistogram(Graph_Graph_g_excl_xsec_exp_m1522);
   
   graph->Draw("l");
   
   graph = new TGraph(38);
   graph->SetName("g_excl_xsec_obs");
   graph->SetTitle("g_excl_xsec_obs");

   ci = TColor::GetColor("#cccccc");
   graph->SetFillColor(ci);
   graph->SetLineWidth(4);
   graph->SetPoint(0,598.5841288,0);
   graph->SetPoint(1,600,1.447343396);
   graph->SetPoint(2,619.3375599,25);
   graph->SetPoint(3,625,29.99328705);
   graph->SetPoint(4,646.5596281,50);
   graph->SetPoint(5,650,54.04061287);
   graph->SetPoint(6,670.0318493,75);
   graph->SetPoint(7,675,86.63412046);
   graph->SetPoint(8,681.1196397,100);
   graph->SetPoint(9,682.148321,125);
   graph->SetPoint(10,676.6938397,150);
   graph->SetPoint(11,675,153.5568668);
   graph->SetPoint(12,661.3400246,175);
   graph->SetPoint(13,650,184.3505146);
   graph->SetPoint(14,625,198.5730525);
   graph->SetPoint(15,619.7730168,200);
   graph->SetPoint(16,600,202.9336322);
   graph->SetPoint(17,575,201.3149824);
   graph->SetPoint(18,568.841864,200);
   graph->SetPoint(19,550,194.795926);
   graph->SetPoint(20,525,185.9928288);
   graph->SetPoint(21,500,177.0502454);
   graph->SetPoint(22,495.4664814,175);
   graph->SetPoint(23,475,163.1064574);
   graph->SetPoint(24,451.8208057,150);
   graph->SetPoint(25,450,148.8172956);
   graph->SetPoint(26,425,129.7258979);
   graph->SetPoint(27,417.661347,125);
   graph->SetPoint(28,400,111.4420592);
   graph->SetPoint(29,383.0197359,100);
   graph->SetPoint(30,375,92.85553766);
   graph->SetPoint(31,353.8273504,75);
   graph->SetPoint(32,350,70.53676912);
   graph->SetPoint(33,335.6634375,50);
   graph->SetPoint(34,326.6446974,25);
   graph->SetPoint(35,326.8894461,0);
   graph->SetPoint(36,1300,-1300);
   graph->SetPoint(37,-1300,-1300);
   
   TH1F *Graph_Graph_g_excl_xsec_obs1923 = new TH1F("Graph_Graph_g_excl_xsec_obs1923","g_excl_xsec_obs",100,-1560,1560);
   Graph_Graph_g_excl_xsec_obs1923->SetMinimum(-1450.293);
   Graph_Graph_g_excl_xsec_obs1923->SetMaximum(353.227);
   Graph_Graph_g_excl_xsec_obs1923->SetDirectory(0);
   Graph_Graph_g_excl_xsec_obs1923->SetStats(0);

   ci = TColor::GetColor("#0000ff");
   Graph_Graph_g_excl_xsec_obs1923->SetLineColor(ci);
   Graph_Graph_g_excl_xsec_obs1923->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_g_excl_xsec_obs1923->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_g_excl_xsec_obs1923->GetYaxis()->SetTitleOffset(1.2);
   graph->SetHistogram(Graph_Graph_g_excl_xsec_obs1923);
   
   graph->Draw("l");
   
   graph = new TGraph(37);
   graph->SetName("g_excl_xsec_obs_p1");
   graph->SetTitle("g_excl_xsec_obs_p1");
   graph->SetFillColor(ci);
   graph->SetLineWidth(2);
   graph->SetPoint(0,626.604033,0);
   graph->SetPoint(1,645.8077601,25);
   graph->SetPoint(2,650,28.81757756);
   graph->SetPoint(3,675,49.68330435);
   graph->SetPoint(4,675.4526879,50);
   graph->SetPoint(5,700,72.59455414);
   graph->SetPoint(6,702.9389841,75);
   graph->SetPoint(7,716.1075383,100);
   graph->SetPoint(8,716.45285,125);
   graph->SetPoint(9,711.9654838,150);
   graph->SetPoint(10,702.5979739,175);
   graph->SetPoint(11,700,179.211389);
   graph->SetPoint(12,681.4300023,200);
   graph->SetPoint(13,675,204.6471531);
   graph->SetPoint(14,650,216.2657309);
   graph->SetPoint(15,625,221.3631056);
   graph->SetPoint(16,600,220.298737);
   graph->SetPoint(17,575,215.210901);
   graph->SetPoint(18,550,207.6006069);
   graph->SetPoint(19,525.0353907,200);
   graph->SetPoint(20,525,199.9857344);
   graph->SetPoint(21,500,186.570691);
   graph->SetPoint(22,475,175.0514036);
   graph->SetPoint(23,474.9129918,175);
   graph->SetPoint(24,450,156.8233209);
   graph->SetPoint(25,440.4619688,150);
   graph->SetPoint(26,425,137.8521854);
   graph->SetPoint(27,404.8648333,125);
   graph->SetPoint(28,400,121.290774);
   graph->SetPoint(29,375,102.9559897);
   graph->SetPoint(30,370.8297984,100);
   graph->SetPoint(31,350,81.29699032);
   graph->SetPoint(32,343.3013082,75);
   graph->SetPoint(33,325,51.70961367);
   graph->SetPoint(34,323.8298759,50);
   graph->SetPoint(35,316.1216409,25);
   graph->SetPoint(36,314.5626658,0);
   
   TH1F *Graph_Graph_g_excl_xsec_obs_p1724 = new TH1F("Graph_Graph_g_excl_xsec_obs_p1724","g_excl_xsec_obs_p1",100,274.3736,756.6419);
   Graph_Graph_g_excl_xsec_obs_p1724->SetMinimum(0);
   Graph_Graph_g_excl_xsec_obs_p1724->SetMaximum(243.4994);
   Graph_Graph_g_excl_xsec_obs_p1724->SetDirectory(0);
   Graph_Graph_g_excl_xsec_obs_p1724->SetStats(0);

   ci = TColor::GetColor("#0000ff");
   Graph_Graph_g_excl_xsec_obs_p1724->SetLineColor(ci);
   Graph_Graph_g_excl_xsec_obs_p1724->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_g_excl_xsec_obs_p1724->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_g_excl_xsec_obs_p1724->GetYaxis()->SetTitleOffset(1.2);
   graph->SetHistogram(Graph_Graph_g_excl_xsec_obs_p1724);
   
   graph->Draw("l");
   
   graph = new TGraph(31);
   graph->SetName("g_excl_xsec_obs_m1");
   graph->SetTitle("g_excl_xsec_obs_m1");
   graph->SetFillColor(ci);
   graph->SetLineWidth(2);
   graph->SetPoint(0,562.6791969,0);
   graph->SetPoint(1,575,11.3815404);
   graph->SetPoint(2,587.6938172,25);
   graph->SetPoint(3,600,34.80584488);
   graph->SetPoint(4,617.1478622,50);
   graph->SetPoint(5,625,58.90667412);
   graph->SetPoint(6,637.6427091,75);
   graph->SetPoint(7,646.4727042,100);
   graph->SetPoint(8,644.4498468,125);
   graph->SetPoint(9,633.3608963,150);
   graph->SetPoint(10,625,159.5712184);
   graph->SetPoint(11,604.9019698,175);
   graph->SetPoint(12,600,176.9633588);
   graph->SetPoint(13,575,180.3061655);
   graph->SetPoint(14,550,177.2607227);
   graph->SetPoint(15,540.4315183,175);
   graph->SetPoint(16,525,170.2177725);
   graph->SetPoint(17,500,161.2827361);
   graph->SetPoint(18,475,151.1138151);
   graph->SetPoint(19,472.9706403,150);
   graph->SetPoint(20,450,135.4442793);
   graph->SetPoint(21,433.634668,125);
   graph->SetPoint(22,425,118.6529972);
   graph->SetPoint(23,400,101.5933445);
   graph->SetPoint(24,397.6331516,100);
   graph->SetPoint(25,375,79.85212507);
   graph->SetPoint(26,369.2745134,75);
   graph->SetPoint(27,350,52.43779701);
   graph->SetPoint(28,348.2925169,50);
   graph->SetPoint(29,343.0601836,25);
   graph->SetPoint(30,346.0395877,0);
   
   TH1F *Graph_Graph_g_excl_xsec_obs_m1825 = new TH1F("Graph_Graph_g_excl_xsec_obs_m1825","g_excl_xsec_obs_m1",100,312.7189,676.814);
   Graph_Graph_g_excl_xsec_obs_m1825->SetMinimum(0);
   Graph_Graph_g_excl_xsec_obs_m1825->SetMaximum(198.3368);
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
      tex = new TLatex(0.55,0.82,"");
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
