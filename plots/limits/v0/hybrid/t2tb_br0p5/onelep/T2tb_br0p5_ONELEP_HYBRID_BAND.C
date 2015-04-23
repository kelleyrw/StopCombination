{
//=========Macro generated from canvas: cBrazil_/cBrazil_
//=========  (Wed Apr 22 17:25:12 2015) by ROOT version5.34/03
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
   
   graph = new TGraph(21);
   graph->SetName("Graph");
   graph->SetTitle("Graph");

   ci = TColor::GetColor("#ffcc00");
   graph->SetFillColor(ci);
   graph->SetPoint(0,439.9333591,0);
   graph->SetPoint(1,449.7206037,25);
   graph->SetPoint(2,447.5063546,50);
   graph->SetPoint(3,425,67.37583533);
   graph->SetPoint(4,417.9926488,75);
   graph->SetPoint(5,400,84.97061147);
   graph->SetPoint(6,375,89.34830681);
   graph->SetPoint(7,350,82.98584207);
   graph->SetPoint(8,331.2569099,75);
   graph->SetPoint(9,325,71.2093506);
   graph->SetPoint(10,300,53.57095385);
   graph->SetPoint(11,295.5718603,50);
   graph->SetPoint(12,275,26.27507385);
   graph->SetPoint(13,273.8617911,25);
   graph->SetPoint(14,266.9343574,0);
   graph->SetPoint(15,200,-12.5);
   graph->SetPoint(16,175,-12.5);
   graph->SetPoint(17,150,-12.5);
   graph->SetPoint(18,146.3349478,0);
   graph->SetPoint(19,125,1.630019028);
   graph->SetPoint(20,120.0570671,0);
   
   TH1F *Graph_Graph34 = new TH1F("Graph_Graph34","Graph",100,87.09071,482.687);
   Graph_Graph34->SetMinimum(-22.68483);
   Graph_Graph34->SetMaximum(99.53314);
   Graph_Graph34->SetDirectory(0);
   Graph_Graph34->SetStats(0);

   ci = TColor::GetColor("#0000ff");
   Graph_Graph34->SetLineColor(ci);
   Graph_Graph34->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph34->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph34->GetYaxis()->SetTitleOffset(1.2);
   graph->SetHistogram(Graph_Graph34);
   
   graph->Draw("f");
   
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
   
   TH1F *Graph_Graph_Graph_g_excl_xsec_obs182135 = new TH1F("Graph_Graph_Graph_g_excl_xsec_obs182135","g_excl_xsec_obs",100,-1560,1560);
   Graph_Graph_Graph_g_excl_xsec_obs182135->SetMinimum(-1440.438);
   Graph_Graph_Graph_g_excl_xsec_obs182135->SetMaximum(244.8168);
   Graph_Graph_Graph_g_excl_xsec_obs182135->SetDirectory(0);
   Graph_Graph_Graph_g_excl_xsec_obs182135->SetStats(0);

   ci = TColor::GetColor("#0000ff");
   Graph_Graph_Graph_g_excl_xsec_obs182135->SetLineColor(ci);
   Graph_Graph_Graph_g_excl_xsec_obs182135->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_Graph_g_excl_xsec_obs182135->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_Graph_g_excl_xsec_obs182135->GetYaxis()->SetTitleOffset(1.2);
   graph->SetHistogram(Graph_Graph_Graph_g_excl_xsec_obs182135);
   
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
   
   TH1F *Graph_Graph_Graph_g_excl_xsec_obs_p162236 = new TH1F("Graph_Graph_Graph_g_excl_xsec_obs_p162236","g_excl_xsec_obs_p1",100,83.35777,523.5074);
   Graph_Graph_Graph_g_excl_xsec_obs_p162236->SetMinimum(-25.38805);
   Graph_Graph_Graph_g_excl_xsec_obs_p162236->SetMaximum(129.2685);
   Graph_Graph_Graph_g_excl_xsec_obs_p162236->SetDirectory(0);
   Graph_Graph_Graph_g_excl_xsec_obs_p162236->SetStats(0);

   ci = TColor::GetColor("#0000ff");
   Graph_Graph_Graph_g_excl_xsec_obs_p162236->SetLineColor(ci);
   Graph_Graph_Graph_g_excl_xsec_obs_p162236->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_Graph_g_excl_xsec_obs_p162236->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_Graph_g_excl_xsec_obs_p162236->GetYaxis()->SetTitleOffset(1.2);
   graph->SetHistogram(Graph_Graph_Graph_g_excl_xsec_obs_p162236);
   
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
   
   TH1F *Graph_Graph_Graph_g_excl_xsec_obs_m172337 = new TH1F("Graph_Graph_Graph_g_excl_xsec_obs_m172337","g_excl_xsec_obs_m1",100,283.643,421.1941);
   Graph_Graph_Graph_g_excl_xsec_obs_m172337->SetMinimum(0);
   Graph_Graph_Graph_g_excl_xsec_obs_m172337->SetMaximum(89.39617);
   Graph_Graph_Graph_g_excl_xsec_obs_m172337->SetDirectory(0);
   Graph_Graph_Graph_g_excl_xsec_obs_m172337->SetStats(0);

   ci = TColor::GetColor("#0000ff");
   Graph_Graph_Graph_g_excl_xsec_obs_m172337->SetLineColor(ci);
   Graph_Graph_Graph_g_excl_xsec_obs_m172337->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_Graph_g_excl_xsec_obs_m172337->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_Graph_g_excl_xsec_obs_m172337->GetYaxis()->SetTitleOffset(1.2);
   graph->SetHistogram(Graph_Graph_Graph_g_excl_xsec_obs_m172337);
   
   graph->Draw("l");
   
   graph = new TGraph(9);
   graph->SetName("g_excl_xsec_exp");
   graph->SetTitle("g_excl_xsec_exp");

   ci = TColor::GetColor("#ff807e");
   graph->SetFillColor(ci);
   graph->SetLineStyle(2);
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
   
   TH1F *Graph_Graph_Graph_g_excl_xsec_exp31938 = new TH1F("Graph_Graph_Graph_g_excl_xsec_exp31938","g_excl_xsec_exp",100,302.2122,402.1793);
   Graph_Graph_Graph_g_excl_xsec_exp31938->SetMinimum(0);
   Graph_Graph_Graph_g_excl_xsec_exp31938->SetMaximum(57.79001);
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
