{
//=========Macro generated from canvas: cCONT_/cCONT_
//=========  (Thu Apr 23 07:27:44 2015) by ROOT version5.34/03
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
   
   TH2D *h_ul_xsec_obs_smoothEMPTY = new TH2D("h_ul_xsec_obs_smoothEMPTY","Observed onelep #sigma #times Branching Fraction (t2tb_br0p5)EMPTY",31,137.5,912.5,29,-12.5,712.5);

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
   
   TH1F *Graph_diagonal16 = new TH1F("Graph_diagonal16","Graph",100,0,22000);
   Graph_diagonal16->SetMinimum(-2100);
   Graph_diagonal16->SetMaximum(21900);
   Graph_diagonal16->SetDirectory(0);
   Graph_diagonal16->SetStats(0);

   ci = TColor::GetColor("#0000ff");
   Graph_diagonal16->SetLineColor(ci);
   Graph_diagonal16->GetXaxis()->SetLabelSize(0.035);
   Graph_diagonal16->GetYaxis()->SetLabelSize(0.035);
   Graph_diagonal16->GetYaxis()->SetTitleOffset(1.2);
   graph->SetHistogram(Graph_diagonal16);
   
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
   
   TH1F *Graph_Graph_diagonal1617 = new TH1F("Graph_Graph_diagonal1617","Graph",100,0,22000);
   Graph_Graph_diagonal1617->SetMinimum(-2100);
   Graph_Graph_diagonal1617->SetMaximum(21900);
   Graph_Graph_diagonal1617->SetDirectory(0);
   Graph_Graph_diagonal1617->SetStats(0);

   ci = TColor::GetColor("#0000ff");
   Graph_Graph_diagonal1617->SetLineColor(ci);
   Graph_Graph_diagonal1617->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_diagonal1617->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_diagonal1617->GetYaxis()->SetTitleOffset(1.2);
   graph->SetHistogram(Graph_Graph_diagonal1617);
   
   graph->Draw("l");
   
   graph = new TGraph(31);
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
   graph->SetPoint(10,273.8725177,0);
   graph->SetPoint(11,275,4.548767285);
   graph->SetPoint(12,279.8086649,25);
   graph->SetPoint(13,297.9591708,50);
   graph->SetPoint(14,300,51.81954853);
   graph->SetPoint(15,325,71.28471382);
   graph->SetPoint(16,330.3876579,75);
   graph->SetPoint(17,350,85.96623566);
   graph->SetPoint(18,371.4428884,100);
   graph->SetPoint(19,375,101.9519114);
   graph->SetPoint(20,400,104.3788675);
   graph->SetPoint(21,411.7250993,100);
   graph->SetPoint(22,425,85.69683599);
   graph->SetPoint(23,438.6853516,75);
   graph->SetPoint(24,450,58.11671217);
   graph->SetPoint(25,454.3288418,50);
   graph->SetPoint(26,454.1717231,25);
   graph->SetPoint(27,450,17.44376226);
   graph->SetPoint(28,440.2184984,0);
   graph->SetPoint(29,1300,-1300);
   graph->SetPoint(30,-1300,-1300);
   
   TH1F *Graph_g_excl_xsec_obs18 = new TH1F("Graph_g_excl_xsec_obs18","g_excl_xsec_obs",100,-1560,1560);
   Graph_g_excl_xsec_obs18->SetMinimum(-1440.438);
   Graph_g_excl_xsec_obs18->SetMaximum(244.8168);
   Graph_g_excl_xsec_obs18->SetDirectory(0);
   Graph_g_excl_xsec_obs18->SetStats(0);

   ci = TColor::GetColor("#0000ff");
   Graph_g_excl_xsec_obs18->SetLineColor(ci);
   Graph_g_excl_xsec_obs18->GetXaxis()->SetLabelSize(0.035);
   Graph_g_excl_xsec_obs18->GetYaxis()->SetLabelSize(0.035);
   Graph_g_excl_xsec_obs18->GetYaxis()->SetTitleOffset(1.2);
   graph->SetHistogram(Graph_g_excl_xsec_obs18);
   
   graph->Draw("f");
   
   graph = new TGraph(9);
   graph->SetName("g_excl_xsec_exp");
   graph->SetTitle("g_excl_xsec_exp");

   ci = TColor::GetColor("#ff807e");
   graph->SetFillColor(ci);

   ci = TColor::GetColor("#ff0000");
   graph->SetLineColor(ci);
   graph->SetLineStyle(7);
   graph->SetLineWidth(4);
   graph->SetPoint(0,376.7385078,0);
   graph->SetPoint(1,393.8486677,25);
   graph->SetPoint(2,381.1888824,50);
   graph->SetPoint(3,375,52.53637095);
   graph->SetPoint(4,350,51.76803355);
   graph->SetPoint(5,345.4746805,50);
   graph->SetPoint(6,325,36.3527284);
   graph->SetPoint(7,310.5427689,25);
   graph->SetPoint(8,316.7548936,0);
   
   TH1F *Graph_Graph_g_excl_xsec_exp319 = new TH1F("Graph_Graph_g_excl_xsec_exp319","g_excl_xsec_exp",100,302.2122,402.1793);
   Graph_Graph_g_excl_xsec_exp319->SetMinimum(0);
   Graph_Graph_g_excl_xsec_exp319->SetMaximum(57.79001);
   Graph_Graph_g_excl_xsec_exp319->SetDirectory(0);
   Graph_Graph_g_excl_xsec_exp319->SetStats(0);

   ci = TColor::GetColor("#0000ff");
   Graph_Graph_g_excl_xsec_exp319->SetLineColor(ci);
   Graph_Graph_g_excl_xsec_exp319->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_g_excl_xsec_exp319->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_g_excl_xsec_exp319->GetYaxis()->SetTitleOffset(1.2);
   graph->SetHistogram(Graph_Graph_g_excl_xsec_exp319);
   
   graph->Draw("l");
   
   graph = new TGraph(0);
   graph->SetName("g_excl_xsec_exp_p1");
   graph->SetTitle("g_excl_xsec_exp_p1");
   graph->SetFillColor(1);

   ci = TColor::GetColor("#ff0000");
   graph->SetLineColor(ci);
   graph->SetLineStyle(7);
   graph->SetLineWidth(2);
   graph->Draw("l");
   
   graph = new TGraph(21);
   graph->SetName("g_excl_xsec_exp_m1");
   graph->SetTitle("g_excl_xsec_exp_m1");
   graph->SetFillColor(1);

   ci = TColor::GetColor("#ff0000");
   graph->SetLineColor(ci);
   graph->SetLineStyle(7);
   graph->SetLineWidth(2);
   graph->SetPoint(0,120.0570671,0);
   graph->SetPoint(1,125,1.630019028);
   graph->SetPoint(2,146.3349478,0);
   graph->SetPoint(3,150,-12.5);
   graph->SetPoint(4,175,-12.5);
   graph->SetPoint(5,200,-12.5);
   graph->SetPoint(6,266.9343574,0);
   graph->SetPoint(7,273.8617911,25);
   graph->SetPoint(8,275,26.27507385);
   graph->SetPoint(9,295.5718603,50);
   graph->SetPoint(10,300,53.57095385);
   graph->SetPoint(11,325,71.2093506);
   graph->SetPoint(12,331.2569099,75);
   graph->SetPoint(13,350,82.98584207);
   graph->SetPoint(14,375,89.34830681);
   graph->SetPoint(15,400,84.97061147);
   graph->SetPoint(16,417.9926488,75);
   graph->SetPoint(17,425,67.37583533);
   graph->SetPoint(18,447.5063546,50);
   graph->SetPoint(19,449.7206037,25);
   graph->SetPoint(20,439.9333591,0);
   
   TH1F *Graph_Graph_g_excl_xsec_exp_m1420 = new TH1F("Graph_Graph_g_excl_xsec_exp_m1420","g_excl_xsec_exp_m1",100,87.09071,482.687);
   Graph_Graph_g_excl_xsec_exp_m1420->SetMinimum(-22.68483);
   Graph_Graph_g_excl_xsec_exp_m1420->SetMaximum(99.53314);
   Graph_Graph_g_excl_xsec_exp_m1420->SetDirectory(0);
   Graph_Graph_g_excl_xsec_exp_m1420->SetStats(0);

   ci = TColor::GetColor("#0000ff");
   Graph_Graph_g_excl_xsec_exp_m1420->SetLineColor(ci);
   Graph_Graph_g_excl_xsec_exp_m1420->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_g_excl_xsec_exp_m1420->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_g_excl_xsec_exp_m1420->GetYaxis()->SetTitleOffset(1.2);
   graph->SetHistogram(Graph_Graph_g_excl_xsec_exp_m1420);
   
   graph->Draw("l");
   
   graph = new TGraph(31);
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
   graph->SetPoint(10,273.8725177,0);
   graph->SetPoint(11,275,4.548767285);
   graph->SetPoint(12,279.8086649,25);
   graph->SetPoint(13,297.9591708,50);
   graph->SetPoint(14,300,51.81954853);
   graph->SetPoint(15,325,71.28471382);
   graph->SetPoint(16,330.3876579,75);
   graph->SetPoint(17,350,85.96623566);
   graph->SetPoint(18,371.4428884,100);
   graph->SetPoint(19,375,101.9519114);
   graph->SetPoint(20,400,104.3788675);
   graph->SetPoint(21,411.7250993,100);
   graph->SetPoint(22,425,85.69683599);
   graph->SetPoint(23,438.6853516,75);
   graph->SetPoint(24,450,58.11671217);
   graph->SetPoint(25,454.3288418,50);
   graph->SetPoint(26,454.1717231,25);
   graph->SetPoint(27,450,17.44376226);
   graph->SetPoint(28,440.2184984,0);
   graph->SetPoint(29,1300,-1300);
   graph->SetPoint(30,-1300,-1300);
   
   TH1F *Graph_Graph_g_excl_xsec_obs1821 = new TH1F("Graph_Graph_g_excl_xsec_obs1821","g_excl_xsec_obs",100,-1560,1560);
   Graph_Graph_g_excl_xsec_obs1821->SetMinimum(-1440.438);
   Graph_Graph_g_excl_xsec_obs1821->SetMaximum(244.8168);
   Graph_Graph_g_excl_xsec_obs1821->SetDirectory(0);
   Graph_Graph_g_excl_xsec_obs1821->SetStats(0);

   ci = TColor::GetColor("#0000ff");
   Graph_Graph_g_excl_xsec_obs1821->SetLineColor(ci);
   Graph_Graph_g_excl_xsec_obs1821->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_g_excl_xsec_obs1821->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_g_excl_xsec_obs1821->GetYaxis()->SetTitleOffset(1.2);
   graph->SetHistogram(Graph_Graph_g_excl_xsec_obs1821);
   
   graph->Draw("l");
   
   graph = new TGraph(26);
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
   graph->SetPoint(6,257.6954885,0);
   graph->SetPoint(7,268.0928059,25);
   graph->SetPoint(8,275,33.03715609);
   graph->SetPoint(9,288.5953831,50);
   graph->SetPoint(10,300,60.15466574);
   graph->SetPoint(11,317.9892326,75);
   graph->SetPoint(12,325,79.6688528);
   graph->SetPoint(13,350,96.44953514);
   graph->SetPoint(14,355.4442168,100);
   graph->SetPoint(15,375,110.6841692);
   graph->SetPoint(16,400,116.3804675);
   graph->SetPoint(17,425,111.9924345);
   graph->SetPoint(18,447.5469939,100);
   graph->SetPoint(19,450,98.06539793);
   graph->SetPoint(20,475,76.38303372);
   graph->SetPoint(21,476.0431818,75);
   graph->SetPoint(22,486.5697061,50);
   graph->SetPoint(23,486.8282709,25);
   graph->SetPoint(24,475,1.869014506);
   graph->SetPoint(25,473.7370186,0);
   
   TH1F *Graph_Graph_g_excl_xsec_obs_p1622 = new TH1F("Graph_Graph_g_excl_xsec_obs_p1622","g_excl_xsec_obs_p1",100,83.35777,523.5074);
   Graph_Graph_g_excl_xsec_obs_p1622->SetMinimum(-25.38805);
   Graph_Graph_g_excl_xsec_obs_p1622->SetMaximum(129.2685);
   Graph_Graph_g_excl_xsec_obs_p1622->SetDirectory(0);
   Graph_Graph_g_excl_xsec_obs_p1622->SetStats(0);

   ci = TColor::GetColor("#0000ff");
   Graph_Graph_g_excl_xsec_obs_p1622->SetLineColor(ci);
   Graph_Graph_g_excl_xsec_obs_p1622->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_g_excl_xsec_obs_p1622->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_g_excl_xsec_obs_p1622->GetYaxis()->SetTitleOffset(1.2);
   graph->SetHistogram(Graph_Graph_g_excl_xsec_obs_p1622);
   
   graph->Draw("l");
   
   graph = new TGraph(14);
   graph->SetName("g_excl_xsec_obs_m1");
   graph->SetTitle("g_excl_xsec_obs_m1");

   ci = TColor::GetColor("#ff807e");
   graph->SetFillColor(ci);
   graph->SetLineWidth(2);
   graph->SetPoint(0,398.9928812,0);
   graph->SetPoint(1,400,1.949914755);
   graph->SetPoint(2,409.731532,25);
   graph->SetPoint(3,409.5872643,50);
   graph->SetPoint(4,400,73.86456549);
   graph->SetPoint(5,398.8767156,75);
   graph->SetPoint(6,375,81.26924257);
   graph->SetPoint(7,350,75.48293619);
   graph->SetPoint(8,349.132328,75);
   graph->SetPoint(9,325,58.42080227);
   graph->SetPoint(10,313.8074903,50);
   graph->SetPoint(11,300,32.27603651);
   graph->SetPoint(12,295.1055647,25);
   graph->SetPoint(13,296.2720073,0);
   
   TH1F *Graph_Graph_g_excl_xsec_obs_m1723 = new TH1F("Graph_Graph_g_excl_xsec_obs_m1723","g_excl_xsec_obs_m1",100,283.643,421.1941);
   Graph_Graph_g_excl_xsec_obs_m1723->SetMinimum(0);
   Graph_Graph_g_excl_xsec_obs_m1723->SetMaximum(89.39617);
   Graph_Graph_g_excl_xsec_obs_m1723->SetDirectory(0);
   Graph_Graph_g_excl_xsec_obs_m1723->SetStats(0);

   ci = TColor::GetColor("#0000ff");
   Graph_Graph_g_excl_xsec_obs_m1723->SetLineColor(ci);
   Graph_Graph_g_excl_xsec_obs_m1723->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_g_excl_xsec_obs_m1723->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_g_excl_xsec_obs_m1723->GetYaxis()->SetTitleOffset(1.2);
   graph->SetHistogram(Graph_Graph_g_excl_xsec_obs_m1723);
   
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
   
   TH1F *Graph_white24 = new TH1F("Graph_white24","white",100,75,975);
   Graph_white24->SetMinimum(435);
   Graph_white24->SetMaximum(615);
   Graph_white24->SetDirectory(0);
   Graph_white24->SetStats(0);

   ci = TColor::GetColor("#0000ff");
   Graph_white24->SetLineColor(ci);
   Graph_white24->GetXaxis()->SetLabelSize(0.035);
   Graph_white24->GetYaxis()->SetLabelSize(0.035);
   Graph_white24->GetYaxis()->SetTitleOffset(1.2);
   graph->SetHistogram(Graph_white24);
   
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
   
   TH1F *Graph_Graph_white2425 = new TH1F("Graph_Graph_white2425","white",100,75,975);
   Graph_Graph_white2425->SetMinimum(435);
   Graph_Graph_white2425->SetMaximum(615);
   Graph_Graph_white2425->SetDirectory(0);
   Graph_Graph_white2425->SetStats(0);

   ci = TColor::GetColor("#0000ff");
   Graph_Graph_white2425->SetLineColor(ci);
   Graph_Graph_white2425->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_white2425->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_white2425->GetYaxis()->SetTitleOffset(1.2);
   graph->SetHistogram(Graph_Graph_white2425);
   
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
      tex = new TLatex(0.18,0.7,"MVA 1L");
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
   
   TH1F *Graph_LObs26 = new TH1F("Graph_LObs26","LObs",100,166.7,230.3);
   Graph_LObs26->SetMinimum(518.9);
   Graph_LObs26->SetMaximum(520.1);
   Graph_LObs26->SetDirectory(0);
   Graph_LObs26->SetStats(0);

   ci = TColor::GetColor("#0000ff");
   Graph_LObs26->SetLineColor(ci);
   Graph_LObs26->GetXaxis()->SetLabelSize(0.035);
   Graph_LObs26->GetYaxis()->SetLabelSize(0.035);
   Graph_LObs26->GetYaxis()->SetTitleOffset(1.2);
   graph->SetHistogram(Graph_LObs26);
   
   graph->Draw("l");
   
   graph = new TGraph(2);
   graph->SetName("LObsM");
   graph->SetTitle("LObsM");
   graph->SetFillColor(1);
   graph->SetLineWidth(2);
   graph->SetMarkerStyle(20);
   graph->SetPoint(0,172,510);
   graph->SetPoint(1,225,510);
   
   TH1F *Graph_LObsM27 = new TH1F("Graph_LObsM27","LObsM",100,166.7,230.3);
   Graph_LObsM27->SetMinimum(509.9);
   Graph_LObsM27->SetMaximum(511.1);
   Graph_LObsM27->SetDirectory(0);
   Graph_LObsM27->SetStats(0);

   ci = TColor::GetColor("#0000ff");
   Graph_LObsM27->SetLineColor(ci);
   Graph_LObsM27->GetXaxis()->SetLabelSize(0.035);
   Graph_LObsM27->GetYaxis()->SetLabelSize(0.035);
   Graph_LObsM27->GetYaxis()->SetTitleOffset(1.2);
   graph->SetHistogram(Graph_LObsM27);
   
   graph->Draw("l");
   
   graph = new TGraph(2);
   graph->SetName("LObsP");
   graph->SetTitle("LObsP");
   graph->SetFillColor(1);
   graph->SetLineWidth(2);
   graph->SetMarkerStyle(20);
   graph->SetPoint(0,172,528);
   graph->SetPoint(1,225,528);
   
   TH1F *Graph_LObsP28 = new TH1F("Graph_LObsP28","LObsP",100,166.7,230.3);
   Graph_LObsP28->SetMinimum(527.9);
   Graph_LObsP28->SetMaximum(529.1);
   Graph_LObsP28->SetDirectory(0);
   Graph_LObsP28->SetStats(0);

   ci = TColor::GetColor("#0000ff");
   Graph_LObsP28->SetLineColor(ci);
   Graph_LObsP28->GetXaxis()->SetLabelSize(0.035);
   Graph_LObsP28->GetYaxis()->SetLabelSize(0.035);
   Graph_LObsP28->GetYaxis()->SetTitleOffset(1.2);
   graph->SetHistogram(Graph_LObsP28);
   
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
   
   TH1F *Graph_LExp29 = new TH1F("Graph_LExp29","LExp",100,166.7,230.3);
   Graph_LExp29->SetMinimum(479.9);
   Graph_LExp29->SetMaximum(481.1);
   Graph_LExp29->SetDirectory(0);
   Graph_LExp29->SetStats(0);

   ci = TColor::GetColor("#0000ff");
   Graph_LExp29->SetLineColor(ci);
   Graph_LExp29->GetXaxis()->SetLabelSize(0.035);
   Graph_LExp29->GetYaxis()->SetLabelSize(0.035);
   Graph_LExp29->GetYaxis()->SetTitleOffset(1.2);
   graph->SetHistogram(Graph_LExp29);
   
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
   
   TH1F *Graph_LExpM30 = new TH1F("Graph_LExpM30","LExpM",100,166.7,230.3);
   Graph_LExpM30->SetMinimum(470.9);
   Graph_LExpM30->SetMaximum(472.1);
   Graph_LExpM30->SetDirectory(0);
   Graph_LExpM30->SetStats(0);

   ci = TColor::GetColor("#0000ff");
   Graph_LExpM30->SetLineColor(ci);
   Graph_LExpM30->GetXaxis()->SetLabelSize(0.035);
   Graph_LExpM30->GetYaxis()->SetLabelSize(0.035);
   Graph_LExpM30->GetYaxis()->SetTitleOffset(1.2);
   graph->SetHistogram(Graph_LExpM30);
   
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
   
   TH1F *Graph_LExpP31 = new TH1F("Graph_LExpP31","LExpP",100,166.7,230.3);
   Graph_LExpP31->SetMinimum(488.9);
   Graph_LExpP31->SetMaximum(490.1);
   Graph_LExpP31->SetDirectory(0);
   Graph_LExpP31->SetStats(0);

   ci = TColor::GetColor("#0000ff");
   Graph_LExpP31->SetLineColor(ci);
   Graph_LExpP31->GetXaxis()->SetLabelSize(0.035);
   Graph_LExpP31->GetYaxis()->SetLabelSize(0.035);
   Graph_LExpP31->GetYaxis()->SetTitleOffset(1.2);
   graph->SetHistogram(Graph_LExpP31);
   
   graph->Draw("l");
   cCONT_->Modified();
   cCONT_->cd();
   cCONT_->SetSelected(cCONT_);
}
