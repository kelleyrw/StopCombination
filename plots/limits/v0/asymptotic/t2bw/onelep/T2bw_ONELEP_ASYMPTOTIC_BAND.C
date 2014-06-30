{
//=========Macro generated from canvas: cBrazil_/cBrazil_
//=========  (Sun Jun 29 06:59:47 2014) by ROOT version5.34/03
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
   
   TH2D *h_ul_xsec_exp_smoothEMPTY = new TH2D("h_ul_xsec_exp_smoothEMPTY","Expected onelep #sigma #times Branching Fraction (t2bw)EMPTY",31,137.5,912.5,29,-12.5,712.5);

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
   
   TH1F *Graph_diagonal32 = new TH1F("Graph_diagonal32","Graph",100,0,22000);
   Graph_diagonal32->SetMinimum(-2100);
   Graph_diagonal32->SetMaximum(21900);
   Graph_diagonal32->SetDirectory(0);
   Graph_diagonal32->SetStats(0);

   ci = TColor::GetColor("#0000ff");
   Graph_diagonal32->SetLineColor(ci);
   Graph_diagonal32->GetXaxis()->SetLabelSize(0.035);
   Graph_diagonal32->GetYaxis()->SetLabelSize(0.035);
   Graph_diagonal32->GetYaxis()->SetTitleOffset(1.2);
   graph->SetHistogram(Graph_diagonal32);
   
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
   
   TH1F *Graph_Graph_diagonal3233 = new TH1F("Graph_Graph_diagonal3233","Graph",100,0,22000);
   Graph_Graph_diagonal3233->SetMinimum(-2100);
   Graph_Graph_diagonal3233->SetMaximum(21900);
   Graph_Graph_diagonal3233->SetDirectory(0);
   Graph_Graph_diagonal3233->SetStats(0);

   ci = TColor::GetColor("#0000ff");
   Graph_Graph_diagonal3233->SetLineColor(ci);
   Graph_Graph_diagonal3233->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_diagonal3233->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_diagonal3233->GetYaxis()->SetTitleOffset(1.2);
   graph->SetHistogram(Graph_Graph_diagonal3233);
   
   graph->Draw("l");
   
   graph = new TGraph(43);
   graph->SetName("Graph");
   graph->SetTitle("Graph");

   ci = TColor::GetColor("#ffcc00");
   graph->SetFillColor(ci);
   graph->SetPoint(0,775,650.0000619);
   graph->SetPoint(1,775.0025003,650);
   graph->SetPoint(2,775,649.9974997);
   graph->SetPoint(3,774.9999259,650);
   graph->SetPoint(4,775,650.0000619);
   graph->SetPoint(5,150,-12.5);
   graph->SetPoint(6,175,-12.5);
   graph->SetPoint(7,200,-12.5);
   graph->SetPoint(8,838.6102248,0);
   graph->SetPoint(9,849.7027118,25);
   graph->SetPoint(10,850,34.21357938);
   graph->SetPoint(11,864.0934289,50);
   graph->SetPoint(12,872.4267971,75);
   graph->SetPoint(13,873.9390446,100);
   graph->SetPoint(14,874.3673509,125);
   graph->SetPoint(15,874.5087707,150);
   graph->SetPoint(16,874.5293782,175);
   graph->SetPoint(17,874.4660537,200);
   graph->SetPoint(18,874.3085394,225);
   graph->SetPoint(19,874.0024323,250);
   graph->SetPoint(20,873.4062872,275);
   graph->SetPoint(21,872.1494419,300);
   graph->SetPoint(22,869.1664661,325);
   graph->SetPoint(23,860.9532288,350);
   graph->SetPoint(24,850,366.600125);
   graph->SetPoint(25,849.9822203,375);
   graph->SetPoint(26,849.9291637,400);
   graph->SetPoint(27,849.8218314,425);
   graph->SetPoint(28,849.5068372,450);
   graph->SetPoint(29,848.2258679,475);
   graph->SetPoint(30,840.3818295,500);
   graph->SetPoint(31,825,516.9459088);
   graph->SetPoint(32,824.9991135,525);
   graph->SetPoint(33,824.9983029,550);
   graph->SetPoint(34,824.9951162,575);
   graph->SetPoint(35,824.7764676,600);
   graph->SetPoint(36,824.9974997,625);
   graph->SetPoint(37,825,625.0025003);
   graph->SetPoint(38,849.9974997,650);
   graph->SetPoint(39,850,650.0025003);
   graph->SetPoint(40,874.9974997,675);
   graph->SetPoint(41,875,675.0025003);
   graph->SetPoint(42,899.9974997,700);
   
   TH1F *Graph_Graph34 = new TH1F("Graph_Graph34","Graph",100,75.00025,974.9972);
   Graph_Graph34->SetMinimum(-83.75);
   Graph_Graph34->SetMaximum(771.25);
   Graph_Graph34->SetDirectory(0);
   Graph_Graph34->SetStats(0);

   ci = TColor::GetColor("#0000ff");
   Graph_Graph34->SetLineColor(ci);
   Graph_Graph34->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph34->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph34->GetYaxis()->SetTitleOffset(1.2);
   graph->SetHistogram(Graph_Graph34);
   
   graph->Draw("f");
   
   graph = new TGraph(45);
   graph->SetName("g_excl_xsec_obs");
   graph->SetTitle("g_excl_xsec_obs");

   ci = TColor::GetColor("#cccccc");
   graph->SetFillColor(ci);
   graph->SetLineWidth(4);
   graph->SetPoint(0,775,650.0001249);
   graph->SetPoint(1,775.0025003,650);
   graph->SetPoint(2,775,649.9974997);
   graph->SetPoint(3,774.9998263,650);
   graph->SetPoint(4,775,650.0001249);
   graph->SetPoint(5,150,-12.5);
   graph->SetPoint(6,175,-12.5);
   graph->SetPoint(7,200,-12.5);
   graph->SetPoint(8,828.064165,0);
   graph->SetPoint(9,849.345657,25);
   graph->SetPoint(10,850,45.25687412);
   graph->SetPoint(11,854.2374967,50);
   graph->SetPoint(12,870.0800453,75);
   graph->SetPoint(13,872.9378552,100);
   graph->SetPoint(14,873.7409263,125);
   graph->SetPoint(15,874.0054002,150);
   graph->SetPoint(16,874.0474126,175);
   graph->SetPoint(17,873.9371586,200);
   graph->SetPoint(18,873.6556283,225);
   graph->SetPoint(19,873.1020311,250);
   graph->SetPoint(20,872.0161858,275);
   graph->SetPoint(21,869.7196632,300);
   graph->SetPoint(22,864.2688209,325);
   graph->SetPoint(23,850,349.4871049);
   graph->SetPoint(24,849.998617,350);
   graph->SetPoint(25,849.9442569,375);
   graph->SetPoint(26,849.8573929,400);
   graph->SetPoint(27,849.6646691,425);
   graph->SetPoint(28,849.0873001,450);
   graph->SetPoint(29,846.7680155,475);
   graph->SetPoint(30,832.8715307,500);
   graph->SetPoint(31,825,508.6891466);
   graph->SetPoint(32,824.9981641,525);
   graph->SetPoint(33,824.9969315,550);
   graph->SetPoint(34,824.9913207,575);
   graph->SetPoint(35,824.6001914,600);
   graph->SetPoint(36,824.9974997,625);
   graph->SetPoint(37,825,625.0025003);
   graph->SetPoint(38,849.9974997,650);
   graph->SetPoint(39,850,650.0025003);
   graph->SetPoint(40,874.9974997,675);
   graph->SetPoint(41,875,675.0025003);
   graph->SetPoint(42,899.9974997,700);
   graph->SetPoint(43,1300,-1300);
   graph->SetPoint(44,-1300,-1300);
   
   TH1F *Graph_Graph_Graph_g_excl_xsec_obs182135 = new TH1F("Graph_Graph_Graph_g_excl_xsec_obs182135","g_excl_xsec_obs",100,-1560,1560);
   Graph_Graph_Graph_g_excl_xsec_obs182135->SetMinimum(-1500);
   Graph_Graph_Graph_g_excl_xsec_obs182135->SetMaximum(900);
   Graph_Graph_Graph_g_excl_xsec_obs182135->SetDirectory(0);
   Graph_Graph_Graph_g_excl_xsec_obs182135->SetStats(0);

   ci = TColor::GetColor("#0000ff");
   Graph_Graph_Graph_g_excl_xsec_obs182135->SetLineColor(ci);
   Graph_Graph_Graph_g_excl_xsec_obs182135->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_Graph_g_excl_xsec_obs182135->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_Graph_g_excl_xsec_obs182135->GetYaxis()->SetTitleOffset(1.2);
   graph->SetHistogram(Graph_Graph_Graph_g_excl_xsec_obs182135);
   
   graph->Draw("l");
   
   graph = new TGraph(44);
   graph->SetName("g_excl_xsec_obs_p1");
   graph->SetTitle("g_excl_xsec_obs_p1");
   graph->SetFillColor(1);
   graph->SetLineWidth(2);
   graph->SetPoint(0,775,650.0001497);
   graph->SetPoint(1,775.0025003,650);
   graph->SetPoint(2,775,649.9974997);
   graph->SetPoint(3,774.9997925,650);
   graph->SetPoint(4,775,650.0001497);
   graph->SetPoint(5,150,-12.5);
   graph->SetPoint(6,175,-12.5);
   graph->SetPoint(7,200,-12.5);
   graph->SetPoint(8,824.9749547,0);
   graph->SetPoint(9,825,0.05564892584);
   graph->SetPoint(10,849.1866003,25);
   graph->SetPoint(11,849.9987246,50);
   graph->SetPoint(12,850,50.09663097);
   graph->SetPoint(13,868.9923183,75);
   graph->SetPoint(14,872.4719321,100);
   graph->SetPoint(15,873.4483732,125);
   graph->SetPoint(16,873.7695677,150);
   graph->SetPoint(17,873.8209692,175);
   graph->SetPoint(18,873.6880185,200);
   graph->SetPoint(19,873.3472652,225);
   graph->SetPoint(20,872.6755451,250);
   graph->SetPoint(21,871.3554904,275);
   graph->SetPoint(22,868.5602015,300);
   graph->SetPoint(23,861.9213967,325);
   graph->SetPoint(24,850,345.4587162);
   graph->SetPoint(25,849.9878341,350);
   graph->SetPoint(26,849.9265086,375);
   graph->SetPoint(27,849.8243818,400);
   graph->SetPoint(28,849.5928345,425);
   graph->SetPoint(29,848.8947595,450);
   graph->SetPoint(30,846.0875529,475);
   graph->SetPoint(31,829.2657867,500);
   graph->SetPoint(32,825,504.7088741);
   graph->SetPoint(33,824.9977261,525);
   graph->SetPoint(34,824.9962995,550);
   graph->SetPoint(35,824.98954,575);
   graph->SetPoint(36,824.5181667,600);
   graph->SetPoint(37,824.9974997,625);
   graph->SetPoint(38,825,625.0025003);
   graph->SetPoint(39,849.9974997,650);
   graph->SetPoint(40,850,650.0025003);
   graph->SetPoint(41,874.9974997,675);
   graph->SetPoint(42,875,675.0025003);
   graph->SetPoint(43,899.9974997,700);
   
   TH1F *Graph_Graph_Graph_g_excl_xsec_obs_p162236 = new TH1F("Graph_Graph_Graph_g_excl_xsec_obs_p162236","g_excl_xsec_obs_p1",100,75.00025,974.9972);
   Graph_Graph_Graph_g_excl_xsec_obs_p162236->SetMinimum(-83.75);
   Graph_Graph_Graph_g_excl_xsec_obs_p162236->SetMaximum(771.25);
   Graph_Graph_Graph_g_excl_xsec_obs_p162236->SetDirectory(0);
   Graph_Graph_Graph_g_excl_xsec_obs_p162236->SetStats(0);

   ci = TColor::GetColor("#0000ff");
   Graph_Graph_Graph_g_excl_xsec_obs_p162236->SetLineColor(ci);
   Graph_Graph_Graph_g_excl_xsec_obs_p162236->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_Graph_g_excl_xsec_obs_p162236->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_Graph_g_excl_xsec_obs_p162236->GetYaxis()->SetTitleOffset(1.2);
   graph->SetHistogram(Graph_Graph_Graph_g_excl_xsec_obs_p162236);
   
   graph->Draw("l");
   
   graph = new TGraph(43);
   graph->SetName("g_excl_xsec_obs_m1");
   graph->SetTitle("g_excl_xsec_obs_m1");
   graph->SetFillColor(1);
   graph->SetLineWidth(2);
   graph->SetPoint(0,775,650.0001);
   graph->SetPoint(1,775.0025003,650);
   graph->SetPoint(2,775,649.9974997);
   graph->SetPoint(3,774.99986,650);
   graph->SetPoint(4,775,650.0001);
   graph->SetPoint(5,150,-12.5);
   graph->SetPoint(6,175,-12.5);
   graph->SetPoint(7,200,-12.5);
   graph->SetPoint(8,832.7112136,0);
   graph->SetPoint(9,849.5050686,25);
   graph->SetPoint(10,850,40.16894736);
   graph->SetPoint(11,858.7832114,50);
   graph->SetPoint(12,871.1679734,75);
   graph->SetPoint(13,873.4040129,100);
   graph->SetPoint(14,874.0337439,125);
   graph->SetPoint(15,874.2415129,150);
   graph->SetPoint(16,874.2741329,175);
   graph->SetPoint(17,874.1865549,200);
   graph->SetPoint(18,873.9642135,225);
   graph->SetPoint(19,873.5286978,250);
   graph->SetPoint(20,872.6770185,275);
   graph->SetPoint(21,870.8792214,300);
   graph->SetPoint(22,866.6163075,325);
   graph->SetPoint(23,854.9023868,350);
   graph->SetPoint(24,850,357.4429497);
   graph->SetPoint(25,849.9621051,375);
   graph->SetPoint(26,849.8904537,400);
   graph->SetPoint(27,849.7365243,425);
   graph->SetPoint(28,849.2798474,450);
   graph->SetPoint(29,847.4484796,475);
   graph->SetPoint(30,836.4772749,500);
   graph->SetPoint(31,825,512.6694192);
   graph->SetPoint(32,824.9986027,525);
   graph->SetPoint(33,824.9975634,550);
   graph->SetPoint(34,824.9931014,575);
   graph->SetPoint(35,824.6822162,600);
   graph->SetPoint(36,824.9974997,625);
   graph->SetPoint(37,825,625.0025003);
   graph->SetPoint(38,849.9974997,650);
   graph->SetPoint(39,850,650.0025003);
   graph->SetPoint(40,874.9974997,675);
   graph->SetPoint(41,875,675.0025003);
   graph->SetPoint(42,899.9974997,700);
   
   TH1F *Graph_Graph_Graph_g_excl_xsec_obs_m172337 = new TH1F("Graph_Graph_Graph_g_excl_xsec_obs_m172337","g_excl_xsec_obs_m1",100,75.00025,974.9972);
   Graph_Graph_Graph_g_excl_xsec_obs_m172337->SetMinimum(-83.75);
   Graph_Graph_Graph_g_excl_xsec_obs_m172337->SetMaximum(771.25);
   Graph_Graph_Graph_g_excl_xsec_obs_m172337->SetDirectory(0);
   Graph_Graph_Graph_g_excl_xsec_obs_m172337->SetStats(0);

   ci = TColor::GetColor("#0000ff");
   Graph_Graph_Graph_g_excl_xsec_obs_m172337->SetLineColor(ci);
   Graph_Graph_Graph_g_excl_xsec_obs_m172337->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_Graph_g_excl_xsec_obs_m172337->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_Graph_g_excl_xsec_obs_m172337->GetYaxis()->SetTitleOffset(1.2);
   graph->SetHistogram(Graph_Graph_Graph_g_excl_xsec_obs_m172337);
   
   graph->Draw("l");
   
   graph = new TGraph(43);
   graph->SetName("g_excl_xsec_exp");
   graph->SetTitle("g_excl_xsec_exp");
   graph->SetFillColor(1);
   graph->SetLineStyle(2);
   graph->SetLineWidth(4);
   graph->SetPoint(0,775,650.000125);
   graph->SetPoint(1,775.0025003,650);
   graph->SetPoint(2,775,649.9974997);
   graph->SetPoint(3,774.999875,650);
   graph->SetPoint(4,775,650.000125);
   graph->SetPoint(5,150,-12.5);
   graph->SetPoint(6,175,-12.5);
   graph->SetPoint(7,200,-12.5);
   graph->SetPoint(8,831.508263,0);
   graph->SetPoint(9,849.4627988,25);
   graph->SetPoint(10,850,41.75019148);
   graph->SetPoint(11,857.3699213,50);
   graph->SetPoint(12,870.8262646,75);
   graph->SetPoint(13,873.2550921,100);
   graph->SetPoint(14,873.9380707,125);
   graph->SetPoint(15,874.1623943,150);
   graph->SetPoint(16,874.1961329,175);
   graph->SetPoint(17,874.0983001,200);
   graph->SetPoint(18,873.8514033,225);
   graph->SetPoint(19,873.3663906,250);
   graph->SetPoint(20,872.4129374,275);
   graph->SetPoint(21,870.3872438,300);
   graph->SetPoint(22,865.5468511,325);
   graph->SetPoint(23,852.1181881,350);
   graph->SetPoint(24,850,353.1945685);
   graph->SetPoint(25,849.9539639,375);
   graph->SetPoint(26,849.8749804,400);
   graph->SetPoint(27,849.6976735,425);
   graph->SetPoint(28,849.148831,450);
   graph->SetPoint(29,846.8183546,475);
   graph->SetPoint(30,831.8889675,500);
   graph->SetPoint(31,825,507.5628618);
   graph->SetPoint(32,824.9979786,525);
   graph->SetPoint(33,824.9965868,550);
   graph->SetPoint(34,824.990226,575);
   graph->SetPoint(35,824.559573,600);
   graph->SetPoint(36,824.9974997,625);
   graph->SetPoint(37,825,625.0025003);
   graph->SetPoint(38,849.9974997,650);
   graph->SetPoint(39,850,650.0025003);
   graph->SetPoint(40,874.9974997,675);
   graph->SetPoint(41,875,675.0025003);
   graph->SetPoint(42,899.9974997,700);
   
   TH1F *Graph_Graph_Graph_g_excl_xsec_exp31938 = new TH1F("Graph_Graph_Graph_g_excl_xsec_exp31938","g_excl_xsec_exp",100,75.00025,974.9972);
   Graph_Graph_Graph_g_excl_xsec_exp31938->SetMinimum(-83.75);
   Graph_Graph_Graph_g_excl_xsec_exp31938->SetMaximum(771.25);
   Graph_Graph_Graph_g_excl_xsec_exp31938->SetDirectory(0);
   Graph_Graph_Graph_g_excl_xsec_exp31938->SetStats(0);

   ci = TColor::GetColor("#0000ff");
   Graph_Graph_Graph_g_excl_xsec_exp31938->SetLineColor(ci);
   Graph_Graph_Graph_g_excl_xsec_exp31938->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_Graph_g_excl_xsec_exp31938->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_Graph_g_excl_xsec_exp31938->GetYaxis()->SetTitleOffset(1.2);
   graph->SetHistogram(Graph_Graph_Graph_g_excl_xsec_exp31938);
   
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
   
   TH1F *Graph_white39 = new TH1F("Graph_white39","white",100,75,975);
   Graph_white39->SetMinimum(435);
   Graph_white39->SetMaximum(615);
   Graph_white39->SetDirectory(0);
   Graph_white39->SetStats(0);

   ci = TColor::GetColor("#0000ff");
   Graph_white39->SetLineColor(ci);
   Graph_white39->GetXaxis()->SetLabelSize(0.035);
   Graph_white39->GetYaxis()->SetLabelSize(0.035);
   Graph_white39->GetYaxis()->SetTitleOffset(1.2);
   graph->SetHistogram(Graph_white39);
   
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
   
   TH1F *Graph_Graph_white3940 = new TH1F("Graph_Graph_white3940","white",100,75,975);
   Graph_Graph_white3940->SetMinimum(435);
   Graph_Graph_white3940->SetMaximum(615);
   Graph_Graph_white3940->SetDirectory(0);
   Graph_Graph_white3940->SetStats(0);

   ci = TColor::GetColor("#0000ff");
   Graph_Graph_white3940->SetLineColor(ci);
   Graph_Graph_white3940->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_white3940->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_white3940->GetYaxis()->SetTitleOffset(1.2);
   graph->SetHistogram(Graph_Graph_white3940);
   
   graph->Draw("l");
   TLatex *   tex = new TLatex(0.25,0.98,"CMS, L = 19.5 fb^{-1}, #sqrt{s} = 8 TeV");
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
      tex = new TLatex(0.18,0.7,"MVA 1L Asymptotic");
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
   
   TH1F *Graph_LObs41 = new TH1F("Graph_LObs41","LObs",100,166.7,230.3);
   Graph_LObs41->SetMinimum(518.9);
   Graph_LObs41->SetMaximum(520.1);
   Graph_LObs41->SetDirectory(0);
   Graph_LObs41->SetStats(0);

   ci = TColor::GetColor("#0000ff");
   Graph_LObs41->SetLineColor(ci);
   Graph_LObs41->GetXaxis()->SetLabelSize(0.035);
   Graph_LObs41->GetYaxis()->SetLabelSize(0.035);
   Graph_LObs41->GetYaxis()->SetTitleOffset(1.2);
   graph->SetHistogram(Graph_LObs41);
   
   graph->Draw("l");
   
   graph = new TGraph(2);
   graph->SetName("LObsM");
   graph->SetTitle("LObsM");
   graph->SetFillColor(1);
   graph->SetLineWidth(2);
   graph->SetMarkerStyle(20);
   graph->SetPoint(0,172,510);
   graph->SetPoint(1,225,510);
   
   TH1F *Graph_LObsM42 = new TH1F("Graph_LObsM42","LObsM",100,166.7,230.3);
   Graph_LObsM42->SetMinimum(509.9);
   Graph_LObsM42->SetMaximum(511.1);
   Graph_LObsM42->SetDirectory(0);
   Graph_LObsM42->SetStats(0);

   ci = TColor::GetColor("#0000ff");
   Graph_LObsM42->SetLineColor(ci);
   Graph_LObsM42->GetXaxis()->SetLabelSize(0.035);
   Graph_LObsM42->GetYaxis()->SetLabelSize(0.035);
   Graph_LObsM42->GetYaxis()->SetTitleOffset(1.2);
   graph->SetHistogram(Graph_LObsM42);
   
   graph->Draw("l");
   
   graph = new TGraph(2);
   graph->SetName("LObsP");
   graph->SetTitle("LObsP");
   graph->SetFillColor(1);
   graph->SetLineWidth(2);
   graph->SetMarkerStyle(20);
   graph->SetPoint(0,172,528);
   graph->SetPoint(1,225,528);
   
   TH1F *Graph_LObsP43 = new TH1F("Graph_LObsP43","LObsP",100,166.7,230.3);
   Graph_LObsP43->SetMinimum(527.9);
   Graph_LObsP43->SetMaximum(529.1);
   Graph_LObsP43->SetDirectory(0);
   Graph_LObsP43->SetStats(0);

   ci = TColor::GetColor("#0000ff");
   Graph_LObsP43->SetLineColor(ci);
   Graph_LObsP43->GetXaxis()->SetLabelSize(0.035);
   Graph_LObsP43->GetYaxis()->SetLabelSize(0.035);
   Graph_LObsP43->GetYaxis()->SetTitleOffset(1.2);
   graph->SetHistogram(Graph_LObsP43);
   
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
   
   TH1F *Graph_LExpPM44 = new TH1F("Graph_LExpPM44","LExpPM",100,166.7,230.3);
   Graph_LExpPM44->SetMinimum(469.2);
   Graph_LExpPM44->SetMaximum(490.8);
   Graph_LExpPM44->SetDirectory(0);
   Graph_LExpPM44->SetStats(0);

   ci = TColor::GetColor("#0000ff");
   Graph_LExpPM44->SetLineColor(ci);
   Graph_LExpPM44->GetXaxis()->SetLabelSize(0.035);
   Graph_LExpPM44->GetYaxis()->SetLabelSize(0.035);
   Graph_LExpPM44->GetYaxis()->SetTitleOffset(1.2);
   graph->SetHistogram(Graph_LExpPM44);
   
   graph->Draw("f");
   
   graph = new TGraph(2);
   graph->SetName("LExp");
   graph->SetTitle("LExp");
   graph->SetFillColor(1);
   graph->SetLineStyle(2);
   graph->SetLineWidth(4);
   graph->SetPoint(0,172,480);
   graph->SetPoint(1,225,480);
   
   TH1F *Graph_LExp45 = new TH1F("Graph_LExp45","LExp",100,166.7,230.3);
   Graph_LExp45->SetMinimum(479.9);
   Graph_LExp45->SetMaximum(481.1);
   Graph_LExp45->SetDirectory(0);
   Graph_LExp45->SetStats(0);

   ci = TColor::GetColor("#0000ff");
   Graph_LExp45->SetLineColor(ci);
   Graph_LExp45->GetXaxis()->SetLabelSize(0.035);
   Graph_LExp45->GetYaxis()->SetLabelSize(0.035);
   Graph_LExp45->GetYaxis()->SetTitleOffset(1.2);
   graph->SetHistogram(Graph_LExp45);
   
   graph->Draw("l");
   cBrazil_->Modified();
   cBrazil_->cd();
   cBrazil_->SetSelected(cBrazil_);
}
