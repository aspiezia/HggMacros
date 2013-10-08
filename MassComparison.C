{
  gROOT->Reset();
  gStyle->SetCanvasColor(0);
  gStyle->SetFrameBorderMode(0);
  gStyle->SetOptStat(0);
  gStyle->SetPalette(1,0);
  gStyle->SetTitleX(0.5); //title X location 
  gStyle->SetTitleY(0.96); //title Y location 
  using namespace std;

  TCanvas * c1 = new TCanvas("c1", "c1", 800, 600);
  TFile *_file0 = TFile::Open("OptimizationSideband_081013_MC/root/mass_CSVHlep1.root");
  DAT->Rebin(10);
  BKG->Rebin(10);
  ERR->Rebin(10);
  DAT->Draw("E");
  BKG->Draw("same histo");
  ERR->Draw("E2same");
  c1->SaveAs("mass_CS_VHlep1.png");


  TCanvas * c1 = new TCanvas("c1", "c1", 800, 600);
  TFile *_file0 = TFile::Open("OptimizationSideband_081013_MC/root/mass_CSVHlep2.root");
  DAT->Rebin(10);
  BKG->Rebin(10);
  ERR->Rebin(10);
  DAT->Draw("E");
  BKG->Draw("same histo");
  ERR->Draw("E2same");
  c1->SaveAs("mass_CS_VHlep2.png");


  TCanvas * c1 = new TCanvas("c1", "c1", 800, 600);
  TFile *_file0 = TFile::Open("OptimizationSideband_081013_MC/root/mass_CSVHmetT.root");
  DAT->Rebin(10);
  BKG->Rebin(10);
  ERR->Rebin(10);
  DAT->Draw("E");
  BKG->Draw("same histo");
  ERR->Draw("E2same");
  c1->SaveAs("mass_CS_VHmetT.png");


  TCanvas * c1 = new TCanvas("c1", "c1", 800, 600);
  TFile *_file0 = TFile::Open("OptimizationSideband_081013_MC/root/mass_CSVHhad0.root");
  DAT->Rebin(10);
  BKG->Rebin(10);
  ERR->Rebin(10);
  DAT->Draw("E");
  BKG->Draw("same histo");
  ERR->Draw("E2same");
  c1->SaveAs("mass_CS_VHhad0.png");


  TCanvas * c1 = new TCanvas("c1", "c1", 800, 600);
  TFile *_file0 = TFile::Open("OptimizationSideband_081013_MC/root/mass_CSVHhadB.root");
  DAT->Rebin(10);
  BKG->Rebin(10);
  ERR->Rebin(10);
  DAT->Draw("E");
  BKG->Draw("same histo");
  ERR->Draw("E2same");
  c1->SaveAs("mass_CS_VHhadB.png");


  TCanvas * c1 = new TCanvas("c1", "c1", 800, 600);
  TFile *_file0 = TFile::Open("OptimizationSideband_081013_MC/root/mass_CSttHhad.root");
  DAT->Rebin(10);
  BKG->Rebin(10);
  ERR->Rebin(10);
  DAT->Draw("E");
  BKG->Draw("same histo");
  ERR->Draw("E2same");
  c1->SaveAs("mass_CS_ttHhad.png");


  TCanvas * c1 = new TCanvas("c1", "c1", 800, 600);
  TFile *_file0 = TFile::Open("OptimizationSideband_081013_MC/root/mass_SSVHlep1.root");
  DAT->Rebin(10);
  BKG->Rebin(10);
  ERR->Rebin(10);
  DAT->Draw("E");
  BKG->Draw("same histo");
  ERR->Draw("E2same");
  c1->SaveAs("mass_SS_VHlep1.png");


  TCanvas * c1 = new TCanvas("c1", "c1", 800, 600);
  TFile *_file0 = TFile::Open("OptimizationSideband_081013_MC/root/mass_SSVHlep2.root");
  DAT->Rebin(10);
  BKG->Rebin(10);
  ERR->Rebin(10);
  DAT->Draw("E");
  BKG->Draw("same histo");
  ERR->Draw("E2same");
  c1->SaveAs("mass_SS_VHlep2.png");


  TCanvas * c1 = new TCanvas("c1", "c1", 800, 600);
  TFile *_file0 = TFile::Open("OptimizationSideband_081013_MC/root/mass_SSVHmetT.root");
  DAT->Rebin(10);
  BKG->Rebin(10);
  ERR->Rebin(10);
  DAT->Draw("E");
  BKG->Draw("same histo");
  ERR->Draw("E2same");
  c1->SaveAs("mass_SS_VHmetT.png");


  TCanvas * c1 = new TCanvas("c1", "c1", 800, 600);
  TFile *_file0 = TFile::Open("OptimizationSideband_081013_MC/root/mass_SSVHhad0.root");
  DAT->Rebin(10);
  BKG->Rebin(10);
  ERR->Rebin(10);
  DAT->Draw("E");
  BKG->Draw("same histo");
  ERR->Draw("E2same");
  c1->SaveAs("mass_SS_VHhad0.png");


  TCanvas * c1 = new TCanvas("c1", "c1", 800, 600);
  TFile *_file0 = TFile::Open("OptimizationSideband_081013_MC/root/mass_SSVHhadB.root");
  DAT->Rebin(10);
  BKG->Rebin(10);
  ERR->Rebin(10);
  DAT->Draw("E");
  BKG->Draw("same histo");
  ERR->Draw("E2same");
  c1->SaveAs("mass_SS_VHhadB.png");


  TCanvas * c1 = new TCanvas("c1", "c1", 800, 600);
  TFile *_file0 = TFile::Open("OptimizationSideband_081013_MC/root/mass_SSttHhad.root");
  DAT->Rebin(10);
  BKG->Rebin(10);
  ERR->Rebin(10);
  DAT->Draw("E");
  BKG->Draw("same histo");
  ERR->Draw("E2same");
  c1->SaveAs("mass_SS_ttHhad.png");




}
