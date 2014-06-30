{
//=========Macro generated from canvas: cCONT_/cCONT_
//=========  (Sun Jun 29 21:55:40 2014) by ROOT version5.34/03
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
   
   TH2D *h_ul_xsec_exp_smoothEMPTY = new TH2D("h_ul_xsec_exp_smoothEMPTY","Expected razor #sigma #times Branching Fraction (t2tb_br0p7)EMPTY",31,137.5,912.5,29,-12.5,712.5);

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
   
   graph = new TGraph(38);
   graph->SetName("g_excl_xsec_obs");
   graph->SetTitle("g_excl_xsec_obs");

   ci = TColor::GetColor("#cccccc");
   graph->SetFillColor(ci);
   graph->SetLineWidth(4);
   graph->SetPoint(0,684.3105904,0);
   graph->SetPoint(1,700,19.29867615);
   graph->SetPoint(2,704.3200799,25);
   graph->SetPoint(3,720.8488555,50);
   graph->SetPoint(4,725,65.10751207);
   graph->SetPoint(5,727.867091,75);
   graph->SetPoint(6,728.2271607,100);
   graph->SetPoint(7,725,110.6695339);
   graph->SetPoint(8,717.6334835,125);
   graph->SetPoint(9,706.9175156,150);
   graph->SetPoint(10,700,158.6563003);
   graph->SetPoint(11,679.070046,175);
   graph->SetPoint(12,675,176.9415364);
   graph->SetPoint(13,650,179.6346545);
   graph->SetPoint(14,625,184.6567106);
   graph->SetPoint(15,600,185.3156795);
   graph->SetPoint(16,575,182.7467627);
   graph->SetPoint(17,550,177.398939);
   graph->SetPoint(18,527.375737,175);
   graph->SetPoint(19,525,174.5714354);
   graph->SetPoint(20,523.3807615,175);
   graph->SetPoint(21,500,176.757975);
   graph->SetPoint(22,475,176.5965308);
   graph->SetPoint(23,471.3370953,175);
   graph->SetPoint(24,450,157.577261);
   graph->SetPoint(25,444.0009923,150);
   graph->SetPoint(26,437.6948996,125);
   graph->SetPoint(27,435.4829897,100);
   graph->SetPoint(28,425,83.59793198);
   graph->SetPoint(29,415.7964134,75);
   graph->SetPoint(30,400,59.68866145);
   graph->SetPoint(31,383.6920218,50);
   graph->SetPoint(32,375,40.41085974);
   graph->SetPoint(33,365.8309858,25);
   graph->SetPoint(34,375,2.713537114);
   graph->SetPoint(35,377.3005801,0);
   graph->SetPoint(36,1300,-1300);
   graph->SetPoint(37,-1300,-1300);
   
   TH1F *Graph_g_excl_xsec_obs19 = new TH1F("Graph_g_excl_xsec_obs19","g_excl_xsec_obs",100,-1560,1560);
   Graph_g_excl_xsec_obs19->SetMinimum(-1448.532);
   Graph_g_excl_xsec_obs19->SetMaximum(333.8472);
   Graph_g_excl_xsec_obs19->SetDirectory(0);
   Graph_g_excl_xsec_obs19->SetStats(0);

   ci = TColor::GetColor("#0000ff");
   Graph_g_excl_xsec_obs19->SetLineColor(ci);
   Graph_g_excl_xsec_obs19->GetXaxis()->SetLabelSize(0.035);
   Graph_g_excl_xsec_obs19->GetYaxis()->SetLabelSize(0.035);
   Graph_g_excl_xsec_obs19->GetYaxis()->SetTitleOffset(1.2);
   graph->SetHistogram(Graph_g_excl_xsec_obs19);
   
   graph->Draw("f");
   
   graph = new TGraph(35);
   graph->SetName("g_excl_xsec_exp");
   graph->SetTitle("g_excl_xsec_exp");

   ci = TColor::GetColor("#ff807e");
   graph->SetFillColor(ci);

   ci = TColor::GetColor("#ff0000");
   graph->SetLineColor(ci);
   graph->SetLineStyle(7);
   graph->SetLineWidth(4);
   graph->SetPoint(0,676.4568786,0);
   graph->SetPoint(1,690.737353,25);
   graph->SetPoint(2,700,48.40003605);
   graph->SetPoint(3,700.5766937,50);
   graph->SetPoint(4,704.4967316,75);
   graph->SetPoint(5,703.7922819,100);
   graph->SetPoint(6,700,124.5654055);
   graph->SetPoint(7,699.9251343,125);
   graph->SetPoint(8,694.3441707,150);
   graph->SetPoint(9,684.9741072,175);
   graph->SetPoint(10,675,192.326534);
   graph->SetPoint(11,669.3090248,200);
   graph->SetPoint(12,650,218.6347229);
   graph->SetPoint(13,641.0733984,225);
   graph->SetPoint(14,625,231.20879);
   graph->SetPoint(15,600,231.2085034);
   graph->SetPoint(16,575,225.3596804);
   graph->SetPoint(17,574.2786743,225);
   graph->SetPoint(18,550,210.4618275);
   graph->SetPoint(19,528.8073592,200);
   graph->SetPoint(20,525,197.841106);
   graph->SetPoint(21,500,180.8787642);
   graph->SetPoint(22,491.2417063,175);
   graph->SetPoint(23,475,162.2056303);
   graph->SetPoint(24,457.6759244,150);
   graph->SetPoint(25,450,143.5439495);
   graph->SetPoint(26,428.727575,125);
   graph->SetPoint(27,425,121.3714357);
   graph->SetPoint(28,402.3506889,100);
   graph->SetPoint(29,400,97.38955018);
   graph->SetPoint(30,376.8118116,75);
   graph->SetPoint(31,375,72.04501655);
   graph->SetPoint(32,359.08368,50);
   graph->SetPoint(33,356.2075689,25);
   graph->SetPoint(34,359.9529077,0);
   
   TH1F *Graph_Graph_g_excl_xsec_exp320 = new TH1F("Graph_Graph_g_excl_xsec_exp320","g_excl_xsec_exp",100,321.3787,739.3256);
   Graph_Graph_g_excl_xsec_exp320->SetMinimum(0);
   Graph_Graph_g_excl_xsec_exp320->SetMaximum(254.3297);
   Graph_Graph_g_excl_xsec_exp320->SetDirectory(0);
   Graph_Graph_g_excl_xsec_exp320->SetStats(0);

   ci = TColor::GetColor("#0000ff");
   Graph_Graph_g_excl_xsec_exp320->SetLineColor(ci);
   Graph_Graph_g_excl_xsec_exp320->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_g_excl_xsec_exp320->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_g_excl_xsec_exp320->GetYaxis()->SetTitleOffset(1.2);
   graph->SetHistogram(Graph_Graph_g_excl_xsec_exp320);
   
   graph->Draw("l");
   
   graph = new TGraph(27);
   graph->SetName("g_excl_xsec_exp_p1");
   graph->SetTitle("g_excl_xsec_exp_p1");

   ci = TColor::GetColor("#ff807e");
   graph->SetFillColor(ci);

   ci = TColor::GetColor("#ff0000");
   graph->SetLineColor(ci);
   graph->SetLineStyle(7);
   graph->SetLineWidth(2);
   graph->SetPoint(0,586.9243197,0);
   graph->SetPoint(1,600,15.89382694);
   graph->SetPoint(2,606.5221713,25);
   graph->SetPoint(3,621.4275989,50);
   graph->SetPoint(4,625,68.51175514);
   graph->SetPoint(5,625.9892719,75);
   graph->SetPoint(6,625,80.95950456);
   graph->SetPoint(7,620.9699787,100);
   graph->SetPoint(8,613.6954834,125);
   graph->SetPoint(9,602.2921378,150);
   graph->SetPoint(10,600,152.4419133);
   graph->SetPoint(11,575,165.2971488);
   graph->SetPoint(12,550,166.9530623);
   graph->SetPoint(13,525,159.5367921);
   graph->SetPoint(14,501.5096132,150);
   graph->SetPoint(15,500,149.3003997);
   graph->SetPoint(16,475,132.1735235);
   graph->SetPoint(17,464.9322841,125);
   graph->SetPoint(18,450,112.4597833);
   graph->SetPoint(19,436.1857704,100);
   graph->SetPoint(20,425,87.96872737);
   graph->SetPoint(21,413.5532151,75);
   graph->SetPoint(22,400,50.19083537);
   graph->SetPoint(23,399.9000312,50);
   graph->SetPoint(24,400,46.35602438);
   graph->SetPoint(25,400.8983948,25);
   graph->SetPoint(26,413.09919,0);
   
   TH1F *Graph_Graph_g_excl_xsec_exp_p1421 = new TH1F("Graph_Graph_g_excl_xsec_exp_p1421","g_excl_xsec_exp_p1",100,377.2911,648.5982);
   Graph_Graph_g_excl_xsec_exp_p1421->SetMinimum(0);
   Graph_Graph_g_excl_xsec_exp_p1421->SetMaximum(183.6484);
   Graph_Graph_g_excl_xsec_exp_p1421->SetDirectory(0);
   Graph_Graph_g_excl_xsec_exp_p1421->SetStats(0);

   ci = TColor::GetColor("#0000ff");
   Graph_Graph_g_excl_xsec_exp_p1421->SetLineColor(ci);
   Graph_Graph_g_excl_xsec_exp_p1421->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_g_excl_xsec_exp_p1421->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_g_excl_xsec_exp_p1421->GetYaxis()->SetTitleOffset(1.2);
   graph->SetHistogram(Graph_Graph_g_excl_xsec_exp_p1421);
   
   graph->Draw("l");
   
   graph = new TGraph(44);
   graph->SetName("g_excl_xsec_exp_m1");
   graph->SetTitle("g_excl_xsec_exp_m1");

   ci = TColor::GetColor("#ff807e");
   graph->SetFillColor(ci);

   ci = TColor::GetColor("#ff0000");
   graph->SetLineColor(ci);
   graph->SetLineStyle(7);
   graph->SetLineWidth(2);
   graph->SetPoint(0,754.3168905,0);
   graph->SetPoint(1,768.1912306,25);
   graph->SetPoint(2,775,38.53466575);
   graph->SetPoint(3,779.2132733,50);
   graph->SetPoint(4,782.526372,75);
   graph->SetPoint(5,782.7756274,100);
   graph->SetPoint(6,780.4881818,125);
   graph->SetPoint(7,776.2933497,150);
   graph->SetPoint(8,775,154.3336687);
   graph->SetPoint(9,767.3999468,175);
   graph->SetPoint(10,757.1867512,200);
   graph->SetPoint(11,750,213.3571835);
   graph->SetPoint(12,743.1654732,225);
   graph->SetPoint(13,727.6341406,250);
   graph->SetPoint(14,725,253.9359014);
   graph->SetPoint(15,708.5325165,275);
   graph->SetPoint(16,700,281.8265614);
   graph->SetPoint(17,675,290.2142263);
   graph->SetPoint(18,650,288.1601837);
   graph->SetPoint(19,625,281.0336272);
   graph->SetPoint(20,609.5041962,275);
   graph->SetPoint(21,600,270.6309392);
   graph->SetPoint(22,575,255.6918105);
   graph->SetPoint(23,565.2152655,250);
   graph->SetPoint(24,550,239.4920413);
   graph->SetPoint(25,525.5112875,225);
   graph->SetPoint(26,525,224.6424593);
   graph->SetPoint(27,500,205.0220676);
   graph->SetPoint(28,492.5957316,200);
   graph->SetPoint(29,475,185.4672022);
   graph->SetPoint(30,460.1219411,175);
   graph->SetPoint(31,450,166.5260895);
   graph->SetPoint(32,428.775501,150);
   graph->SetPoint(33,425,146.49941);
   graph->SetPoint(34,402.6912385,125);
   graph->SetPoint(35,400,122.3418188);
   graph->SetPoint(36,375,101.1324166);
   graph->SetPoint(37,373.5019624,100);
   graph->SetPoint(38,350,78.8497318);
   graph->SetPoint(39,345.29019,75);
   graph->SetPoint(40,325,51.79669195);
   graph->SetPoint(41,323.6287467,50);
   graph->SetPoint(42,314.7263318,25);
   graph->SetPoint(43,315.1179139,0);
   
   TH1F *Graph_Graph_g_excl_xsec_exp_m1522 = new TH1F("Graph_Graph_g_excl_xsec_exp_m1522","g_excl_xsec_exp_m1",100,267.9214,829.5806);
   Graph_Graph_g_excl_xsec_exp_m1522->SetMinimum(0);
   Graph_Graph_g_excl_xsec_exp_m1522->SetMaximum(319.2356);
   Graph_Graph_g_excl_xsec_exp_m1522->SetDirectory(0);
   Graph_Graph_g_excl_xsec_exp_m1522->SetStats(0);

   ci = TColor::GetColor("#0000ff");
   Graph_Graph_g_excl_xsec_exp_m1522->SetLineColor(ci);
   Graph_Graph_g_excl_xsec_exp_m1522->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_g_excl_xsec_exp_m1522->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_g_excl_xsec_exp_m1522->GetYaxis()->SetTitleOffset(1.2);
   graph->SetHistogram(Graph_Graph_g_excl_xsec_exp_m1522);
   
   graph->Draw("l");
   
   graph = new TGraph(38);
   graph->SetName("g_excl_xsec_obs");
   graph->SetTitle("g_excl_xsec_obs");

   ci = TColor::GetColor("#cccccc");
   graph->SetFillColor(ci);
   graph->SetLineWidth(4);
   graph->SetPoint(0,684.3105904,0);
   graph->SetPoint(1,700,19.29867615);
   graph->SetPoint(2,704.3200799,25);
   graph->SetPoint(3,720.8488555,50);
   graph->SetPoint(4,725,65.10751207);
   graph->SetPoint(5,727.867091,75);
   graph->SetPoint(6,728.2271607,100);
   graph->SetPoint(7,725,110.6695339);
   graph->SetPoint(8,717.6334835,125);
   graph->SetPoint(9,706.9175156,150);
   graph->SetPoint(10,700,158.6563003);
   graph->SetPoint(11,679.070046,175);
   graph->SetPoint(12,675,176.9415364);
   graph->SetPoint(13,650,179.6346545);
   graph->SetPoint(14,625,184.6567106);
   graph->SetPoint(15,600,185.3156795);
   graph->SetPoint(16,575,182.7467627);
   graph->SetPoint(17,550,177.398939);
   graph->SetPoint(18,527.375737,175);
   graph->SetPoint(19,525,174.5714354);
   graph->SetPoint(20,523.3807615,175);
   graph->SetPoint(21,500,176.757975);
   graph->SetPoint(22,475,176.5965308);
   graph->SetPoint(23,471.3370953,175);
   graph->SetPoint(24,450,157.577261);
   graph->SetPoint(25,444.0009923,150);
   graph->SetPoint(26,437.6948996,125);
   graph->SetPoint(27,435.4829897,100);
   graph->SetPoint(28,425,83.59793198);
   graph->SetPoint(29,415.7964134,75);
   graph->SetPoint(30,400,59.68866145);
   graph->SetPoint(31,383.6920218,50);
   graph->SetPoint(32,375,40.41085974);
   graph->SetPoint(33,365.8309858,25);
   graph->SetPoint(34,375,2.713537114);
   graph->SetPoint(35,377.3005801,0);
   graph->SetPoint(36,1300,-1300);
   graph->SetPoint(37,-1300,-1300);
   
   TH1F *Graph_Graph_g_excl_xsec_obs1923 = new TH1F("Graph_Graph_g_excl_xsec_obs1923","g_excl_xsec_obs",100,-1560,1560);
   Graph_Graph_g_excl_xsec_obs1923->SetMinimum(-1448.532);
   Graph_Graph_g_excl_xsec_obs1923->SetMaximum(333.8472);
   Graph_Graph_g_excl_xsec_obs1923->SetDirectory(0);
   Graph_Graph_g_excl_xsec_obs1923->SetStats(0);

   ci = TColor::GetColor("#0000ff");
   Graph_Graph_g_excl_xsec_obs1923->SetLineColor(ci);
   Graph_Graph_g_excl_xsec_obs1923->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_g_excl_xsec_obs1923->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_g_excl_xsec_obs1923->GetYaxis()->SetTitleOffset(1.2);
   graph->SetHistogram(Graph_Graph_g_excl_xsec_obs1923);
   
   graph->Draw("l");
   
   graph = new TGraph(38);
   graph->SetName("g_excl_xsec_obs_p1");
   graph->SetTitle("g_excl_xsec_obs_p1");

   ci = TColor::GetColor("#ff807e");
   graph->SetFillColor(ci);
   graph->SetLineWidth(2);
   graph->SetPoint(0,721.3563796,0);
   graph->SetPoint(1,725,4.512361876);
   graph->SetPoint(2,741.3639817,25);
   graph->SetPoint(3,750,37.37406187);
   graph->SetPoint(4,759.7233649,50);
   graph->SetPoint(5,769.5407584,75);
   graph->SetPoint(6,767.9300126,100);
   graph->SetPoint(7,760.8205599,125);
   graph->SetPoint(8,750,149.1886509);
   graph->SetPoint(9,749.5968952,150);
   graph->SetPoint(10,733.9982748,175);
   graph->SetPoint(11,725,184.7182702);
   graph->SetPoint(12,700.4040282,200);
   graph->SetPoint(13,700,200.1876176);
   graph->SetPoint(14,675,208.5904564);
   graph->SetPoint(15,650,207.5869708);
   graph->SetPoint(16,625,206.0931978);
   graph->SetPoint(17,600,203.5743183);
   graph->SetPoint(18,585.7043692,200);
   graph->SetPoint(19,575,197.145665);
   graph->SetPoint(20,550,186.3389017);
   graph->SetPoint(21,525,180.9762278);
   graph->SetPoint(22,500,180.8447206);
   graph->SetPoint(23,475,179.4878087);
   graph->SetPoint(24,464.8057412,175);
   graph->SetPoint(25,450,162.8351109);
   graph->SetPoint(26,439.870236,150);
   graph->SetPoint(27,429.9634919,125);
   graph->SetPoint(28,425,100.2084923);
   graph->SetPoint(29,424.9238509,100);
   graph->SetPoint(30,400,76.60287143);
   graph->SetPoint(31,396.3821631,75);
   graph->SetPoint(32,375,62.44270395);
   graph->SetPoint(33,350,52.54464759);
   graph->SetPoint(34,348.0703598,50);
   graph->SetPoint(35,347.6026182,25);
   graph->SetPoint(36,350,15.69347518);
   graph->SetPoint(37,356.1356973,0);
   
   TH1F *Graph_Graph_g_excl_xsec_obs_p1724 = new TH1F("Graph_Graph_g_excl_xsec_obs_p1724","g_excl_xsec_obs_p1",100,305.4088,811.7346);
   Graph_Graph_g_excl_xsec_obs_p1724->SetMinimum(0);
   Graph_Graph_g_excl_xsec_obs_p1724->SetMaximum(229.4495);
   Graph_Graph_g_excl_xsec_obs_p1724->SetDirectory(0);
   Graph_Graph_g_excl_xsec_obs_p1724->SetStats(0);

   ci = TColor::GetColor("#0000ff");
   Graph_Graph_g_excl_xsec_obs_p1724->SetLineColor(ci);
   Graph_Graph_g_excl_xsec_obs_p1724->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_g_excl_xsec_obs_p1724->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_g_excl_xsec_obs_p1724->GetYaxis()->SetTitleOffset(1.2);
   graph->SetHistogram(Graph_Graph_g_excl_xsec_obs_p1724);
   
   graph->Draw("l");
   
   graph = new TGraph(28);
   graph->SetName("g_excl_xsec_obs_m1");
   graph->SetTitle("g_excl_xsec_obs_m1");

   ci = TColor::GetColor("#ff807e");
   graph->SetFillColor(ci);
   graph->SetLineWidth(2);
   graph->SetPoint(0,636.1685392,0);
   graph->SetPoint(1,650,14.62675262);
   graph->SetPoint(2,659.2043855,25);
   graph->SetPoint(3,672.5063836,50);
   graph->SetPoint(4,675,68.75925512);
   graph->SetPoint(5,675.8605124,75);
   graph->SetPoint(6,675,76.7341009);
   graph->SetPoint(7,662.6912265,100);
   graph->SetPoint(8,650,114.2757535);
   graph->SetPoint(9,640.9270702,125);
   graph->SetPoint(10,625,149.6198691);
   graph->SetPoint(11,624.5905378,150);
   graph->SetPoint(12,600,158.9650429);
   graph->SetPoint(13,575,163.0889899);
   graph->SetPoint(14,550,160.2543628);
   graph->SetPoint(15,525,159.7508012);
   graph->SetPoint(16,500,169.9211193);
   graph->SetPoint(17,475,172.6097147);
   graph->SetPoint(18,450,152.3194111);
   graph->SetPoint(19,448.1559779,150);
   graph->SetPoint(20,445.4884191,125);
   graph->SetPoint(21,446.1343057,100);
   graph->SetPoint(22,438.9434893,75);
   graph->SetPoint(23,425,58.07698227);
   graph->SetPoint(24,416.602964,50);
   graph->SetPoint(25,409.792147,25);
   graph->SetPoint(26,425,18.3321724);
   graph->SetPoint(27,429.8408899,0);
   
   TH1F *Graph_Graph_g_excl_xsec_obs_m1825 = new TH1F("Graph_Graph_g_excl_xsec_obs_m1825","g_excl_xsec_obs_m1",100,383.1853,702.4673);
   Graph_Graph_g_excl_xsec_obs_m1825->SetMinimum(0);
   Graph_Graph_g_excl_xsec_obs_m1825->SetMaximum(189.8707);
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
