{
//=========Macro generated from canvas: cBrazil_/cBrazil_
//=========  (Thu Apr 23 07:27:39 2015) by ROOT version5.34/03
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
   
   TH2D *h_ul_xsec_obs_smoothEMPTY = new TH2D("h_ul_xsec_obs_smoothEMPTY","Observed razor #sigma #times Branching Fraction (t2tb_br0p5)EMPTY",31,137.5,912.5,29,-12.5,712.5);

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
   
   graph = new TGraph(69);
   graph->SetName("Graph");
   graph->SetTitle("Graph");

   ci = TColor::GetColor("#ffcc00");
   graph->SetFillColor(ci);
   graph->SetPoint(0,563.0329788,0);
   graph->SetPoint(1,575,8.41949014);
   graph->SetPoint(2,593.2490915,25);
   graph->SetPoint(3,600,31.42910545);
   graph->SetPoint(4,617.760325,50);
   graph->SetPoint(5,625,63.74969389);
   graph->SetPoint(6,630.2053376,75);
   graph->SetPoint(7,630.5851257,100);
   graph->SetPoint(8,627.9304912,125);
   graph->SetPoint(9,625,137.4589066);
   graph->SetPoint(10,621.4488075,150);
   graph->SetPoint(11,607.0495979,175);
   graph->SetPoint(12,600,181.8406401);
   graph->SetPoint(13,575,192.3348994);
   graph->SetPoint(14,550,186.1929123);
   graph->SetPoint(15,525,176.6158091);
   graph->SetPoint(16,520.9514383,175);
   graph->SetPoint(17,500,165.7969346);
   graph->SetPoint(18,475,153.0816015);
   graph->SetPoint(19,470.0101254,150);
   graph->SetPoint(20,450,134.7641674);
   graph->SetPoint(21,438.3322381,125);
   graph->SetPoint(22,425,112.4564546);
   graph->SetPoint(23,412.3233456,100);
   graph->SetPoint(24,400,84.78981218);
   graph->SetPoint(25,392.5191461,75);
   graph->SetPoint(26,383.3149516,50);
   graph->SetPoint(27,390.9501836,25);
   graph->SetPoint(28,400,11.12854642);
   graph->SetPoint(29,410.5894113,0);
   graph->SetPoint(30,344.5906656,0);
   graph->SetPoint(31,334.1406098,25);
   graph->SetPoint(32,337.6532944,50);
   graph->SetPoint(33,350,73.75718486);
   graph->SetPoint(34,350.7093939,75);
   graph->SetPoint(35,373.4367126,100);
   graph->SetPoint(36,375,101.2562431);
   graph->SetPoint(37,400,121.9615115);
   graph->SetPoint(38,403.0550276,125);
   graph->SetPoint(39,425,145.5507153);
   graph->SetPoint(40,429.874307,150);
   graph->SetPoint(41,450,165.7980505);
   graph->SetPoint(42,461.5941852,175);
   graph->SetPoint(43,475,184.1745675);
   graph->SetPoint(44,499.1849133,200);
   graph->SetPoint(45,500,200.4342317);
   graph->SetPoint(46,525,215.9433378);
   graph->SetPoint(47,537.1964938,225);
   graph->SetPoint(48,550,232.9095045);
   graph->SetPoint(49,575,247.9873926);
   graph->SetPoint(50,580.4712193,250);
   graph->SetPoint(51,600,256.6346329);
   graph->SetPoint(52,625,257.6606668);
   graph->SetPoint(53,650,256.0212183);
   graph->SetPoint(54,658.7948474,250);
   graph->SetPoint(55,675,227.0346992);
   graph->SetPoint(56,676.1475872,225);
   graph->SetPoint(57,689.2269972,200);
   graph->SetPoint(58,697.8292563,175);
   graph->SetPoint(59,700,169.9379367);
   graph->SetPoint(60,708.2618417,150);
   graph->SetPoint(61,707.5258804,125);
   graph->SetPoint(62,703.8062548,100);
   graph->SetPoint(63,700,85.87778332);
   graph->SetPoint(64,696.8792699,75);
   graph->SetPoint(65,684.1528923,50);
   graph->SetPoint(66,675,33.16226912);
   graph->SetPoint(67,670.2474928,25);
   graph->SetPoint(68,654.3751032,0);
   
   TH1F *Graph_Graph36 = new TH1F("Graph_Graph36","Graph",100,296.7285,745.674);
   Graph_Graph36->SetMinimum(0);
   Graph_Graph36->SetMaximum(283.4267);
   Graph_Graph36->SetDirectory(0);
   Graph_Graph36->SetStats(0);

   ci = TColor::GetColor("#0000ff");
   Graph_Graph36->SetLineColor(ci);
   Graph_Graph36->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph36->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph36->GetYaxis()->SetTitleOffset(1.2);
   graph->SetHistogram(Graph_Graph36);
   
   graph->Draw("f");
   
   graph = new TGraph(37);
   graph->SetName("g_excl_xsec_obs");
   graph->SetTitle("g_excl_xsec_obs");

   ci = TColor::GetColor("#cccccc");
   graph->SetFillColor(ci);
   graph->SetLineWidth(4);
   graph->SetPoint(0,607.568063,0);
   graph->SetPoint(1,625,17.51767774);
   graph->SetPoint(2,632.3745294,25);
   graph->SetPoint(3,650,43.92557286);
   graph->SetPoint(4,655.0730225,50);
   graph->SetPoint(5,671.0976969,75);
   graph->SetPoint(6,675,94.68644232);
   graph->SetPoint(7,676.0343149,100);
   graph->SetPoint(8,677.1901081,125);
   graph->SetPoint(9,675,132.8389689);
   graph->SetPoint(10,667.8887477,150);
   graph->SetPoint(11,650,174.6278146);
   graph->SetPoint(12,649.753943,175);
   graph->SetPoint(13,625,194.7387849);
   graph->SetPoint(14,614.3854698,200);
   graph->SetPoint(15,600,204.2035469);
   graph->SetPoint(16,575,205.1521672);
   graph->SetPoint(17,558.1649538,200);
   graph->SetPoint(18,550,196.8332582);
   graph->SetPoint(19,525,184.6229271);
   graph->SetPoint(20,500,176.6555083);
   graph->SetPoint(21,496.4622325,175);
   graph->SetPoint(22,475,160.875472);
   graph->SetPoint(23,458.2358687,150);
   graph->SetPoint(24,450,143.5581111);
   graph->SetPoint(25,425,125.0067099);
   graph->SetPoint(26,424.992006,125);
   graph->SetPoint(27,400,102.200937);
   graph->SetPoint(28,397.5294591,100);
   graph->SetPoint(29,378.4987477,75);
   graph->SetPoint(30,375,67.88482346);
   graph->SetPoint(31,362.2535476,50);
   graph->SetPoint(32,362.2214773,25);
   graph->SetPoint(33,375,4.22293486);
   graph->SetPoint(34,379.1608609,0);
   graph->SetPoint(35,1300,-1300);
   graph->SetPoint(36,-1300,-1300);
   
   TH1F *Graph_Graph_Graph_g_excl_xsec_obs192337 = new TH1F("Graph_Graph_Graph_g_excl_xsec_obs192337","g_excl_xsec_obs",100,-1560,1560);
   Graph_Graph_Graph_g_excl_xsec_obs192337->SetMinimum(-1450.515);
   Graph_Graph_Graph_g_excl_xsec_obs192337->SetMaximum(355.6674);
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

   ci = TColor::GetColor("#ff807e");
   graph->SetFillColor(ci);
   graph->SetLineWidth(2);
   graph->SetPoint(0,642.6552223,0);
   graph->SetPoint(1,650,7.19151752);
   graph->SetPoint(2,667.6415188,25);
   graph->SetPoint(3,675,33.52098328);
   graph->SetPoint(4,690.9137568,50);
   graph->SetPoint(5,700,62.13995576);
   graph->SetPoint(6,708.4866281,75);
   graph->SetPoint(7,713.7271624,100);
   graph->SetPoint(8,711.1847095,125);
   graph->SetPoint(9,707.1273177,150);
   graph->SetPoint(10,700,164.3180565);
   graph->SetPoint(11,693.4083988,175);
   graph->SetPoint(12,675,195.1131202);
   graph->SetPoint(13,669.1519721,200);
   graph->SetPoint(14,650,210.1993722);
   graph->SetPoint(15,625,220.8081061);
   graph->SetPoint(16,600,223.4981767);
   graph->SetPoint(17,575,219.0748159);
   graph->SetPoint(18,550,207.6265697);
   graph->SetPoint(19,531.7866072,200);
   graph->SetPoint(20,525,196.3526163);
   graph->SetPoint(21,500,184.8001106);
   graph->SetPoint(22,479.3500048,175);
   graph->SetPoint(23,475,172.1041038);
   graph->SetPoint(24,450,154.1003131);
   graph->SetPoint(25,444.6048793,150);
   graph->SetPoint(26,425,133.7027948);
   graph->SetPoint(27,414.5470475,125);
   graph->SetPoint(28,400,111.8098297);
   graph->SetPoint(29,386.7520719,100);
   graph->SetPoint(30,375,85.68305508);
   graph->SetPoint(31,362.1632622,75);
   graph->SetPoint(32,350,60.48878163);
   graph->SetPoint(33,342.7843009,50);
   graph->SetPoint(34,340.9273866,25);
   graph->SetPoint(35,350,5.224342708);
   graph->SetPoint(36,353.1597003,0);
   
   TH1F *Graph_Graph_Graph_g_excl_xsec_obs_p172438 = new TH1F("Graph_Graph_Graph_g_excl_xsec_obs_p172438","g_excl_xsec_obs_p1",100,303.6474,751.0071);
   Graph_Graph_Graph_g_excl_xsec_obs_p172438->SetMinimum(0);
   Graph_Graph_Graph_g_excl_xsec_obs_p172438->SetMaximum(245.848);
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

   ci = TColor::GetColor("#ff807e");
   graph->SetFillColor(ci);
   graph->SetLineWidth(2);
   graph->SetPoint(0,559.9242457,0);
   graph->SetPoint(1,575,7.964388878);
   graph->SetPoint(2,596.9206286,25);
   graph->SetPoint(3,600,27.66642432);
   graph->SetPoint(4,619.5807781,50);
   graph->SetPoint(5,625,61.84900086);
   graph->SetPoint(6,631.7497261,75);
   graph->SetPoint(7,635.1327594,100);
   graph->SetPoint(8,629.9077033,125);
   graph->SetPoint(9,625,142.0200863);
   graph->SetPoint(10,622.3297655,150);
   graph->SetPoint(11,602.5385337,175);
   graph->SetPoint(12,600,176.4489472);
   graph->SetPoint(13,575,184.8525289);
   graph->SetPoint(14,550,179.6193386);
   graph->SetPoint(15,534.8401471,175);
   graph->SetPoint(16,525,170.654703);
   graph->SetPoint(17,500,162.2303572);
   graph->SetPoint(18,475.9676613,150);
   graph->SetPoint(19,475,149.3254847);
   graph->SetPoint(20,450,130.4163833);
   graph->SetPoint(21,442.619901,125);
   graph->SetPoint(22,425,107.982953);
   graph->SetPoint(23,415.6601006,100);
   graph->SetPoint(24,400,78.80898364);
   graph->SetPoint(25,397.3799957,75);
   graph->SetPoint(26,386.3430543,50);
   graph->SetPoint(27,390.9783685,25);
   graph->SetPoint(28,400,15.87221053);
   graph->SetPoint(29,425,2.258678829);
   graph->SetPoint(30,431.7754092,0);
   
   TH1F *Graph_Graph_Graph_g_excl_xsec_obs_m182539 = new TH1F("Graph_Graph_Graph_g_excl_xsec_obs_m182539","g_excl_xsec_obs_m1",100,361.4641,660.0117);
   Graph_Graph_Graph_g_excl_xsec_obs_m182539->SetMinimum(0);
   Graph_Graph_Graph_g_excl_xsec_obs_m182539->SetMaximum(203.3378);
   Graph_Graph_Graph_g_excl_xsec_obs_m182539->SetDirectory(0);
   Graph_Graph_Graph_g_excl_xsec_obs_m182539->SetStats(0);

   ci = TColor::GetColor("#0000ff");
   Graph_Graph_Graph_g_excl_xsec_obs_m182539->SetLineColor(ci);
   Graph_Graph_Graph_g_excl_xsec_obs_m182539->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_Graph_g_excl_xsec_obs_m182539->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_Graph_g_excl_xsec_obs_m182539->GetYaxis()->SetTitleOffset(1.2);
   graph->SetHistogram(Graph_Graph_Graph_g_excl_xsec_obs_m182539);
   
   graph->Draw("l");
   
   graph = new TGraph(36);
   graph->SetName("g_excl_xsec_exp");
   graph->SetTitle("g_excl_xsec_exp");

   ci = TColor::GetColor("#ff807e");
   graph->SetFillColor(ci);
   graph->SetLineStyle(2);
   graph->SetLineWidth(4);
   graph->SetPoint(0,613.2908531,0);
   graph->SetPoint(1,625,14.25597387);
   graph->SetPoint(2,633.7587963,25);
   graph->SetPoint(3,650,43.42376511);
   graph->SetPoint(4,655.4263101,50);
   graph->SetPoint(5,669.6385003,75);
   graph->SetPoint(6,675,99.08929278);
   graph->SetPoint(7,675.1714349,100);
   graph->SetPoint(8,676.1665161,125);
   graph->SetPoint(9,675,131.3162446);
   graph->SetPoint(10,670.8030897,150);
   graph->SetPoint(11,661.9392925,175);
   graph->SetPoint(12,650,198.8256717);
   graph->SetPoint(13,649.2077333,200);
   graph->SetPoint(14,625.3173335,225);
   graph->SetPoint(15,625,225.16087);
   graph->SetPoint(16,600,230.1339648);
   graph->SetPoint(17,575,227.0367702);
   graph->SetPoint(18,569.2930469,225);
   graph->SetPoint(19,550,216.3123418);
   graph->SetPoint(20,525,202.9341061);
   graph->SetPoint(21,519.8974328,200);
   graph->SetPoint(22,500,186.9704243);
   graph->SetPoint(23,478.6593433,175);
   graph->SetPoint(24,475,172.5979187);
   graph->SetPoint(25,450,153.9255771);
   graph->SetPoint(26,444.997577,150);
   graph->SetPoint(27,425,131.9972615);
   graph->SetPoint(28,417.3455355,125);
   graph->SetPoint(29,400,107.9877888);
   graph->SetPoint(30,390.9858702,100);
   graph->SetPoint(31,375,81.16960713);
   graph->SetPoint(32,369.3053086,75);
   graph->SetPoint(33,356.7839493,50);
   graph->SetPoint(34,360.4552234,25);
   graph->SetPoint(35,370.8980913,0);
   
   TH1F *Graph_Graph_Graph_g_excl_xsec_exp32040 = new TH1F("Graph_Graph_Graph_g_excl_xsec_exp32040","g_excl_xsec_exp",100,324.8457,708.1048);
   Graph_Graph_Graph_g_excl_xsec_exp32040->SetMinimum(0);
   Graph_Graph_Graph_g_excl_xsec_exp32040->SetMaximum(253.1474);
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
