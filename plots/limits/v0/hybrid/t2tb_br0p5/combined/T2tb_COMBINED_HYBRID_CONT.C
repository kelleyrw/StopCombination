{
//=========Macro generated from canvas: cCONT_/cCONT_
//=========  (Mon Jun 23 15:15:18 2014) by ROOT version5.34/03
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
   
   TH2D *h_ul_xsec_exp_smoothEMPTY = new TH2D("h_ul_xsec_exp_smoothEMPTY","Expected combined #sigma #times Branching Fraction (t2tb_br0p5)EMPTY",31,137.5,912.5,29,-12.5,712.5);

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
   
   graph = new TGraph(45);
   graph->SetName("g_excl_xsec_obs");
   graph->SetTitle("g_excl_xsec_obs");

   ci = TColor::GetColor("#cccccc");
   graph->SetFillColor(ci);
   graph->SetLineWidth(4);
   graph->SetPoint(0,150,26.81907754);
   graph->SetPoint(1,150.0002666,25);
   graph->SetPoint(2,150,24.99973338);
   graph->SetPoint(3,150,-12.5);
   graph->SetPoint(4,175,-12.5);
   graph->SetPoint(5,200,-12.5);
   graph->SetPoint(6,266.2042213,0);
   graph->SetPoint(7,275,17.1719986);
   graph->SetPoint(8,278.4586642,25);
   graph->SetPoint(9,300,47.63810708);
   graph->SetPoint(10,302.2813251,50);
   graph->SetPoint(11,325,72.95347596);
   graph->SetPoint(12,327.001456,75);
   graph->SetPoint(13,350,95.99533915);
   graph->SetPoint(14,354.4926677,100);
   graph->SetPoint(15,375,114.9166373);
   graph->SetPoint(16,389.8035004,125);
   graph->SetPoint(17,400,129.9744227);
   graph->SetPoint(18,425,145.1963159);
   graph->SetPoint(19,432.4784496,150);
   graph->SetPoint(20,450,158.792373);
   graph->SetPoint(21,473.1823334,175);
   graph->SetPoint(22,475,176.0238622);
   graph->SetPoint(23,500,189.1279668);
   graph->SetPoint(24,522.1328987,200);
   graph->SetPoint(25,525,201.0884203);
   graph->SetPoint(26,550,209.7276512);
   graph->SetPoint(27,575,217.8438724);
   graph->SetPoint(28,600,216.3095488);
   graph->SetPoint(29,625,206.3164224);
   graph->SetPoint(30,633.5568661,200);
   graph->SetPoint(31,650,182.6149706);
   graph->SetPoint(32,658.4666826,175);
   graph->SetPoint(33,675,150.2409556);
   graph->SetPoint(34,675.1267309,150);
   graph->SetPoint(35,680.5751501,125);
   graph->SetPoint(36,682.167615,100);
   graph->SetPoint(37,680.4777223,75);
   graph->SetPoint(38,675,66.71578071);
   graph->SetPoint(39,665.7025434,50);
   graph->SetPoint(40,652.0551483,25);
   graph->SetPoint(41,650,21.52100325);
   graph->SetPoint(42,634.2833721,0);
   graph->SetPoint(43,1300,-1300);
   graph->SetPoint(44,-1300,-1300);
   
   TH1F *Graph_g_excl_xsec_obs19 = new TH1F("Graph_g_excl_xsec_obs19","g_excl_xsec_obs",100,-1560,1560);
   Graph_g_excl_xsec_obs19->SetMinimum(-1451.784);
   Graph_g_excl_xsec_obs19->SetMaximum(369.6283);
   Graph_g_excl_xsec_obs19->SetDirectory(0);
   Graph_g_excl_xsec_obs19->SetStats(0);

   ci = TColor::GetColor("#0000ff");
   Graph_g_excl_xsec_obs19->SetLineColor(ci);
   Graph_g_excl_xsec_obs19->GetXaxis()->SetLabelSize(0.035);
   Graph_g_excl_xsec_obs19->GetYaxis()->SetLabelSize(0.035);
   Graph_g_excl_xsec_obs19->GetYaxis()->SetTitleOffset(1.2);
   graph->SetHistogram(Graph_g_excl_xsec_obs19);
   
   graph->Draw("f");
   
   graph = new TGraph(38);
   graph->SetName("g_excl_xsec_exp");
   graph->SetTitle("g_excl_xsec_exp");

   ci = TColor::GetColor("#ff807e");
   graph->SetFillColor(ci);

   ci = TColor::GetColor("#ff0000");
   graph->SetLineColor(ci);
   graph->SetLineStyle(7);
   graph->SetLineWidth(4);
   graph->SetPoint(0,627.147799,0);
   graph->SetPoint(1,643.7736465,25);
   graph->SetPoint(2,650,33.58995602);
   graph->SetPoint(3,660.5690307,50);
   graph->SetPoint(4,672.721639,75);
   graph->SetPoint(5,675,96.87118988);
   graph->SetPoint(6,675.2782883,100);
   graph->SetPoint(7,675.7816835,125);
   graph->SetPoint(8,675,130.8543802);
   graph->SetPoint(9,671.849284,150);
   graph->SetPoint(10,664.1231654,175);
   graph->SetPoint(11,651.3247093,200);
   graph->SetPoint(12,650,202.0172514);
   graph->SetPoint(13,630.7303738,225);
   graph->SetPoint(14,625,228.4228866);
   graph->SetPoint(15,600,232.6703095);
   graph->SetPoint(16,575,229.1147365);
   graph->SetPoint(17,562.5067787,225);
   graph->SetPoint(18,550,219.6984863);
   graph->SetPoint(19,525,205.7093111);
   graph->SetPoint(20,514.9075461,200);
   graph->SetPoint(21,500,190.6223117);
   graph->SetPoint(22,475,175.9194603);
   graph->SetPoint(23,473.5898292,175);
   graph->SetPoint(24,450,156.8422499);
   graph->SetPoint(25,438.7502602,150);
   graph->SetPoint(26,425,138.9246709);
   graph->SetPoint(27,405.7394987,125);
   graph->SetPoint(28,400,120.0947071);
   graph->SetPoint(29,375,103.1628882);
   graph->SetPoint(30,370.2532225,100);
   graph->SetPoint(31,350,82.37571381);
   graph->SetPoint(32,340.5024748,75);
   graph->SetPoint(33,325,58.97204945);
   graph->SetPoint(34,315.7975465,50);
   graph->SetPoint(35,300,31.29905049);
   graph->SetPoint(36,294.8965259,25);
   graph->SetPoint(37,287.6752067,0);
   
   TH1F *Graph_Graph_g_excl_xsec_exp320 = new TH1F("Graph_Graph_g_excl_xsec_exp320","g_excl_xsec_exp",100,248.8646,714.5923);
   Graph_Graph_g_excl_xsec_exp320->SetMinimum(0);
   Graph_Graph_g_excl_xsec_exp320->SetMaximum(255.9373);
   Graph_Graph_g_excl_xsec_exp320->SetDirectory(0);
   Graph_Graph_g_excl_xsec_exp320->SetStats(0);

   ci = TColor::GetColor("#0000ff");
   Graph_Graph_g_excl_xsec_exp320->SetLineColor(ci);
   Graph_Graph_g_excl_xsec_exp320->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_g_excl_xsec_exp320->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_g_excl_xsec_exp320->GetYaxis()->SetTitleOffset(1.2);
   graph->SetHistogram(Graph_Graph_g_excl_xsec_exp320);
   
   graph->Draw("l");
   
   graph = new TGraph(29);
   graph->SetName("g_excl_xsec_exp_p1");
   graph->SetTitle("g_excl_xsec_exp_p1");

   ci = TColor::GetColor("#ff807e");
   graph->SetFillColor(ci);

   ci = TColor::GetColor("#ff0000");
   graph->SetLineColor(ci);
   graph->SetLineStyle(7);
   graph->SetLineWidth(2);
   graph->SetPoint(0,581.3262637,0);
   graph->SetPoint(1,600,20.561511);
   graph->SetPoint(2,603.3011746,25);
   graph->SetPoint(3,623.8799163,50);
   graph->SetPoint(4,625,52.66040423);
   graph->SetPoint(5,633.2433586,75);
   graph->SetPoint(6,634.9537309,100);
   graph->SetPoint(7,634.0033709,125);
   graph->SetPoint(8,629.0587059,150);
   graph->SetPoint(9,625,161.441995);
   graph->SetPoint(10,617.628113,175);
   graph->SetPoint(11,600,192.01339);
   graph->SetPoint(12,575,198.6839152);
   graph->SetPoint(13,550,191.6429444);
   graph->SetPoint(14,525,181.5034983);
   graph->SetPoint(15,508.9419273,175);
   graph->SetPoint(16,500,170.8299327);
   graph->SetPoint(17,475,154.484676);
   graph->SetPoint(18,467.6413152,150);
   graph->SetPoint(19,450,137.36808);
   graph->SetPoint(20,432.7864813,125);
   graph->SetPoint(21,425,118.431472);
   graph->SetPoint(22,401.0806811,100);
   graph->SetPoint(23,400,98.84186083);
   graph->SetPoint(24,375.0466115,75);
   graph->SetPoint(25,375,74.92419874);
   graph->SetPoint(26,357.4570214,50);
   graph->SetPoint(27,352.8198337,25);
   graph->SetPoint(28,354.1930674,0);
   
   TH1F *Graph_Graph_g_excl_xsec_exp_p1421 = new TH1F("Graph_Graph_g_excl_xsec_exp_p1421","g_excl_xsec_exp_p1",100,324.6064,663.1671);
   Graph_Graph_g_excl_xsec_exp_p1421->SetMinimum(0);
   Graph_Graph_g_excl_xsec_exp_p1421->SetMaximum(218.5523);
   Graph_Graph_g_excl_xsec_exp_p1421->SetDirectory(0);
   Graph_Graph_g_excl_xsec_exp_p1421->SetStats(0);

   ci = TColor::GetColor("#0000ff");
   Graph_Graph_g_excl_xsec_exp_p1421->SetLineColor(ci);
   Graph_Graph_g_excl_xsec_exp_p1421->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_g_excl_xsec_exp_p1421->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_g_excl_xsec_exp_p1421->GetYaxis()->SetTitleOffset(1.2);
   graph->SetHistogram(Graph_Graph_g_excl_xsec_exp_p1421);
   
   graph->Draw("l");
   
   graph = new TGraph(48);
   graph->SetName("g_excl_xsec_exp_m1");
   graph->SetTitle("g_excl_xsec_exp_m1");
   graph->SetFillColor(1);

   ci = TColor::GetColor("#ff0000");
   graph->SetLineColor(ci);
   graph->SetLineStyle(7);
   graph->SetLineWidth(2);
   graph->SetPoint(0,150,29.31137332);
   graph->SetPoint(1,150.0006214,25);
   graph->SetPoint(2,150,24.99937858);
   graph->SetPoint(3,150,-12.5);
   graph->SetPoint(4,175,-12.5);
   graph->SetPoint(5,200,-12.5);
   graph->SetPoint(6,252.3275554,0);
   graph->SetPoint(7,268.1240752,25);
   graph->SetPoint(8,275,32.46187294);
   graph->SetPoint(9,292.8208734,50);
   graph->SetPoint(10,300,55.76947808);
   graph->SetPoint(11,319.1426549,75);
   graph->SetPoint(12,325,79.77341626);
   graph->SetPoint(13,347.7231502,100);
   graph->SetPoint(14,350,101.6471261);
   graph->SetPoint(15,375,119.2392143);
   graph->SetPoint(16,383.6689376,125);
   graph->SetPoint(17,400,133.0384474);
   graph->SetPoint(18,421.1195855,150);
   graph->SetPoint(19,425,152.2303597);
   graph->SetPoint(20,450,168.2248609);
   graph->SetPoint(21,458.9340887,175);
   graph->SetPoint(22,475,185.2570041);
   graph->SetPoint(23,494.9823753,200);
   graph->SetPoint(24,500,203.8596072);
   graph->SetPoint(25,525,222.672739);
   graph->SetPoint(26,528.5779466,225);
   graph->SetPoint(27,550,235.5394154);
   graph->SetPoint(28,575,247.5180197);
   graph->SetPoint(29,583.1195578,250);
   graph->SetPoint(30,600,254.2576695);
   graph->SetPoint(31,625,253.6752259);
   graph->SetPoint(32,637.8877238,250);
   graph->SetPoint(33,650,242.3462855);
   graph->SetPoint(34,665.4697787,225);
   graph->SetPoint(35,675,212.7105678);
   graph->SetPoint(36,683.1474501,200);
   graph->SetPoint(37,694.5750149,175);
   graph->SetPoint(38,700,157.7213045);
   graph->SetPoint(39,702.2704963,150);
   graph->SetPoint(40,704.8164973,125);
   graph->SetPoint(41,703.9502829,100);
   graph->SetPoint(42,700,78.13847964);
   graph->SetPoint(43,699.4482088,75);
   graph->SetPoint(44,687.6439521,50);
   graph->SetPoint(45,675,31.80990634);
   graph->SetPoint(46,670.9793278,25);
   graph->SetPoint(47,657.5153099,0);
   
   TH1F *Graph_Graph_g_excl_xsec_exp_m1522 = new TH1F("Graph_Graph_g_excl_xsec_exp_m1522","g_excl_xsec_exp_m1",100,94.51835,760.2981);
   Graph_Graph_g_excl_xsec_exp_m1522->SetMinimum(-39.17577);
   Graph_Graph_g_excl_xsec_exp_m1522->SetMaximum(280.9334);
   Graph_Graph_g_excl_xsec_exp_m1522->SetDirectory(0);
   Graph_Graph_g_excl_xsec_exp_m1522->SetStats(0);

   ci = TColor::GetColor("#0000ff");
   Graph_Graph_g_excl_xsec_exp_m1522->SetLineColor(ci);
   Graph_Graph_g_excl_xsec_exp_m1522->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_g_excl_xsec_exp_m1522->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_g_excl_xsec_exp_m1522->GetYaxis()->SetTitleOffset(1.2);
   graph->SetHistogram(Graph_Graph_g_excl_xsec_exp_m1522);
   
   graph->Draw("l");
   
   graph = new TGraph(45);
   graph->SetName("g_excl_xsec_obs");
   graph->SetTitle("g_excl_xsec_obs");

   ci = TColor::GetColor("#cccccc");
   graph->SetFillColor(ci);
   graph->SetLineWidth(4);
   graph->SetPoint(0,150,26.81907754);
   graph->SetPoint(1,150.0002666,25);
   graph->SetPoint(2,150,24.99973338);
   graph->SetPoint(3,150,-12.5);
   graph->SetPoint(4,175,-12.5);
   graph->SetPoint(5,200,-12.5);
   graph->SetPoint(6,266.2042213,0);
   graph->SetPoint(7,275,17.1719986);
   graph->SetPoint(8,278.4586642,25);
   graph->SetPoint(9,300,47.63810708);
   graph->SetPoint(10,302.2813251,50);
   graph->SetPoint(11,325,72.95347596);
   graph->SetPoint(12,327.001456,75);
   graph->SetPoint(13,350,95.99533915);
   graph->SetPoint(14,354.4926677,100);
   graph->SetPoint(15,375,114.9166373);
   graph->SetPoint(16,389.8035004,125);
   graph->SetPoint(17,400,129.9744227);
   graph->SetPoint(18,425,145.1963159);
   graph->SetPoint(19,432.4784496,150);
   graph->SetPoint(20,450,158.792373);
   graph->SetPoint(21,473.1823334,175);
   graph->SetPoint(22,475,176.0238622);
   graph->SetPoint(23,500,189.1279668);
   graph->SetPoint(24,522.1328987,200);
   graph->SetPoint(25,525,201.0884203);
   graph->SetPoint(26,550,209.7276512);
   graph->SetPoint(27,575,217.8438724);
   graph->SetPoint(28,600,216.3095488);
   graph->SetPoint(29,625,206.3164224);
   graph->SetPoint(30,633.5568661,200);
   graph->SetPoint(31,650,182.6149706);
   graph->SetPoint(32,658.4666826,175);
   graph->SetPoint(33,675,150.2409556);
   graph->SetPoint(34,675.1267309,150);
   graph->SetPoint(35,680.5751501,125);
   graph->SetPoint(36,682.167615,100);
   graph->SetPoint(37,680.4777223,75);
   graph->SetPoint(38,675,66.71578071);
   graph->SetPoint(39,665.7025434,50);
   graph->SetPoint(40,652.0551483,25);
   graph->SetPoint(41,650,21.52100325);
   graph->SetPoint(42,634.2833721,0);
   graph->SetPoint(43,1300,-1300);
   graph->SetPoint(44,-1300,-1300);
   
   TH1F *Graph_Graph_g_excl_xsec_obs1923 = new TH1F("Graph_Graph_g_excl_xsec_obs1923","g_excl_xsec_obs",100,-1560,1560);
   Graph_Graph_g_excl_xsec_obs1923->SetMinimum(-1451.784);
   Graph_Graph_g_excl_xsec_obs1923->SetMaximum(369.6283);
   Graph_Graph_g_excl_xsec_obs1923->SetDirectory(0);
   Graph_Graph_g_excl_xsec_obs1923->SetStats(0);

   ci = TColor::GetColor("#0000ff");
   Graph_Graph_g_excl_xsec_obs1923->SetLineColor(ci);
   Graph_Graph_g_excl_xsec_obs1923->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_g_excl_xsec_obs1923->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_g_excl_xsec_obs1923->GetYaxis()->SetTitleOffset(1.2);
   graph->SetHistogram(Graph_Graph_g_excl_xsec_obs1923);
   
   graph->Draw("l");
   
   graph = new TGraph(49);
   graph->SetName("g_excl_xsec_obs_p1");
   graph->SetTitle("g_excl_xsec_obs_p1");
   graph->SetFillColor(1);
   graph->SetLineWidth(2);
   graph->SetPoint(0,150,29.47948176);
   graph->SetPoint(1,150.000568,25);
   graph->SetPoint(2,150,24.99943202);
   graph->SetPoint(3,150,-12.5);
   graph->SetPoint(4,175,-12.5);
   graph->SetPoint(5,200,-12.5);
   graph->SetPoint(6,249.99956,0);
   graph->SetPoint(7,250,0.0002766175279);
   graph->SetPoint(8,267.5673525,25);
   graph->SetPoint(9,275,31.97183343);
   graph->SetPoint(10,292.4829558,50);
   graph->SetPoint(11,300,57.3676088);
   graph->SetPoint(12,317.6721908,75);
   graph->SetPoint(13,325,82.11304311);
   graph->SetPoint(14,343.9698724,100);
   graph->SetPoint(15,350,104.1230077);
   graph->SetPoint(16,374.9888166,125);
   graph->SetPoint(17,375,125.0073509);
   graph->SetPoint(18,400,137.2171159);
   graph->SetPoint(19,419.0167794,150);
   graph->SetPoint(20,425,153.116102);
   graph->SetPoint(21,450,167.5018075);
   graph->SetPoint(22,460.588957,175);
   graph->SetPoint(23,475,183.2526602);
   graph->SetPoint(24,500,199.9536636);
   graph->SetPoint(25,500.092241,200);
   graph->SetPoint(26,525,209.7077742);
   graph->SetPoint(27,550,222.323493);
   graph->SetPoint(28,556.4964631,225);
   graph->SetPoint(29,575,231.3864345);
   graph->SetPoint(30,600,234.0565102);
   graph->SetPoint(31,625,231.6582551);
   graph->SetPoint(32,641.6183518,225);
   graph->SetPoint(33,650,219.2405054);
   graph->SetPoint(34,675,202.0903645);
   graph->SetPoint(35,677.0504184,200);
   graph->SetPoint(36,700,176.2000752);
   graph->SetPoint(37,700.9706206,175);
   graph->SetPoint(38,712.211334,150);
   graph->SetPoint(39,719.6847811,125);
   graph->SetPoint(40,725,107.0949927);
   graph->SetPoint(41,726.3843416,100);
   graph->SetPoint(42,725,95.21073811);
   graph->SetPoint(43,717.5890057,75);
   graph->SetPoint(44,700,51.17964967);
   graph->SetPoint(45,699.1369755,50);
   graph->SetPoint(46,679.7914812,25);
   graph->SetPoint(47,675,16.21523539);
   graph->SetPoint(48,665.1487478,0);
   
   TH1F *Graph_Graph_g_excl_xsec_obs_p1724 = new TH1F("Graph_Graph_g_excl_xsec_obs_p1724","g_excl_xsec_obs_p1",100,92.36157,784.0228);
   Graph_Graph_g_excl_xsec_obs_p1724->SetMinimum(-37.15565);
   Graph_Graph_g_excl_xsec_obs_p1724->SetMaximum(258.7122);
   Graph_Graph_g_excl_xsec_obs_p1724->SetDirectory(0);
   Graph_Graph_g_excl_xsec_obs_p1724->SetStats(0);

   ci = TColor::GetColor("#0000ff");
   Graph_Graph_g_excl_xsec_obs_p1724->SetLineColor(ci);
   Graph_Graph_g_excl_xsec_obs_p1724->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_g_excl_xsec_obs_p1724->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_g_excl_xsec_obs_p1724->GetYaxis()->SetTitleOffset(1.2);
   graph->SetHistogram(Graph_Graph_g_excl_xsec_obs_p1724);
   
   graph->Draw("l");
   
   graph = new TGraph(34);
   graph->SetName("g_excl_xsec_obs_m1");
   graph->SetTitle("g_excl_xsec_obs_m1");

   ci = TColor::GetColor("#ff807e");
   graph->SetFillColor(ci);
   graph->SetLineWidth(2);
   graph->SetPoint(0,596.6730432,0);
   graph->SetPoint(1,600,3.778510399);
   graph->SetPoint(2,615.1778172,25);
   graph->SetPoint(3,625,39.54995248);
   graph->SetPoint(4,631.3527243,50);
   graph->SetPoint(5,641.5124016,75);
   graph->SetPoint(6,643.0571528,100);
   graph->SetPoint(7,637.242693,125);
   graph->SetPoint(8,630.8978465,150);
   graph->SetPoint(9,625,161.0728124);
   graph->SetPoint(10,616.5036196,175);
   graph->SetPoint(11,600,188.938191);
   graph->SetPoint(12,576.2731614,200);
   graph->SetPoint(13,575,200.2836609);
   graph->SetPoint(14,573.297932,200);
   graph->SetPoint(15,550,195.1440327);
   graph->SetPoint(16,525,186.330763);
   graph->SetPoint(17,500,178.30227);
   graph->SetPoint(18,493.3315248,175);
   graph->SetPoint(19,475,163.1107968);
   graph->SetPoint(20,450,150.0829384);
   graph->SetPoint(21,449.8328431,150);
   graph->SetPoint(22,425,134.1937099);
   graph->SetPoint(23,406.9115141,125);
   graph->SetPoint(24,400,120.4856458);
   graph->SetPoint(25,375,104.817657);
   graph->SetPoint(26,368.4060866,100);
   graph->SetPoint(27,350,83.5381412);
   graph->SetPoint(28,340.6165415,75);
   graph->SetPoint(29,325,59.07059749);
   graph->SetPoint(30,316.1861622,50);
   graph->SetPoint(31,300,33.01069836);
   graph->SetPoint(32,292.3926847,25);
   graph->SetPoint(33,284.5911191,0);
   
   TH1F *Graph_Graph_g_excl_xsec_obs_m1825 = new TH1F("Graph_Graph_g_excl_xsec_obs_m1825","g_excl_xsec_obs_m1",100,248.7445,678.9038);
   Graph_Graph_g_excl_xsec_obs_m1825->SetMinimum(0);
   Graph_Graph_g_excl_xsec_obs_m1825->SetMaximum(220.312);
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
      tex = new TLatex(0.55,0.82,"m_{#tilde{#chi}^{#pm}}-m_{#tilde{#chi}^{0}} = 5 GeV");
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
