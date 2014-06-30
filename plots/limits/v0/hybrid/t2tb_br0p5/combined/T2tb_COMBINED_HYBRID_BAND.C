{
//=========Macro generated from canvas: cBrazil_/cBrazil_
//=========  (Mon Jun 23 15:15:18 2014) by ROOT version5.34/03
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
   
   graph = new TGraph(77);
   graph->SetName("Graph");
   graph->SetTitle("Graph");

   ci = TColor::GetColor("#ffcc00");
   graph->SetFillColor(ci);
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
   graph->SetPoint(29,657.5153099,0);
   graph->SetPoint(30,670.9793278,25);
   graph->SetPoint(31,675,31.80990634);
   graph->SetPoint(32,687.6439521,50);
   graph->SetPoint(33,699.4482088,75);
   graph->SetPoint(34,700,78.13847964);
   graph->SetPoint(35,703.9502829,100);
   graph->SetPoint(36,704.8164973,125);
   graph->SetPoint(37,702.2704963,150);
   graph->SetPoint(38,700,157.7213045);
   graph->SetPoint(39,694.5750149,175);
   graph->SetPoint(40,683.1474501,200);
   graph->SetPoint(41,675,212.7105678);
   graph->SetPoint(42,665.4697787,225);
   graph->SetPoint(43,650,242.3462855);
   graph->SetPoint(44,637.8877238,250);
   graph->SetPoint(45,625,253.6752259);
   graph->SetPoint(46,600,254.2576695);
   graph->SetPoint(47,583.1195578,250);
   graph->SetPoint(48,575,247.5180197);
   graph->SetPoint(49,550,235.5394154);
   graph->SetPoint(50,528.5779466,225);
   graph->SetPoint(51,525,222.672739);
   graph->SetPoint(52,500,203.8596072);
   graph->SetPoint(53,494.9823753,200);
   graph->SetPoint(54,475,185.2570041);
   graph->SetPoint(55,458.9340887,175);
   graph->SetPoint(56,450,168.2248609);
   graph->SetPoint(57,425,152.2303597);
   graph->SetPoint(58,421.1195855,150);
   graph->SetPoint(59,400,133.0384474);
   graph->SetPoint(60,383.6689376,125);
   graph->SetPoint(61,375,119.2392143);
   graph->SetPoint(62,350,101.6471261);
   graph->SetPoint(63,347.7231502,100);
   graph->SetPoint(64,325,79.77341626);
   graph->SetPoint(65,319.1426549,75);
   graph->SetPoint(66,300,55.76947808);
   graph->SetPoint(67,292.8208734,50);
   graph->SetPoint(68,275,32.46187294);
   graph->SetPoint(69,268.1240752,25);
   graph->SetPoint(70,252.3275554,0);
   graph->SetPoint(71,200,-12.5);
   graph->SetPoint(72,175,-12.5);
   graph->SetPoint(73,150,-12.5);
   graph->SetPoint(74,150,24.99937858);
   graph->SetPoint(75,150.0006214,25);
   graph->SetPoint(76,150,29.31137332);
   
   TH1F *Graph_Graph36 = new TH1F("Graph_Graph36","Graph",100,94.51835,760.2981);
   Graph_Graph36->SetMinimum(-39.17577);
   Graph_Graph36->SetMaximum(280.9334);
   Graph_Graph36->SetDirectory(0);
   Graph_Graph36->SetStats(0);

   ci = TColor::GetColor("#0000ff");
   Graph_Graph36->SetLineColor(ci);
   Graph_Graph36->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph36->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph36->GetYaxis()->SetTitleOffset(1.2);
   graph->SetHistogram(Graph_Graph36);
   
   graph->Draw("f");
   
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
   
   TH1F *Graph_Graph_Graph_g_excl_xsec_obs192337 = new TH1F("Graph_Graph_Graph_g_excl_xsec_obs192337","g_excl_xsec_obs",100,-1560,1560);
   Graph_Graph_Graph_g_excl_xsec_obs192337->SetMinimum(-1451.784);
   Graph_Graph_Graph_g_excl_xsec_obs192337->SetMaximum(369.6283);
   Graph_Graph_Graph_g_excl_xsec_obs192337->SetDirectory(0);
   Graph_Graph_Graph_g_excl_xsec_obs192337->SetStats(0);

   ci = TColor::GetColor("#0000ff");
   Graph_Graph_Graph_g_excl_xsec_obs192337->SetLineColor(ci);
   Graph_Graph_Graph_g_excl_xsec_obs192337->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_Graph_g_excl_xsec_obs192337->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_Graph_g_excl_xsec_obs192337->GetYaxis()->SetTitleOffset(1.2);
   graph->SetHistogram(Graph_Graph_Graph_g_excl_xsec_obs192337);
   
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
   
   TH1F *Graph_Graph_Graph_g_excl_xsec_obs_p172438 = new TH1F("Graph_Graph_Graph_g_excl_xsec_obs_p172438","g_excl_xsec_obs_p1",100,92.36157,784.0228);
   Graph_Graph_Graph_g_excl_xsec_obs_p172438->SetMinimum(-37.15565);
   Graph_Graph_Graph_g_excl_xsec_obs_p172438->SetMaximum(258.7122);
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
   
   TH1F *Graph_Graph_Graph_g_excl_xsec_obs_m182539 = new TH1F("Graph_Graph_Graph_g_excl_xsec_obs_m182539","g_excl_xsec_obs_m1",100,248.7445,678.9038);
   Graph_Graph_Graph_g_excl_xsec_obs_m182539->SetMinimum(0);
   Graph_Graph_Graph_g_excl_xsec_obs_m182539->SetMaximum(220.312);
   Graph_Graph_Graph_g_excl_xsec_obs_m182539->SetDirectory(0);
   Graph_Graph_Graph_g_excl_xsec_obs_m182539->SetStats(0);

   ci = TColor::GetColor("#0000ff");
   Graph_Graph_Graph_g_excl_xsec_obs_m182539->SetLineColor(ci);
   Graph_Graph_Graph_g_excl_xsec_obs_m182539->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_Graph_g_excl_xsec_obs_m182539->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_Graph_g_excl_xsec_obs_m182539->GetYaxis()->SetTitleOffset(1.2);
   graph->SetHistogram(Graph_Graph_Graph_g_excl_xsec_obs_m182539);
   
   graph->Draw("l");
   
   graph = new TGraph(38);
   graph->SetName("g_excl_xsec_exp");
   graph->SetTitle("g_excl_xsec_exp");

   ci = TColor::GetColor("#ff807e");
   graph->SetFillColor(ci);
   graph->SetLineStyle(2);
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
   
   TH1F *Graph_Graph_Graph_g_excl_xsec_exp32040 = new TH1F("Graph_Graph_Graph_g_excl_xsec_exp32040","g_excl_xsec_exp",100,248.8646,714.5923);
   Graph_Graph_Graph_g_excl_xsec_exp32040->SetMinimum(0);
   Graph_Graph_Graph_g_excl_xsec_exp32040->SetMaximum(255.9373);
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
