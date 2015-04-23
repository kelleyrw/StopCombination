{
//=========Macro generated from canvas: cCONT_/cCONT_
//=========  (Wed Apr 22 17:26:21 2015) by ROOT version5.34/03
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
   
   TH2D *h_ul_xsec_obs_smoothEMPTY = new TH2D("h_ul_xsec_obs_smoothEMPTY","Observed combined #sigma #times Branching Fraction (t2bw)EMPTY",31,137.5,912.5,29,-12.5,712.5);

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
   
   graph = new TGraph(50);
   graph->SetName("g_excl_xsec_obs");
   graph->SetTitle("g_excl_xsec_obs");

   ci = TColor::GetColor("#cccccc");
   graph->SetFillColor(ci);
   graph->SetLineWidth(4);
   graph->SetPoint(0,573.7753142,0);
   graph->SetPoint(1,575,0.8843873681);
   graph->SetPoint(2,600,22.93650948);
   graph->SetPoint(3,602.3075114,25);
   graph->SetPoint(4,625,39.24520705);
   graph->SetPoint(5,645.748562,50);
   graph->SetPoint(6,650,53.20833615);
   graph->SetPoint(7,675,70.33960262);
   graph->SetPoint(8,685.7563605,75);
   graph->SetPoint(9,700,84.69602531);
   graph->SetPoint(10,716.9305992,100);
   graph->SetPoint(11,717.3281627,125);
   graph->SetPoint(12,706.5764935,150);
   graph->SetPoint(13,700,170.7305802);
   graph->SetPoint(14,698.6781218,175);
   graph->SetPoint(15,684.7068639,200);
   graph->SetPoint(16,675,221.1380598);
   graph->SetPoint(17,672.7025173,225);
   graph->SetPoint(18,659.4661606,250);
   graph->SetPoint(19,650,259.1932299);
   graph->SetPoint(20,625,272.7241802);
   graph->SetPoint(21,618.2401147,275);
   graph->SetPoint(22,600,277.7443258);
   graph->SetPoint(23,578.4119844,275);
   graph->SetPoint(24,575,274.3256118);
   graph->SetPoint(25,550,258.4216676);
   graph->SetPoint(26,535.1395028,250);
   graph->SetPoint(27,525,244.398853);
   graph->SetPoint(28,500,229.9040084);
   graph->SetPoint(29,491.1910494,225);
   graph->SetPoint(30,475,214.7564802);
   graph->SetPoint(31,450,203.0191988);
   graph->SetPoint(32,445.6527433,200);
   graph->SetPoint(33,425,183.0314793);
   graph->SetPoint(34,410.6927378,175);
   graph->SetPoint(35,400,167.3249285);
   graph->SetPoint(36,375,150.3537602);
   graph->SetPoint(37,374.4124669,150);
   graph->SetPoint(38,350,129.9052404);
   graph->SetPoint(39,344.3886777,125);
   graph->SetPoint(40,325,109.4329565);
   graph->SetPoint(41,311.8245304,100);
   graph->SetPoint(42,300,87.83935359);
   graph->SetPoint(43,288.4850168,75);
   graph->SetPoint(44,275,59.28480273);
   graph->SetPoint(45,268.1101871,50);
   graph->SetPoint(46,255.3480288,25);
   graph->SetPoint(47,252.6361204,0);
   graph->SetPoint(48,1300,-1300);
   graph->SetPoint(49,-1300,-1300);
   
   TH1F *Graph_g_excl_xsec_obs19 = new TH1F("Graph_g_excl_xsec_obs19","g_excl_xsec_obs",100,-1560,1560);
   Graph_g_excl_xsec_obs19->SetMinimum(-1457.774);
   Graph_g_excl_xsec_obs19->SetMaximum(435.5188);
   Graph_g_excl_xsec_obs19->SetDirectory(0);
   Graph_g_excl_xsec_obs19->SetStats(0);

   ci = TColor::GetColor("#0000ff");
   Graph_g_excl_xsec_obs19->SetLineColor(ci);
   Graph_g_excl_xsec_obs19->GetXaxis()->SetLabelSize(0.035);
   Graph_g_excl_xsec_obs19->GetYaxis()->SetLabelSize(0.035);
   Graph_g_excl_xsec_obs19->GetYaxis()->SetTitleOffset(1.2);
   graph->SetHistogram(Graph_g_excl_xsec_obs19);
   
   graph->Draw("f");
   
   graph = new TGraph(48);
   graph->SetName("g_excl_xsec_exp");
   graph->SetTitle("g_excl_xsec_exp");

   ci = TColor::GetColor("#ff807e");
   graph->SetFillColor(ci);

   ci = TColor::GetColor("#ff0000");
   graph->SetLineColor(ci);
   graph->SetLineStyle(7);
   graph->SetLineWidth(4);
   graph->SetPoint(0,614.0301304,0);
   graph->SetPoint(1,625,11.21072174);
   graph->SetPoint(2,638.18863,25);
   graph->SetPoint(3,650,34.05740089);
   graph->SetPoint(4,670.7775328,50);
   graph->SetPoint(5,675,54.37999886);
   graph->SetPoint(6,696.8450288,75);
   graph->SetPoint(7,700,79.21747506);
   graph->SetPoint(8,714.1064589,100);
   graph->SetPoint(9,718.1907631,125);
   graph->SetPoint(10,714.4303238,150);
   graph->SetPoint(11,711.8084215,175);
   graph->SetPoint(12,706.7550512,200);
   graph->SetPoint(13,700.9899112,225);
   graph->SetPoint(14,700,230.9219393);
   graph->SetPoint(15,695.8750974,250);
   graph->SetPoint(16,690.4977336,275);
   graph->SetPoint(17,678.1787611,300);
   graph->SetPoint(18,675,302.7707486);
   graph->SetPoint(19,650,310.5449026);
   graph->SetPoint(20,625,309.8868322);
   graph->SetPoint(21,600,302.2443963);
   graph->SetPoint(22,594.9734343,300);
   graph->SetPoint(23,575,288.9215478);
   graph->SetPoint(24,550,275.6961643);
   graph->SetPoint(25,548.8279793,275);
   graph->SetPoint(26,525,258.8181368);
   graph->SetPoint(27,509.2740961,250);
   graph->SetPoint(28,500,243.8307912);
   graph->SetPoint(29,475,227.1312179);
   graph->SetPoint(30,471.9583534,225);
   graph->SetPoint(31,450,208.8463534);
   graph->SetPoint(32,436.7207024,200);
   graph->SetPoint(33,425,190.3121316);
   graph->SetPoint(34,400,175.439504);
   graph->SetPoint(35,399.3488337,175);
   graph->SetPoint(36,375,152.5370968);
   graph->SetPoint(37,371.5842227,150);
   graph->SetPoint(38,350,132.1036322);
   graph->SetPoint(39,339.4454116,125);
   graph->SetPoint(40,325,113.582105);
   graph->SetPoint(41,308.6158493,100);
   graph->SetPoint(42,300,90.92113036);
   graph->SetPoint(43,285.2928563,75);
   graph->SetPoint(44,275,60.91277888);
   graph->SetPoint(45,268.4156305,50);
   graph->SetPoint(46,258.7209001,25);
   graph->SetPoint(47,257.9697144,0);
   
   TH1F *Graph_Graph_g_excl_xsec_exp320 = new TH1F("Graph_Graph_g_excl_xsec_exp320","g_excl_xsec_exp",100,211.9476,764.2129);
   Graph_Graph_g_excl_xsec_exp320->SetMinimum(0);
   Graph_Graph_g_excl_xsec_exp320->SetMaximum(341.5994);
   Graph_Graph_g_excl_xsec_exp320->SetDirectory(0);
   Graph_Graph_g_excl_xsec_exp320->SetStats(0);

   ci = TColor::GetColor("#0000ff");
   Graph_Graph_g_excl_xsec_exp320->SetLineColor(ci);
   Graph_Graph_g_excl_xsec_exp320->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_g_excl_xsec_exp320->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_g_excl_xsec_exp320->GetYaxis()->SetTitleOffset(1.2);
   graph->SetHistogram(Graph_Graph_g_excl_xsec_exp320);
   
   graph->Draw("l");
   
   graph = new TGraph(44);
   graph->SetName("g_excl_xsec_exp_p1");
   graph->SetTitle("g_excl_xsec_exp_p1");

   ci = TColor::GetColor("#ff807e");
   graph->SetFillColor(ci);

   ci = TColor::GetColor("#ff0000");
   graph->SetLineColor(ci);
   graph->SetLineStyle(7);
   graph->SetLineWidth(2);
   graph->SetPoint(0,581.0664229,0);
   graph->SetPoint(1,600,17.39002184);
   graph->SetPoint(2,607.3529588,25);
   graph->SetPoint(3,625,38.93833765);
   graph->SetPoint(4,639.334876,50);
   graph->SetPoint(5,650,61.70588247);
   graph->SetPoint(6,662.6627054,75);
   graph->SetPoint(7,675,97.01546541);
   graph->SetPoint(8,676.7425874,100);
   graph->SetPoint(9,681.9432676,125);
   graph->SetPoint(10,680.2594638,150);
   graph->SetPoint(11,677.7044887,175);
   graph->SetPoint(12,675,188.8499322);
   graph->SetPoint(13,672.5118582,200);
   graph->SetPoint(14,666.8712354,225);
   graph->SetPoint(15,658.0249562,250);
   graph->SetPoint(16,650,261.4155852);
   graph->SetPoint(17,631.2568408,275);
   graph->SetPoint(18,625,277.546502);
   graph->SetPoint(19,600,278.7110449);
   graph->SetPoint(20,589.5581374,275);
   graph->SetPoint(21,575,269.43599);
   graph->SetPoint(22,550,257.6664479);
   graph->SetPoint(23,535.3257848,250);
   graph->SetPoint(24,525,243.5673221);
   graph->SetPoint(25,500,229.6374623);
   graph->SetPoint(26,492.2885371,225);
   graph->SetPoint(27,475,212.4106017);
   graph->SetPoint(28,453.2820186,200);
   graph->SetPoint(29,450,197.5712186);
   graph->SetPoint(30,425,177.8277703);
   graph->SetPoint(31,420.4730861,175);
   graph->SetPoint(32,400,157.4352197);
   graph->SetPoint(33,391.7288939,150);
   graph->SetPoint(34,375,134.3640375);
   graph->SetPoint(35,362.8900674,125);
   graph->SetPoint(36,350,113.6079481);
   graph->SetPoint(37,331.5270714,100);
   graph->SetPoint(38,325,93.7008201);
   graph->SetPoint(39,305.9732449,75);
   graph->SetPoint(40,300,66.42802027);
   graph->SetPoint(41,289.4763105,50);
   graph->SetPoint(42,283.6643163,25);
   graph->SetPoint(43,286.7673785,0);
   
   TH1F *Graph_Graph_g_excl_xsec_exp_p1421 = new TH1F("Graph_Graph_g_excl_xsec_exp_p1421","g_excl_xsec_exp_p1",100,243.8364,721.7712);
   Graph_Graph_g_excl_xsec_exp_p1421->SetMinimum(0);
   Graph_Graph_g_excl_xsec_exp_p1421->SetMaximum(306.5821);
   Graph_Graph_g_excl_xsec_exp_p1421->SetDirectory(0);
   Graph_Graph_g_excl_xsec_exp_p1421->SetStats(0);

   ci = TColor::GetColor("#0000ff");
   Graph_Graph_g_excl_xsec_exp_p1421->SetLineColor(ci);
   Graph_Graph_g_excl_xsec_exp_p1421->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_g_excl_xsec_exp_p1421->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_g_excl_xsec_exp_p1421->GetYaxis()->SetTitleOffset(1.2);
   graph->SetHistogram(Graph_Graph_g_excl_xsec_exp_p1421);
   
   graph->Draw("l");
   
   graph = new TGraph(52);
   graph->SetName("g_excl_xsec_exp_m1");
   graph->SetTitle("g_excl_xsec_exp_m1");

   ci = TColor::GetColor("#ff807e");
   graph->SetFillColor(ci);

   ci = TColor::GetColor("#ff0000");
   graph->SetLineColor(ci);
   graph->SetLineStyle(7);
   graph->SetLineWidth(2);
   graph->SetPoint(0,632.8086657,0);
   graph->SetPoint(1,650,20.12404962);
   graph->SetPoint(2,655.1125836,25);
   graph->SetPoint(3,675,38.22464896);
   graph->SetPoint(4,690.4673917,50);
   graph->SetPoint(5,700,58.97390383);
   graph->SetPoint(6,724.3553956,75);
   graph->SetPoint(7,725,75.83031112);
   graph->SetPoint(8,739.0433412,100);
   graph->SetPoint(9,742.9056928,125);
   graph->SetPoint(10,737.0736267,150);
   graph->SetPoint(11,732.2015983,175);
   graph->SetPoint(12,727.3245051,200);
   graph->SetPoint(13,725,209.7715317);
   graph->SetPoint(14,721.2947748,225);
   graph->SetPoint(15,718.2121259,250);
   graph->SetPoint(16,716.4985891,275);
   graph->SetPoint(17,709.862464,300);
   graph->SetPoint(18,700,317.6798668);
   graph->SetPoint(19,688.2175337,325);
   graph->SetPoint(20,675,330.0571414);
   graph->SetPoint(21,650,333.3116419);
   graph->SetPoint(22,625,329.2565604);
   graph->SetPoint(23,616.8725936,325);
   graph->SetPoint(24,600,314.1689279);
   graph->SetPoint(25,575.3228782,300);
   graph->SetPoint(26,575,299.7697735);
   graph->SetPoint(27,550,281.2053947);
   graph->SetPoint(28,538.9735662,275);
   graph->SetPoint(29,525,266.1735997);
   graph->SetPoint(30,500,251.9654662);
   graph->SetPoint(31,496.5818882,250);
   graph->SetPoint(32,475,234.5528426);
   graph->SetPoint(33,460.5655516,225);
   graph->SetPoint(34,450,216.9231064);
   graph->SetPoint(35,425,200.6357496);
   graph->SetPoint(36,423.8892898,200);
   graph->SetPoint(37,400,183.5144787);
   graph->SetPoint(38,387.6792138,175);
   graph->SetPoint(39,375,162.780422);
   graph->SetPoint(40,358.9695383,150);
   graph->SetPoint(41,350,142.3038123);
   graph->SetPoint(42,325,125.0001332);
   graph->SetPoint(43,324.9998668,125);
   graph->SetPoint(44,300,100.000176);
   graph->SetPoint(45,299.999824,100);
   graph->SetPoint(46,275,75.00011361);
   graph->SetPoint(47,274.9998864,75);
   graph->SetPoint(48,254.5179996,50);
   graph->SetPoint(49,250,39.07357681);
   graph->SetPoint(50,245.7042379,25);
   graph->SetPoint(51,244.2226828,0);
   
   TH1F *Graph_Graph_g_excl_xsec_exp_m1522 = new TH1F("Graph_Graph_g_excl_xsec_exp_m1522","g_excl_xsec_exp_m1",100,194.3544,792.774);
   Graph_Graph_g_excl_xsec_exp_m1522->SetMinimum(0);
   Graph_Graph_g_excl_xsec_exp_m1522->SetMaximum(366.6428);
   Graph_Graph_g_excl_xsec_exp_m1522->SetDirectory(0);
   Graph_Graph_g_excl_xsec_exp_m1522->SetStats(0);

   ci = TColor::GetColor("#0000ff");
   Graph_Graph_g_excl_xsec_exp_m1522->SetLineColor(ci);
   Graph_Graph_g_excl_xsec_exp_m1522->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_g_excl_xsec_exp_m1522->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_g_excl_xsec_exp_m1522->GetYaxis()->SetTitleOffset(1.2);
   graph->SetHistogram(Graph_Graph_g_excl_xsec_exp_m1522);
   
   graph->Draw("l");
   
   graph = new TGraph(50);
   graph->SetName("g_excl_xsec_obs");
   graph->SetTitle("g_excl_xsec_obs");

   ci = TColor::GetColor("#cccccc");
   graph->SetFillColor(ci);
   graph->SetLineWidth(4);
   graph->SetPoint(0,573.7753142,0);
   graph->SetPoint(1,575,0.8843873681);
   graph->SetPoint(2,600,22.93650948);
   graph->SetPoint(3,602.3075114,25);
   graph->SetPoint(4,625,39.24520705);
   graph->SetPoint(5,645.748562,50);
   graph->SetPoint(6,650,53.20833615);
   graph->SetPoint(7,675,70.33960262);
   graph->SetPoint(8,685.7563605,75);
   graph->SetPoint(9,700,84.69602531);
   graph->SetPoint(10,716.9305992,100);
   graph->SetPoint(11,717.3281627,125);
   graph->SetPoint(12,706.5764935,150);
   graph->SetPoint(13,700,170.7305802);
   graph->SetPoint(14,698.6781218,175);
   graph->SetPoint(15,684.7068639,200);
   graph->SetPoint(16,675,221.1380598);
   graph->SetPoint(17,672.7025173,225);
   graph->SetPoint(18,659.4661606,250);
   graph->SetPoint(19,650,259.1932299);
   graph->SetPoint(20,625,272.7241802);
   graph->SetPoint(21,618.2401147,275);
   graph->SetPoint(22,600,277.7443258);
   graph->SetPoint(23,578.4119844,275);
   graph->SetPoint(24,575,274.3256118);
   graph->SetPoint(25,550,258.4216676);
   graph->SetPoint(26,535.1395028,250);
   graph->SetPoint(27,525,244.398853);
   graph->SetPoint(28,500,229.9040084);
   graph->SetPoint(29,491.1910494,225);
   graph->SetPoint(30,475,214.7564802);
   graph->SetPoint(31,450,203.0191988);
   graph->SetPoint(32,445.6527433,200);
   graph->SetPoint(33,425,183.0314793);
   graph->SetPoint(34,410.6927378,175);
   graph->SetPoint(35,400,167.3249285);
   graph->SetPoint(36,375,150.3537602);
   graph->SetPoint(37,374.4124669,150);
   graph->SetPoint(38,350,129.9052404);
   graph->SetPoint(39,344.3886777,125);
   graph->SetPoint(40,325,109.4329565);
   graph->SetPoint(41,311.8245304,100);
   graph->SetPoint(42,300,87.83935359);
   graph->SetPoint(43,288.4850168,75);
   graph->SetPoint(44,275,59.28480273);
   graph->SetPoint(45,268.1101871,50);
   graph->SetPoint(46,255.3480288,25);
   graph->SetPoint(47,252.6361204,0);
   graph->SetPoint(48,1300,-1300);
   graph->SetPoint(49,-1300,-1300);
   
   TH1F *Graph_Graph_g_excl_xsec_obs1923 = new TH1F("Graph_Graph_g_excl_xsec_obs1923","g_excl_xsec_obs",100,-1560,1560);
   Graph_Graph_g_excl_xsec_obs1923->SetMinimum(-1457.774);
   Graph_Graph_g_excl_xsec_obs1923->SetMaximum(435.5188);
   Graph_Graph_g_excl_xsec_obs1923->SetDirectory(0);
   Graph_Graph_g_excl_xsec_obs1923->SetStats(0);

   ci = TColor::GetColor("#0000ff");
   Graph_Graph_g_excl_xsec_obs1923->SetLineColor(ci);
   Graph_Graph_g_excl_xsec_obs1923->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_g_excl_xsec_obs1923->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_g_excl_xsec_obs1923->GetYaxis()->SetTitleOffset(1.2);
   graph->SetHistogram(Graph_Graph_g_excl_xsec_obs1923);
   
   graph->Draw("l");
   
   graph = new TGraph(50);
   graph->SetName("g_excl_xsec_obs_p1");
   graph->SetTitle("g_excl_xsec_obs_p1");

   ci = TColor::GetColor("#ff807e");
   graph->SetFillColor(ci);
   graph->SetLineWidth(2);
   graph->SetPoint(0,597.2100263,0);
   graph->SetPoint(1,600,2.414986394);
   graph->SetPoint(2,625,24.28524932);
   graph->SetPoint(3,625.9889742,25);
   graph->SetPoint(4,650,37.62557931);
   graph->SetPoint(5,675,49.82619758);
   graph->SetPoint(6,675.4449978,50);
   graph->SetPoint(7,700,61.95611163);
   graph->SetPoint(8,725,72.71934755);
   graph->SetPoint(9,728.7340828,75);
   graph->SetPoint(10,747.3776966,100);
   graph->SetPoint(11,748.5857584,125);
   graph->SetPoint(12,737.1036186,150);
   graph->SetPoint(13,729.1592917,175);
   graph->SetPoint(14,725,187.1256941);
   graph->SetPoint(15,717.5211038,200);
   graph->SetPoint(16,706.3893602,225);
   graph->SetPoint(17,700,238.8917286);
   graph->SetPoint(18,693.6982345,250);
   graph->SetPoint(19,678.5570527,275);
   graph->SetPoint(20,675,278.1605071);
   graph->SetPoint(21,650,286.4612618);
   graph->SetPoint(22,625,292.1207923);
   graph->SetPoint(23,600,289.786576);
   graph->SetPoint(24,575,284.0962704);
   graph->SetPoint(25,558.2137488,275);
   graph->SetPoint(26,550,269.6129311);
   graph->SetPoint(27,525,253.4926995);
   graph->SetPoint(28,519.098196,250);
   graph->SetPoint(29,500,237.7204376);
   graph->SetPoint(30,477.4061731,225);
   graph->SetPoint(31,475,223.4644231);
   graph->SetPoint(32,450,208.9869631);
   graph->SetPoint(33,437.1281013,200);
   graph->SetPoint(34,425,189.9989924);
   graph->SetPoint(35,400,175.7266236);
   graph->SetPoint(36,398.6959007,175);
   graph->SetPoint(37,375,156.8793984);
   graph->SetPoint(38,363.5368229,150);
   graph->SetPoint(39,350,138.8849168);
   graph->SetPoint(40,334.1528373,125);
   graph->SetPoint(41,325,117.6390121);
   graph->SetPoint(42,300.0398131,100);
   graph->SetPoint(43,300,99.95944244);
   graph->SetPoint(44,277.5853017,75);
   graph->SetPoint(45,275,71.98999801);
   graph->SetPoint(46,258.6734789,50);
   graph->SetPoint(47,250,34.65257306);
   graph->SetPoint(48,245.5884945,25);
   graph->SetPoint(49,241.2973037,0);
   
   TH1F *Graph_Graph_g_excl_xsec_obs_p1724 = new TH1F("Graph_Graph_g_excl_xsec_obs_p1724","g_excl_xsec_obs_p1",100,190.5685,799.3146);
   Graph_Graph_g_excl_xsec_obs_p1724->SetMinimum(0);
   Graph_Graph_g_excl_xsec_obs_p1724->SetMaximum(321.3329);
   Graph_Graph_g_excl_xsec_obs_p1724->SetDirectory(0);
   Graph_Graph_g_excl_xsec_obs_p1724->SetStats(0);

   ci = TColor::GetColor("#0000ff");
   Graph_Graph_g_excl_xsec_obs_p1724->SetLineColor(ci);
   Graph_Graph_g_excl_xsec_obs_p1724->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_g_excl_xsec_obs_p1724->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_g_excl_xsec_obs_p1724->GetYaxis()->SetTitleOffset(1.2);
   graph->SetHistogram(Graph_Graph_g_excl_xsec_obs_p1724);
   
   graph->Draw("l");
   
   graph = new TGraph(45);
   graph->SetName("g_excl_xsec_obs_m1");
   graph->SetTitle("g_excl_xsec_obs_m1");

   ci = TColor::GetColor("#ff807e");
   graph->SetFillColor(ci);
   graph->SetLineWidth(2);
   graph->SetPoint(0,544.7016708,0);
   graph->SetPoint(1,550,4.237122548);
   graph->SetPoint(2,575,21.93516184);
   graph->SetPoint(3,578.3906575,25);
   graph->SetPoint(4,600,38.79843393);
   graph->SetPoint(5,618.0427615,50);
   graph->SetPoint(6,625,56.69945539);
   graph->SetPoint(7,649.4776037,75);
   graph->SetPoint(8,650,75.71634887);
   graph->SetPoint(9,671.7980292,100);
   graph->SetPoint(10,675,107.688436);
   graph->SetPoint(11,680.9169449,125);
   graph->SetPoint(12,675,145.1083821);
   graph->SetPoint(13,673.1943039,150);
   graph->SetPoint(14,666.9863214,175);
   graph->SetPoint(15,655.3378579,200);
   graph->SetPoint(16,650,208.7456977);
   graph->SetPoint(17,640.238988,225);
   graph->SetPoint(18,625,243.7503561);
   graph->SetPoint(19,616.6104605,250);
   graph->SetPoint(20,600,258.0225678);
   graph->SetPoint(21,575,256.0829859);
   graph->SetPoint(22,560.4707876,250);
   graph->SetPoint(23,550,246.0209326);
   graph->SetPoint(24,525,233.7688699);
   graph->SetPoint(25,507.5916719,225);
   graph->SetPoint(26,500,220.3544185);
   graph->SetPoint(27,475,206.0485372);
   graph->SetPoint(28,460.1810106,200);
   graph->SetPoint(29,450,194.5264227);
   graph->SetPoint(30,425,176.0639662);
   graph->SetPoint(31,423.124964,175);
   graph->SetPoint(32,400,158.2672324);
   graph->SetPoint(33,387.7127491,150);
   graph->SetPoint(34,375,139.6268196);
   graph->SetPoint(35,356.3827529,125);
   graph->SetPoint(36,350,119.5703152);
   graph->SetPoint(37,325,101.2269009);
   graph->SetPoint(38,323.3156243,100);
   graph->SetPoint(39,300,75.71926474);
   graph->SetPoint(40,299.3560791,75);
   graph->SetPoint(41,278.7767356,50);
   graph->SetPoint(42,275,41.82372398);
   graph->SetPoint(43,268.0002193,25);
   graph->SetPoint(44,267.620202,0);
   
   TH1F *Graph_Graph_g_excl_xsec_obs_m1825 = new TH1F("Graph_Graph_g_excl_xsec_obs_m1825","g_excl_xsec_obs_m1",100,226.2905,722.2466);
   Graph_Graph_g_excl_xsec_obs_m1825->SetMinimum(0);
   Graph_Graph_g_excl_xsec_obs_m1825->SetMaximum(283.8248);
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
      tex = new TLatex(0.16,0.9,"pp #rightarrow #tilde{t}#tilde{t}, #tilde{t} #rightarrow b#tilde{#chi}^{#pm}_{1}");
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
