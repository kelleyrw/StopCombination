{
//=========Macro generated from canvas: cCONT_/cCONT_
//=========  (Mon Jun 23 15:15:49 2014) by ROOT version5.34/03
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
   graph->SetPoint(0,556.8914623,0);
   graph->SetPoint(1,575,21.43026405);
   graph->SetPoint(2,577.5984162,25);
   graph->SetPoint(3,600,47.81561987);
   graph->SetPoint(4,602.1739134,50);
   graph->SetPoint(5,619.0156957,75);
   graph->SetPoint(6,625,94.5174721);
   graph->SetPoint(7,627.0805333,100);
   graph->SetPoint(8,625,117.3230299);
   graph->SetPoint(9,624.2871653,125);
   graph->SetPoint(10,624.8039499,150);
   graph->SetPoint(11,620.6795381,175);
   graph->SetPoint(12,607.3527042,200);
   graph->SetPoint(13,600,206.083138);
   graph->SetPoint(14,575,217.3762845);
   graph->SetPoint(15,550,209.7276516);
   graph->SetPoint(16,525,201.0884215);
   graph->SetPoint(17,522.1328957,200);
   graph->SetPoint(18,500,189.1279658);
   graph->SetPoint(19,475,176.0238623);
   graph->SetPoint(20,473.1823336,175);
   graph->SetPoint(21,450,158.7923715);
   graph->SetPoint(22,432.4784548,150);
   graph->SetPoint(23,425,145.1963127);
   graph->SetPoint(24,400,129.9744237);
   graph->SetPoint(25,389.8035014,125);
   graph->SetPoint(26,375,114.9166358);
   graph->SetPoint(27,354.4926667,100);
   graph->SetPoint(28,350,95.99533933);
   graph->SetPoint(29,327.0014528,75);
   graph->SetPoint(30,325,72.95347954);
   graph->SetPoint(31,302.2813248,50);
   graph->SetPoint(32,300,47.63810735);
   graph->SetPoint(33,278.4586669,25);
   graph->SetPoint(34,275,17.17199428);
   graph->SetPoint(35,266.2042218,0);
   graph->SetPoint(36,1300,-1300);
   graph->SetPoint(37,-1300,-1300);
   
   TH1F *Graph_g_excl_xsec_obs19 = new TH1F("Graph_g_excl_xsec_obs19","g_excl_xsec_obs",100,-1560,1560);
   Graph_g_excl_xsec_obs19->SetMinimum(-1451.738);
   Graph_g_excl_xsec_obs19->SetMaximum(369.1139);
   Graph_g_excl_xsec_obs19->SetDirectory(0);
   Graph_g_excl_xsec_obs19->SetStats(0);

   ci = TColor::GetColor("#0000ff");
   Graph_g_excl_xsec_obs19->SetLineColor(ci);
   Graph_g_excl_xsec_obs19->GetXaxis()->SetLabelSize(0.035);
   Graph_g_excl_xsec_obs19->GetYaxis()->SetLabelSize(0.035);
   Graph_g_excl_xsec_obs19->GetYaxis()->SetTitleOffset(1.2);
   graph->SetHistogram(Graph_g_excl_xsec_obs19);
   
   graph->Draw("f");
   
   graph = new TGraph(37);
   graph->SetName("g_excl_xsec_exp");
   graph->SetTitle("g_excl_xsec_exp");
   graph->SetFillColor(ci);

   ci = TColor::GetColor("#ff0000");
   graph->SetLineColor(ci);
   graph->SetLineStyle(7);
   graph->SetLineWidth(4);
   graph->SetPoint(0,600.2787003,0);
   graph->SetPoint(1,618.3341095,25);
   graph->SetPoint(2,625,31.87893361);
   graph->SetPoint(3,643.6346931,50);
   graph->SetPoint(4,650,58.70748957);
   graph->SetPoint(5,661.8909013,75);
   graph->SetPoint(6,674.3737171,100);
   graph->SetPoint(7,673.9407568,125);
   graph->SetPoint(8,666.9489364,150);
   graph->SetPoint(9,662.3039969,175);
   graph->SetPoint(10,651.3247102,200);
   graph->SetPoint(11,650,202.0172526);
   graph->SetPoint(12,630.7303808,225);
   graph->SetPoint(13,625,228.4228908);
   graph->SetPoint(14,600,232.6454653);
   graph->SetPoint(15,575,229.0052749);
   graph->SetPoint(16,562.7079443,225);
   graph->SetPoint(17,550,219.6984868);
   graph->SetPoint(18,525,205.7093129);
   graph->SetPoint(19,514.9075454,200);
   graph->SetPoint(20,500,190.6223095);
   graph->SetPoint(21,475,175.9194614);
   graph->SetPoint(22,473.5898274,175);
   graph->SetPoint(23,450,156.8422485);
   graph->SetPoint(24,438.7502643,150);
   graph->SetPoint(25,425,138.9246685);
   graph->SetPoint(26,405.7394961,125);
   graph->SetPoint(27,400,120.0947098);
   graph->SetPoint(28,375,103.1628874);
   graph->SetPoint(29,370.2532227,100);
   graph->SetPoint(30,350,82.37571456);
   graph->SetPoint(31,340.5024741,75);
   graph->SetPoint(32,325,58.97205176);
   graph->SetPoint(33,315.7975452,50);
   graph->SetPoint(34,300,31.29905248);
   graph->SetPoint(35,294.8965235,25);
   graph->SetPoint(36,287.6752061,0);
   
   TH1F *Graph_Graph_g_excl_xsec_exp320 = new TH1F("Graph_Graph_g_excl_xsec_exp320","g_excl_xsec_exp",100,249.0054,713.0436);
   Graph_Graph_g_excl_xsec_exp320->SetMinimum(0);
   Graph_Graph_g_excl_xsec_exp320->SetMaximum(255.91);
   Graph_Graph_g_excl_xsec_exp320->SetDirectory(0);
   Graph_Graph_g_excl_xsec_exp320->SetStats(0);

   ci = TColor::GetColor("#0000ff");
   Graph_Graph_g_excl_xsec_exp320->SetLineColor(ci);
   Graph_Graph_g_excl_xsec_exp320->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_g_excl_xsec_exp320->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_g_excl_xsec_exp320->GetYaxis()->SetTitleOffset(1.2);
   graph->SetHistogram(Graph_Graph_g_excl_xsec_exp320);
   
   graph->Draw("l");
   
   graph = new TGraph(30);
   graph->SetName("g_excl_xsec_exp_p1");
   graph->SetTitle("g_excl_xsec_exp_p1");
   graph->SetFillColor(ci);

   ci = TColor::GetColor("#ff0000");
   graph->SetLineColor(ci);
   graph->SetLineStyle(7);
   graph->SetLineWidth(2);
   graph->SetPoint(0,563.9355985,0);
   graph->SetPoint(1,575,11.32062942);
   graph->SetPoint(2,587.4850354,25);
   graph->SetPoint(3,600,36.68844342);
   graph->SetPoint(4,612.4689834,50);
   graph->SetPoint(5,625,69.4476686);
   graph->SetPoint(6,628.4665088,75);
   graph->SetPoint(7,634.8487556,100);
   graph->SetPoint(8,634.0033702,125);
   graph->SetPoint(9,629.058699,150);
   graph->SetPoint(10,625,161.4419925);
   graph->SetPoint(11,616.2508867,175);
   graph->SetPoint(12,600,185.7720142);
   graph->SetPoint(13,575,187.979321);
   graph->SetPoint(14,550,188.696756);
   graph->SetPoint(15,525,181.5034979);
   graph->SetPoint(16,508.9419311,175);
   graph->SetPoint(17,500,170.8299312);
   graph->SetPoint(18,475,154.484676);
   graph->SetPoint(19,467.6413158,150);
   graph->SetPoint(20,450,137.3680786);
   graph->SetPoint(21,432.7864854,125);
   graph->SetPoint(22,425,118.4314701);
   graph->SetPoint(23,401.0806785,100);
   graph->SetPoint(24,400,98.84186333);
   graph->SetPoint(25,375.0466113,75);
   graph->SetPoint(26,375,74.924199);
   graph->SetPoint(27,357.4570229,50);
   graph->SetPoint(28,352.8198382,25);
   graph->SetPoint(29,354.1930723,0);
   
   TH1F *Graph_Graph_g_excl_xsec_exp_p1421 = new TH1F("Graph_Graph_g_excl_xsec_exp_p1421","g_excl_xsec_exp_p1",100,324.6169,663.0516);
   Graph_Graph_g_excl_xsec_exp_p1421->SetMinimum(0);
   Graph_Graph_g_excl_xsec_exp_p1421->SetMaximum(207.5664);
   Graph_Graph_g_excl_xsec_exp_p1421->SetDirectory(0);
   Graph_Graph_g_excl_xsec_exp_p1421->SetStats(0);

   ci = TColor::GetColor("#0000ff");
   Graph_Graph_g_excl_xsec_exp_p1421->SetLineColor(ci);
   Graph_Graph_g_excl_xsec_exp_p1421->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_g_excl_xsec_exp_p1421->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_g_excl_xsec_exp_p1421->GetYaxis()->SetTitleOffset(1.2);
   graph->SetHistogram(Graph_Graph_g_excl_xsec_exp_p1421);
   
   graph->Draw("l");
   
   graph = new TGraph(42);
   graph->SetName("g_excl_xsec_exp_m1");
   graph->SetTitle("g_excl_xsec_exp_m1");
   graph->SetFillColor(ci);

   ci = TColor::GetColor("#ff0000");
   graph->SetLineColor(ci);
   graph->SetLineStyle(7);
   graph->SetLineWidth(2);
   graph->SetPoint(0,621.6793182,0);
   graph->SetPoint(1,625,4.393445096);
   graph->SetPoint(2,638.068483,25);
   graph->SetPoint(3,650,37.31827577);
   graph->SetPoint(4,665.8481245,50);
   graph->SetPoint(5,675,63.27685615);
   graph->SetPoint(6,683.3741344,75);
   graph->SetPoint(7,696.6247284,100);
   graph->SetPoint(8,695.6104302,125);
   graph->SetPoint(9,687.717338,150);
   graph->SetPoint(10,684.3331426,175);
   graph->SetPoint(11,677.8941649,200);
   graph->SetPoint(12,675,207.4573401);
   graph->SetPoint(13,665.4697804,225);
   graph->SetPoint(14,650,242.3462835);
   graph->SetPoint(15,637.8877231,250);
   graph->SetPoint(16,625,253.6752266);
   graph->SetPoint(17,600,254.2576702);
   graph->SetPoint(18,583.1195472,250);
   graph->SetPoint(19,575,247.5180239);
   graph->SetPoint(20,550,235.5394147);
   graph->SetPoint(21,528.5779412,225);
   graph->SetPoint(22,525,222.6727426);
   graph->SetPoint(23,500,203.8596073);
   graph->SetPoint(24,494.982375,200);
   graph->SetPoint(25,475,185.2570051);
   graph->SetPoint(26,458.9340889,175);
   graph->SetPoint(27,450,168.2248605);
   graph->SetPoint(28,425,152.2303607);
   graph->SetPoint(29,421.1195841,150);
   graph->SetPoint(30,400,133.0384472);
   graph->SetPoint(31,383.6689403,125);
   graph->SetPoint(32,375,119.2392118);
   graph->SetPoint(33,350,101.6471249);
   graph->SetPoint(34,347.7231521,100);
   graph->SetPoint(35,325,79.77341502);
   graph->SetPoint(36,319.1426551,75);
   graph->SetPoint(37,300,55.76947749);
   graph->SetPoint(38,292.8208747,50);
   graph->SetPoint(39,275,32.46187269);
   graph->SetPoint(40,268.1240762,25);
   graph->SetPoint(41,252.3275583,0);
   
   TH1F *Graph_Graph_g_excl_xsec_exp_m1522 = new TH1F("Graph_Graph_g_excl_xsec_exp_m1522","g_excl_xsec_exp_m1",100,207.8978,741.0544);
   Graph_Graph_g_excl_xsec_exp_m1522->SetMinimum(0);
   Graph_Graph_g_excl_xsec_exp_m1522->SetMaximum(279.6834);
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
   graph->SetPoint(0,556.8914623,0);
   graph->SetPoint(1,575,21.43026405);
   graph->SetPoint(2,577.5984162,25);
   graph->SetPoint(3,600,47.81561987);
   graph->SetPoint(4,602.1739134,50);
   graph->SetPoint(5,619.0156957,75);
   graph->SetPoint(6,625,94.5174721);
   graph->SetPoint(7,627.0805333,100);
   graph->SetPoint(8,625,117.3230299);
   graph->SetPoint(9,624.2871653,125);
   graph->SetPoint(10,624.8039499,150);
   graph->SetPoint(11,620.6795381,175);
   graph->SetPoint(12,607.3527042,200);
   graph->SetPoint(13,600,206.083138);
   graph->SetPoint(14,575,217.3762845);
   graph->SetPoint(15,550,209.7276516);
   graph->SetPoint(16,525,201.0884215);
   graph->SetPoint(17,522.1328957,200);
   graph->SetPoint(18,500,189.1279658);
   graph->SetPoint(19,475,176.0238623);
   graph->SetPoint(20,473.1823336,175);
   graph->SetPoint(21,450,158.7923715);
   graph->SetPoint(22,432.4784548,150);
   graph->SetPoint(23,425,145.1963127);
   graph->SetPoint(24,400,129.9744237);
   graph->SetPoint(25,389.8035014,125);
   graph->SetPoint(26,375,114.9166358);
   graph->SetPoint(27,354.4926667,100);
   graph->SetPoint(28,350,95.99533933);
   graph->SetPoint(29,327.0014528,75);
   graph->SetPoint(30,325,72.95347954);
   graph->SetPoint(31,302.2813248,50);
   graph->SetPoint(32,300,47.63810735);
   graph->SetPoint(33,278.4586669,25);
   graph->SetPoint(34,275,17.17199428);
   graph->SetPoint(35,266.2042218,0);
   graph->SetPoint(36,1300,-1300);
   graph->SetPoint(37,-1300,-1300);
   
   TH1F *Graph_Graph_g_excl_xsec_obs1923 = new TH1F("Graph_Graph_g_excl_xsec_obs1923","g_excl_xsec_obs",100,-1560,1560);
   Graph_Graph_g_excl_xsec_obs1923->SetMinimum(-1451.738);
   Graph_Graph_g_excl_xsec_obs1923->SetMaximum(369.1139);
   Graph_Graph_g_excl_xsec_obs1923->SetDirectory(0);
   Graph_Graph_g_excl_xsec_obs1923->SetStats(0);

   ci = TColor::GetColor("#0000ff");
   Graph_Graph_g_excl_xsec_obs1923->SetLineColor(ci);
   Graph_Graph_g_excl_xsec_obs1923->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_g_excl_xsec_obs1923->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_g_excl_xsec_obs1923->GetYaxis()->SetTitleOffset(1.2);
   graph->SetHistogram(Graph_Graph_g_excl_xsec_obs1923);
   
   graph->Draw("l");
   
   graph = new TGraph(40);
   graph->SetName("g_excl_xsec_obs_p1");
   graph->SetTitle("g_excl_xsec_obs_p1");
   graph->SetFillColor(ci);
   graph->SetLineWidth(2);
   graph->SetPoint(0,580.8833953,0);
   graph->SetPoint(1,599.739334,25);
   graph->SetPoint(2,600,25.26038761);
   graph->SetPoint(3,625,49.80942738);
   graph->SetPoint(4,625.2318566,50);
   graph->SetPoint(5,648.0682641,75);
   graph->SetPoint(6,650,78.659391);
   graph->SetPoint(7,661.6773322,100);
   graph->SetPoint(8,662.3255237,125);
   graph->SetPoint(9,654.1597128,150);
   graph->SetPoint(10,650,169.4937336);
   graph->SetPoint(11,648.8237086,175);
   graph->SetPoint(12,634.2222695,200);
   graph->SetPoint(13,625,212.661308);
   graph->SetPoint(14,607.9851272,225);
   graph->SetPoint(15,600,228.5104361);
   graph->SetPoint(16,575,231.3864336);
   graph->SetPoint(17,556.4964656,225);
   graph->SetPoint(18,550,222.3234923);
   graph->SetPoint(19,525,209.7077746);
   graph->SetPoint(20,500.0922407,200);
   graph->SetPoint(21,500,199.9536638);
   graph->SetPoint(22,475,183.2526607);
   graph->SetPoint(23,460.5889588,175);
   graph->SetPoint(24,450,167.5018057);
   graph->SetPoint(25,425,153.1160999);
   graph->SetPoint(26,419.0167818,150);
   graph->SetPoint(27,400,137.2171172);
   graph->SetPoint(28,375,125.0073493);
   graph->SetPoint(29,374.988819,125);
   graph->SetPoint(30,350,104.1230079);
   graph->SetPoint(31,343.9698717,100);
   graph->SetPoint(32,325,82.11304516);
   graph->SetPoint(33,317.6721902,75);
   graph->SetPoint(34,300,57.36760781);
   graph->SetPoint(35,292.4829564,50);
   graph->SetPoint(36,275,31.9718312);
   graph->SetPoint(37,267.5673535,25);
   graph->SetPoint(38,250,0.000273346393);
   graph->SetPoint(39,249.999725,0);
   
   TH1F *Graph_Graph_g_excl_xsec_obs_p1724 = new TH1F("Graph_Graph_g_excl_xsec_obs_p1724","g_excl_xsec_obs_p1",100,208.7671,703.5581);
   Graph_Graph_g_excl_xsec_obs_p1724->SetMinimum(0);
   Graph_Graph_g_excl_xsec_obs_p1724->SetMaximum(254.5251);
   Graph_Graph_g_excl_xsec_obs_p1724->SetDirectory(0);
   Graph_Graph_g_excl_xsec_obs_p1724->SetStats(0);

   ci = TColor::GetColor("#0000ff");
   Graph_Graph_g_excl_xsec_obs_p1724->SetLineColor(ci);
   Graph_Graph_g_excl_xsec_obs_p1724->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_g_excl_xsec_obs_p1724->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_g_excl_xsec_obs_p1724->GetYaxis()->SetTitleOffset(1.2);
   graph->SetHistogram(Graph_Graph_g_excl_xsec_obs_p1724);
   
   graph->Draw("l");
   
   graph = new TGraph(30);
   graph->SetName("g_excl_xsec_obs_m1");
   graph->SetTitle("g_excl_xsec_obs_m1");
   graph->SetFillColor(ci);
   graph->SetLineWidth(2);
   graph->SetPoint(0,531.1825924,0);
   graph->SetPoint(1,549.1734028,25);
   graph->SetPoint(2,550,25.92450775);
   graph->SetPoint(3,573.6458426,50);
   graph->SetPoint(4,575,52.23755329);
   graph->SetPoint(5,589.7825908,75);
   graph->SetPoint(6,598.2494463,100);
   graph->SetPoint(7,597.1300377,125);
   graph->SetPoint(8,594.8177718,150);
   graph->SetPoint(9,589.7677316,175);
   graph->SetPoint(10,575,196.4483711);
   graph->SetPoint(11,550,195.1440334);
   graph->SetPoint(12,525,186.3307647);
   graph->SetPoint(13,500,178.3022678);
   graph->SetPoint(14,493.3315286,175);
   graph->SetPoint(15,475,163.1107963);
   graph->SetPoint(16,450,150.0829373);
   graph->SetPoint(17,449.8328453,150);
   graph->SetPoint(18,425,134.1937086);
   graph->SetPoint(19,406.9115121,125);
   graph->SetPoint(20,400,120.4856473);
   graph->SetPoint(21,375,104.8176573);
   graph->SetPoint(22,368.4060852,100);
   graph->SetPoint(23,350,83.53813963);
   graph->SetPoint(24,340.616542,75);
   graph->SetPoint(25,325,59.07059976);
   graph->SetPoint(26,316.1861613,50);
   graph->SetPoint(27,300,33.0106994);
   graph->SetPoint(28,292.3926847,25);
   graph->SetPoint(29,284.5911176,0);
   
   TH1F *Graph_Graph_g_excl_xsec_obs_m1825 = new TH1F("Graph_Graph_g_excl_xsec_obs_m1825","g_excl_xsec_obs_m1",100,253.2253,629.6153);
   Graph_Graph_g_excl_xsec_obs_m1825->SetMinimum(0);
   Graph_Graph_g_excl_xsec_obs_m1825->SetMaximum(216.0932);
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
