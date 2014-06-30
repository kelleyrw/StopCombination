{
//=========Macro generated from canvas: cBrazil_/cBrazil_
//=========  (Mon Jun 30 07:35:29 2014) by ROOT version5.34/03
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
   
   TH2D *h_ul_xsec_exp_smoothEMPTY = new TH2D("h_ul_xsec_exp_smoothEMPTY","Expected combined #sigma #times Branching Fraction (t2tt)EMPTY",31,137.5,912.5,29,-12.5,712.5);

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
   
   graph = new TGraph(65);
   graph->SetName("Graph");
   graph->SetTitle("Graph");

   ci = TColor::GetColor("#ffcc00");
   graph->SetFillColor(ci);
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
   graph->SetPoint(26,316.7339251,0);
   graph->SetPoint(27,318.2256754,25);
   graph->SetPoint(28,325,45.3836029);
   graph->SetPoint(29,326.8618883,50);
   graph->SetPoint(30,346.655497,75);
   graph->SetPoint(31,350,77.95496562);
   graph->SetPoint(32,374.680644,100);
   graph->SetPoint(33,375,100.2227818);
   graph->SetPoint(34,400,117.4110075);
   graph->SetPoint(35,409.4068251,125);
   graph->SetPoint(36,425,135.1535731);
   graph->SetPoint(37,444.3942508,150);
   graph->SetPoint(38,450,153.6909955);
   graph->SetPoint(39,475,169.2514721);
   graph->SetPoint(40,484.4831637,175);
   graph->SetPoint(41,500,182.8531429);
   graph->SetPoint(42,525,197.3423635);
   graph->SetPoint(43,529.8212261,200);
   graph->SetPoint(44,550,209.0431928);
   graph->SetPoint(45,575,221.3170358);
   graph->SetPoint(46,586.4771769,225);
   graph->SetPoint(47,600,228.4121033);
   graph->SetPoint(48,625,230.2348428);
   graph->SetPoint(49,650,225.0247281);
   graph->SetPoint(50,650.0536116,225);
   graph->SetPoint(51,675,204.5838241);
   graph->SetPoint(52,678.9371069,200);
   graph->SetPoint(53,692.4774131,175);
   graph->SetPoint(54,700,152.1546935);
   graph->SetPoint(55,700.5556984,150);
   graph->SetPoint(56,702.9462875,125);
   graph->SetPoint(57,701.8120678,100);
   graph->SetPoint(58,700,94.46958032);
   graph->SetPoint(59,693.3434827,75);
   graph->SetPoint(60,676.722397,50);
   graph->SetPoint(61,675,47.99355931);
   graph->SetPoint(62,655.3244053,25);
   graph->SetPoint(63,650,16.21916714);
   graph->SetPoint(64,639.9349792,0);
   
   TH1F *Graph_Graph36 = new TH1F("Graph_Graph36","Graph",100,278.1127,741.5675);
   Graph_Graph36->SetMinimum(0);
   Graph_Graph36->SetMaximum(253.2583);
   Graph_Graph36->SetDirectory(0);
   Graph_Graph36->SetStats(0);

   ci = TColor::GetColor("#0000ff");
   Graph_Graph36->SetLineColor(ci);
   Graph_Graph36->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph36->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph36->GetYaxis()->SetTitleOffset(1.2);
   graph->SetHistogram(Graph_Graph36);
   
   graph->Draw("f");
   
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
   
   TH1F *Graph_Graph_Graph_g_excl_xsec_obs192337 = new TH1F("Graph_Graph_Graph_g_excl_xsec_obs192337","g_excl_xsec_obs",100,-1560,1560);
   Graph_Graph_Graph_g_excl_xsec_obs192337->SetMinimum(-1450.293);
   Graph_Graph_Graph_g_excl_xsec_obs192337->SetMaximum(353.227);
   Graph_Graph_Graph_g_excl_xsec_obs192337->SetDirectory(0);
   Graph_Graph_Graph_g_excl_xsec_obs192337->SetStats(0);

   ci = TColor::GetColor("#0000ff");
   Graph_Graph_Graph_g_excl_xsec_obs192337->SetLineColor(ci);
   Graph_Graph_Graph_g_excl_xsec_obs192337->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_Graph_g_excl_xsec_obs192337->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_Graph_g_excl_xsec_obs192337->GetYaxis()->SetTitleOffset(1.2);
   graph->SetHistogram(Graph_Graph_Graph_g_excl_xsec_obs192337);
   
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
   
   TH1F *Graph_Graph_Graph_g_excl_xsec_obs_p172438 = new TH1F("Graph_Graph_Graph_g_excl_xsec_obs_p172438","g_excl_xsec_obs_p1",100,274.3736,756.6419);
   Graph_Graph_Graph_g_excl_xsec_obs_p172438->SetMinimum(0);
   Graph_Graph_Graph_g_excl_xsec_obs_p172438->SetMaximum(243.4994);
   Graph_Graph_Graph_g_excl_xsec_obs_p172438->SetDirectory(0);
   Graph_Graph_Graph_g_excl_xsec_obs_p172438->SetStats(0);

   ci = TColor::GetColor("#0000ff");
   Graph_Graph_Graph_g_excl_xsec_obs_p172438->SetLineColor(ci);
   Graph_Graph_Graph_g_excl_xsec_obs_p172438->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_Graph_g_excl_xsec_obs_p172438->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_Graph_g_excl_xsec_obs_p172438->GetYaxis()->SetTitleOffset(1.2);
   graph->SetHistogram(Graph_Graph_Graph_g_excl_xsec_obs_p172438);
   
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
   
   TH1F *Graph_Graph_Graph_g_excl_xsec_obs_m182539 = new TH1F("Graph_Graph_Graph_g_excl_xsec_obs_m182539","g_excl_xsec_obs_m1",100,312.7189,676.814);
   Graph_Graph_Graph_g_excl_xsec_obs_m182539->SetMinimum(0);
   Graph_Graph_Graph_g_excl_xsec_obs_m182539->SetMaximum(198.3368);
   Graph_Graph_Graph_g_excl_xsec_obs_m182539->SetDirectory(0);
   Graph_Graph_Graph_g_excl_xsec_obs_m182539->SetStats(0);

   ci = TColor::GetColor("#0000ff");
   Graph_Graph_Graph_g_excl_xsec_obs_m182539->SetLineColor(ci);
   Graph_Graph_Graph_g_excl_xsec_obs_m182539->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_Graph_g_excl_xsec_obs_m182539->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_Graph_g_excl_xsec_obs_m182539->GetYaxis()->SetTitleOffset(1.2);
   graph->SetHistogram(Graph_Graph_Graph_g_excl_xsec_obs_m182539);
   
   graph->Draw("l");
   
   graph = new TGraph(33);
   graph->SetName("g_excl_xsec_exp");
   graph->SetTitle("g_excl_xsec_exp");
   graph->SetFillColor(ci);
   graph->SetLineStyle(2);
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
   
   TH1F *Graph_Graph_Graph_g_excl_xsec_exp32040 = new TH1F("Graph_Graph_Graph_g_excl_xsec_exp32040","g_excl_xsec_exp",100,308.8788,704.8881);
   Graph_Graph_Graph_g_excl_xsec_exp32040->SetMinimum(0);
   Graph_Graph_Graph_g_excl_xsec_exp32040->SetMaximum(223.1642);
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
