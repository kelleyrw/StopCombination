{
//=========Macro generated from canvas: cBrazil_/cBrazil_
//=========  (Thu Apr 23 17:01:18 2015) by ROOT version5.34/03
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
   
   graph = new TGraph(96);
   graph->SetName("Graph");
   graph->SetTitle("Graph");

   ci = TColor::GetColor("#ffcc00");
   graph->SetFillColor(ci);
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
   graph->SetPoint(44,244.2226828,0);
   graph->SetPoint(45,245.7042379,25);
   graph->SetPoint(46,250,39.07357681);
   graph->SetPoint(47,254.5179996,50);
   graph->SetPoint(48,274.9998864,75);
   graph->SetPoint(49,275,75.00011361);
   graph->SetPoint(50,299.999824,100);
   graph->SetPoint(51,300,100.000176);
   graph->SetPoint(52,324.9998668,125);
   graph->SetPoint(53,325,125.0001332);
   graph->SetPoint(54,350,142.3038123);
   graph->SetPoint(55,358.9695383,150);
   graph->SetPoint(56,375,162.780422);
   graph->SetPoint(57,387.6792138,175);
   graph->SetPoint(58,400,183.5144787);
   graph->SetPoint(59,423.8892898,200);
   graph->SetPoint(60,425,200.6357496);
   graph->SetPoint(61,450,216.9231064);
   graph->SetPoint(62,460.5655516,225);
   graph->SetPoint(63,475,234.5528426);
   graph->SetPoint(64,496.5818882,250);
   graph->SetPoint(65,500,251.9654662);
   graph->SetPoint(66,525,266.1735997);
   graph->SetPoint(67,538.9735662,275);
   graph->SetPoint(68,550,281.2053947);
   graph->SetPoint(69,575,299.7697735);
   graph->SetPoint(70,575.3228782,300);
   graph->SetPoint(71,600,314.1689279);
   graph->SetPoint(72,616.8725936,325);
   graph->SetPoint(73,625,329.2565604);
   graph->SetPoint(74,650,333.3116419);
   graph->SetPoint(75,675,330.0571414);
   graph->SetPoint(76,688.2175337,325);
   graph->SetPoint(77,700,317.6798668);
   graph->SetPoint(78,709.862464,300);
   graph->SetPoint(79,716.4985891,275);
   graph->SetPoint(80,718.2121259,250);
   graph->SetPoint(81,721.2947748,225);
   graph->SetPoint(82,725,209.7715317);
   graph->SetPoint(83,727.3245051,200);
   graph->SetPoint(84,732.2015983,175);
   graph->SetPoint(85,737.0736267,150);
   graph->SetPoint(86,742.9056928,125);
   graph->SetPoint(87,739.0433412,100);
   graph->SetPoint(88,725,75.83031112);
   graph->SetPoint(89,724.3553956,75);
   graph->SetPoint(90,700,58.97390383);
   graph->SetPoint(91,690.4673917,50);
   graph->SetPoint(92,675,38.22464896);
   graph->SetPoint(93,655.1125836,25);
   graph->SetPoint(94,650,20.12404962);
   graph->SetPoint(95,632.8086657,0);
   
   TH1F *Graph_Graph36 = new TH1F("Graph_Graph36","Graph",100,194.3544,792.774);
   Graph_Graph36->SetMinimum(0);
   Graph_Graph36->SetMaximum(366.6428);
   Graph_Graph36->SetDirectory(0);
   Graph_Graph36->SetStats(0);

   ci = TColor::GetColor("#0000ff");
   Graph_Graph36->SetLineColor(ci);
   Graph_Graph36->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph36->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph36->GetYaxis()->SetTitleOffset(1.2);
   graph->SetHistogram(Graph_Graph36);
   
   graph->Draw("f");
   
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
   
   TH1F *Graph_Graph_Graph_g_excl_xsec_obs192337 = new TH1F("Graph_Graph_Graph_g_excl_xsec_obs192337","g_excl_xsec_obs",100,-1560,1560);
   Graph_Graph_Graph_g_excl_xsec_obs192337->SetMinimum(-1457.774);
   Graph_Graph_Graph_g_excl_xsec_obs192337->SetMaximum(435.5188);
   Graph_Graph_Graph_g_excl_xsec_obs192337->SetDirectory(0);
   Graph_Graph_Graph_g_excl_xsec_obs192337->SetStats(0);

   ci = TColor::GetColor("#0000ff");
   Graph_Graph_Graph_g_excl_xsec_obs192337->SetLineColor(ci);
   Graph_Graph_Graph_g_excl_xsec_obs192337->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_Graph_g_excl_xsec_obs192337->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_Graph_g_excl_xsec_obs192337->GetYaxis()->SetTitleOffset(1.2);
   graph->SetHistogram(Graph_Graph_Graph_g_excl_xsec_obs192337);
   
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
   
   TH1F *Graph_Graph_Graph_g_excl_xsec_obs_p172438 = new TH1F("Graph_Graph_Graph_g_excl_xsec_obs_p172438","g_excl_xsec_obs_p1",100,190.5685,799.3146);
   Graph_Graph_Graph_g_excl_xsec_obs_p172438->SetMinimum(0);
   Graph_Graph_Graph_g_excl_xsec_obs_p172438->SetMaximum(321.3329);
   Graph_Graph_Graph_g_excl_xsec_obs_p172438->SetDirectory(0);
   Graph_Graph_Graph_g_excl_xsec_obs_p172438->SetStats(0);

   ci = TColor::GetColor("#0000ff");
   Graph_Graph_Graph_g_excl_xsec_obs_p172438->SetLineColor(ci);
   Graph_Graph_Graph_g_excl_xsec_obs_p172438->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_Graph_g_excl_xsec_obs_p172438->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_Graph_g_excl_xsec_obs_p172438->GetYaxis()->SetTitleOffset(1.2);
   graph->SetHistogram(Graph_Graph_Graph_g_excl_xsec_obs_p172438);
   
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
   
   TH1F *Graph_Graph_Graph_g_excl_xsec_obs_m182539 = new TH1F("Graph_Graph_Graph_g_excl_xsec_obs_m182539","g_excl_xsec_obs_m1",100,226.2905,722.2466);
   Graph_Graph_Graph_g_excl_xsec_obs_m182539->SetMinimum(0);
   Graph_Graph_Graph_g_excl_xsec_obs_m182539->SetMaximum(283.8248);
   Graph_Graph_Graph_g_excl_xsec_obs_m182539->SetDirectory(0);
   Graph_Graph_Graph_g_excl_xsec_obs_m182539->SetStats(0);

   ci = TColor::GetColor("#0000ff");
   Graph_Graph_Graph_g_excl_xsec_obs_m182539->SetLineColor(ci);
   Graph_Graph_Graph_g_excl_xsec_obs_m182539->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_Graph_g_excl_xsec_obs_m182539->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_Graph_g_excl_xsec_obs_m182539->GetYaxis()->SetTitleOffset(1.2);
   graph->SetHistogram(Graph_Graph_Graph_g_excl_xsec_obs_m182539);
   
   graph->Draw("l");
   
   graph = new TGraph(48);
   graph->SetName("g_excl_xsec_exp");
   graph->SetTitle("g_excl_xsec_exp");

   ci = TColor::GetColor("#ff807e");
   graph->SetFillColor(ci);
   graph->SetLineStyle(2);
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
   
   TH1F *Graph_Graph_Graph_g_excl_xsec_exp32040 = new TH1F("Graph_Graph_Graph_g_excl_xsec_exp32040","g_excl_xsec_exp",100,211.9476,764.2129);
   Graph_Graph_Graph_g_excl_xsec_exp32040->SetMinimum(0);
   Graph_Graph_Graph_g_excl_xsec_exp32040->SetMaximum(341.5994);
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
