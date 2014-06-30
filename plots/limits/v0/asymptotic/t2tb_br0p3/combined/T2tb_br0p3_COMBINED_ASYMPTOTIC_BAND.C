{
//=========Macro generated from canvas: cBrazil_/cBrazil_
//=========  (Sun Jun 29 21:56:15 2014) by ROOT version5.34/03
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
   
   TH2D *h_ul_xsec_exp_smoothEMPTY = new TH2D("h_ul_xsec_exp_smoothEMPTY","Expected combined #sigma #times Branching Fraction (t2tb_br0p3)EMPTY",31,137.5,912.5,29,-12.5,712.5);

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
   
   graph = new TGraph(90);
   graph->SetName("Graph");
   graph->SetTitle("Graph");

   ci = TColor::GetColor("#ffcc00");
   graph->SetFillColor(ci);
   graph->SetPoint(0,576.3157375,0);
   graph->SetPoint(1,600,24.31922294);
   graph->SetPoint(2,600.5860945,25);
   graph->SetPoint(3,625,48.107986);
   graph->SetPoint(4,626.9240371,50);
   graph->SetPoint(5,644.4771867,75);
   graph->SetPoint(6,650,91.04039349);
   graph->SetPoint(7,652.8976554,100);
   graph->SetPoint(8,654.5439298,125);
   graph->SetPoint(9,652.5775517,150);
   graph->SetPoint(10,650,162.0438928);
   graph->SetPoint(11,646.7814959,175);
   graph->SetPoint(12,637.0758739,200);
   graph->SetPoint(13,625,224.9139196);
   graph->SetPoint(14,624.9292967,225);
   graph->SetPoint(15,600,240.8131644);
   graph->SetPoint(16,575,240.3302465);
   graph->SetPoint(17,550,231.8109428);
   graph->SetPoint(18,533.2768473,225);
   graph->SetPoint(19,525,220.8843464);
   graph->SetPoint(20,500,206.4722711);
   graph->SetPoint(21,488.0602352,200);
   graph->SetPoint(22,475,191.4448021);
   graph->SetPoint(23,450,175.7939861);
   graph->SetPoint(24,448.872113,175);
   graph->SetPoint(25,425,154.5501617);
   graph->SetPoint(26,419.5985418,150);
   graph->SetPoint(27,400,132.0714862);
   graph->SetPoint(28,391.8419727,125);
   graph->SetPoint(29,375,109.3158072);
   graph->SetPoint(30,363.7769606,100);
   graph->SetPoint(31,350,85.33766156);
   graph->SetPoint(32,339.5101457,75);
   graph->SetPoint(33,325,54.0948433);
   graph->SetPoint(34,322.3864324,50);
   graph->SetPoint(35,318.0495795,25);
   graph->SetPoint(36,324.2140452,0);
   graph->SetPoint(37,239.3404082,0);
   graph->SetPoint(38,249.3888327,25);
   graph->SetPoint(39,250,26.24266744);
   graph->SetPoint(40,262.2679591,50);
   graph->SetPoint(41,275,68.19489837);
   graph->SetPoint(42,280.0746984,75);
   graph->SetPoint(43,300,95.1843994);
   graph->SetPoint(44,304.8772013,100);
   graph->SetPoint(45,325,114.1137673);
   graph->SetPoint(46,338.5502786,125);
   graph->SetPoint(47,350,133.1264093);
   graph->SetPoint(48,369.7559222,150);
   graph->SetPoint(49,375,153.8675671);
   graph->SetPoint(50,397.0053264,175);
   graph->SetPoint(51,400,177.2564989);
   graph->SetPoint(52,425,195.2239666);
   graph->SetPoint(53,430.7455247,200);
   graph->SetPoint(54,450,213.1934091);
   graph->SetPoint(55,465.8592086,225);
   graph->SetPoint(56,475,231.2024629);
   graph->SetPoint(57,499.3213035,250);
   graph->SetPoint(58,500,250.4042685);
   graph->SetPoint(59,525,266.4454988);
   graph->SetPoint(60,537.0262427,275);
   graph->SetPoint(61,550,282.9561532);
   graph->SetPoint(62,572.6094071,300);
   graph->SetPoint(63,575,301.5433403);
   graph->SetPoint(64,600,314.8440279);
   graph->SetPoint(65,619.3890736,325);
   graph->SetPoint(66,625,327.535784);
   graph->SetPoint(67,650,335.9332578);
   graph->SetPoint(68,675,343.8443108);
   graph->SetPoint(69,700,342.2250423);
   graph->SetPoint(70,722.1780656,325);
   graph->SetPoint(71,725,321.1564534);
   graph->SetPoint(72,736.0144617,300);
   graph->SetPoint(73,745.0295038,275);
   graph->SetPoint(74,750,261.2822423);
   graph->SetPoint(75,754.0632317,250);
   graph->SetPoint(76,761.5424725,225);
   graph->SetPoint(77,770.4450176,200);
   graph->SetPoint(78,775,184.8018285);
   graph->SetPoint(79,777.349129,175);
   graph->SetPoint(80,781.7636034,150);
   graph->SetPoint(81,782.225332,125);
   graph->SetPoint(82,779.5575719,100);
   graph->SetPoint(83,775,83.50940042);
   graph->SetPoint(84,772.1291662,75);
   graph->SetPoint(85,756.6944822,50);
   graph->SetPoint(86,750,42.84428831);
   graph->SetPoint(87,732.0413682,25);
   graph->SetPoint(88,725,16.33762289);
   graph->SetPoint(89,711.3195618,0);
   
   TH1F *Graph_Graph36 = new TH1F("Graph_Graph36","Graph",100,185.0519,836.5138);
   Graph_Graph36->SetMinimum(0);
   Graph_Graph36->SetMaximum(378.2287);
   Graph_Graph36->SetDirectory(0);
   Graph_Graph36->SetStats(0);

   ci = TColor::GetColor("#0000ff");
   Graph_Graph36->SetLineColor(ci);
   Graph_Graph36->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph36->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph36->GetYaxis()->SetTitleOffset(1.2);
   graph->SetHistogram(Graph_Graph36);
   
   graph->Draw("f");
   
   graph = new TGraph(46);
   graph->SetName("g_excl_xsec_obs");
   graph->SetTitle("g_excl_xsec_obs");

   ci = TColor::GetColor("#cccccc");
   graph->SetFillColor(ci);
   graph->SetLineWidth(4);
   graph->SetPoint(0,603.4567725,0);
   graph->SetPoint(1,625,18.45181172);
   graph->SetPoint(2,634.1284012,25);
   graph->SetPoint(3,650,34.59482577);
   graph->SetPoint(4,674.2264257,50);
   graph->SetPoint(5,675,50.54770639);
   graph->SetPoint(6,700,62.38769508);
   graph->SetPoint(7,717.2423624,75);
   graph->SetPoint(8,725,86.95943031);
   graph->SetPoint(9,731.408044,100);
   graph->SetPoint(10,728.1460503,125);
   graph->SetPoint(11,725,133.6061571);
   graph->SetPoint(12,717.040593,150);
   graph->SetPoint(13,700,168.3952844);
   graph->SetPoint(14,694.0131403,175);
   graph->SetPoint(15,675,187.7895686);
   graph->SetPoint(16,650,197.5397467);
   graph->SetPoint(17,647.3043444,200);
   graph->SetPoint(18,625,214.7501716);
   graph->SetPoint(19,604.1328902,225);
   graph->SetPoint(20,600,226.4543423);
   graph->SetPoint(21,575,231.8543833);
   graph->SetPoint(22,550,226.279383);
   graph->SetPoint(23,546.6618363,225);
   graph->SetPoint(24,525,216.785523);
   graph->SetPoint(25,500,207.7316702);
   graph->SetPoint(26,480.4004951,200);
   graph->SetPoint(27,475,196.8830595);
   graph->SetPoint(28,450,180.3875658);
   graph->SetPoint(29,442.3895843,175);
   graph->SetPoint(30,425,162.2289905);
   graph->SetPoint(31,402.3832797,150);
   graph->SetPoint(32,400,148.2613594);
   graph->SetPoint(33,375,130.4516311);
   graph->SetPoint(34,367.3742695,125);
   graph->SetPoint(35,350,110.7468274);
   graph->SetPoint(36,330.7927707,100);
   graph->SetPoint(37,325,94.94298011);
   graph->SetPoint(38,305.4340688,75);
   graph->SetPoint(39,300,70.20839078);
   graph->SetPoint(40,284.3462649,50);
   graph->SetPoint(41,275,33.24727698);
   graph->SetPoint(42,270.0122305,25);
   graph->SetPoint(43,262.6339161,0);
   graph->SetPoint(44,1300,-1300);
   graph->SetPoint(45,-1300,-1300);
   
   TH1F *Graph_Graph_Graph_g_excl_xsec_obs192337 = new TH1F("Graph_Graph_Graph_g_excl_xsec_obs192337","g_excl_xsec_obs",100,-1560,1560);
   Graph_Graph_Graph_g_excl_xsec_obs192337->SetMinimum(-1453.185);
   Graph_Graph_Graph_g_excl_xsec_obs192337->SetMaximum(385.0398);
   Graph_Graph_Graph_g_excl_xsec_obs192337->SetDirectory(0);
   Graph_Graph_Graph_g_excl_xsec_obs192337->SetStats(0);

   ci = TColor::GetColor("#0000ff");
   Graph_Graph_Graph_g_excl_xsec_obs192337->SetLineColor(ci);
   Graph_Graph_Graph_g_excl_xsec_obs192337->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_Graph_g_excl_xsec_obs192337->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_Graph_g_excl_xsec_obs192337->GetYaxis()->SetTitleOffset(1.2);
   graph->SetHistogram(Graph_Graph_Graph_g_excl_xsec_obs192337);
   
   graph->Draw("l");
   
   graph = new TGraph(45);
   graph->SetName("g_excl_xsec_obs_p1");
   graph->SetTitle("g_excl_xsec_obs_p1");

   ci = TColor::GetColor("#ff807e");
   graph->SetFillColor(ci);
   graph->SetLineWidth(2);
   graph->SetPoint(0,651.6987412,0);
   graph->SetPoint(1,675,17.01360831);
   graph->SetPoint(2,687.9723465,25);
   graph->SetPoint(3,700,30.97272114);
   graph->SetPoint(4,725,46.29336846);
   graph->SetPoint(5,730.2591184,50);
   graph->SetPoint(6,750,66.35779683);
   graph->SetPoint(7,758.0532289,75);
   graph->SetPoint(8,767.4225578,100);
   graph->SetPoint(9,767.7849644,125);
   graph->SetPoint(10,759.4956616,150);
   graph->SetPoint(11,750,165.9076465);
   graph->SetPoint(12,744.0395506,175);
   graph->SetPoint(13,725,195.7455912);
   graph->SetPoint(14,714.5201435,200);
   graph->SetPoint(15,700,208.1875484);
   graph->SetPoint(16,675,222.7138509);
   graph->SetPoint(17,665.9772346,225);
   graph->SetPoint(18,650,229.7014099);
   graph->SetPoint(19,625,242.998511);
   graph->SetPoint(20,600,249.6587727);
   graph->SetPoint(21,575,247.0617313);
   graph->SetPoint(22,550,238.0926907);
   graph->SetPoint(23,525,226.9678976);
   graph->SetPoint(24,520.0338968,225);
   graph->SetPoint(25,500,215.7479356);
   graph->SetPoint(26,475,204.4903031);
   graph->SetPoint(27,466.1733188,200);
   graph->SetPoint(28,450,188.6603213);
   graph->SetPoint(29,430.8282549,175);
   graph->SetPoint(30,425,170.6988913);
   graph->SetPoint(31,400,154.9448886);
   graph->SetPoint(32,391.6706758,150);
   graph->SetPoint(33,375,137.6813421);
   graph->SetPoint(34,357.2099028,125);
   graph->SetPoint(35,350,119.0975505);
   graph->SetPoint(36,325,103.8303772);
   graph->SetPoint(37,318.9450514,100);
   graph->SetPoint(38,300,80.97131379);
   graph->SetPoint(39,295.6139071,75);
   graph->SetPoint(40,275.3877671,50);
   graph->SetPoint(41,275,49.3054236);
   graph->SetPoint(42,260.2923391,25);
   graph->SetPoint(43,250,0.1415698975);
   graph->SetPoint(44,249.9317599,0);
   
   TH1F *Graph_Graph_Graph_g_excl_xsec_obs_p172438 = new TH1F("Graph_Graph_Graph_g_excl_xsec_obs_p172438","g_excl_xsec_obs_p1",100,198.1464,819.5703);
   Graph_Graph_Graph_g_excl_xsec_obs_p172438->SetMinimum(0);
   Graph_Graph_Graph_g_excl_xsec_obs_p172438->SetMaximum(274.6246);
   Graph_Graph_Graph_g_excl_xsec_obs_p172438->SetDirectory(0);
   Graph_Graph_Graph_g_excl_xsec_obs_p172438->SetStats(0);

   ci = TColor::GetColor("#0000ff");
   Graph_Graph_Graph_g_excl_xsec_obs_p172438->SetLineColor(ci);
   Graph_Graph_Graph_g_excl_xsec_obs_p172438->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_Graph_g_excl_xsec_obs_p172438->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_Graph_g_excl_xsec_obs_p172438->GetYaxis()->SetTitleOffset(1.2);
   graph->SetHistogram(Graph_Graph_Graph_g_excl_xsec_obs_p172438);
   
   graph->Draw("l");
   
   graph = new TGraph(37);
   graph->SetName("g_excl_xsec_obs_m1");
   graph->SetTitle("g_excl_xsec_obs_m1");

   ci = TColor::GetColor("#ff807e");
   graph->SetFillColor(ci);
   graph->SetLineWidth(2);
   graph->SetPoint(0,555.5637794,0);
   graph->SetPoint(1,575,16.27930064);
   graph->SetPoint(2,584.0766462,25);
   graph->SetPoint(3,600,36.08046374);
   graph->SetPoint(4,617.9028091,50);
   graph->SetPoint(5,625,57.80610848);
   graph->SetPoint(6,650,74.23669401);
   graph->SetPoint(7,651.0532029,75);
   graph->SetPoint(8,667.0780316,100);
   graph->SetPoint(9,659.6005376,125);
   graph->SetPoint(10,650,131.5796946);
   graph->SetPoint(11,641.7182108,150);
   graph->SetPoint(12,625.8943276,175);
   graph->SetPoint(13,625,175.8686074);
   graph->SetPoint(14,600.1365137,200);
   graph->SetPoint(15,600,200.0838159);
   graph->SetPoint(16,575,212.2979015);
   graph->SetPoint(17,550,210.0667388);
   graph->SetPoint(18,525,205.3955909);
   graph->SetPoint(19,501.6868785,200);
   graph->SetPoint(20,500,199.4383425);
   graph->SetPoint(21,475,185.3856815);
   graph->SetPoint(22,456.7904115,175);
   graph->SetPoint(23,450,170.0420262);
   graph->SetPoint(24,425,153.7590896);
   graph->SetPoint(25,418.133339,150);
   graph->SetPoint(26,400,136.643193);
   graph->SetPoint(27,379.9202481,125);
   graph->SetPoint(28,375,121.427217);
   graph->SetPoint(29,350,102.3961043);
   graph->SetPoint(30,345.7016796,100);
   graph->SetPoint(31,325,81.97931633);
   graph->SetPoint(32,318.2727038,75);
   graph->SetPoint(33,300,58.67718294);
   graph->SetPoint(34,293.2881489,50);
   graph->SetPoint(35,281.0250926,25);
   graph->SetPoint(36,275.4446168,0);
   
   TH1F *Graph_Graph_Graph_g_excl_xsec_obs_m182539 = new TH1F("Graph_Graph_Graph_g_excl_xsec_obs_m182539","g_excl_xsec_obs_m1",100,236.2813,706.2414);
   Graph_Graph_Graph_g_excl_xsec_obs_m182539->SetMinimum(0);
   Graph_Graph_Graph_g_excl_xsec_obs_m182539->SetMaximum(233.5277);
   Graph_Graph_Graph_g_excl_xsec_obs_m182539->SetDirectory(0);
   Graph_Graph_Graph_g_excl_xsec_obs_m182539->SetStats(0);

   ci = TColor::GetColor("#0000ff");
   Graph_Graph_Graph_g_excl_xsec_obs_m182539->SetLineColor(ci);
   Graph_Graph_Graph_g_excl_xsec_obs_m182539->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_Graph_g_excl_xsec_obs_m182539->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_Graph_g_excl_xsec_obs_m182539->GetYaxis()->SetTitleOffset(1.2);
   graph->SetHistogram(Graph_Graph_Graph_g_excl_xsec_obs_m182539);
   
   graph->Draw("l");
   
   graph = new TGraph(44);
   graph->SetName("g_excl_xsec_exp");
   graph->SetTitle("g_excl_xsec_exp");

   ci = TColor::GetColor("#ff807e");
   graph->SetFillColor(ci);
   graph->SetLineStyle(2);
   graph->SetLineWidth(4);
   graph->SetPoint(0,640.861235,0);
   graph->SetPoint(1,650,10.6985765);
   graph->SetPoint(2,662.1673471,25);
   graph->SetPoint(3,675,37.31566725);
   graph->SetPoint(4,688.0785292,50);
   graph->SetPoint(5,700,64.77519474);
   graph->SetPoint(6,708.0388801,75);
   graph->SetPoint(7,716.5587614,100);
   graph->SetPoint(8,718.1882399,125);
   graph->SetPoint(9,715.4790142,150);
   graph->SetPoint(10,711.5372246,175);
   graph->SetPoint(11,704.1060768,200);
   graph->SetPoint(12,700,214.0761057);
   graph->SetPoint(13,696.4780234,225);
   graph->SetPoint(14,687.0076164,250);
   graph->SetPoint(15,675,270.449472);
   graph->SetPoint(16,671.1217394,275);
   graph->SetPoint(17,650,288.2753119);
   graph->SetPoint(18,625,291.6372687);
   graph->SetPoint(19,600,286.4213941);
   graph->SetPoint(20,575,276.2180887);
   graph->SetPoint(21,572.9179262,275);
   graph->SetPoint(22,550,260.4056143);
   graph->SetPoint(23,531.0834345,250);
   graph->SetPoint(24,525,246.0406145);
   graph->SetPoint(25,500,229.7959156);
   graph->SetPoint(26,492.4303569,225);
   graph->SetPoint(27,475,211.9171636);
   graph->SetPoint(28,454.7194671,200);
   graph->SetPoint(29,450,196.3825725);
   graph->SetPoint(30,425,177.1236244);
   graph->SetPoint(31,421.8618268,175);
   graph->SetPoint(32,400,154.9307088);
   graph->SetPoint(33,394.5674326,150);
   graph->SetPoint(34,375,131.6812386);
   graph->SetPoint(35,366.4729992,125);
   graph->SetPoint(36,350,110.0475259);
   graph->SetPoint(37,336.4293909,100);
   graph->SetPoint(38,325,88.3641483);
   graph->SetPoint(39,311.6741743,75);
   graph->SetPoint(40,300,59.14034544);
   graph->SetPoint(41,293.8061594,50);
   graph->SetPoint(42,285.7916751,25);
   graph->SetPoint(43,283.1893572,0);
   
   TH1F *Graph_Graph_Graph_g_excl_xsec_exp32040 = new TH1F("Graph_Graph_Graph_g_excl_xsec_exp32040","g_excl_xsec_exp",100,239.6895,761.6881);
   Graph_Graph_Graph_g_excl_xsec_exp32040->SetMinimum(0);
   Graph_Graph_Graph_g_excl_xsec_exp32040->SetMaximum(320.801);
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
