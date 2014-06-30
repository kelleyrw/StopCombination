{
//=========Macro generated from canvas: cCONT_/cCONT_
//=========  (Sun Jun 29 21:56:42 2014) by ROOT version5.34/03
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
   
   TH2D *h_ul_xsec_exp_smoothEMPTY = new TH2D("h_ul_xsec_exp_smoothEMPTY","Expected combined #sigma #times Branching Fraction (t2bw)EMPTY",31,137.5,912.5,29,-12.5,712.5);

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
   
   graph = new TGraph(59);
   graph->SetName("g_excl_xsec_obs");
   graph->SetTitle("g_excl_xsec_obs");

   ci = TColor::GetColor("#cccccc");
   graph->SetFillColor(ci);
   graph->SetLineWidth(4);
   graph->SetPoint(0,572.3476197,0);
   graph->SetPoint(1,575,1.959504052);
   graph->SetPoint(2,599.0418693,25);
   graph->SetPoint(3,600,25.61988224);
   graph->SetPoint(4,625,39.68757423);
   graph->SetPoint(5,650,47.57317519);
   graph->SetPoint(6,658.1835936,50);
   graph->SetPoint(7,675,57.25865261);
   graph->SetPoint(8,700,62.59807096);
   graph->SetPoint(9,725,71.00253335);
   graph->SetPoint(10,732.8811611,75);
   graph->SetPoint(11,750,97.50137997);
   graph->SetPoint(12,751.1933537,100);
   graph->SetPoint(13,753.1448617,125);
   graph->SetPoint(14,750,132.5475721);
   graph->SetPoint(15,741.8012491,150);
   graph->SetPoint(16,728.8385202,175);
   graph->SetPoint(17,725,181.7924591);
   graph->SetPoint(18,700,199.0318444);
   graph->SetPoint(19,699.0637727,200);
   graph->SetPoint(20,684.1515427,225);
   graph->SetPoint(21,675,233.4734844);
   graph->SetPoint(22,666.2388417,250);
   graph->SetPoint(23,655.6954977,275);
   graph->SetPoint(24,650,283.7377233);
   graph->SetPoint(25,645.9552011,300);
   graph->SetPoint(26,625,324.8442386);
   graph->SetPoint(27,624.626559,325);
   graph->SetPoint(28,600,327.6340916);
   graph->SetPoint(29,592.5573278,325);
   graph->SetPoint(30,575,311.369323);
   graph->SetPoint(31,562.39346,300);
   graph->SetPoint(32,550.9863426,275);
   graph->SetPoint(33,550,272.8621386);
   graph->SetPoint(34,531.8512458,250);
   graph->SetPoint(35,525,245.3235523);
   graph->SetPoint(36,500,230.28538);
   graph->SetPoint(37,491.5823836,225);
   graph->SetPoint(38,475,213.8778267);
   graph->SetPoint(39,450,203.5276237);
   graph->SetPoint(40,445.5232995,200);
   graph->SetPoint(41,425,183.2036799);
   graph->SetPoint(42,408.1956501,175);
   graph->SetPoint(43,400,170.1772006);
   graph->SetPoint(44,375,157.870363);
   graph->SetPoint(45,352.992714,150);
   graph->SetPoint(46,350,148.264314);
   graph->SetPoint(47,325,125.0000668);
   graph->SetPoint(48,324.9999332,125);
   graph->SetPoint(49,300,100.0003648);
   graph->SetPoint(50,299.9996352,100);
   graph->SetPoint(51,275,75.00022288);
   graph->SetPoint(52,274.9997771,75);
   graph->SetPoint(53,250,50.00010883);
   graph->SetPoint(54,249.9998912,50);
   graph->SetPoint(55,236.2768234,25);
   graph->SetPoint(56,229.2955012,0);
   graph->SetPoint(57,1300,-1300);
   graph->SetPoint(58,-1300,-1300);
   
   TH1F *Graph_g_excl_xsec_obs19 = new TH1F("Graph_g_excl_xsec_obs19","g_excl_xsec_obs",100,-1560,1560);
   Graph_g_excl_xsec_obs19->SetMinimum(-1462.763);
   Graph_g_excl_xsec_obs19->SetMaximum(490.3975);
   Graph_g_excl_xsec_obs19->SetDirectory(0);
   Graph_g_excl_xsec_obs19->SetStats(0);

   ci = TColor::GetColor("#0000ff");
   Graph_g_excl_xsec_obs19->SetLineColor(ci);
   Graph_g_excl_xsec_obs19->GetXaxis()->SetLabelSize(0.035);
   Graph_g_excl_xsec_obs19->GetYaxis()->SetLabelSize(0.035);
   Graph_g_excl_xsec_obs19->GetYaxis()->SetTitleOffset(1.2);
   graph->SetHistogram(Graph_g_excl_xsec_obs19);
   
   graph->Draw("f");
   
   graph = new TGraph(52);
   graph->SetName("g_excl_xsec_exp");
   graph->SetTitle("g_excl_xsec_exp");

   ci = TColor::GetColor("#ff807e");
   graph->SetFillColor(ci);

   ci = TColor::GetColor("#ff0000");
   graph->SetLineColor(ci);
   graph->SetLineStyle(7);
   graph->SetLineWidth(4);
   graph->SetPoint(0,637.8764239,0);
   graph->SetPoint(1,650,12.86062291);
   graph->SetPoint(2,662.2823045,25);
   graph->SetPoint(3,675,34.35648795);
   graph->SetPoint(4,696.8286622,50);
   graph->SetPoint(5,700,52.78944576);
   graph->SetPoint(6,725,73.01335177);
   graph->SetPoint(7,726.877896,75);
   graph->SetPoint(8,737.760289,100);
   graph->SetPoint(9,742.3079619,125);
   graph->SetPoint(10,741.2319662,150);
   graph->SetPoint(11,739.151333,175);
   graph->SetPoint(12,735.635502,200);
   graph->SetPoint(13,730.3068807,225);
   graph->SetPoint(14,726.5682713,250);
   graph->SetPoint(15,725,263.4199555);
   graph->SetPoint(16,723.4916286,275);
   graph->SetPoint(17,715.8164171,300);
   graph->SetPoint(18,702.6597057,325);
   graph->SetPoint(19,700,328.3304237);
   graph->SetPoint(20,675,340.5825316);
   graph->SetPoint(21,650,338.2504756);
   graph->SetPoint(22,625,331.8724481);
   graph->SetPoint(23,607.5093631,325);
   graph->SetPoint(24,600,321.5526121);
   graph->SetPoint(25,575,306.7431291);
   graph->SetPoint(26,563.9497124,300);
   graph->SetPoint(27,550,289.8055235);
   graph->SetPoint(28,525,275.0181839);
   graph->SetPoint(29,524.9710708,275);
   graph->SetPoint(30,500,256.4104703);
   graph->SetPoint(31,488.297623,250);
   graph->SetPoint(32,475,240.3247371);
   graph->SetPoint(33,452.8291519,225);
   graph->SetPoint(34,450,222.9485545);
   graph->SetPoint(35,425,204.2870798);
   graph->SetPoint(36,418.3542625,200);
   graph->SetPoint(37,400,186.2726332);
   graph->SetPoint(38,383.9471051,175);
   graph->SetPoint(39,375,166.4981952);
   graph->SetPoint(40,352.9694083,150);
   graph->SetPoint(41,350,147.4351318);
   graph->SetPoint(42,325,125.0001418);
   graph->SetPoint(43,324.9998582,125);
   graph->SetPoint(44,300,100.0003934);
   graph->SetPoint(45,299.9996066,100);
   graph->SetPoint(46,275,75.00033036);
   graph->SetPoint(47,274.9996696,75);
   graph->SetPoint(48,250,50.00006972);
   graph->SetPoint(49,249.9999303,50);
   graph->SetPoint(50,238.8038588,25);
   graph->SetPoint(51,234.334702,0);
   
   TH1F *Graph_Graph_g_excl_xsec_exp320 = new TH1F("Graph_Graph_g_excl_xsec_exp320","g_excl_xsec_exp",100,183.5374,793.1053);
   Graph_Graph_g_excl_xsec_exp320->SetMinimum(0);
   Graph_Graph_g_excl_xsec_exp320->SetMaximum(374.6408);
   Graph_Graph_g_excl_xsec_exp320->SetDirectory(0);
   Graph_Graph_g_excl_xsec_exp320->SetStats(0);

   ci = TColor::GetColor("#0000ff");
   Graph_Graph_g_excl_xsec_exp320->SetLineColor(ci);
   Graph_Graph_g_excl_xsec_exp320->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_g_excl_xsec_exp320->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_g_excl_xsec_exp320->GetYaxis()->SetTitleOffset(1.2);
   graph->SetHistogram(Graph_Graph_g_excl_xsec_exp320);
   
   graph->Draw("l");
   
   graph = new TGraph(45);
   graph->SetName("g_excl_xsec_exp_p1");
   graph->SetTitle("g_excl_xsec_exp_p1");

   ci = TColor::GetColor("#ff807e");
   graph->SetFillColor(ci);

   ci = TColor::GetColor("#ff0000");
   graph->SetLineColor(ci);
   graph->SetLineStyle(7);
   graph->SetLineWidth(2);
   graph->SetPoint(0,586.0723586,0);
   graph->SetPoint(1,600,14.05613684);
   graph->SetPoint(2,610.111655,25);
   graph->SetPoint(3,625,36.98822289);
   graph->SetPoint(4,641.9449692,50);
   graph->SetPoint(5,650,58.43503519);
   graph->SetPoint(6,666.6409764,75);
   graph->SetPoint(7,675,88.72893483);
   graph->SetPoint(8,681.7165395,100);
   graph->SetPoint(9,686.6065271,125);
   graph->SetPoint(10,684.7158626,150);
   graph->SetPoint(11,681.6665374,175);
   graph->SetPoint(12,676.8382481,200);
   graph->SetPoint(13,675,210.2010583);
   graph->SetPoint(14,671.8275818,225);
   graph->SetPoint(15,665.2625948,250);
   graph->SetPoint(16,650.7968692,275);
   graph->SetPoint(17,650,275.8530334);
   graph->SetPoint(18,625,290.246882);
   graph->SetPoint(19,600,289.4807099);
   graph->SetPoint(20,575,279.865715);
   graph->SetPoint(21,565.7941007,275);
   graph->SetPoint(22,550,266.3298846);
   graph->SetPoint(23,525,252.6498871);
   graph->SetPoint(24,520.3137002,250);
   graph->SetPoint(25,500,236.7358649);
   graph->SetPoint(26,480.0557005,225);
   graph->SetPoint(27,475,221.4603496);
   graph->SetPoint(28,450,204.9187137);
   graph->SetPoint(29,442.7011872,200);
   graph->SetPoint(30,425,185.4208913);
   graph->SetPoint(31,408.3294974,175);
   graph->SetPoint(32,400,167.8379663);
   graph->SetPoint(33,380.1016689,150);
   graph->SetPoint(34,375,145.2101428);
   graph->SetPoint(35,350,125.322701);
   graph->SetPoint(36,349.5517847,125);
   graph->SetPoint(37,325,105.671735);
   graph->SetPoint(38,316.7747089,100);
   graph->SetPoint(39,300,82.50120555);
   graph->SetPoint(40,293.3589771,75);
   graph->SetPoint(41,275.2107216,50);
   graph->SetPoint(42,275,49.28218699);
   graph->SetPoint(43,268.9463571,25);
   graph->SetPoint(44,270.1187461,0);
   
   TH1F *Graph_Graph_g_excl_xsec_exp_p1421 = new TH1F("Graph_Graph_g_excl_xsec_exp_p1421","g_excl_xsec_exp_p1",100,227.1803,728.3725);
   Graph_Graph_g_excl_xsec_exp_p1421->SetMinimum(0);
   Graph_Graph_g_excl_xsec_exp_p1421->SetMaximum(319.2716);
   Graph_Graph_g_excl_xsec_exp_p1421->SetDirectory(0);
   Graph_Graph_g_excl_xsec_exp_p1421->SetStats(0);

   ci = TColor::GetColor("#0000ff");
   Graph_Graph_g_excl_xsec_exp_p1421->SetLineColor(ci);
   Graph_Graph_g_excl_xsec_exp_p1421->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_g_excl_xsec_exp_p1421->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_g_excl_xsec_exp_p1421->GetYaxis()->SetTitleOffset(1.2);
   graph->SetHistogram(Graph_Graph_g_excl_xsec_exp_p1421);
   
   graph->Draw("l");
   
   graph = new TGraph(61);
   graph->SetName("g_excl_xsec_exp_m1");
   graph->SetTitle("g_excl_xsec_exp_m1");

   ci = TColor::GetColor("#ff807e");
   graph->SetFillColor(ci);

   ci = TColor::GetColor("#ff0000");
   graph->SetLineColor(ci);
   graph->SetLineStyle(7);
   graph->SetLineWidth(2);
   graph->SetPoint(0,700.7468645,0);
   graph->SetPoint(1,725,21.50346801);
   graph->SetPoint(2,728.7440261,25);
   graph->SetPoint(3,750,40.94728864);
   graph->SetPoint(4,760.5619747,50);
   graph->SetPoint(5,775,68.07144519);
   graph->SetPoint(6,779.810689,75);
   graph->SetPoint(7,791.0081758,100);
   graph->SetPoint(8,797.3539044,125);
   graph->SetPoint(9,800,149.2752258);
   graph->SetPoint(10,800.0609768,150);
   graph->SetPoint(11,800,151.4609528);
   graph->SetPoint(12,798.5849118,175);
   graph->SetPoint(13,794.6941449,200);
   graph->SetPoint(14,790.3315696,225);
   graph->SetPoint(15,786.6397126,250);
   graph->SetPoint(16,780.1881615,275);
   graph->SetPoint(17,775,292.1159382);
   graph->SetPoint(18,772.5972081,300);
   graph->SetPoint(19,764.4057093,325);
   graph->SetPoint(20,755.7285289,350);
   graph->SetPoint(21,750,359.3231025);
   graph->SetPoint(22,739.1466146,375);
   graph->SetPoint(23,725,387.6836135);
   graph->SetPoint(24,700,391.9299011);
   graph->SetPoint(25,675,384.3428224);
   graph->SetPoint(26,650,375.0615804);
   graph->SetPoint(27,649.8957216,375);
   graph->SetPoint(28,625,358.034464);
   graph->SetPoint(29,610.516602,350);
   graph->SetPoint(30,600,343.0742199);
   graph->SetPoint(31,575,328.2750785);
   graph->SetPoint(32,569.8590194,325);
   graph->SetPoint(33,550,309.8248086);
   graph->SetPoint(34,534.8498094,300);
   graph->SetPoint(35,525,292.4997139);
   graph->SetPoint(36,500,275.8918064);
   graph->SetPoint(37,498.5765587,275);
   graph->SetPoint(38,475,258.2362609);
   graph->SetPoint(39,462.1647818,250);
   graph->SetPoint(40,450,240.2857675);
   graph->SetPoint(41,425.7998884,225);
   graph->SetPoint(42,425,224.394154);
   graph->SetPoint(43,400,200.0003489);
   graph->SetPoint(44,399.9996511,200);
   graph->SetPoint(45,375,175.0006006);
   graph->SetPoint(46,374.9993994,175);
   graph->SetPoint(47,350,150.0007478);
   graph->SetPoint(48,349.9992522,150);
   graph->SetPoint(49,325,125.0008906);
   graph->SetPoint(50,324.9991094,125);
   graph->SetPoint(51,300,100.0010594);
   graph->SetPoint(52,299.9989406,100);
   graph->SetPoint(53,275,75.00102302);
   graph->SetPoint(54,274.998977,75);
   graph->SetPoint(55,250,50.00086226);
   graph->SetPoint(56,249.9991377,50);
   graph->SetPoint(57,225,25.00051137);
   graph->SetPoint(58,224.9994886,25);
   graph->SetPoint(59,200,0.0001137942163);
   graph->SetPoint(60,199.9998862,0);
   
   TH1F *Graph_Graph_g_excl_xsec_exp_m1522 = new TH1F("Graph_Graph_g_excl_xsec_exp_m1522","g_excl_xsec_exp_m1",100,139.9938,860.0671);
   Graph_Graph_g_excl_xsec_exp_m1522->SetMinimum(0);
   Graph_Graph_g_excl_xsec_exp_m1522->SetMaximum(431.1229);
   Graph_Graph_g_excl_xsec_exp_m1522->SetDirectory(0);
   Graph_Graph_g_excl_xsec_exp_m1522->SetStats(0);

   ci = TColor::GetColor("#0000ff");
   Graph_Graph_g_excl_xsec_exp_m1522->SetLineColor(ci);
   Graph_Graph_g_excl_xsec_exp_m1522->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_g_excl_xsec_exp_m1522->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_g_excl_xsec_exp_m1522->GetYaxis()->SetTitleOffset(1.2);
   graph->SetHistogram(Graph_Graph_g_excl_xsec_exp_m1522);
   
   graph->Draw("l");
   
   graph = new TGraph(59);
   graph->SetName("g_excl_xsec_obs");
   graph->SetTitle("g_excl_xsec_obs");

   ci = TColor::GetColor("#cccccc");
   graph->SetFillColor(ci);
   graph->SetLineWidth(4);
   graph->SetPoint(0,572.3476197,0);
   graph->SetPoint(1,575,1.959504052);
   graph->SetPoint(2,599.0418693,25);
   graph->SetPoint(3,600,25.61988224);
   graph->SetPoint(4,625,39.68757423);
   graph->SetPoint(5,650,47.57317519);
   graph->SetPoint(6,658.1835936,50);
   graph->SetPoint(7,675,57.25865261);
   graph->SetPoint(8,700,62.59807096);
   graph->SetPoint(9,725,71.00253335);
   graph->SetPoint(10,732.8811611,75);
   graph->SetPoint(11,750,97.50137997);
   graph->SetPoint(12,751.1933537,100);
   graph->SetPoint(13,753.1448617,125);
   graph->SetPoint(14,750,132.5475721);
   graph->SetPoint(15,741.8012491,150);
   graph->SetPoint(16,728.8385202,175);
   graph->SetPoint(17,725,181.7924591);
   graph->SetPoint(18,700,199.0318444);
   graph->SetPoint(19,699.0637727,200);
   graph->SetPoint(20,684.1515427,225);
   graph->SetPoint(21,675,233.4734844);
   graph->SetPoint(22,666.2388417,250);
   graph->SetPoint(23,655.6954977,275);
   graph->SetPoint(24,650,283.7377233);
   graph->SetPoint(25,645.9552011,300);
   graph->SetPoint(26,625,324.8442386);
   graph->SetPoint(27,624.626559,325);
   graph->SetPoint(28,600,327.6340916);
   graph->SetPoint(29,592.5573278,325);
   graph->SetPoint(30,575,311.369323);
   graph->SetPoint(31,562.39346,300);
   graph->SetPoint(32,550.9863426,275);
   graph->SetPoint(33,550,272.8621386);
   graph->SetPoint(34,531.8512458,250);
   graph->SetPoint(35,525,245.3235523);
   graph->SetPoint(36,500,230.28538);
   graph->SetPoint(37,491.5823836,225);
   graph->SetPoint(38,475,213.8778267);
   graph->SetPoint(39,450,203.5276237);
   graph->SetPoint(40,445.5232995,200);
   graph->SetPoint(41,425,183.2036799);
   graph->SetPoint(42,408.1956501,175);
   graph->SetPoint(43,400,170.1772006);
   graph->SetPoint(44,375,157.870363);
   graph->SetPoint(45,352.992714,150);
   graph->SetPoint(46,350,148.264314);
   graph->SetPoint(47,325,125.0000668);
   graph->SetPoint(48,324.9999332,125);
   graph->SetPoint(49,300,100.0003648);
   graph->SetPoint(50,299.9996352,100);
   graph->SetPoint(51,275,75.00022288);
   graph->SetPoint(52,274.9997771,75);
   graph->SetPoint(53,250,50.00010883);
   graph->SetPoint(54,249.9998912,50);
   graph->SetPoint(55,236.2768234,25);
   graph->SetPoint(56,229.2955012,0);
   graph->SetPoint(57,1300,-1300);
   graph->SetPoint(58,-1300,-1300);
   
   TH1F *Graph_Graph_g_excl_xsec_obs1923 = new TH1F("Graph_Graph_g_excl_xsec_obs1923","g_excl_xsec_obs",100,-1560,1560);
   Graph_Graph_g_excl_xsec_obs1923->SetMinimum(-1462.763);
   Graph_Graph_g_excl_xsec_obs1923->SetMaximum(490.3975);
   Graph_Graph_g_excl_xsec_obs1923->SetDirectory(0);
   Graph_Graph_g_excl_xsec_obs1923->SetStats(0);

   ci = TColor::GetColor("#0000ff");
   Graph_Graph_g_excl_xsec_obs1923->SetLineColor(ci);
   Graph_Graph_g_excl_xsec_obs1923->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_g_excl_xsec_obs1923->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_g_excl_xsec_obs1923->GetYaxis()->SetTitleOffset(1.2);
   graph->SetHistogram(Graph_Graph_g_excl_xsec_obs1923);
   
   graph->Draw("l");
   
   graph = new TGraph(59);
   graph->SetName("g_excl_xsec_obs_p1");
   graph->SetTitle("g_excl_xsec_obs_p1");

   ci = TColor::GetColor("#ff807e");
   graph->SetFillColor(ci);
   graph->SetLineWidth(2);
   graph->SetPoint(0,597.4477723,0);
   graph->SetPoint(1,600,2.388512585);
   graph->SetPoint(2,625,23.99433599);
   graph->SetPoint(3,626.9708333,25);
   graph->SetPoint(4,650,32.49068416);
   graph->SetPoint(5,675,39.22881965);
   graph->SetPoint(6,700,42.85869694);
   graph->SetPoint(7,725,49.00135052);
   graph->SetPoint(8,727.6450046,50);
   graph->SetPoint(9,750,60.71762629);
   graph->SetPoint(10,766.2478396,75);
   graph->SetPoint(11,775,91.11149937);
   graph->SetPoint(12,779.46852,100);
   graph->SetPoint(13,783.5491174,125);
   graph->SetPoint(14,778.2947067,150);
   graph->SetPoint(15,775,165.3722555);
   graph->SetPoint(16,771.4770442,175);
   graph->SetPoint(17,758.9031011,200);
   graph->SetPoint(18,750,214.2169653);
   graph->SetPoint(19,740.5418261,225);
   graph->SetPoint(20,725,236.2813045);
   graph->SetPoint(21,709.4018435,250);
   graph->SetPoint(22,700,267.4267307);
   graph->SetPoint(23,692.1922948,275);
   graph->SetPoint(24,675,285.3772887);
   graph->SetPoint(25,666.0378114,300);
   graph->SetPoint(26,650,309.0287723);
   graph->SetPoint(27,637.3218547,325);
   graph->SetPoint(28,625,329.5976118);
   graph->SetPoint(29,600,330.2816441);
   graph->SetPoint(30,585.2126073,325);
   graph->SetPoint(31,575,317.0278235);
   graph->SetPoint(32,556.2500506,300);
   graph->SetPoint(33,550,286.7016107);
   graph->SetPoint(34,542.5817767,275);
   graph->SetPoint(35,525,255.332394);
   graph->SetPoint(36,516.9711828,250);
   graph->SetPoint(37,500,238.9123345);
   graph->SetPoint(38,478.0871313,225);
   graph->SetPoint(39,475,222.9116815);
   graph->SetPoint(40,450,210.6391061);
   graph->SetPoint(41,436.5721965,200);
   graph->SetPoint(42,425,190.4928687);
   graph->SetPoint(43,400,177.4101399);
   graph->SetPoint(44,392.8747497,175);
   graph->SetPoint(45,375,165.8169974);
   graph->SetPoint(46,350,150.000272);
   graph->SetPoint(47,349.999728,150);
   graph->SetPoint(48,325,125.0003711);
   graph->SetPoint(49,324.9996289,125);
   graph->SetPoint(50,300,100.0006383);
   graph->SetPoint(51,299.9993617,100);
   graph->SetPoint(52,275,75.00051536);
   graph->SetPoint(53,274.9994846,75);
   graph->SetPoint(54,250,50.00041631);
   graph->SetPoint(55,249.9995837,50);
   graph->SetPoint(56,225.98799,25);
   graph->SetPoint(57,225,21.91945408);
   graph->SetPoint(58,217.9821761,0);
   
   TH1F *Graph_Graph_g_excl_xsec_obs_p1724 = new TH1F("Graph_Graph_g_excl_xsec_obs_p1724","g_excl_xsec_obs_p1",100,161.4255,840.1058);
   Graph_Graph_g_excl_xsec_obs_p1724->SetMinimum(0);
   Graph_Graph_g_excl_xsec_obs_p1724->SetMaximum(363.3098);
   Graph_Graph_g_excl_xsec_obs_p1724->SetDirectory(0);
   Graph_Graph_g_excl_xsec_obs_p1724->SetStats(0);

   ci = TColor::GetColor("#0000ff");
   Graph_Graph_g_excl_xsec_obs_p1724->SetLineColor(ci);
   Graph_Graph_g_excl_xsec_obs_p1724->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_g_excl_xsec_obs_p1724->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_g_excl_xsec_obs_p1724->GetYaxis()->SetTitleOffset(1.2);
   graph->SetHistogram(Graph_Graph_g_excl_xsec_obs_p1724);
   
   graph->Draw("l");
   
   graph = new TGraph(52);
   graph->SetName("g_excl_xsec_obs_m1");
   graph->SetTitle("g_excl_xsec_obs_m1");

   ci = TColor::GetColor("#ff807e");
   graph->SetFillColor(ci);
   graph->SetLineWidth(2);
   graph->SetPoint(0,542.6336653,0);
   graph->SetPoint(1,550,6.55940939);
   graph->SetPoint(2,575,24.18371658);
   graph->SetPoint(3,575.8273287,25);
   graph->SetPoint(4,600,41.01870304);
   graph->SetPoint(5,615.8109281,50);
   graph->SetPoint(6,625,57.35705978);
   graph->SetPoint(7,650,68.36985175);
   graph->SetPoint(8,664.5522654,75);
   graph->SetPoint(9,675,83.65619139);
   graph->SetPoint(10,700,95.26977691);
   graph->SetPoint(11,705.5234541,100);
   graph->SetPoint(12,706.6002564,125);
   graph->SetPoint(13,700,138.5861863);
   graph->SetPoint(14,694.8826343,150);
   graph->SetPoint(15,681.9902252,175);
   graph->SetPoint(16,675,182.6008675);
   graph->SetPoint(17,657.2635572,200);
   graph->SetPoint(18,650,207.4156733);
   graph->SetPoint(19,638.7251549,225);
   graph->SetPoint(20,635.4959648,250);
   graph->SetPoint(21,638.7842668,275);
   graph->SetPoint(22,636.8607783,300);
   graph->SetPoint(23,625,314.2452797);
   graph->SetPoint(24,600,324.9657095);
   graph->SetPoint(25,575,305.7108224);
   graph->SetPoint(26,568.6063337,300);
   graph->SetPoint(27,561.0966356,275);
   graph->SetPoint(28,550,251.1272941);
   graph->SetPoint(29,549.0848357,250);
   graph->SetPoint(30,525,233.8475418);
   graph->SetPoint(31,508.1658175,225);
   graph->SetPoint(32,500,220.1035658);
   graph->SetPoint(33,475,204.843972);
   graph->SetPoint(34,461.8956141,200);
   graph->SetPoint(35,450,194.3636465);
   graph->SetPoint(36,425,175.914491);
   graph->SetPoint(37,423.1499283,175);
   graph->SetPoint(38,400,161.2442805);
   graph->SetPoint(39,375.1888943,150);
   graph->SetPoint(40,375,149.8762661);
   graph->SetPoint(41,350,135.2923997);
   graph->SetPoint(42,337.614547,125);
   graph->SetPoint(43,325,116.4945823);
   graph->SetPoint(44,300.1143176,100);
   graph->SetPoint(45,300,99.87868771);
   graph->SetPoint(46,280.4037047,75);
   graph->SetPoint(47,275,68.97287335);
   graph->SetPoint(48,259.0535887,50);
   graph->SetPoint(49,250,33.33427477);
   graph->SetPoint(50,246.4515077,25);
   graph->SetPoint(51,242.605675,0);
   
   TH1F *Graph_Graph_g_excl_xsec_obs_m1825 = new TH1F("Graph_Graph_g_excl_xsec_obs_m1825","g_excl_xsec_obs_m1",100,196.2062,752.9997);
   Graph_Graph_g_excl_xsec_obs_m1825->SetMinimum(0);
   Graph_Graph_g_excl_xsec_obs_m1825->SetMaximum(357.4623);
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
