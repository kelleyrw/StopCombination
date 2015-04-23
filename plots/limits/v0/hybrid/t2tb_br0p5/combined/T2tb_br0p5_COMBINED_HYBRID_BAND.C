{
//=========Macro generated from canvas: cBrazil_/cBrazil_
//=========  (Thu Apr 23 07:27:49 2015) by ROOT version5.34/03
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
   
   TH2D *h_ul_xsec_obs_smoothEMPTY = new TH2D("h_ul_xsec_obs_smoothEMPTY","Observed combined #sigma #times Branching Fraction (t2tb_br0p5)EMPTY",31,137.5,912.5,29,-12.5,712.5);

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
   
   graph = new TGraph(77);
   graph->SetName("Graph");
   graph->SetTitle("Graph");

   ci = TColor::GetColor("#ffcc00");
   graph->SetFillColor(ci);
   graph->SetPoint(0,581.137863,0);
   graph->SetPoint(1,600,20.64613979);
   graph->SetPoint(2,603.2605801,25);
   graph->SetPoint(3,623.8838589,50);
   graph->SetPoint(4,625,52.6493273);
   graph->SetPoint(5,633.2535551,75);
   graph->SetPoint(6,634.9590268,100);
   graph->SetPoint(7,634.0005588,125);
   graph->SetPoint(8,629.0426273,150);
   graph->SetPoint(9,625,161.3658903);
   graph->SetPoint(10,617.5471348,175);
   graph->SetPoint(11,600,191.8203288);
   graph->SetPoint(12,575,198.3511961);
   graph->SetPoint(13,550,191.2389219);
   graph->SetPoint(14,525,181.2372399);
   graph->SetPoint(15,508.8083836,175);
   graph->SetPoint(16,500,171.0174305);
   graph->SetPoint(17,475,155.0772277);
   graph->SetPoint(18,466.9535593,150);
   graph->SetPoint(19,450,137.8868645);
   graph->SetPoint(20,432.9724698,125);
   graph->SetPoint(21,425,118.2605468);
   graph->SetPoint(22,401.4352434,100);
   graph->SetPoint(23,400,98.47175043);
   graph->SetPoint(24,375.2088073,75);
   graph->SetPoint(25,375,74.66287044);
   graph->SetPoint(26,357.5055824,50);
   graph->SetPoint(27,352.8810881,25);
   graph->SetPoint(28,354.4390061,0);
   graph->SetPoint(29,657.3362605,0);
   graph->SetPoint(30,670.9372933,25);
   graph->SetPoint(31,675,31.85886577);
   graph->SetPoint(32,687.6589234,50);
   graph->SetPoint(33,699.4754046,75);
   graph->SetPoint(34,700,77.98603503);
   graph->SetPoint(35,703.975875,100);
   graph->SetPoint(36,704.8359596,125);
   graph->SetPoint(37,702.2843906,150);
   graph->SetPoint(38,700,157.7609701);
   graph->SetPoint(39,694.5831105,175);
   graph->SetPoint(40,683.139304,200);
   graph->SetPoint(41,675,212.6577156);
   graph->SetPoint(42,665.3919606,225);
   graph->SetPoint(43,650,242.1073536);
   graph->SetPoint(44,637.3555383,250);
   graph->SetPoint(45,625,253.4791249);
   graph->SetPoint(46,600,254.0764834);
   graph->SetPoint(47,583.925188,250);
   graph->SetPoint(48,575,247.2528492);
   graph->SetPoint(49,550,235.3079012);
   graph->SetPoint(50,528.8263504,225);
   graph->SetPoint(51,525,222.5260202);
   graph->SetPoint(52,500,204.5307251);
   graph->SetPoint(53,492.7873871,200);
   graph->SetPoint(54,475,187.951085);
   graph->SetPoint(55,453.7820752,175);
   graph->SetPoint(56,450,172.1837554);
   graph->SetPoint(57,425,153.6195609);
   graph->SetPoint(58,420.0320635,150);
   graph->SetPoint(59,400,133.2561946);
   graph->SetPoint(60,383.9485672,125);
   graph->SetPoint(61,375,119.0411156);
   graph->SetPoint(62,350,101.5615028);
   graph->SetPoint(63,347.8288337,100);
   graph->SetPoint(64,325,79.74792651);
   graph->SetPoint(65,319.1558514,75);
   graph->SetPoint(66,300,55.77714694);
   graph->SetPoint(67,292.8053235,50);
   graph->SetPoint(68,275,32.46906215);
   graph->SetPoint(69,268.1243405,25);
   graph->SetPoint(70,252.4446293,0);
   graph->SetPoint(71,200,-12.5);
   graph->SetPoint(72,175,-12.5);
   graph->SetPoint(73,150,-12.5);
   graph->SetPoint(74,146.3349478,0);
   graph->SetPoint(75,125,1.630019028);
   graph->SetPoint(76,120.0570671,0);
   
   TH1F *Graph_Graph36 = new TH1F("Graph_Graph36","Graph",100,61.57918,763.3138);
   Graph_Graph36->SetMinimum(-39.15765);
   Graph_Graph36->SetMaximum(280.7341);
   Graph_Graph36->SetDirectory(0);
   Graph_Graph36->SetStats(0);

   ci = TColor::GetColor("#0000ff");
   Graph_Graph36->SetLineColor(ci);
   Graph_Graph36->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph36->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph36->GetYaxis()->SetTitleOffset(1.2);
   graph->SetHistogram(Graph_Graph36);
   
   graph->Draw("f");
   
   graph = new TGraph(49);
   graph->SetName("g_excl_xsec_obs");
   graph->SetTitle("g_excl_xsec_obs");

   ci = TColor::GetColor("#cccccc");
   graph->SetFillColor(ci);
   graph->SetLineWidth(4);
   graph->SetPoint(0,175,29.23912602);
   graph->SetPoint(1,175.0021716,25);
   graph->SetPoint(2,175,24.99566649);
   graph->SetPoint(3,150,16.59787916);
   graph->SetPoint(4,148.8058802,25);
   graph->SetPoint(5,150,26.70034245);
   graph->SetPoint(6,175,29.23912602);
   graph->SetPoint(7,150,-12.5);
   graph->SetPoint(8,175,-12.5);
   graph->SetPoint(9,200,-12.5);
   graph->SetPoint(10,266.2947272,0);
   graph->SetPoint(11,275,17.11769357);
   graph->SetPoint(12,278.4623136,25);
   graph->SetPoint(13,300,47.64803695);
   graph->SetPoint(14,302.2712802,50);
   graph->SetPoint(15,325,72.92814405);
   graph->SetPoint(16,327.0300445,75);
   graph->SetPoint(17,350,95.86456275);
   graph->SetPoint(18,354.6609231,100);
   graph->SetPoint(19,375,114.7296173);
   graph->SetPoint(20,390.0475542,125);
   graph->SetPoint(21,400,130.0731905);
   graph->SetPoint(22,425,146.4133839);
   graph->SetPoint(23,430.4651932,150);
   graph->SetPoint(24,450,161.5627311);
   graph->SetPoint(25,469.9772206,175);
   graph->SetPoint(26,475,177.611815);
   graph->SetPoint(27,500,189.7571929);
   graph->SetPoint(28,522.1944146,200);
   graph->SetPoint(29,525,200.9663974);
   graph->SetPoint(30,550,209.4722463);
   graph->SetPoint(31,575,217.6148364);
   graph->SetPoint(32,600,216.1496154);
   graph->SetPoint(33,625,206.2290664);
   graph->SetPoint(34,633.4824769,200);
   graph->SetPoint(35,650,182.5875146);
   graph->SetPoint(36,658.4541077,175);
   graph->SetPoint(37,675,150.2528321);
   graph->SetPoint(38,675.1331192,150);
   graph->SetPoint(39,680.5883408,125);
   graph->SetPoint(40,682.1906493,100);
   graph->SetPoint(41,680.5045594,75);
   graph->SetPoint(42,675,66.68463883);
   graph->SetPoint(43,665.7125988,50);
   graph->SetPoint(44,652.0137631,25);
   graph->SetPoint(45,650,21.62313548);
   graph->SetPoint(46,634.0778621,0);
   graph->SetPoint(47,1300,-1300);
   graph->SetPoint(48,-1300,-1300);
   
   TH1F *Graph_Graph_Graph_g_excl_xsec_obs192337 = new TH1F("Graph_Graph_Graph_g_excl_xsec_obs192337","g_excl_xsec_obs",100,-1560,1560);
   Graph_Graph_Graph_g_excl_xsec_obs192337->SetMinimum(-1451.761);
   Graph_Graph_Graph_g_excl_xsec_obs192337->SetMaximum(369.3763);
   Graph_Graph_Graph_g_excl_xsec_obs192337->SetDirectory(0);
   Graph_Graph_Graph_g_excl_xsec_obs192337->SetStats(0);

   ci = TColor::GetColor("#0000ff");
   Graph_Graph_Graph_g_excl_xsec_obs192337->SetLineColor(ci);
   Graph_Graph_Graph_g_excl_xsec_obs192337->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_Graph_g_excl_xsec_obs192337->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_Graph_g_excl_xsec_obs192337->GetYaxis()->SetTitleOffset(1.2);
   graph->SetHistogram(Graph_Graph_Graph_g_excl_xsec_obs192337);
   
   graph->Draw("l");
   
   graph = new TGraph(48);
   graph->SetName("g_excl_xsec_obs_p1");
   graph->SetTitle("g_excl_xsec_obs_p1");
   graph->SetFillColor(1);
   graph->SetLineWidth(2);
   graph->SetPoint(0,120.0369093,0);
   graph->SetPoint(1,125,1.551559719);
   graph->SetPoint(2,145.9890243,0);
   graph->SetPoint(3,150,-12.5);
   graph->SetPoint(4,175,-12.5);
   graph->SetPoint(5,200,-12.5);
   graph->SetPoint(6,250.1080577,0);
   graph->SetPoint(7,267.5675297,25);
   graph->SetPoint(8,275,31.97740101);
   graph->SetPoint(9,292.4705951,50);
   graph->SetPoint(10,300,57.37478005);
   graph->SetPoint(11,317.6819859,75);
   graph->SetPoint(12,325,82.08183148);
   graph->SetPoint(13,344.0674539,100);
   graph->SetPoint(14,350,104.0334114);
   graph->SetPoint(15,375,124.7903982);
   graph->SetPoint(16,375.3069075,125);
   graph->SetPoint(17,400,137.5969394);
   graph->SetPoint(18,417.6702502,150);
   graph->SetPoint(19,425,154.9639374);
   graph->SetPoint(20,450,172.2674811);
   graph->SetPoint(21,453.9984686,175);
   graph->SetPoint(22,475,186.1371218);
   graph->SetPoint(23,498.7302538,200);
   graph->SetPoint(24,500,200.5190384);
   graph->SetPoint(25,525,209.5790358);
   graph->SetPoint(26,550,222.010171);
   graph->SetPoint(27,557.1947451,225);
   graph->SetPoint(28,575,231.1938081);
   graph->SetPoint(29,600,233.883133);
   graph->SetPoint(30,625,231.5200137);
   graph->SetPoint(31,641.4204871,225);
   graph->SetPoint(32,650,219.1400913);
   graph->SetPoint(33,675,202.065374);
   graph->SetPoint(34,677.0327679,200);
   graph->SetPoint(35,700,176.2139684);
   graph->SetPoint(36,700.9830447,175);
   graph->SetPoint(37,712.236691,150);
   graph->SetPoint(38,719.7281992,125);
   graph->SetPoint(39,725,107.2748197);
   graph->SetPoint(40,726.4217486,100);
   graph->SetPoint(41,725,95.08051305);
   graph->SetPoint(42,717.6367703,75);
   graph->SetPoint(43,700,51.14858721);
   graph->SetPoint(44,699.1588725,50);
   graph->SetPoint(45,679.7449565,25);
   graph->SetPoint(46,675,16.40193413);
   graph->SetPoint(47,664.931832,0);
   
   TH1F *Graph_Graph_Graph_g_excl_xsec_obs_p172438 = new TH1F("Graph_Graph_Graph_g_excl_xsec_obs_p172438","g_excl_xsec_obs_p1",100,59.39843,787.0602);
   Graph_Graph_Graph_g_excl_xsec_obs_p172438->SetMinimum(-37.13831);
   Graph_Graph_Graph_g_excl_xsec_obs_p172438->SetMaximum(258.5214);
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
   graph->SetPoint(0,596.4356323,0);
   graph->SetPoint(1,600,4.019209847);
   graph->SetPoint(2,615.1278454,25);
   graph->SetPoint(3,625,39.57847001);
   graph->SetPoint(4,631.3577831,50);
   graph->SetPoint(5,641.5270325,75);
   graph->SetPoint(6,643.0660968,100);
   graph->SetPoint(7,637.2412567,125);
   graph->SetPoint(8,630.8816639,150);
   graph->SetPoint(9,625,161.0176358);
   graph->SetPoint(10,616.4340926,175);
   graph->SetPoint(11,600,188.8049799);
   graph->SetPoint(12,575.5783821,200);
   graph->SetPoint(13,575,200.1265371);
   graph->SetPoint(14,574.2606628,200);
   graph->SetPoint(15,550,194.81073);
   graph->SetPoint(16,525,186.1062583);
   graph->SetPoint(17,500,178.5565873);
   graph->SetPoint(18,492.0230384,175);
   graph->SetPoint(19,475,164.5005732);
   graph->SetPoint(20,450,150.8579812);
   graph->SetPoint(21,448.533618,150);
   graph->SetPoint(22,425,134.7000394);
   graph->SetPoint(23,407.1551946,125);
   graph->SetPoint(24,400,120.3045543);
   graph->SetPoint(25,375,104.6688363);
   graph->SetPoint(26,368.5817995,100);
   graph->SetPoint(27,350,83.45763869);
   graph->SetPoint(28,340.6583431,75);
   graph->SetPoint(29,325,59.05803479);
   graph->SetPoint(30,316.1848311,50);
   graph->SetPoint(31,300,33.00854356);
   graph->SetPoint(32,292.3993571,25);
   graph->SetPoint(33,284.6885939,0);
   
   TH1F *Graph_Graph_Graph_g_excl_xsec_obs_m182539 = new TH1F("Graph_Graph_Graph_g_excl_xsec_obs_m182539","g_excl_xsec_obs_m1",100,248.8508,678.9038);
   Graph_Graph_Graph_g_excl_xsec_obs_m182539->SetMinimum(0);
   Graph_Graph_Graph_g_excl_xsec_obs_m182539->SetMaximum(220.1392);
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
   graph->SetPoint(0,626.9857344,0);
   graph->SetPoint(1,643.729602,25);
   graph->SetPoint(2,650,33.62845372);
   graph->SetPoint(3,660.5765074,50);
   graph->SetPoint(4,672.7398744,75);
   graph->SetPoint(5,675,96.73039912);
   graph->SetPoint(6,675.2903882,100);
   graph->SetPoint(7,675.7893825,125);
   graph->SetPoint(8,675,130.903883);
   graph->SetPoint(9,671.8532791,150);
   graph->SetPoint(10,664.1179039,175);
   graph->SetPoint(11,651.2922373,200);
   graph->SetPoint(12,650,201.9587075);
   graph->SetPoint(13,630.5682328,225);
   graph->SetPoint(14,625,228.2988346);
   graph->SetPoint(15,600,232.4880499);
   graph->SetPoint(16,575,228.9306493);
   graph->SetPoint(17,563.169524,225);
   graph->SetPoint(18,550,219.3653049);
   graph->SetPoint(19,525,205.5717544);
   graph->SetPoint(20,514.3853909,200);
   graph->SetPoint(21,500,191.3047522);
   graph->SetPoint(22,475,177.3398706);
   graph->SetPoint(23,471.2322162,175);
   graph->SetPoint(24,450,158.9247665);
   graph->SetPoint(25,437.4366889,150);
   graph->SetPoint(26,425,139.7180471);
   graph->SetPoint(27,405.9207448,125);
   graph->SetPoint(28,400,119.9210622);
   graph->SetPoint(29,375,103.0148696);
   graph->SetPoint(30,370.4538456,100);
   graph->SetPoint(31,350,82.29283801);
   graph->SetPoint(32,340.5559857,75);
   graph->SetPoint(33,325,58.9560046);
   graph->SetPoint(34,315.7961392,50);
   graph->SetPoint(35,300,31.29306571);
   graph->SetPoint(36,294.905994,25);
   graph->SetPoint(37,287.7884579,0);
   
   TH1F *Graph_Graph_Graph_g_excl_xsec_exp32040 = new TH1F("Graph_Graph_Graph_g_excl_xsec_exp32040","g_excl_xsec_exp",100,248.9884,714.5895);
   Graph_Graph_Graph_g_excl_xsec_exp32040->SetMinimum(0);
   Graph_Graph_Graph_g_excl_xsec_exp32040->SetMaximum(255.7369);
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
