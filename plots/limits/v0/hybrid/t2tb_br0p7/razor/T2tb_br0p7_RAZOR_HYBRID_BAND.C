{
//=========Macro generated from canvas: cBrazil_/cBrazil_
//=========  (Thu Apr 23 17:01:09 2015) by ROOT version5.34/03
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
   
   TH2D *h_ul_xsec_obs_smoothEMPTY = new TH2D("h_ul_xsec_obs_smoothEMPTY","Observed razor #sigma #times Branching Fraction (t2tb_br0p7)EMPTY",31,137.5,912.5,29,-12.5,712.5);

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
   
   graph = new TGraph(59);
   graph->SetName("Graph");
   graph->SetTitle("Graph");

   ci = TColor::GetColor("#ffcc00");
   graph->SetFillColor(ci);
   graph->SetPoint(0,561.1280068,0);
   graph->SetPoint(1,575,11.19866194);
   graph->SetPoint(2,588.650114,25);
   graph->SetPoint(3,600,37.62615719);
   graph->SetPoint(4,610.0937874,50);
   graph->SetPoint(5,613.5878048,75);
   graph->SetPoint(6,605.269511,100);
   graph->SetPoint(7,600,114.204912);
   graph->SetPoint(8,594.2264636,125);
   graph->SetPoint(9,575,141.1168311);
   graph->SetPoint(10,550,148.9599689);
   graph->SetPoint(11,525,142.6601629);
   graph->SetPoint(12,500,133.0098732);
   graph->SetPoint(13,485.2889638,125);
   graph->SetPoint(14,475,118.2637497);
   graph->SetPoint(15,450.6753921,100);
   graph->SetPoint(16,450,99.34990339);
   graph->SetPoint(17,429.1282391,75);
   graph->SetPoint(18,425,67.16339001);
   graph->SetPoint(19,418.3279722,50);
   graph->SetPoint(20,422.4397449,25);
   graph->SetPoint(21,425,19.86297507);
   graph->SetPoint(22,440.1938792,0);
   graph->SetPoint(23,368.6221784,0);
   graph->SetPoint(24,364.6103682,25);
   graph->SetPoint(25,369.1740028,50);
   graph->SetPoint(26,375,58.18459722);
   graph->SetPoint(27,385.3554865,75);
   graph->SetPoint(28,400,89.63017923);
   graph->SetPoint(29,408.4779581,100);
   graph->SetPoint(30,425,115.1057916);
   graph->SetPoint(31,435.9438753,125);
   graph->SetPoint(32,450,136.3579474);
   graph->SetPoint(33,466.6609037,150);
   graph->SetPoint(34,475,155.5204144);
   graph->SetPoint(35,500,174.9861707);
   graph->SetPoint(36,500.0201281,175);
   graph->SetPoint(37,525,189.6905963);
   graph->SetPoint(38,542.0047125,200);
   graph->SetPoint(39,550,204.086584);
   graph->SetPoint(40,575,218.1028606);
   graph->SetPoint(41,588.4445654,225);
   graph->SetPoint(42,600,229.6009229);
   graph->SetPoint(43,625,235.3302076);
   graph->SetPoint(44,650,230.629881);
   graph->SetPoint(45,658.2208821,225);
   graph->SetPoint(46,675,205.1133583);
   graph->SetPoint(47,677.7613416,200);
   graph->SetPoint(48,688.6027954,175);
   graph->SetPoint(49,697.5893354,150);
   graph->SetPoint(50,700,136.1324135);
   graph->SetPoint(51,701.7147043,125);
   graph->SetPoint(52,702.0412571,100);
   graph->SetPoint(53,700,84.2411718);
   graph->SetPoint(54,698.6331577,75);
   graph->SetPoint(55,695.8490695,50);
   graph->SetPoint(56,687.7497825,25);
   graph->SetPoint(57,675,5.827118479);
   graph->SetPoint(58,671.1435323,0);
   
   TH1F *Graph_Graph36 = new TH1F("Graph_Graph36","Graph",100,330.8673,735.7843);
   Graph_Graph36->SetMinimum(0);
   Graph_Graph36->SetMaximum(258.8632);
   Graph_Graph36->SetDirectory(0);
   Graph_Graph36->SetStats(0);

   ci = TColor::GetColor("#0000ff");
   Graph_Graph36->SetLineColor(ci);
   Graph_Graph36->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph36->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph36->GetYaxis()->SetTitleOffset(1.2);
   graph->SetHistogram(Graph_Graph36);
   
   graph->Draw("f");
   
   graph = new TGraph(31);
   graph->SetName("g_excl_xsec_obs");
   graph->SetTitle("g_excl_xsec_obs");

   ci = TColor::GetColor("#cccccc");
   graph->SetFillColor(ci);
   graph->SetLineWidth(4);
   graph->SetPoint(0,638.810945,0);
   graph->SetPoint(1,650,12.39783);
   graph->SetPoint(2,659.9663486,25);
   graph->SetPoint(3,675,49.83456064);
   graph->SetPoint(4,675.08284,50);
   graph->SetPoint(5,677.974584,75);
   graph->SetPoint(6,675,86.58725883);
   graph->SetPoint(7,670.5079931,100);
   graph->SetPoint(8,667.0253191,125);
   graph->SetPoint(9,653.4626622,150);
   graph->SetPoint(10,650,154.314919);
   graph->SetPoint(11,633.7140443,175);
   graph->SetPoint(12,625,179.8926804);
   graph->SetPoint(13,600,185.4980977);
   graph->SetPoint(14,575,182.2183696);
   graph->SetPoint(15,555.0018624,175);
   graph->SetPoint(16,550,172.6190595);
   graph->SetPoint(17,525,156.6520032);
   graph->SetPoint(18,510.6678806,150);
   graph->SetPoint(19,500,144.5992514);
   graph->SetPoint(20,475,127.841116);
   graph->SetPoint(21,471.2817843,125);
   graph->SetPoint(22,450,103.6640232);
   graph->SetPoint(23,447.1460212,100);
   graph->SetPoint(24,429.5979372,75);
   graph->SetPoint(25,425,67.47944953);
   graph->SetPoint(26,415.8320089,50);
   graph->SetPoint(27,407.0592283,25);
   graph->SetPoint(28,420.5924962,0);
   graph->SetPoint(29,1300,-1300);
   graph->SetPoint(30,-1300,-1300);
   
   TH1F *Graph_Graph_Graph_g_excl_xsec_obs192337 = new TH1F("Graph_Graph_Graph_g_excl_xsec_obs192337","g_excl_xsec_obs",100,-1560,1560);
   Graph_Graph_Graph_g_excl_xsec_obs192337->SetMinimum(-1448.55);
   Graph_Graph_Graph_g_excl_xsec_obs192337->SetMaximum(334.0479);
   Graph_Graph_Graph_g_excl_xsec_obs192337->SetDirectory(0);
   Graph_Graph_Graph_g_excl_xsec_obs192337->SetStats(0);

   ci = TColor::GetColor("#0000ff");
   Graph_Graph_Graph_g_excl_xsec_obs192337->SetLineColor(ci);
   Graph_Graph_Graph_g_excl_xsec_obs192337->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_Graph_g_excl_xsec_obs192337->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_Graph_g_excl_xsec_obs192337->GetYaxis()->SetTitleOffset(1.2);
   graph->SetHistogram(Graph_Graph_Graph_g_excl_xsec_obs192337);
   
   graph->Draw("l");
   
   graph = new TGraph(33);
   graph->SetName("g_excl_xsec_obs_p1");
   graph->SetTitle("g_excl_xsec_obs_p1");

   ci = TColor::GetColor("#ff807e");
   graph->SetFillColor(ci);
   graph->SetLineWidth(2);
   graph->SetPoint(0,673.1946439,0);
   graph->SetPoint(1,675,2.178798145);
   graph->SetPoint(2,691.3375698,25);
   graph->SetPoint(3,700,41.39191373);
   graph->SetPoint(4,704.5534384,50);
   graph->SetPoint(5,712.1964392,75);
   graph->SetPoint(6,715.2777378,100);
   graph->SetPoint(7,714.2369436,125);
   graph->SetPoint(8,704.0856277,150);
   graph->SetPoint(9,700,155.9339088);
   graph->SetPoint(10,685.5909271,175);
   graph->SetPoint(11,675,184.821958);
   graph->SetPoint(12,653.2338132,200);
   graph->SetPoint(13,650,201.2699304);
   graph->SetPoint(14,625,205.6534067);
   graph->SetPoint(15,600,204.6293366);
   graph->SetPoint(16,581.1080537,200);
   graph->SetPoint(17,575,198.186037);
   graph->SetPoint(18,550,183.8706671);
   graph->SetPoint(19,528.629241,175);
   graph->SetPoint(20,525,172.5578116);
   graph->SetPoint(21,500,157.1261768);
   graph->SetPoint(22,488.7257632,150);
   graph->SetPoint(23,475,139.8744237);
   graph->SetPoint(24,455.9031799,125);
   graph->SetPoint(25,450,118.9898534);
   graph->SetPoint(26,435.3102268,100);
   graph->SetPoint(27,425,86.82327579);
   graph->SetPoint(28,415.0004996,75);
   graph->SetPoint(29,400,53.15524232);
   graph->SetPoint(30,396.7040186,50);
   graph->SetPoint(31,381.2303841,25);
   graph->SetPoint(32,391.0755215,0);
   
   TH1F *Graph_Graph_Graph_g_excl_xsec_obs_p172438 = new TH1F("Graph_Graph_Graph_g_excl_xsec_obs_p172438","g_excl_xsec_obs_p1",100,347.8256,748.6825);
   Graph_Graph_Graph_g_excl_xsec_obs_p172438->SetMinimum(0);
   Graph_Graph_Graph_g_excl_xsec_obs_p172438->SetMaximum(226.2187);
   Graph_Graph_Graph_g_excl_xsec_obs_p172438->SetDirectory(0);
   Graph_Graph_Graph_g_excl_xsec_obs_p172438->SetStats(0);

   ci = TColor::GetColor("#0000ff");
   Graph_Graph_Graph_g_excl_xsec_obs_p172438->SetLineColor(ci);
   Graph_Graph_Graph_g_excl_xsec_obs_p172438->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_Graph_g_excl_xsec_obs_p172438->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_Graph_g_excl_xsec_obs_p172438->GetYaxis()->SetTitleOffset(1.2);
   graph->SetHistogram(Graph_Graph_Graph_g_excl_xsec_obs_p172438);
   
   graph->Draw("l");
   
   graph = new TGraph(25);
   graph->SetName("g_excl_xsec_obs_m1");
   graph->SetTitle("g_excl_xsec_obs_m1");

   ci = TColor::GetColor("#ff807e");
   graph->SetFillColor(ci);
   graph->SetLineWidth(2);
   graph->SetPoint(0,593.2526067,0);
   graph->SetPoint(1,600,5.840325962);
   graph->SetPoint(2,622.4856809,25);
   graph->SetPoint(3,625,27.97325879);
   graph->SetPoint(4,637.8896071,50);
   graph->SetPoint(5,641.5776245,75);
   graph->SetPoint(6,631.4635631,100);
   graph->SetPoint(7,625,116.4920247);
   graph->SetPoint(8,621.0128135,125);
   graph->SetPoint(9,605.0066546,150);
   graph->SetPoint(10,600,154.1988676);
   graph->SetPoint(11,575,160.141489);
   graph->SetPoint(12,550,152.0751386);
   graph->SetPoint(13,546.2039025,150);
   graph->SetPoint(14,525,137.2835622);
   graph->SetPoint(15,500,127.7588746);
   graph->SetPoint(16,495.4997461,125);
   graph->SetPoint(17,475,106.9753315);
   graph->SetPoint(18,467.8286576,100);
   graph->SetPoint(19,452.1596603,75);
   graph->SetPoint(20,450,65.843252);
   graph->SetPoint(21,444.7228489,50);
   graph->SetPoint(22,448.1243328,25);
   graph->SetPoint(23,450,19.42099715);
   graph->SetPoint(24,456.2312753,0);
   
   TH1F *Graph_Graph_Graph_g_excl_xsec_obs_m182539 = new TH1F("Graph_Graph_Graph_g_excl_xsec_obs_m182539","g_excl_xsec_obs_m1",100,425.0374,661.2631);
   Graph_Graph_Graph_g_excl_xsec_obs_m182539->SetMinimum(0);
   Graph_Graph_Graph_g_excl_xsec_obs_m182539->SetMaximum(176.1556);
   Graph_Graph_Graph_g_excl_xsec_obs_m182539->SetDirectory(0);
   Graph_Graph_Graph_g_excl_xsec_obs_m182539->SetStats(0);

   ci = TColor::GetColor("#0000ff");
   Graph_Graph_Graph_g_excl_xsec_obs_m182539->SetLineColor(ci);
   Graph_Graph_Graph_g_excl_xsec_obs_m182539->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_Graph_g_excl_xsec_obs_m182539->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_Graph_g_excl_xsec_obs_m182539->GetYaxis()->SetTitleOffset(1.2);
   graph->SetHistogram(Graph_Graph_Graph_g_excl_xsec_obs_m182539);
   
   graph->Draw("l");
   
   graph = new TGraph(30);
   graph->SetName("g_excl_xsec_exp");
   graph->SetTitle("g_excl_xsec_exp");

   ci = TColor::GetColor("#ff807e");
   graph->SetFillColor(ci);
   graph->SetLineStyle(2);
   graph->SetLineWidth(4);
   graph->SetPoint(0,629.1268248,0);
   graph->SetPoint(1,649.2972246,25);
   graph->SetPoint(2,650,26.06074083);
   graph->SetPoint(3,663.1823709,50);
   graph->SetPoint(4,666.2691667,75);
   graph->SetPoint(5,659.9284104,100);
   graph->SetPoint(6,656.9093484,125);
   graph->SetPoint(7,650,146.008069);
   graph->SetPoint(8,648.5811264,150);
   graph->SetPoint(9,637.1101621,175);
   graph->SetPoint(10,625,190.9057795);
   graph->SetPoint(11,609.7756235,200);
   graph->SetPoint(12,600,202.4998161);
   graph->SetPoint(13,575,200.5348937);
   graph->SetPoint(14,573.848867,200);
   graph->SetPoint(15,550,187.2667782);
   graph->SetPoint(16,525,175.2885321);
   graph->SetPoint(17,524.5209674,175);
   graph->SetPoint(18,500,158.5644452);
   graph->SetPoint(19,486.2639158,150);
   graph->SetPoint(20,475,141.8599889);
   graph->SetPoint(21,452.6003847,125);
   graph->SetPoint(22,450,122.7196427);
   graph->SetPoint(23,425,100.2186321);
   graph->SetPoint(24,424.7723985,100);
   graph->SetPoint(25,404.127222,75);
   graph->SetPoint(26,400,67.76515726);
   graph->SetPoint(27,389.6445674,50);
   graph->SetPoint(28,387.7056721,25);
   graph->SetPoint(29,394.8548279,0);
   
   TH1F *Graph_Graph_Graph_g_excl_xsec_exp32040 = new TH1F("Graph_Graph_Graph_g_excl_xsec_exp32040","g_excl_xsec_exp",100,359.8493,694.1255);
   Graph_Graph_Graph_g_excl_xsec_exp32040->SetMinimum(0);
   Graph_Graph_Graph_g_excl_xsec_exp32040->SetMaximum(222.7498);
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
      tex = new TLatex(0.18,0.7,"Razor 0L");
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
