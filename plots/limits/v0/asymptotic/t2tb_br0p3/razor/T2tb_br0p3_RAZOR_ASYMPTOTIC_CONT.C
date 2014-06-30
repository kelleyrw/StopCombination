{
//=========Macro generated from canvas: cCONT_/cCONT_
//=========  (Sun Jun 29 21:56:07 2014) by ROOT version5.34/03
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
   
   TH2D *h_ul_xsec_exp_smoothEMPTY = new TH2D("h_ul_xsec_exp_smoothEMPTY","Expected razor #sigma #times Branching Fraction (t2tb_br0p3)EMPTY",31,137.5,912.5,29,-12.5,712.5);

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
   
   graph = new TGraph(46);
   graph->SetName("g_excl_xsec_obs");
   graph->SetTitle("g_excl_xsec_obs");

   ci = TColor::GetColor("#cccccc");
   graph->SetFillColor(ci);
   graph->SetLineWidth(4);
   graph->SetPoint(0,585.4972327,0);
   graph->SetPoint(1,600,10.33091407);
   graph->SetPoint(2,621.4525975,25);
   graph->SetPoint(3,625,27.26197341);
   graph->SetPoint(4,650,40.84737746);
   graph->SetPoint(5,665.7946689,50);
   graph->SetPoint(6,675,56.18532041);
   graph->SetPoint(7,700,66.56690298);
   graph->SetPoint(8,712.2150638,75);
   graph->SetPoint(9,725,93.97283004);
   graph->SetPoint(10,728.0545761,100);
   graph->SetPoint(11,725,120.8858075);
   graph->SetPoint(12,724.0190111,125);
   graph->SetPoint(13,711.6592863,150);
   graph->SetPoint(14,700,162.2626621);
   graph->SetPoint(15,688.2603745,175);
   graph->SetPoint(16,675,183.6736295);
   graph->SetPoint(17,650,191.5814868);
   graph->SetPoint(18,640.4349895,200);
   graph->SetPoint(19,625,209.5472374);
   graph->SetPoint(20,600,221.3795411);
   graph->SetPoint(21,589.7225047,225);
   graph->SetPoint(22,575,227.9920766);
   graph->SetPoint(23,562.3278986,225);
   graph->SetPoint(24,550,221.7227185);
   graph->SetPoint(25,525,211.9480363);
   graph->SetPoint(26,500,202.120159);
   graph->SetPoint(27,494.8930239,200);
   graph->SetPoint(28,475,187.9354156);
   graph->SetPoint(29,453.6722395,175);
   graph->SetPoint(30,450,172.2614163);
   graph->SetPoint(31,425,154.3300848);
   graph->SetPoint(32,416.8595813,150);
   graph->SetPoint(33,400,137.4399767);
   graph->SetPoint(34,378.6156927,125);
   graph->SetPoint(35,375,122.1893661);
   graph->SetPoint(36,350,103.4096109);
   graph->SetPoint(37,343.5713636,100);
   graph->SetPoint(38,325,85.28185858);
   graph->SetPoint(39,314.5291566,75);
   graph->SetPoint(40,300,62.60452106);
   graph->SetPoint(41,290.1836429,50);
   graph->SetPoint(42,280.2353837,25);
   graph->SetPoint(43,279.4064089,0);
   graph->SetPoint(44,1300,-1300);
   graph->SetPoint(45,-1300,-1300);
   
   TH1F *Graph_g_excl_xsec_obs19 = new TH1F("Graph_g_excl_xsec_obs19","g_excl_xsec_obs",100,-1560,1560);
   Graph_g_excl_xsec_obs19->SetMinimum(-1452.799);
   Graph_g_excl_xsec_obs19->SetMaximum(380.7913);
   Graph_g_excl_xsec_obs19->SetDirectory(0);
   Graph_g_excl_xsec_obs19->SetStats(0);

   ci = TColor::GetColor("#0000ff");
   Graph_g_excl_xsec_obs19->SetLineColor(ci);
   Graph_g_excl_xsec_obs19->GetXaxis()->SetLabelSize(0.035);
   Graph_g_excl_xsec_obs19->GetYaxis()->SetLabelSize(0.035);
   Graph_g_excl_xsec_obs19->GetYaxis()->SetTitleOffset(1.2);
   graph->SetHistogram(Graph_g_excl_xsec_obs19);
   
   graph->Draw("f");
   
   graph = new TGraph(44);
   graph->SetName("g_excl_xsec_exp");
   graph->SetTitle("g_excl_xsec_exp");

   ci = TColor::GetColor("#ff807e");
   graph->SetFillColor(ci);

   ci = TColor::GetColor("#ff0000");
   graph->SetLineColor(ci);
   graph->SetLineStyle(7);
   graph->SetLineWidth(4);
   graph->SetPoint(0,638.3140361,0);
   graph->SetPoint(1,650,13.00711764);
   graph->SetPoint(2,660.8291626,25);
   graph->SetPoint(3,675,38.28050086);
   graph->SetPoint(4,687.4116175,50);
   graph->SetPoint(5,700,65.42083901);
   graph->SetPoint(6,707.6427036,75);
   graph->SetPoint(7,716.2426138,100);
   graph->SetPoint(8,717.8396992,125);
   graph->SetPoint(9,715.1228167,150);
   graph->SetPoint(10,711.1707746,175);
   graph->SetPoint(11,703.7200191,200);
   graph->SetPoint(12,700,212.7540466);
   graph->SetPoint(13,696.0512947,225);
   graph->SetPoint(14,686.6136375,250);
   graph->SetPoint(15,675,269.8452653);
   graph->SetPoint(16,670.6286913,275);
   graph->SetPoint(17,650,288.0213792);
   graph->SetPoint(18,625,291.4595489);
   graph->SetPoint(19,600,286.2880242);
   graph->SetPoint(20,575,276.1111198);
   graph->SetPoint(21,573.1039715,275);
   graph->SetPoint(22,550,260.2769775);
   graph->SetPoint(23,531.3350614,250);
   graph->SetPoint(24,525,245.8742127);
   graph->SetPoint(25,500,229.6762187);
   graph->SetPoint(26,492.6381462,225);
   graph->SetPoint(27,475,211.7368038);
   graph->SetPoint(28,455.088235,200);
   graph->SetPoint(29,450,196.0911584);
   graph->SetPoint(30,425,176.9002788);
   graph->SetPoint(31,422.2061888,175);
   graph->SetPoint(32,400,154.5183279);
   graph->SetPoint(33,395.0731073,150);
   graph->SetPoint(34,375,131.0663853);
   graph->SetPoint(35,367.3475275,125);
   graph->SetPoint(36,350,109.1544657);
   graph->SetPoint(37,337.8053041,100);
   graph->SetPoint(38,325,86.77492574);
   graph->SetPoint(39,313.629133,75);
   graph->SetPoint(40,300,55.50588683);
   graph->SetPoint(41,296.5556585,50);
   graph->SetPoint(42,291.3232101,25);
   graph->SetPoint(43,292.9207993,0);
   
   TH1F *Graph_Graph_g_excl_xsec_exp320 = new TH1F("Graph_Graph_g_excl_xsec_exp320","g_excl_xsec_exp",100,248.6716,760.4913);
   Graph_Graph_g_excl_xsec_exp320->SetMinimum(0);
   Graph_Graph_g_excl_xsec_exp320->SetMaximum(320.6055);
   Graph_Graph_g_excl_xsec_exp320->SetDirectory(0);
   Graph_Graph_g_excl_xsec_exp320->SetStats(0);

   ci = TColor::GetColor("#0000ff");
   Graph_Graph_g_excl_xsec_exp320->SetLineColor(ci);
   Graph_Graph_g_excl_xsec_exp320->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_g_excl_xsec_exp320->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_g_excl_xsec_exp320->GetYaxis()->SetTitleOffset(1.2);
   graph->SetHistogram(Graph_Graph_g_excl_xsec_exp320);
   
   graph->Draw("l");
   
   graph = new TGraph(39);
   graph->SetName("g_excl_xsec_exp_p1");
   graph->SetTitle("g_excl_xsec_exp_p1");

   ci = TColor::GetColor("#ff807e");
   graph->SetFillColor(ci);

   ci = TColor::GetColor("#ff0000");
   graph->SetLineColor(ci);
   graph->SetLineStyle(7);
   graph->SetLineWidth(2);
   graph->SetPoint(0,573.2587861,0);
   graph->SetPoint(1,575,1.4497674);
   graph->SetPoint(2,599.161165,25);
   graph->SetPoint(3,600,25.71171102);
   graph->SetPoint(4,625,48.88129685);
   graph->SetPoint(5,626.1688839,50);
   graph->SetPoint(6,644.0844628,75);
   graph->SetPoint(7,650,91.79908958);
   graph->SetPoint(8,652.7219427,100);
   graph->SetPoint(9,654.2391695,125);
   graph->SetPoint(10,652.2019998,150);
   graph->SetPoint(11,650,160.2324905);
   graph->SetPoint(12,646.3112952,175);
   graph->SetPoint(13,636.6761744,200);
   graph->SetPoint(14,625,224.2682181);
   graph->SetPoint(15,624.4018903,225);
   graph->SetPoint(16,600,240.5175863);
   graph->SetPoint(17,575,240.1106029);
   graph->SetPoint(18,550,231.6282641);
   graph->SetPoint(19,533.7798416,225);
   graph->SetPoint(20,525,220.6214121);
   graph->SetPoint(21,500,206.2853534);
   graph->SetPoint(22,488.4287315,200);
   graph->SetPoint(23,475,191.1889471);
   graph->SetPoint(24,450,175.5983143);
   graph->SetPoint(25,449.1535167,175);
   graph->SetPoint(26,425,154.2600321);
   graph->SetPoint(27,419.9769228,150);
   graph->SetPoint(28,400,131.6434458);
   graph->SetPoint(29,392.4256678,125);
   graph->SetPoint(30,375,108.6659349);
   graph->SetPoint(31,364.6617826,100);
   graph->SetPoint(32,350,84.22876275);
   graph->SetPoint(33,340.8297054,75);
   graph->SetPoint(34,325,51.2884867);
   graph->SetPoint(35,324.2348469,50);
   graph->SetPoint(36,321.583953,25);
   graph->SetPoint(37,325,14.27935975);
   graph->SetPoint(38,333.7357109,0);
   
   TH1F *Graph_Graph_g_excl_xsec_exp_p1421 = new TH1F("Graph_Graph_g_excl_xsec_exp_p1421","g_excl_xsec_exp_p1",100,288.3184,687.5047);
   Graph_Graph_g_excl_xsec_exp_p1421->SetMinimum(0);
   Graph_Graph_g_excl_xsec_exp_p1421->SetMaximum(264.5693);
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
   graph->SetPoint(0,708.9653162,0);
   graph->SetPoint(1,725,18.09683487);
   graph->SetPoint(2,730.9856215,25);
   graph->SetPoint(3,750,43.44080968);
   graph->SetPoint(4,756.2884663,50);
   graph->SetPoint(5,771.88402,75);
   graph->SetPoint(6,775,84.19880247);
   graph->SetPoint(7,779.3553242,100);
   graph->SetPoint(8,781.9925144,125);
   graph->SetPoint(9,781.5274176,150);
   graph->SetPoint(10,777.1375753,175);
   graph->SetPoint(11,775,183.9561523);
   graph->SetPoint(12,770.1806432,200);
   graph->SetPoint(13,761.2727675,225);
   graph->SetPoint(14,753.7868179,250);
   graph->SetPoint(15,750,260.4974004);
   graph->SetPoint(16,744.7444129,275);
   graph->SetPoint(17,735.7510153,300);
   graph->SetPoint(18,725,320.6784979);
   graph->SetPoint(19,721.8313038,325);
   graph->SetPoint(20,700,342.0010545);
   graph->SetPoint(21,675,343.6889357);
   graph->SetPoint(22,650,335.8281931);
   graph->SetPoint(23,625,327.4574835);
   graph->SetPoint(24,619.5747357,325);
   graph->SetPoint(25,600,314.7322129);
   graph->SetPoint(26,575,301.4691661);
   graph->SetPoint(27,572.727572,300);
   graph->SetPoint(28,550,282.848998);
   graph->SetPoint(29,537.218532,275);
   graph->SetPoint(30,525,266.2981405);
   graph->SetPoint(31,500,250.2917928);
   graph->SetPoint(32,499.511025,250);
   graph->SetPoint(33,475,231.0155653);
   graph->SetPoint(34,466.1782277,225);
   graph->SetPoint(35,450,212.9272123);
   graph->SetPoint(36,431.1851183,200);
   graph->SetPoint(37,425,194.8531936);
   graph->SetPoint(38,400,176.962403);
   graph->SetPoint(39,397.4151875,175);
   graph->SetPoint(40,375,153.3095533);
   graph->SetPoint(41,370.5597247,150);
   graph->SetPoint(42,350,132.2802993);
   graph->SetPoint(43,339.9428419,125);
   graph->SetPoint(44,325,112.8668503);
   graph->SetPoint(45,307.3299093,100);
   graph->SetPoint(46,300,92.59299116);
   graph->SetPoint(47,283.516222,75);
   graph->SetPoint(48,275,63.0134863);
   graph->SetPoint(49,266.8570426,50);
   graph->SetPoint(50,257.5449238,25);
   graph->SetPoint(51,254.4149774,0);
   
   TH1F *Graph_Graph_g_excl_xsec_exp_m1522 = new TH1F("Graph_Graph_g_excl_xsec_exp_m1522","g_excl_xsec_exp_m1",100,201.6572,834.7503);
   Graph_Graph_g_excl_xsec_exp_m1522->SetMinimum(0);
   Graph_Graph_g_excl_xsec_exp_m1522->SetMaximum(378.0578);
   Graph_Graph_g_excl_xsec_exp_m1522->SetDirectory(0);
   Graph_Graph_g_excl_xsec_exp_m1522->SetStats(0);

   ci = TColor::GetColor("#0000ff");
   Graph_Graph_g_excl_xsec_exp_m1522->SetLineColor(ci);
   Graph_Graph_g_excl_xsec_exp_m1522->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_g_excl_xsec_exp_m1522->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_g_excl_xsec_exp_m1522->GetYaxis()->SetTitleOffset(1.2);
   graph->SetHistogram(Graph_Graph_g_excl_xsec_exp_m1522);
   
   graph->Draw("l");
   
   graph = new TGraph(46);
   graph->SetName("g_excl_xsec_obs");
   graph->SetTitle("g_excl_xsec_obs");

   ci = TColor::GetColor("#cccccc");
   graph->SetFillColor(ci);
   graph->SetLineWidth(4);
   graph->SetPoint(0,585.4972327,0);
   graph->SetPoint(1,600,10.33091407);
   graph->SetPoint(2,621.4525975,25);
   graph->SetPoint(3,625,27.26197341);
   graph->SetPoint(4,650,40.84737746);
   graph->SetPoint(5,665.7946689,50);
   graph->SetPoint(6,675,56.18532041);
   graph->SetPoint(7,700,66.56690298);
   graph->SetPoint(8,712.2150638,75);
   graph->SetPoint(9,725,93.97283004);
   graph->SetPoint(10,728.0545761,100);
   graph->SetPoint(11,725,120.8858075);
   graph->SetPoint(12,724.0190111,125);
   graph->SetPoint(13,711.6592863,150);
   graph->SetPoint(14,700,162.2626621);
   graph->SetPoint(15,688.2603745,175);
   graph->SetPoint(16,675,183.6736295);
   graph->SetPoint(17,650,191.5814868);
   graph->SetPoint(18,640.4349895,200);
   graph->SetPoint(19,625,209.5472374);
   graph->SetPoint(20,600,221.3795411);
   graph->SetPoint(21,589.7225047,225);
   graph->SetPoint(22,575,227.9920766);
   graph->SetPoint(23,562.3278986,225);
   graph->SetPoint(24,550,221.7227185);
   graph->SetPoint(25,525,211.9480363);
   graph->SetPoint(26,500,202.120159);
   graph->SetPoint(27,494.8930239,200);
   graph->SetPoint(28,475,187.9354156);
   graph->SetPoint(29,453.6722395,175);
   graph->SetPoint(30,450,172.2614163);
   graph->SetPoint(31,425,154.3300848);
   graph->SetPoint(32,416.8595813,150);
   graph->SetPoint(33,400,137.4399767);
   graph->SetPoint(34,378.6156927,125);
   graph->SetPoint(35,375,122.1893661);
   graph->SetPoint(36,350,103.4096109);
   graph->SetPoint(37,343.5713636,100);
   graph->SetPoint(38,325,85.28185858);
   graph->SetPoint(39,314.5291566,75);
   graph->SetPoint(40,300,62.60452106);
   graph->SetPoint(41,290.1836429,50);
   graph->SetPoint(42,280.2353837,25);
   graph->SetPoint(43,279.4064089,0);
   graph->SetPoint(44,1300,-1300);
   graph->SetPoint(45,-1300,-1300);
   
   TH1F *Graph_Graph_g_excl_xsec_obs1923 = new TH1F("Graph_Graph_g_excl_xsec_obs1923","g_excl_xsec_obs",100,-1560,1560);
   Graph_Graph_g_excl_xsec_obs1923->SetMinimum(-1452.799);
   Graph_Graph_g_excl_xsec_obs1923->SetMaximum(380.7913);
   Graph_Graph_g_excl_xsec_obs1923->SetDirectory(0);
   Graph_Graph_g_excl_xsec_obs1923->SetStats(0);

   ci = TColor::GetColor("#0000ff");
   Graph_Graph_g_excl_xsec_obs1923->SetLineColor(ci);
   Graph_Graph_g_excl_xsec_obs1923->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_g_excl_xsec_obs1923->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_g_excl_xsec_obs1923->GetYaxis()->SetTitleOffset(1.2);
   graph->SetHistogram(Graph_Graph_g_excl_xsec_obs1923);
   
   graph->Draw("l");
   
   graph = new TGraph(45);
   graph->SetName("g_excl_xsec_obs_p1");
   graph->SetTitle("g_excl_xsec_obs_p1");

   ci = TColor::GetColor("#ff807e");
   graph->SetFillColor(ci);
   graph->SetLineWidth(2);
   graph->SetPoint(0,634.0738793,0);
   graph->SetPoint(1,650,9.640322391);
   graph->SetPoint(2,675,24.58639288);
   graph->SetPoint(3,675.8036171,25);
   graph->SetPoint(4,700,35.89923504);
   graph->SetPoint(5,725,49.71259723);
   graph->SetPoint(6,725.4399652,50);
   graph->SetPoint(7,750,69.49286427);
   graph->SetPoint(8,755.2986772,75);
   graph->SetPoint(9,764.7164012,100);
   graph->SetPoint(10,764.8185003,125);
   graph->SetPoint(11,755.8850073,150);
   graph->SetPoint(12,750,159.6760885);
   graph->SetPoint(13,739.738328,175);
   graph->SetPoint(14,725,190.6417848);
   graph->SetPoint(15,700.4072468,200);
   graph->SetPoint(16,700,200.2128585);
   graph->SetPoint(17,675,217.625681);
   graph->SetPoint(18,650,223.632103);
   graph->SetPoint(19,647.8053067,225);
   graph->SetPoint(20,625,237.0006202);
   graph->SetPoint(21,600,243.1294708);
   graph->SetPoint(22,575,242.0035123);
   graph->SetPoint(23,550,233.3348491);
   graph->SetPoint(24,531.9069587,225);
   graph->SetPoint(25,525,221.9322436);
   graph->SetPoint(26,500,209.0482008);
   graph->SetPoint(27,478.4955302,200);
   graph->SetPoint(28,475,197.8569181);
   graph->SetPoint(29,450,180.4340561);
   graph->SetPoint(30,442.639861,175);
   graph->SetPoint(31,425,161.5476948);
   graph->SetPoint(32,403.0867839,150);
   graph->SetPoint(33,400,147.7171306);
   graph->SetPoint(34,375,130.433816);
   graph->SetPoint(35,367.2556582,125);
   graph->SetPoint(36,350,111.2281947);
   graph->SetPoint(37,328.8945028,100);
   graph->SetPoint(38,325,96.90603556);
   graph->SetPoint(39,302.3817357,75);
   graph->SetPoint(40,300,72.98877925);
   graph->SetPoint(41,282.0772846,50);
   graph->SetPoint(42,275,34.08482525);
   graph->SetPoint(43,271.0717063,25);
   graph->SetPoint(44,268.9358803,0);
   
   TH1F *Graph_Graph_g_excl_xsec_obs_p1724 = new TH1F("Graph_Graph_g_excl_xsec_obs_p1724","g_excl_xsec_obs_p1",100,219.3476,814.4068);
   Graph_Graph_g_excl_xsec_obs_p1724->SetMinimum(0);
   Graph_Graph_g_excl_xsec_obs_p1724->SetMaximum(267.4424);
   Graph_Graph_g_excl_xsec_obs_p1724->SetDirectory(0);
   Graph_Graph_g_excl_xsec_obs_p1724->SetStats(0);

   ci = TColor::GetColor("#0000ff");
   Graph_Graph_g_excl_xsec_obs_p1724->SetLineColor(ci);
   Graph_Graph_g_excl_xsec_obs_p1724->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_g_excl_xsec_obs_p1724->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_g_excl_xsec_obs_p1724->GetYaxis()->SetTitleOffset(1.2);
   graph->SetHistogram(Graph_Graph_g_excl_xsec_obs_p1724);
   
   graph->Draw("l");
   
   graph = new TGraph(38);
   graph->SetName("g_excl_xsec_obs_m1");
   graph->SetTitle("g_excl_xsec_obs_m1");

   ci = TColor::GetColor("#ff807e");
   graph->SetFillColor(ci);
   graph->SetLineWidth(2);
   graph->SetPoint(0,532.6517366,0);
   graph->SetPoint(1,550,12.26458693);
   graph->SetPoint(2,573.3290964,25);
   graph->SetPoint(3,575,25.8168737);
   graph->SetPoint(4,600,41.36683725);
   graph->SetPoint(5,612.0675993,50);
   graph->SetPoint(6,625,63.63455063);
   graph->SetPoint(7,643.2057035,75);
   graph->SetPoint(8,650,84.48574846);
   graph->SetPoint(9,660.4474133,100);
   graph->SetPoint(10,650,119.3447676);
   graph->SetPoint(11,647.0075755,125);
   graph->SetPoint(12,636.3722534,150);
   graph->SetPoint(13,625,167.9042755);
   graph->SetPoint(14,621.3248432,175);
   graph->SetPoint(15,600,194.7514384);
   graph->SetPoint(16,592.9197588,200);
   graph->SetPoint(17,575,208.0216499);
   graph->SetPoint(18,550,206.3320356);
   graph->SetPoint(19,525,201.9638289);
   graph->SetPoint(20,519.3264683,200);
   graph->SetPoint(21,500,189.8544228);
   graph->SetPoint(22,475,178.0139131);
   graph->SetPoint(23,469.913274,175);
   graph->SetPoint(24,450,160.4193849);
   graph->SetPoint(25,432.7320015,150);
   graph->SetPoint(26,425,144.0953782);
   graph->SetPoint(27,400,127.1628228);
   graph->SetPoint(28,396.2779542,125);
   graph->SetPoint(29,375,108.4745715);
   graph->SetPoint(30,361.9764534,100);
   graph->SetPoint(31,350,92.16890891);
   graph->SetPoint(32,327.1241525,75);
   graph->SetPoint(33,325,73.22344909);
   graph->SetPoint(34,300,52.22026287);
   graph->SetPoint(35,298.2733475,50);
   graph->SetPoint(36,290.6423521,25);
   graph->SetPoint(37,292.7015966,0);
   
   TH1F *Graph_Graph_g_excl_xsec_obs_m1825 = new TH1F("Graph_Graph_g_excl_xsec_obs_m1825","g_excl_xsec_obs_m1",100,253.6618,697.4279);
   Graph_Graph_g_excl_xsec_obs_m1825->SetMinimum(0);
   Graph_Graph_g_excl_xsec_obs_m1825->SetMaximum(228.8238);
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
