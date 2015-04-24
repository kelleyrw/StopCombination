{
//=========Macro generated from canvas: cCONT_/cCONT_
//=========  (Thu Apr 23 17:00:53 2015) by ROOT version5.34/03
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
   
   TH2D *h_ul_xsec_obs_smoothEMPTY = new TH2D("h_ul_xsec_obs_smoothEMPTY","Observed onelep #sigma #times Branching Fraction (t2tb_br0p7)EMPTY",31,137.5,912.5,29,-12.5,712.5);

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
   
   graph = new TGraph(56);
   graph->SetName("g_excl_xsec_obs");
   graph->SetTitle("g_excl_xsec_obs");

   ci = TColor::GetColor("#cccccc");
   graph->SetFillColor(ci);
   graph->SetLineWidth(4);
   graph->SetPoint(0,100,0.2368427476);
   graph->SetPoint(1,125,13.14569004);
   graph->SetPoint(2,135.9718729,25);
   graph->SetPoint(3,150,44.97506456);
   graph->SetPoint(4,155.8269757,50);
   graph->SetPoint(5,175,57.76065985);
   graph->SetPoint(6,192.7546954,75);
   graph->SetPoint(7,200,85.34012849);
   graph->SetPoint(8,218.2105524,100);
   graph->SetPoint(9,225,105.6515986);
   graph->SetPoint(10,250,118.3713754);
   graph->SetPoint(11,250.0074832,100);
   graph->SetPoint(12,250,99.98725956);
   graph->SetPoint(13,225.0291063,75);
   graph->SetPoint(14,225,74.94820896);
   graph->SetPoint(15,200.0619373,50);
   graph->SetPoint(16,200,49.88397636);
   graph->SetPoint(17,175.1138261,25);
   graph->SetPoint(18,175,24.77285856);
   graph->SetPoint(19,150.1821855,0);
   graph->SetPoint(20,150,-12.5);
   graph->SetPoint(21,175,-12.5);
   graph->SetPoint(22,200,-12.5);
   graph->SetPoint(23,199.9992267,0);
   graph->SetPoint(24,200,0.000773331477);
   graph->SetPoint(25,224.9997614,25);
   graph->SetPoint(26,225,25.0002386);
   graph->SetPoint(27,249.9998175,50);
   graph->SetPoint(28,250,50.00018251);
   graph->SetPoint(29,274.9999685,75);
   graph->SetPoint(30,275,75.00003149);
   graph->SetPoint(31,300,93.23226118);
   graph->SetPoint(32,308.1398714,100);
   graph->SetPoint(33,325,111.9539573);
   graph->SetPoint(34,342.1042558,125);
   graph->SetPoint(35,350,130.0969943);
   graph->SetPoint(36,375,147.210972);
   graph->SetPoint(37,379.15644,150);
   graph->SetPoint(38,400,162.8067791);
   graph->SetPoint(39,420.594322,175);
   graph->SetPoint(40,425,177.1318685);
   graph->SetPoint(41,450,185.0313484);
   graph->SetPoint(42,475,187.4853841);
   graph->SetPoint(43,500,184.5883705);
   graph->SetPoint(44,525,176.0935222);
   graph->SetPoint(45,526.4412155,175);
   graph->SetPoint(46,544.0903635,150);
   graph->SetPoint(47,550,135.1240392);
   graph->SetPoint(48,552.5139561,125);
   graph->SetPoint(49,554.2461875,100);
   graph->SetPoint(50,558.4825658,75);
   graph->SetPoint(51,564.513833,50);
   graph->SetPoint(52,564.7907389,25);
   graph->SetPoint(53,562.614893,0);
   graph->SetPoint(54,1300,-1300);
   graph->SetPoint(55,-1300,-1300);
   
   TH1F *Graph_g_excl_xsec_obs19 = new TH1F("Graph_g_excl_xsec_obs19","g_excl_xsec_obs",100,-1560,1560);
   Graph_g_excl_xsec_obs19->SetMinimum(-1448.749);
   Graph_g_excl_xsec_obs19->SetMaximum(336.2339);
   Graph_g_excl_xsec_obs19->SetDirectory(0);
   Graph_g_excl_xsec_obs19->SetStats(0);

   ci = TColor::GetColor("#0000ff");
   Graph_g_excl_xsec_obs19->SetLineColor(ci);
   Graph_g_excl_xsec_obs19->GetXaxis()->SetLabelSize(0.035);
   Graph_g_excl_xsec_obs19->GetYaxis()->SetLabelSize(0.035);
   Graph_g_excl_xsec_obs19->GetYaxis()->SetTitleOffset(1.2);
   graph->SetHistogram(Graph_g_excl_xsec_obs19);
   
   graph->Draw("f");
   
   graph = new TGraph(50);
   graph->SetName("g_excl_xsec_exp");
   graph->SetTitle("g_excl_xsec_exp");
   graph->SetFillColor(1);

   ci = TColor::GetColor("#ff0000");
   graph->SetLineColor(ci);
   graph->SetLineStyle(7);
   graph->SetLineWidth(4);
   graph->SetPoint(0,100,0.02847877644);
   graph->SetPoint(1,125,8.229296113);
   graph->SetPoint(2,140.5474853,25);
   graph->SetPoint(3,150,38.45506387);
   graph->SetPoint(4,163.3439385,50);
   graph->SetPoint(5,175,54.83264691);
   graph->SetPoint(6,195.7702392,75);
   graph->SetPoint(7,200,80.91817331);
   graph->SetPoint(8,223.5915192,100);
   graph->SetPoint(9,225,101.2015508);
   graph->SetPoint(10,250,101.867095);
   graph->SetPoint(11,250.0009134,100);
   graph->SetPoint(12,250,99.99844454);
   graph->SetPoint(13,225.0214616,75);
   graph->SetPoint(14,225,74.96180264);
   graph->SetPoint(15,200.049967,50);
   graph->SetPoint(16,200,49.90636046);
   graph->SetPoint(17,175.0916904,25);
   graph->SetPoint(18,175,24.81686837);
   graph->SetPoint(19,150.1275505,0);
   graph->SetPoint(20,150,-12.5);
   graph->SetPoint(21,175,-12.5);
   graph->SetPoint(22,200,-12.5);
   graph->SetPoint(23,199.9995732,0);
   graph->SetPoint(24,200,0.0004268335016);
   graph->SetPoint(25,225,18.1003967);
   graph->SetPoint(26,232.2173415,25);
   graph->SetPoint(27,250,40.6880847);
   graph->SetPoint(28,259.0246591,50);
   graph->SetPoint(29,275,60.96784588);
   graph->SetPoint(30,293.5496598,75);
   graph->SetPoint(31,300,78.46145575);
   graph->SetPoint(32,325,94.03304057);
   graph->SetPoint(33,334.4890524,100);
   graph->SetPoint(34,350,107.565676);
   graph->SetPoint(35,375,119.9332535);
   graph->SetPoint(36,389.690477,125);
   graph->SetPoint(37,400,127.8600176);
   graph->SetPoint(38,425,131.8793099);
   graph->SetPoint(39,450,131.944407);
   graph->SetPoint(40,475,127.5695469);
   graph->SetPoint(41,481.822044,125);
   graph->SetPoint(42,500,113.3543328);
   graph->SetPoint(43,510.4988575,100);
   graph->SetPoint(44,520.7004211,75);
   graph->SetPoint(45,525,61.03288735);
   graph->SetPoint(46,527.8375724,50);
   graph->SetPoint(47,529.5308668,25);
   graph->SetPoint(48,525,1.112745564);
   graph->SetPoint(49,524.7336255,0);
   
   TH1F *Graph_Graph_g_excl_xsec_exp320 = new TH1F("Graph_Graph_g_excl_xsec_exp320","g_excl_xsec_exp",100,57.04691,572.484);
   Graph_Graph_g_excl_xsec_exp320->SetMinimum(-26.94444);
   Graph_Graph_g_excl_xsec_exp320->SetMaximum(146.3888);
   Graph_Graph_g_excl_xsec_exp320->SetDirectory(0);
   Graph_Graph_g_excl_xsec_exp320->SetStats(0);

   ci = TColor::GetColor("#0000ff");
   Graph_Graph_g_excl_xsec_exp320->SetLineColor(ci);
   Graph_Graph_g_excl_xsec_exp320->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_g_excl_xsec_exp320->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_g_excl_xsec_exp320->GetYaxis()->SetTitleOffset(1.2);
   graph->SetHistogram(Graph_Graph_g_excl_xsec_exp320);
   
   graph->Draw("l");
   
   graph = new TGraph(22);
   graph->SetName("g_excl_xsec_exp_p1");
   graph->SetTitle("g_excl_xsec_exp_p1");
   graph->SetFillColor(1);

   ci = TColor::GetColor("#ff0000");
   graph->SetLineColor(ci);
   graph->SetLineStyle(7);
   graph->SetLineWidth(2);
   graph->SetPoint(0,119.8332039,0);
   graph->SetPoint(1,125,1.492750277);
   graph->SetPoint(2,147.3011899,0);
   graph->SetPoint(3,150,-12.5);
   graph->SetPoint(4,175,-12.5);
   graph->SetPoint(5,200,-12.5);
   graph->SetPoint(6,259.0978872,0);
   graph->SetPoint(7,269.4242125,25);
   graph->SetPoint(8,275,30.81355526);
   graph->SetPoint(9,293.3120059,50);
   graph->SetPoint(10,300,54.54597241);
   graph->SetPoint(11,325,70.93377759);
   graph->SetPoint(12,331.7082388,75);
   graph->SetPoint(13,350,83.08684731);
   graph->SetPoint(14,375,91.13478901);
   graph->SetPoint(15,400,89.98267723);
   graph->SetPoint(16,425,78.80535678);
   graph->SetPoint(17,433.7961913,75);
   graph->SetPoint(18,450,61.13487312);
   graph->SetPoint(19,456.856858,50);
   graph->SetPoint(20,458.8616151,25);
   graph->SetPoint(21,450.0625195,0);
   
   TH1F *Graph_Graph_g_excl_xsec_exp_p1421 = new TH1F("Graph_Graph_g_excl_xsec_exp_p1421","g_excl_xsec_exp_p1",100,85.93036,492.7645);
   Graph_Graph_g_excl_xsec_exp_p1421->SetMinimum(-22.86348);
   Graph_Graph_g_excl_xsec_exp_p1421->SetMaximum(101.4983);
   Graph_Graph_g_excl_xsec_exp_p1421->SetDirectory(0);
   Graph_Graph_g_excl_xsec_exp_p1421->SetStats(0);

   ci = TColor::GetColor("#0000ff");
   Graph_Graph_g_excl_xsec_exp_p1421->SetLineColor(ci);
   Graph_Graph_g_excl_xsec_exp_p1421->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_g_excl_xsec_exp_p1421->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_g_excl_xsec_exp_p1421->GetYaxis()->SetTitleOffset(1.2);
   graph->SetHistogram(Graph_Graph_g_excl_xsec_exp_p1421);
   
   graph->Draw("l");
   
   graph = new TGraph(59);
   graph->SetName("g_excl_xsec_exp_m1");
   graph->SetTitle("g_excl_xsec_exp_m1");
   graph->SetFillColor(1);

   ci = TColor::GetColor("#ff0000");
   graph->SetLineColor(ci);
   graph->SetLineStyle(7);
   graph->SetLineWidth(2);
   graph->SetPoint(0,100,0.3764010862);
   graph->SetPoint(1,125,18.40513674);
   graph->SetPoint(2,131.0836459,25);
   graph->SetPoint(3,149.9670528,50);
   graph->SetPoint(4,150,50.03294721);
   graph->SetPoint(5,175,60.52584371);
   graph->SetPoint(6,189.9068485,75);
   graph->SetPoint(7,200,89.53772964);
   graph->SetPoint(8,213.0254702,100);
   graph->SetPoint(9,225,109.8541756);
   graph->SetPoint(10,246.5615799,125);
   graph->SetPoint(11,250,126.0199884);
   graph->SetPoint(12,275,133.6068099);
   graph->SetPoint(13,275.0031595,125);
   graph->SetPoint(14,275,124.9948085);
   graph->SetPoint(15,250.0119437,100);
   graph->SetPoint(16,250,99.97966792);
   graph->SetPoint(17,225.0342002,75);
   graph->SetPoint(18,225,74.93915473);
   graph->SetPoint(19,200.0700616,50);
   graph->SetPoint(20,200,49.86879499);
   graph->SetPoint(21,175.1285613,25);
   graph->SetPoint(22,175,24.74360527);
   graph->SetPoint(23,150.2191593,0);
   graph->SetPoint(24,150,-12.5);
   graph->SetPoint(25,175,-12.5);
   graph->SetPoint(26,200,-12.5);
   graph->SetPoint(27,199.9989831,0);
   graph->SetPoint(28,200,0.001016892626);
   graph->SetPoint(29,224.9994185,25);
   graph->SetPoint(30,225,25.00058147);
   graph->SetPoint(31,249.999474,50);
   graph->SetPoint(32,250,50.00052595);
   graph->SetPoint(33,274.9996586,75);
   graph->SetPoint(34,275,75.00034143);
   graph->SetPoint(35,300,98.9318526);
   graph->SetPoint(36,301.5329635,100);
   graph->SetPoint(37,325,112.5333891);
   graph->SetPoint(38,344.574329,125);
   graph->SetPoint(39,350,127.7523257);
   graph->SetPoint(40,375,139.7704328);
   graph->SetPoint(41,394.1905012,150);
   graph->SetPoint(42,400,152.5184466);
   graph->SetPoint(43,425,161.0457357);
   graph->SetPoint(44,450,168.3281832);
   graph->SetPoint(45,475,173.0053016);
   graph->SetPoint(46,495.1305402,175);
   graph->SetPoint(47,500,175.3750457);
   graph->SetPoint(48,502.6685047,175);
   graph->SetPoint(49,525,168.4933416);
   graph->SetPoint(50,545.8625816,150);
   graph->SetPoint(51,550,145.4303419);
   graph->SetPoint(52,567.5459676,125);
   graph->SetPoint(53,575,112.6277164);
   graph->SetPoint(54,580.7670956,100);
   graph->SetPoint(55,588.9074237,75);
   graph->SetPoint(56,593.8971472,50);
   graph->SetPoint(57,593.66052,25);
   graph->SetPoint(58,588.0078588,0);
   
   TH1F *Graph_Graph_g_excl_xsec_exp_m1522 = new TH1F("Graph_Graph_g_excl_xsec_exp_m1522","g_excl_xsec_exp_m1",100,50.61029,643.2869);
   Graph_Graph_g_excl_xsec_exp_m1522->SetMinimum(-31.2875);
   Graph_Graph_g_excl_xsec_exp_m1522->SetMaximum(194.1626);
   Graph_Graph_g_excl_xsec_exp_m1522->SetDirectory(0);
   Graph_Graph_g_excl_xsec_exp_m1522->SetStats(0);

   ci = TColor::GetColor("#0000ff");
   Graph_Graph_g_excl_xsec_exp_m1522->SetLineColor(ci);
   Graph_Graph_g_excl_xsec_exp_m1522->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_g_excl_xsec_exp_m1522->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_g_excl_xsec_exp_m1522->GetYaxis()->SetTitleOffset(1.2);
   graph->SetHistogram(Graph_Graph_g_excl_xsec_exp_m1522);
   
   graph->Draw("l");
   
   graph = new TGraph(56);
   graph->SetName("g_excl_xsec_obs");
   graph->SetTitle("g_excl_xsec_obs");

   ci = TColor::GetColor("#cccccc");
   graph->SetFillColor(ci);
   graph->SetLineWidth(4);
   graph->SetPoint(0,100,0.2368427476);
   graph->SetPoint(1,125,13.14569004);
   graph->SetPoint(2,135.9718729,25);
   graph->SetPoint(3,150,44.97506456);
   graph->SetPoint(4,155.8269757,50);
   graph->SetPoint(5,175,57.76065985);
   graph->SetPoint(6,192.7546954,75);
   graph->SetPoint(7,200,85.34012849);
   graph->SetPoint(8,218.2105524,100);
   graph->SetPoint(9,225,105.6515986);
   graph->SetPoint(10,250,118.3713754);
   graph->SetPoint(11,250.0074832,100);
   graph->SetPoint(12,250,99.98725956);
   graph->SetPoint(13,225.0291063,75);
   graph->SetPoint(14,225,74.94820896);
   graph->SetPoint(15,200.0619373,50);
   graph->SetPoint(16,200,49.88397636);
   graph->SetPoint(17,175.1138261,25);
   graph->SetPoint(18,175,24.77285856);
   graph->SetPoint(19,150.1821855,0);
   graph->SetPoint(20,150,-12.5);
   graph->SetPoint(21,175,-12.5);
   graph->SetPoint(22,200,-12.5);
   graph->SetPoint(23,199.9992267,0);
   graph->SetPoint(24,200,0.000773331477);
   graph->SetPoint(25,224.9997614,25);
   graph->SetPoint(26,225,25.0002386);
   graph->SetPoint(27,249.9998175,50);
   graph->SetPoint(28,250,50.00018251);
   graph->SetPoint(29,274.9999685,75);
   graph->SetPoint(30,275,75.00003149);
   graph->SetPoint(31,300,93.23226118);
   graph->SetPoint(32,308.1398714,100);
   graph->SetPoint(33,325,111.9539573);
   graph->SetPoint(34,342.1042558,125);
   graph->SetPoint(35,350,130.0969943);
   graph->SetPoint(36,375,147.210972);
   graph->SetPoint(37,379.15644,150);
   graph->SetPoint(38,400,162.8067791);
   graph->SetPoint(39,420.594322,175);
   graph->SetPoint(40,425,177.1318685);
   graph->SetPoint(41,450,185.0313484);
   graph->SetPoint(42,475,187.4853841);
   graph->SetPoint(43,500,184.5883705);
   graph->SetPoint(44,525,176.0935222);
   graph->SetPoint(45,526.4412155,175);
   graph->SetPoint(46,544.0903635,150);
   graph->SetPoint(47,550,135.1240392);
   graph->SetPoint(48,552.5139561,125);
   graph->SetPoint(49,554.2461875,100);
   graph->SetPoint(50,558.4825658,75);
   graph->SetPoint(51,564.513833,50);
   graph->SetPoint(52,564.7907389,25);
   graph->SetPoint(53,562.614893,0);
   graph->SetPoint(54,1300,-1300);
   graph->SetPoint(55,-1300,-1300);
   
   TH1F *Graph_Graph_g_excl_xsec_obs1923 = new TH1F("Graph_Graph_g_excl_xsec_obs1923","g_excl_xsec_obs",100,-1560,1560);
   Graph_Graph_g_excl_xsec_obs1923->SetMinimum(-1448.749);
   Graph_Graph_g_excl_xsec_obs1923->SetMaximum(336.2339);
   Graph_Graph_g_excl_xsec_obs1923->SetDirectory(0);
   Graph_Graph_g_excl_xsec_obs1923->SetStats(0);

   ci = TColor::GetColor("#0000ff");
   Graph_Graph_g_excl_xsec_obs1923->SetLineColor(ci);
   Graph_Graph_g_excl_xsec_obs1923->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_g_excl_xsec_obs1923->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_g_excl_xsec_obs1923->GetYaxis()->SetTitleOffset(1.2);
   graph->SetHistogram(Graph_Graph_g_excl_xsec_obs1923);
   
   graph->Draw("l");
   
   graph = new TGraph(61);
   graph->SetName("g_excl_xsec_obs_p1");
   graph->SetTitle("g_excl_xsec_obs_p1");
   graph->SetFillColor(1);
   graph->SetLineWidth(2);
   graph->SetPoint(0,100,0.3788157033);
   graph->SetPoint(1,125,17.59896833);
   graph->SetPoint(2,131.8540161,25);
   graph->SetPoint(3,149.976322,50);
   graph->SetPoint(4,150,50.02367797);
   graph->SetPoint(5,175,60.41821529);
   graph->SetPoint(6,190.0323872,75);
   graph->SetPoint(7,200,89.17925561);
   graph->SetPoint(8,213.4355082,100);
   graph->SetPoint(9,225,109.635052);
   graph->SetPoint(10,246.9394859,125);
   graph->SetPoint(11,250,125.9034756);
   graph->SetPoint(12,275,133.2931037);
   graph->SetPoint(13,275.0035861,125);
   graph->SetPoint(14,275,124.9941047);
   graph->SetPoint(15,250.0134131,100);
   graph->SetPoint(16,250,99.97716006);
   graph->SetPoint(17,225.039272,75);
   graph->SetPoint(18,225,74.92999029);
   graph->SetPoint(19,200.0801219,50);
   graph->SetPoint(20,200,49.84997966);
   graph->SetPoint(21,175.1480821,25);
   graph->SetPoint(22,175,24.70382799);
   graph->SetPoint(23,150.2523244,0);
   graph->SetPoint(24,150,-12.5);
   graph->SetPoint(25,175,-12.5);
   graph->SetPoint(26,200,-12.5);
   graph->SetPoint(27,199.9990025,0);
   graph->SetPoint(28,200,0.0009974805114);
   graph->SetPoint(29,224.999467,25);
   graph->SetPoint(30,225,25.00053304);
   graph->SetPoint(31,249.9995195,50);
   graph->SetPoint(32,250,50.0004805);
   graph->SetPoint(33,274.9996514,75);
   graph->SetPoint(34,275,75.00034855);
   graph->SetPoint(35,299.9999133,100);
   graph->SetPoint(36,300,100.0000867);
   graph->SetPoint(37,325,119.65172);
   graph->SetPoint(38,332.0008691,125);
   graph->SetPoint(39,350,136.6448648);
   graph->SetPoint(40,368.7141171,150);
   graph->SetPoint(41,375,154.0507614);
   graph->SetPoint(42,400,171.0297759);
   graph->SetPoint(43,406.7572622,175);
   graph->SetPoint(44,425,183.7421717);
   graph->SetPoint(45,450,195.890612);
   graph->SetPoint(46,464.1878103,200);
   graph->SetPoint(47,475,202.5327349);
   graph->SetPoint(48,500,203.0850749);
   graph->SetPoint(49,525,200.8444853);
   graph->SetPoint(50,527.5259532,200);
   graph->SetPoint(51,550,185.0025872);
   graph->SetPoint(52,556.6310817,175);
   graph->SetPoint(53,565.7058247,150);
   graph->SetPoint(54,570.1683485,125);
   graph->SetPoint(55,573.70281,100);
   graph->SetPoint(56,575,93.07875008);
   graph->SetPoint(57,578.4462182,75);
   graph->SetPoint(58,583.5591467,50);
   graph->SetPoint(59,584.3428026,25);
   graph->SetPoint(60,582.0074014,0);
   
   TH1F *Graph_Graph_g_excl_xsec_obs_p1724 = new TH1F("Graph_Graph_g_excl_xsec_obs_p1724","g_excl_xsec_obs_p1",100,51.56572,632.7771);
   Graph_Graph_g_excl_xsec_obs_p1724->SetMinimum(-34.05851);
   Graph_Graph_g_excl_xsec_obs_p1724->SetMaximum(224.6436);
   Graph_Graph_g_excl_xsec_obs_p1724->SetDirectory(0);
   Graph_Graph_g_excl_xsec_obs_p1724->SetStats(0);

   ci = TColor::GetColor("#0000ff");
   Graph_Graph_g_excl_xsec_obs_p1724->SetLineColor(ci);
   Graph_Graph_g_excl_xsec_obs_p1724->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_g_excl_xsec_obs_p1724->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_g_excl_xsec_obs_p1724->GetYaxis()->SetTitleOffset(1.2);
   graph->SetHistogram(Graph_Graph_g_excl_xsec_obs_p1724);
   
   graph->Draw("l");
   
   graph = new TGraph(51);
   graph->SetName("g_excl_xsec_obs_m1");
   graph->SetTitle("g_excl_xsec_obs_m1");
   graph->SetFillColor(1);
   graph->SetLineWidth(2);
   graph->SetPoint(0,100,0.0376247914);
   graph->SetPoint(1,125,8.692412379);
   graph->SetPoint(2,140.0818394,25);
   graph->SetPoint(3,150,39.15658057);
   graph->SetPoint(4,162.5144855,50);
   graph->SetPoint(5,175,55.10310581);
   graph->SetPoint(6,195.4646814,75);
   graph->SetPoint(7,200,81.50099903);
   graph->SetPoint(8,222.9935641,100);
   graph->SetPoint(9,225,101.6681463);
   graph->SetPoint(10,250,103.8081664);
   graph->SetPoint(11,250.0015515,100);
   graph->SetPoint(12,250,99.99735906);
   graph->SetPoint(13,225.0189149,75);
   graph->SetPoint(14,225,74.96642764);
   graph->SetPoint(15,200.0437622,50);
   graph->SetPoint(16,200,49.91797307);
   graph->SetPoint(17,175.0794774,25);
   graph->SetPoint(18,175,24.84188909);
   graph->SetPoint(19,150.1116756,0);
   graph->SetPoint(20,150,-12.5);
   graph->SetPoint(21,175,-12.5);
   graph->SetPoint(22,200,-12.5);
   graph->SetPoint(23,199.9995294,0);
   graph->SetPoint(24,200,0.0004705933843);
   graph->SetPoint(25,225,18.01820375);
   graph->SetPoint(26,232.4561469,25);
   graph->SetPoint(27,250,40.79679279);
   graph->SetPoint(28,258.1761251,50);
   graph->SetPoint(29,275,63.30968023);
   graph->SetPoint(30,287.190276,75);
   graph->SetPoint(31,300,83.95072062);
   graph->SetPoint(32,319.0909056,100);
   graph->SetPoint(33,325,104.2561946);
   graph->SetPoint(34,350,122.5172484);
   graph->SetPoint(35,353.2838596,125);
   graph->SetPoint(36,375,138.2424371);
   graph->SetPoint(37,392.5332973,150);
   graph->SetPoint(38,400,154.5837824);
   graph->SetPoint(39,425,166.2774242);
   graph->SetPoint(40,450,173.5129581);
   graph->SetPoint(41,475,168.017553);
   graph->SetPoint(42,500,159.0817696);
   graph->SetPoint(43,512.4116325,150);
   graph->SetPoint(44,525,135.3000621);
   graph->SetPoint(45,529.7086455,125);
   graph->SetPoint(46,535.085704,100);
   graph->SetPoint(47,539.2691939,75);
   graph->SetPoint(48,545.690016,50);
   graph->SetPoint(49,545.1478914,25);
   graph->SetPoint(50,541.763815,0);
   
   TH1F *Graph_Graph_g_excl_xsec_obs_m1825 = new TH1F("Graph_Graph_g_excl_xsec_obs_m1825","g_excl_xsec_obs_m1",100,55.431,590.259);
   Graph_Graph_g_excl_xsec_obs_m1825->SetMinimum(-31.1013);
   Graph_Graph_g_excl_xsec_obs_m1825->SetMaximum(192.1143);
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
