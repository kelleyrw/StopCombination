{
//=========Macro generated from canvas: cBrazil_/cBrazil_
//=========  (Thu Apr 23 07:26:15 2015) by ROOT version5.34/03
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
   
   TH2D *h_ul_xsec_obs_smoothEMPTY = new TH2D("h_ul_xsec_obs_smoothEMPTY","Observed razor #sigma #times Branching Fraction (t2tt)EMPTY",31,137.5,912.5,29,-12.5,712.5);

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
   
   graph = new TGraph(66);
   graph->SetName("Graph");
   graph->SetTitle("Graph");

   ci = TColor::GetColor("#ffcc00");
   graph->SetFillColor(ci);
   graph->SetPoint(0,627.7398305,0);
   graph->SetPoint(1,637.1194155,25);
   graph->SetPoint(2,636.1864237,50);
   graph->SetPoint(3,631.2999765,75);
   graph->SetPoint(4,626.6576382,100);
   graph->SetPoint(5,625,104.5698988);
   graph->SetPoint(6,614.5739445,125);
   graph->SetPoint(7,600,141.9765353);
   graph->SetPoint(8,575,149.3457248);
   graph->SetPoint(9,550,146.8689213);
   graph->SetPoint(10,525,135.8683103);
   graph->SetPoint(11,506.3528555,125);
   graph->SetPoint(12,500,120.7589619);
   graph->SetPoint(13,475,104.4141611);
   graph->SetPoint(14,468.6267927,100);
   graph->SetPoint(15,450,84.51620856);
   graph->SetPoint(16,440.0902918,75);
   graph->SetPoint(17,425,58.80846642);
   graph->SetPoint(18,417.6968876,50);
   graph->SetPoint(19,406.1508143,25);
   graph->SetPoint(20,408.0572071,0);
   graph->SetPoint(21,323.8079867,0);
   graph->SetPoint(22,325,6.244425598);
   graph->SetPoint(23,329.5336083,25);
   graph->SetPoint(24,339.966516,50);
   graph->SetPoint(25,350,59.42254776);
   graph->SetPoint(26,366.6592288,75);
   graph->SetPoint(27,375,80.41211315);
   graph->SetPoint(28,396.6123321,100);
   graph->SetPoint(29,400,103.2256912);
   graph->SetPoint(30,422.1386786,125);
   graph->SetPoint(31,425,127.1705266);
   graph->SetPoint(32,450,144.4195549);
   graph->SetPoint(33,456.7249979,150);
   graph->SetPoint(34,475,162.7868093);
   graph->SetPoint(35,490.0559546,175);
   graph->SetPoint(36,500,180.7725331);
   graph->SetPoint(37,522.91542,200);
   graph->SetPoint(38,525,201.5654713);
   graph->SetPoint(39,550,219.0259727);
   graph->SetPoint(40,558.1266645,225);
   graph->SetPoint(41,575,234.931416);
   graph->SetPoint(42,596.505715,250);
   graph->SetPoint(43,600,251.9727159);
   graph->SetPoint(44,625,262.2859692);
   graph->SetPoint(45,650,273.6182945);
   graph->SetPoint(46,656.3352156,275);
   graph->SetPoint(47,675,279.0491787);
   graph->SetPoint(48,700,280.0205412);
   graph->SetPoint(49,710.4594395,275);
   graph->SetPoint(50,725,264.1665952);
   graph->SetPoint(51,735.9089164,250);
   graph->SetPoint(52,750,228.5889063);
   graph->SetPoint(53,752.6646147,225);
   graph->SetPoint(54,771.5888494,200);
   graph->SetPoint(55,775,193.6792774);
   graph->SetPoint(56,781.2776488,175);
   graph->SetPoint(57,786.7213079,150);
   graph->SetPoint(58,795.5978067,125);
   graph->SetPoint(59,800,110.4491205);
   graph->SetPoint(60,802.2105237,100);
   graph->SetPoint(61,802.5525151,75);
   graph->SetPoint(62,801.6387071,50);
   graph->SetPoint(63,800,33.42604343);
   graph->SetPoint(64,798.8671506,25);
   graph->SetPoint(65,789.3338328,0);
   
   TH1F *Graph_Graph36 = new TH1F("Graph_Graph36","Graph",100,275.9335,850.427);
   Graph_Graph36->SetMinimum(0);
   Graph_Graph36->SetMaximum(308.0226);
   Graph_Graph36->SetDirectory(0);
   Graph_Graph36->SetStats(0);

   ci = TColor::GetColor("#0000ff");
   Graph_Graph36->SetLineColor(ci);
   Graph_Graph36->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph36->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph36->GetYaxis()->SetTitleOffset(1.2);
   graph->SetHistogram(Graph_Graph36);
   
   graph->Draw("f");
   
   graph = new TGraph(35);
   graph->SetName("g_excl_xsec_obs");
   graph->SetTitle("g_excl_xsec_obs");

   ci = TColor::GetColor("#cccccc");
   graph->SetFillColor(ci);
   graph->SetLineWidth(4);
   graph->SetPoint(0,732.6873038,0);
   graph->SetPoint(1,747.9577615,25);
   graph->SetPoint(2,750,30.10403714);
   graph->SetPoint(3,755.7630623,50);
   graph->SetPoint(4,752.8049722,75);
   graph->SetPoint(5,750,84.70582102);
   graph->SetPoint(6,744.3953619,100);
   graph->SetPoint(7,734.7763997,125);
   graph->SetPoint(8,726.7456928,150);
   graph->SetPoint(9,725,153.2646347);
   graph->SetPoint(10,706.8636617,175);
   graph->SetPoint(11,700,181.762431);
   graph->SetPoint(12,675,192.4585983);
   graph->SetPoint(13,653.2131846,200);
   graph->SetPoint(14,650,200.6083894);
   graph->SetPoint(15,625,200.2400927);
   graph->SetPoint(16,624.2881126,200);
   graph->SetPoint(17,600,187.7478646);
   graph->SetPoint(18,585.531126,175);
   graph->SetPoint(19,575,169.0343097);
   graph->SetPoint(20,550,159.2988007);
   graph->SetPoint(21,534.086137,150);
   graph->SetPoint(22,525,144.7635487);
   graph->SetPoint(23,500.1699694,125);
   graph->SetPoint(24,500,124.8286745);
   graph->SetPoint(25,475,102.0862696);
   graph->SetPoint(26,472.0849538,100);
   graph->SetPoint(27,450,75.2172707);
   graph->SetPoint(28,449.7409359,75);
   graph->SetPoint(29,425,51.71386312);
   graph->SetPoint(30,423.6699106,50);
   graph->SetPoint(31,412.0997532,25);
   graph->SetPoint(32,412.1111122,0);
   graph->SetPoint(33,1300,-1300);
   graph->SetPoint(34,-1300,-1300);
   
   TH1F *Graph_Graph_Graph_g_excl_xsec_obs192337 = new TH1F("Graph_Graph_Graph_g_excl_xsec_obs192337","g_excl_xsec_obs",100,-1560,1560);
   Graph_Graph_Graph_g_excl_xsec_obs192337->SetMinimum(-1450.061);
   Graph_Graph_Graph_g_excl_xsec_obs192337->SetMaximum(350.6692);
   Graph_Graph_Graph_g_excl_xsec_obs192337->SetDirectory(0);
   Graph_Graph_Graph_g_excl_xsec_obs192337->SetStats(0);

   ci = TColor::GetColor("#0000ff");
   Graph_Graph_Graph_g_excl_xsec_obs192337->SetLineColor(ci);
   Graph_Graph_Graph_g_excl_xsec_obs192337->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_Graph_g_excl_xsec_obs192337->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_Graph_g_excl_xsec_obs192337->GetYaxis()->SetTitleOffset(1.2);
   graph->SetHistogram(Graph_Graph_Graph_g_excl_xsec_obs192337);
   
   graph->Draw("l");
   
   graph = new TGraph(35);
   graph->SetName("g_excl_xsec_obs_p1");
   graph->SetTitle("g_excl_xsec_obs_p1");

   ci = TColor::GetColor("#ff807e");
   graph->SetFillColor(ci);
   graph->SetLineWidth(2);
   graph->SetPoint(0,765.8217207,0);
   graph->SetPoint(1,775,14.94337207);
   graph->SetPoint(2,780.5020829,25);
   graph->SetPoint(3,786.0059283,50);
   graph->SetPoint(4,784.3880461,75);
   graph->SetPoint(5,782.2033295,100);
   graph->SetPoint(6,776.9028534,125);
   graph->SetPoint(7,775,132.6977979);
   graph->SetPoint(8,769.5522409,150);
   graph->SetPoint(9,755.2023033,175);
   graph->SetPoint(10,750,181.2160354);
   graph->SetPoint(11,732.54929,200);
   graph->SetPoint(12,725,206.3995226);
   graph->SetPoint(13,700,221.3908475);
   graph->SetPoint(14,675,220.6650479);
   graph->SetPoint(15,650,220.3012891);
   graph->SetPoint(16,625,217.8965032);
   graph->SetPoint(17,600,207.476152);
   graph->SetPoint(18,592.7578469,200);
   graph->SetPoint(19,575,183.1035662);
   graph->SetPoint(20,552.6067568,175);
   graph->SetPoint(21,550,173.9060404);
   graph->SetPoint(22,525,155.8059);
   graph->SetPoint(23,516.0620411,150);
   graph->SetPoint(24,500,136.5320106);
   graph->SetPoint(25,489.4248761,125);
   graph->SetPoint(26,475,111.7378094);
   graph->SetPoint(27,458.8758964,100);
   graph->SetPoint(28,450,89.90697808);
   graph->SetPoint(29,432.3956359,75);
   graph->SetPoint(30,425,67.98346107);
   graph->SetPoint(31,410.912233,50);
   graph->SetPoint(32,400,28.97309801);
   graph->SetPoint(33,398.1722208,25);
   graph->SetPoint(34,396.3189423,0);
   
   TH1F *Graph_Graph_Graph_g_excl_xsec_obs_p172438 = new TH1F("Graph_Graph_Graph_g_excl_xsec_obs_p172438","g_excl_xsec_obs_p1",100,357.3502,824.9746);
   Graph_Graph_Graph_g_excl_xsec_obs_p172438->SetMinimum(0);
   Graph_Graph_Graph_g_excl_xsec_obs_p172438->SetMaximum(243.5299);
   Graph_Graph_Graph_g_excl_xsec_obs_p172438->SetDirectory(0);
   Graph_Graph_Graph_g_excl_xsec_obs_p172438->SetStats(0);

   ci = TColor::GetColor("#0000ff");
   Graph_Graph_Graph_g_excl_xsec_obs_p172438->SetLineColor(ci);
   Graph_Graph_Graph_g_excl_xsec_obs_p172438->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_Graph_g_excl_xsec_obs_p172438->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_Graph_g_excl_xsec_obs_p172438->GetYaxis()->SetTitleOffset(1.2);
   graph->SetHistogram(Graph_Graph_Graph_g_excl_xsec_obs_p172438);
   
   graph->Draw("l");
   
   graph = new TGraph(26);
   graph->SetName("g_excl_xsec_obs_m1");
   graph->SetTitle("g_excl_xsec_obs_m1");

   ci = TColor::GetColor("#ff807e");
   graph->SetFillColor(ci);
   graph->SetLineWidth(2);
   graph->SetPoint(0,689.8972417,0);
   graph->SetPoint(1,700,13.6525454);
   graph->SetPoint(2,706.5021756,25);
   graph->SetPoint(3,714.7115971,50);
   graph->SetPoint(4,714.1160825,75);
   graph->SetPoint(5,704.0778059,100);
   graph->SetPoint(6,700,109.3440314);
   graph->SetPoint(7,691.42717,125);
   graph->SetPoint(8,675,147.981579);
   graph->SetPoint(9,670.1424951,150);
   graph->SetPoint(10,650,156.2603613);
   graph->SetPoint(11,625,166.4181237);
   graph->SetPoint(12,600,163.0861612);
   graph->SetPoint(13,575,152.9194013);
   graph->SetPoint(14,566.5193286,150);
   graph->SetPoint(15,550,142.9328946);
   graph->SetPoint(16,525,130.7246669);
   graph->SetPoint(17,517.6280085,125);
   graph->SetPoint(18,500,107.5719542);
   graph->SetPoint(19,490.8930685,100);
   graph->SetPoint(20,475,80.27090385);
   graph->SetPoint(21,470.4905559,75);
   graph->SetPoint(22,451.7671939,50);
   graph->SetPoint(23,450,47.5252075);
   graph->SetPoint(24,427.6160573,25);
   graph->SetPoint(25,430.4640064,0);
   
   TH1F *Graph_Graph_Graph_g_excl_xsec_obs_m182539 = new TH1F("Graph_Graph_Graph_g_excl_xsec_obs_m182539","g_excl_xsec_obs_m1",100,398.9065,743.4212);
   Graph_Graph_Graph_g_excl_xsec_obs_m182539->SetMinimum(0);
   Graph_Graph_Graph_g_excl_xsec_obs_m182539->SetMaximum(183.0599);
   Graph_Graph_Graph_g_excl_xsec_obs_m182539->SetDirectory(0);
   Graph_Graph_Graph_g_excl_xsec_obs_m182539->SetStats(0);

   ci = TColor::GetColor("#0000ff");
   Graph_Graph_Graph_g_excl_xsec_obs_m182539->SetLineColor(ci);
   Graph_Graph_Graph_g_excl_xsec_obs_m182539->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_Graph_g_excl_xsec_obs_m182539->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_Graph_g_excl_xsec_obs_m182539->GetYaxis()->SetTitleOffset(1.2);
   graph->SetHistogram(Graph_Graph_Graph_g_excl_xsec_obs_m182539);
   
   graph->Draw("l");
   
   graph = new TGraph(32);
   graph->SetName("g_excl_xsec_exp");
   graph->SetTitle("g_excl_xsec_exp");

   ci = TColor::GetColor("#ff807e");
   graph->SetFillColor(ci);
   graph->SetLineStyle(2);
   graph->SetLineWidth(4);
   graph->SetPoint(0,712.345825,0);
   graph->SetPoint(1,719.5169775,25);
   graph->SetPoint(2,721.820535,50);
   graph->SetPoint(3,719.5264423,75);
   graph->SetPoint(4,714.3387637,100);
   graph->SetPoint(5,710.8538831,125);
   graph->SetPoint(6,702.9601028,150);
   graph->SetPoint(7,700,155.3741485);
   graph->SetPoint(8,688.0062844,175);
   graph->SetPoint(9,675,192.2379813);
   graph->SetPoint(10,668.5403813,200);
   graph->SetPoint(11,650,215.1475791);
   graph->SetPoint(12,625,222.615186);
   graph->SetPoint(13,600,217.1086185);
   graph->SetPoint(14,575,203.3723104);
   graph->SetPoint(15,568.3355236,200);
   graph->SetPoint(16,550,189.4579088);
   graph->SetPoint(17,525,175.0117595);
   graph->SetPoint(18,524.9824837,175);
   graph->SetPoint(19,500,156.5937782);
   graph->SetPoint(20,490.8954995,150);
   graph->SetPoint(21,475,136.6408617);
   graph->SetPoint(22,459.3453746,125);
   graph->SetPoint(23,450,117.1594315);
   graph->SetPoint(24,428.1941897,100);
   graph->SetPoint(25,425,96.76726875);
   graph->SetPoint(26,401.9313796,75);
   graph->SetPoint(27,400,72.80999182);
   graph->SetPoint(28,377.8153178,50);
   graph->SetPoint(29,375,44.85054321);
   graph->SetPoint(30,365.8387157,25);
   graph->SetPoint(31,363.2405252,0);
   
   TH1F *Graph_Graph_Graph_g_excl_xsec_exp32040 = new TH1F("Graph_Graph_Graph_g_excl_xsec_exp32040","g_excl_xsec_exp",100,327.3825,757.6785);
   Graph_Graph_Graph_g_excl_xsec_exp32040->SetMinimum(0);
   Graph_Graph_Graph_g_excl_xsec_exp32040->SetMaximum(244.8767);
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
      tex = new TLatex(0.16,0.9,"pp #rightarrow #tilde{t}#tilde{t}, #tilde{t} #rightarrow t#tilde{#chi}^{0}_{1}");
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
      tex = new TLatex(0.18,0.7,"Razor 0L Asymptotic");
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
