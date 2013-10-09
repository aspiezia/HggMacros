{
  gROOT->Reset();
  gStyle->SetCanvasColor(0);
  gStyle->SetFrameBorderMode(0);
  gStyle->SetOptStat(0);
  gStyle->SetPalette(1,0);
  gStyle->SetTitleX(0.5); //title X location 
  gStyle->SetTitleY(0.96); //title Y location 
  using namespace std;

  //mass
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

  //photonPT_leadOverM
  TCanvas * c1 = new TCanvas("c1", "c1", 800, 600);
  TFile *_file0 = TFile::Open("OptimizationSideband_081013_MC/root/mass_CSVHlep1.root");
  DAT->Rebin(10);
  BKG->Rebin(10);
  ERR->Rebin(10);
  DAT->Draw("E");
  BKG->Draw("same histo");
  ERR->Draw("E2same");
  c1->SaveAs("photonPT_leadOverM_CS_VHlep1.png");


  TCanvas * c1 = new TCanvas("c1", "c1", 800, 600);
  TFile *_file0 = TFile::Open("OptimizationSideband_081013_MC/root/mass_CSVHlep2.root");
  DAT->Rebin(10);
  BKG->Rebin(10);
  ERR->Rebin(10);
  DAT->Draw("E");
  BKG->Draw("same histo");
  ERR->Draw("E2same");
  c1->SaveAs("photonPT_leadOverM_CS_VHlep2.png");


  TCanvas * c1 = new TCanvas("c1", "c1", 800, 600);
  TFile *_file0 = TFile::Open("OptimizationSideband_081013_MC/root/mass_CSVHmetT.root");
  DAT->Rebin(10);
  BKG->Rebin(10);
  ERR->Rebin(10);
  DAT->Draw("E");
  BKG->Draw("same histo");
  ERR->Draw("E2same");
  c1->SaveAs("photonPT_leadOverM_CS_VHmetT.png");


  TCanvas * c1 = new TCanvas("c1", "c1", 800, 600);
  TFile *_file0 = TFile::Open("OptimizationSideband_081013_MC/root/mass_CSVHhad0.root");
  DAT->Rebin(10);
  BKG->Rebin(10);
  ERR->Rebin(10);
  DAT->Draw("E");
  BKG->Draw("same histo");
  ERR->Draw("E2same");
  c1->SaveAs("photonPT_leadOverM_CS_VHhad0.png");


  TCanvas * c1 = new TCanvas("c1", "c1", 800, 600);
  TFile *_file0 = TFile::Open("OptimizationSideband_081013_MC/root/mass_CSVHhadB.root");
  DAT->Rebin(10);
  BKG->Rebin(10);
  ERR->Rebin(10);
  DAT->Draw("E");
  BKG->Draw("same histo");
  ERR->Draw("E2same");
  c1->SaveAs("photonPT_leadOverM_CS_VHhadB.png");


  TCanvas * c1 = new TCanvas("c1", "c1", 800, 600);
  TFile *_file0 = TFile::Open("OptimizationSideband_081013_MC/root/mass_CSttHhad.root");
  DAT->Rebin(10);
  BKG->Rebin(10);
  ERR->Rebin(10);
  DAT->Draw("E");
  BKG->Draw("same histo");
  ERR->Draw("E2same");
  c1->SaveAs("photonPT_leadOverM_CS_ttHhad.png");


  TCanvas * c1 = new TCanvas("c1", "c1", 800, 600);
  TFile *_file0 = TFile::Open("OptimizationSideband_081013_MC/root/mass_SSVHlep1.root");
  DAT->Rebin(10);
  BKG->Rebin(10);
  ERR->Rebin(10);
  DAT->Draw("E");
  BKG->Draw("same histo");
  ERR->Draw("E2same");
  c1->SaveAs("photonPT_leadOverM_SS_VHlep1.png");


  TCanvas * c1 = new TCanvas("c1", "c1", 800, 600);
  TFile *_file0 = TFile::Open("OptimizationSideband_081013_MC/root/mass_SSVHlep2.root");
  DAT->Rebin(10);
  BKG->Rebin(10);
  ERR->Rebin(10);
  DAT->Draw("E");
  BKG->Draw("same histo");
  ERR->Draw("E2same");
  c1->SaveAs("photonPT_leadOverM_SS_VHlep2.png");


  TCanvas * c1 = new TCanvas("c1", "c1", 800, 600);
  TFile *_file0 = TFile::Open("OptimizationSideband_081013_MC/root/mass_SSVHmetT.root");
  DAT->Rebin(10);
  BKG->Rebin(10);
  ERR->Rebin(10);
  DAT->Draw("E");
  BKG->Draw("same histo");
  ERR->Draw("E2same");
  c1->SaveAs("photonPT_leadOverM_SS_VHmetT.png");


  TCanvas * c1 = new TCanvas("c1", "c1", 800, 600);
  TFile *_file0 = TFile::Open("OptimizationSideband_081013_MC/root/mass_SSVHhad0.root");
  DAT->Rebin(10);
  BKG->Rebin(10);
  ERR->Rebin(10);
  DAT->Draw("E");
  BKG->Draw("same histo");
  ERR->Draw("E2same");
  c1->SaveAs("photonPT_leadOverM_SS_VHhad0.png");


  TCanvas * c1 = new TCanvas("c1", "c1", 800, 600);
  TFile *_file0 = TFile::Open("OptimizationSideband_081013_MC/root/mass_SSVHhadB.root");
  DAT->Rebin(10);
  BKG->Rebin(10);
  ERR->Rebin(10);
  DAT->Draw("E");
  BKG->Draw("same histo");
  ERR->Draw("E2same");
  c1->SaveAs("photonPT_leadOverM_SS_VHhadB.png");


  TCanvas * c1 = new TCanvas("c1", "c1", 800, 600);
  TFile *_file0 = TFile::Open("OptimizationSideband_081013_MC/root/mass_SSttHhad.root");
  DAT->Rebin(10);
  BKG->Rebin(10);
  ERR->Rebin(10);
  DAT->Draw("E");
  BKG->Draw("same histo");
  ERR->Draw("E2same");
  c1->SaveAs("photonPT_leadOverM_SS_ttHhad.png");

  //photonPT_subleadOverM
  TCanvas * c1 = new TCanvas("c1", "c1", 800, 600);
  TFile *_file0 = TFile::Open("OptimizationSideband_081013_MC/root/mass_CSVHlep1.root");
  DAT->Rebin(10);
  BKG->Rebin(10);
  ERR->Rebin(10);
  DAT->Draw("E");
  BKG->Draw("same histo");
  ERR->Draw("E2same");
  c1->SaveAs("photonPT_subleadOverM_CS_VHlep1.png");


  TCanvas * c1 = new TCanvas("c1", "c1", 800, 600);
  TFile *_file0 = TFile::Open("OptimizationSideband_081013_MC/root/mass_CSVHlep2.root");
  DAT->Rebin(10);
  BKG->Rebin(10);
  ERR->Rebin(10);
  DAT->Draw("E");
  BKG->Draw("same histo");
  ERR->Draw("E2same");
  c1->SaveAs("photonPT_subleadOverM_CS_VHlep2.png");


  TCanvas * c1 = new TCanvas("c1", "c1", 800, 600);
  TFile *_file0 = TFile::Open("OptimizationSideband_081013_MC/root/mass_CSVHmetT.root");
  DAT->Rebin(10);
  BKG->Rebin(10);
  ERR->Rebin(10);
  DAT->Draw("E");
  BKG->Draw("same histo");
  ERR->Draw("E2same");
  c1->SaveAs("photonPT_subleadOverM_CS_VHmetT.png");


  TCanvas * c1 = new TCanvas("c1", "c1", 800, 600);
  TFile *_file0 = TFile::Open("OptimizationSideband_081013_MC/root/mass_CSVHhad0.root");
  DAT->Rebin(10);
  BKG->Rebin(10);
  ERR->Rebin(10);
  DAT->Draw("E");
  BKG->Draw("same histo");
  ERR->Draw("E2same");
  c1->SaveAs("photonPT_subleadOverM_CS_VHhad0.png");


  TCanvas * c1 = new TCanvas("c1", "c1", 800, 600);
  TFile *_file0 = TFile::Open("OptimizationSideband_081013_MC/root/mass_CSVHhadB.root");
  DAT->Rebin(10);
  BKG->Rebin(10);
  ERR->Rebin(10);
  DAT->Draw("E");
  BKG->Draw("same histo");
  ERR->Draw("E2same");
  c1->SaveAs("photonPT_subleadOverM_CS_VHhadB.png");


  TCanvas * c1 = new TCanvas("c1", "c1", 800, 600);
  TFile *_file0 = TFile::Open("OptimizationSideband_081013_MC/root/mass_CSttHhad.root");
  DAT->Rebin(10);
  BKG->Rebin(10);
  ERR->Rebin(10);
  DAT->Draw("E");
  BKG->Draw("same histo");
  ERR->Draw("E2same");
  c1->SaveAs("photonPT_subleadOverM_CS_ttHhad.png");


  TCanvas * c1 = new TCanvas("c1", "c1", 800, 600);
  TFile *_file0 = TFile::Open("OptimizationSideband_081013_MC/root/mass_SSVHlep1.root");
  DAT->Rebin(10);
  BKG->Rebin(10);
  ERR->Rebin(10);
  DAT->Draw("E");
  BKG->Draw("same histo");
  ERR->Draw("E2same");
  c1->SaveAs("photonPT_subleadOverM_SS_VHlep1.png");


  TCanvas * c1 = new TCanvas("c1", "c1", 800, 600);
  TFile *_file0 = TFile::Open("OptimizationSideband_081013_MC/root/mass_SSVHlep2.root");
  DAT->Rebin(10);
  BKG->Rebin(10);
  ERR->Rebin(10);
  DAT->Draw("E");
  BKG->Draw("same histo");
  ERR->Draw("E2same");
  c1->SaveAs("photonPT_subleadOverM_SS_VHlep2.png");


  TCanvas * c1 = new TCanvas("c1", "c1", 800, 600);
  TFile *_file0 = TFile::Open("OptimizationSideband_081013_MC/root/mass_SSVHmetT.root");
  DAT->Rebin(10);
  BKG->Rebin(10);
  ERR->Rebin(10);
  DAT->Draw("E");
  BKG->Draw("same histo");
  ERR->Draw("E2same");
  c1->SaveAs("photonPT_subleadOverM_SS_VHmetT.png");


  TCanvas * c1 = new TCanvas("c1", "c1", 800, 600);
  TFile *_file0 = TFile::Open("OptimizationSideband_081013_MC/root/mass_SSVHhad0.root");
  DAT->Rebin(10);
  BKG->Rebin(10);
  ERR->Rebin(10);
  DAT->Draw("E");
  BKG->Draw("same histo");
  ERR->Draw("E2same");
  c1->SaveAs("photonPT_subleadOverM_SS_VHhad0.png");


  TCanvas * c1 = new TCanvas("c1", "c1", 800, 600);
  TFile *_file0 = TFile::Open("OptimizationSideband_081013_MC/root/mass_SSVHhadB.root");
  DAT->Rebin(10);
  BKG->Rebin(10);
  ERR->Rebin(10);
  DAT->Draw("E");
  BKG->Draw("same histo");
  ERR->Draw("E2same");
  c1->SaveAs("photonPT_subleadOverM_SS_VHhadB.png");


  TCanvas * c1 = new TCanvas("c1", "c1", 800, 600);
  TFile *_file0 = TFile::Open("OptimizationSideband_081013_MC/root/mass_SSttHhad.root");
  DAT->Rebin(10);
  BKG->Rebin(10);
  ERR->Rebin(10);
  DAT->Draw("E");
  BKG->Draw("same histo");
  ERR->Draw("E2same");
  c1->SaveAs("photonPT_subleadOverM_SS_ttHhad.png");

  //photonETA_lead
  TCanvas * c1 = new TCanvas("c1", "c1", 800, 600);
  TFile *_file0 = TFile::Open("OptimizationSideband_081013_MC/root/mass_CSVHlep1.root");
  DAT->Rebin(10);
  BKG->Rebin(10);
  ERR->Rebin(10);
  DAT->Draw("E");
  BKG->Draw("same histo");
  ERR->Draw("E2same");
  c1->SaveAs("photonETA_lead_CS_VHlep1.png");


  TCanvas * c1 = new TCanvas("c1", "c1", 800, 600);
  TFile *_file0 = TFile::Open("OptimizationSideband_081013_MC/root/mass_CSVHlep2.root");
  DAT->Rebin(10);
  BKG->Rebin(10);
  ERR->Rebin(10);
  DAT->Draw("E");
  BKG->Draw("same histo");
  ERR->Draw("E2same");
  c1->SaveAs("photonETA_lead_CS_VHlep2.png");


  TCanvas * c1 = new TCanvas("c1", "c1", 800, 600);
  TFile *_file0 = TFile::Open("OptimizationSideband_081013_MC/root/mass_CSVHmetT.root");
  DAT->Rebin(10);
  BKG->Rebin(10);
  ERR->Rebin(10);
  DAT->Draw("E");
  BKG->Draw("same histo");
  ERR->Draw("E2same");
  c1->SaveAs("photonETA_lead_CS_VHmetT.png");


  TCanvas * c1 = new TCanvas("c1", "c1", 800, 600);
  TFile *_file0 = TFile::Open("OptimizationSideband_081013_MC/root/mass_CSVHhad0.root");
  DAT->Rebin(10);
  BKG->Rebin(10);
  ERR->Rebin(10);
  DAT->Draw("E");
  BKG->Draw("same histo");
  ERR->Draw("E2same");
  c1->SaveAs("photonETA_lead_CS_VHhad0.png");


  TCanvas * c1 = new TCanvas("c1", "c1", 800, 600);
  TFile *_file0 = TFile::Open("OptimizationSideband_081013_MC/root/mass_CSVHhadB.root");
  DAT->Rebin(10);
  BKG->Rebin(10);
  ERR->Rebin(10);
  DAT->Draw("E");
  BKG->Draw("same histo");
  ERR->Draw("E2same");
  c1->SaveAs("photonETA_lead_CS_VHhadB.png");


  TCanvas * c1 = new TCanvas("c1", "c1", 800, 600);
  TFile *_file0 = TFile::Open("OptimizationSideband_081013_MC/root/mass_CSttHhad.root");
  DAT->Rebin(10);
  BKG->Rebin(10);
  ERR->Rebin(10);
  DAT->Draw("E");
  BKG->Draw("same histo");
  ERR->Draw("E2same");
  c1->SaveAs("photonETA_lead_CS_ttHhad.png");


  TCanvas * c1 = new TCanvas("c1", "c1", 800, 600);
  TFile *_file0 = TFile::Open("OptimizationSideband_081013_MC/root/mass_SSVHlep1.root");
  DAT->Rebin(10);
  BKG->Rebin(10);
  ERR->Rebin(10);
  DAT->Draw("E");
  BKG->Draw("same histo");
  ERR->Draw("E2same");
  c1->SaveAs("photonETA_lead_SS_VHlep1.png");


  TCanvas * c1 = new TCanvas("c1", "c1", 800, 600);
  TFile *_file0 = TFile::Open("OptimizationSideband_081013_MC/root/mass_SSVHlep2.root");
  DAT->Rebin(10);
  BKG->Rebin(10);
  ERR->Rebin(10);
  DAT->Draw("E");
  BKG->Draw("same histo");
  ERR->Draw("E2same");
  c1->SaveAs("photonETA_lead_SS_VHlep2.png");


  TCanvas * c1 = new TCanvas("c1", "c1", 800, 600);
  TFile *_file0 = TFile::Open("OptimizationSideband_081013_MC/root/mass_SSVHmetT.root");
  DAT->Rebin(10);
  BKG->Rebin(10);
  ERR->Rebin(10);
  DAT->Draw("E");
  BKG->Draw("same histo");
  ERR->Draw("E2same");
  c1->SaveAs("photonETA_lead_SS_VHmetT.png");


  TCanvas * c1 = new TCanvas("c1", "c1", 800, 600);
  TFile *_file0 = TFile::Open("OptimizationSideband_081013_MC/root/mass_SSVHhad0.root");
  DAT->Rebin(10);
  BKG->Rebin(10);
  ERR->Rebin(10);
  DAT->Draw("E");
  BKG->Draw("same histo");
  ERR->Draw("E2same");
  c1->SaveAs("photonETA_lead_SS_VHhad0.png");


  TCanvas * c1 = new TCanvas("c1", "c1", 800, 600);
  TFile *_file0 = TFile::Open("OptimizationSideband_081013_MC/root/mass_SSVHhadB.root");
  DAT->Rebin(10);
  BKG->Rebin(10);
  ERR->Rebin(10);
  DAT->Draw("E");
  BKG->Draw("same histo");
  ERR->Draw("E2same");
  c1->SaveAs("photonETA_lead_SS_VHhadB.png");


  TCanvas * c1 = new TCanvas("c1", "c1", 800, 600);
  TFile *_file0 = TFile::Open("OptimizationSideband_081013_MC/root/mass_SSttHhad.root");
  DAT->Rebin(10);
  BKG->Rebin(10);
  ERR->Rebin(10);
  DAT->Draw("E");
  BKG->Draw("same histo");
  ERR->Draw("E2same");
  c1->SaveAs("photonETA_lead_SS_ttHhad.png");

  //photonETA_sublead
  TCanvas * c1 = new TCanvas("c1", "c1", 800, 600);
  TFile *_file0 = TFile::Open("OptimizationSideband_081013_MC/root/mass_CSVHlep1.root");
  DAT->Rebin(10);
  BKG->Rebin(10);
  ERR->Rebin(10);
  DAT->Draw("E");
  BKG->Draw("same histo");
  ERR->Draw("E2same");
  c1->SaveAs("photonETA_sublead_CS_VHlep1.png");


  TCanvas * c1 = new TCanvas("c1", "c1", 800, 600);
  TFile *_file0 = TFile::Open("OptimizationSideband_081013_MC/root/mass_CSVHlep2.root");
  DAT->Rebin(10);
  BKG->Rebin(10);
  ERR->Rebin(10);
  DAT->Draw("E");
  BKG->Draw("same histo");
  ERR->Draw("E2same");
  c1->SaveAs("photonETA_sublead_CS_VHlep2.png");


  TCanvas * c1 = new TCanvas("c1", "c1", 800, 600);
  TFile *_file0 = TFile::Open("OptimizationSideband_081013_MC/root/mass_CSVHmetT.root");
  DAT->Rebin(10);
  BKG->Rebin(10);
  ERR->Rebin(10);
  DAT->Draw("E");
  BKG->Draw("same histo");
  ERR->Draw("E2same");
  c1->SaveAs("photonETA_sublead_CS_VHmetT.png");


  TCanvas * c1 = new TCanvas("c1", "c1", 800, 600);
  TFile *_file0 = TFile::Open("OptimizationSideband_081013_MC/root/mass_CSVHhad0.root");
  DAT->Rebin(10);
  BKG->Rebin(10);
  ERR->Rebin(10);
  DAT->Draw("E");
  BKG->Draw("same histo");
  ERR->Draw("E2same");
  c1->SaveAs("photonETA_sublead_CS_VHhad0.png");


  TCanvas * c1 = new TCanvas("c1", "c1", 800, 600);
  TFile *_file0 = TFile::Open("OptimizationSideband_081013_MC/root/mass_CSVHhadB.root");
  DAT->Rebin(10);
  BKG->Rebin(10);
  ERR->Rebin(10);
  DAT->Draw("E");
  BKG->Draw("same histo");
  ERR->Draw("E2same");
  c1->SaveAs("photonETA_sublead_CS_VHhadB.png");


  TCanvas * c1 = new TCanvas("c1", "c1", 800, 600);
  TFile *_file0 = TFile::Open("OptimizationSideband_081013_MC/root/mass_CSttHhad.root");
  DAT->Rebin(10);
  BKG->Rebin(10);
  ERR->Rebin(10);
  DAT->Draw("E");
  BKG->Draw("same histo");
  ERR->Draw("E2same");
  c1->SaveAs("photonETA_sublead_CS_ttHhad.png");


  TCanvas * c1 = new TCanvas("c1", "c1", 800, 600);
  TFile *_file0 = TFile::Open("OptimizationSideband_081013_MC/root/mass_SSVHlep1.root");
  DAT->Rebin(10);
  BKG->Rebin(10);
  ERR->Rebin(10);
  DAT->Draw("E");
  BKG->Draw("same histo");
  ERR->Draw("E2same");
  c1->SaveAs("photonETA_sublead_SS_VHlep1.png");


  TCanvas * c1 = new TCanvas("c1", "c1", 800, 600);
  TFile *_file0 = TFile::Open("OptimizationSideband_081013_MC/root/mass_SSVHlep2.root");
  DAT->Rebin(10);
  BKG->Rebin(10);
  ERR->Rebin(10);
  DAT->Draw("E");
  BKG->Draw("same histo");
  ERR->Draw("E2same");
  c1->SaveAs("photonETA_sublead_SS_VHlep2.png");


  TCanvas * c1 = new TCanvas("c1", "c1", 800, 600);
  TFile *_file0 = TFile::Open("OptimizationSideband_081013_MC/root/mass_SSVHmetT.root");
  DAT->Rebin(10);
  BKG->Rebin(10);
  ERR->Rebin(10);
  DAT->Draw("E");
  BKG->Draw("same histo");
  ERR->Draw("E2same");
  c1->SaveAs("photonETA_sublead_SS_VHmetT.png");


  TCanvas * c1 = new TCanvas("c1", "c1", 800, 600);
  TFile *_file0 = TFile::Open("OptimizationSideband_081013_MC/root/mass_SSVHhad0.root");
  DAT->Rebin(10);
  BKG->Rebin(10);
  ERR->Rebin(10);
  DAT->Draw("E");
  BKG->Draw("same histo");
  ERR->Draw("E2same");
  c1->SaveAs("photonETA_sublead_SS_VHhad0.png");


  TCanvas * c1 = new TCanvas("c1", "c1", 800, 600);
  TFile *_file0 = TFile::Open("OptimizationSideband_081013_MC/root/mass_SSVHhadB.root");
  DAT->Rebin(10);
  BKG->Rebin(10);
  ERR->Rebin(10);
  DAT->Draw("E");
  BKG->Draw("same histo");
  ERR->Draw("E2same");
  c1->SaveAs("photonETA_sublead_SS_VHhadB.png");


  TCanvas * c1 = new TCanvas("c1", "c1", 800, 600);
  TFile *_file0 = TFile::Open("OptimizationSideband_081013_MC/root/mass_SSttHhad.root");
  DAT->Rebin(10);
  BKG->Rebin(10);
  ERR->Rebin(10);
  DAT->Draw("E");
  BKG->Draw("same histo");
  ERR->Draw("E2same");
  c1->SaveAs("photonETA_sublead_SS_ttHhad.png");

  //cosdPhiGG
  TCanvas * c1 = new TCanvas("c1", "c1", 800, 600);
  TFile *_file0 = TFile::Open("OptimizationSideband_081013_MC/root/mass_CSVHlep1.root");
  DAT->Rebin(10);
  BKG->Rebin(10);
  ERR->Rebin(10);
  DAT->Draw("E");
  BKG->Draw("same histo");
  ERR->Draw("E2same");
  c1->SaveAs("cosdPhiGG_CS_VHlep1.png");


  TCanvas * c1 = new TCanvas("c1", "c1", 800, 600);
  TFile *_file0 = TFile::Open("OptimizationSideband_081013_MC/root/mass_CSVHlep2.root");
  DAT->Rebin(10);
  BKG->Rebin(10);
  ERR->Rebin(10);
  DAT->Draw("E");
  BKG->Draw("same histo");
  ERR->Draw("E2same");
  c1->SaveAs("cosdPhiGG_CS_VHlep2.png");


  TCanvas * c1 = new TCanvas("c1", "c1", 800, 600);
  TFile *_file0 = TFile::Open("OptimizationSideband_081013_MC/root/mass_CSVHmetT.root");
  DAT->Rebin(10);
  BKG->Rebin(10);
  ERR->Rebin(10);
  DAT->Draw("E");
  BKG->Draw("same histo");
  ERR->Draw("E2same");
  c1->SaveAs("cosdPhiGG_CS_VHmetT.png");


  TCanvas * c1 = new TCanvas("c1", "c1", 800, 600);
  TFile *_file0 = TFile::Open("OptimizationSideband_081013_MC/root/mass_CSVHhad0.root");
  DAT->Rebin(10);
  BKG->Rebin(10);
  ERR->Rebin(10);
  DAT->Draw("E");
  BKG->Draw("same histo");
  ERR->Draw("E2same");
  c1->SaveAs("cosdPhiGG_CS_VHhad0.png");


  TCanvas * c1 = new TCanvas("c1", "c1", 800, 600);
  TFile *_file0 = TFile::Open("OptimizationSideband_081013_MC/root/mass_CSVHhadB.root");
  DAT->Rebin(10);
  BKG->Rebin(10);
  ERR->Rebin(10);
  DAT->Draw("E");
  BKG->Draw("same histo");
  ERR->Draw("E2same");
  c1->SaveAs("cosdPhiGG_CS_VHhadB.png");


  TCanvas * c1 = new TCanvas("c1", "c1", 800, 600);
  TFile *_file0 = TFile::Open("OptimizationSideband_081013_MC/root/mass_CSttHhad.root");
  DAT->Rebin(10);
  BKG->Rebin(10);
  ERR->Rebin(10);
  DAT->Draw("E");
  BKG->Draw("same histo");
  ERR->Draw("E2same");
  c1->SaveAs("cosdPhiGG_CS_ttHhad.png");


  TCanvas * c1 = new TCanvas("c1", "c1", 800, 600);
  TFile *_file0 = TFile::Open("OptimizationSideband_081013_MC/root/mass_SSVHlep1.root");
  DAT->Rebin(10);
  BKG->Rebin(10);
  ERR->Rebin(10);
  DAT->Draw("E");
  BKG->Draw("same histo");
  ERR->Draw("E2same");
  c1->SaveAs("cosdPhiGG_SS_VHlep1.png");


  TCanvas * c1 = new TCanvas("c1", "c1", 800, 600);
  TFile *_file0 = TFile::Open("OptimizationSideband_081013_MC/root/mass_SSVHlep2.root");
  DAT->Rebin(10);
  BKG->Rebin(10);
  ERR->Rebin(10);
  DAT->Draw("E");
  BKG->Draw("same histo");
  ERR->Draw("E2same");
  c1->SaveAs("cosdPhiGG_SS_VHlep2.png");


  TCanvas * c1 = new TCanvas("c1", "c1", 800, 600);
  TFile *_file0 = TFile::Open("OptimizationSideband_081013_MC/root/mass_SSVHmetT.root");
  DAT->Rebin(10);
  BKG->Rebin(10);
  ERR->Rebin(10);
  DAT->Draw("E");
  BKG->Draw("same histo");
  ERR->Draw("E2same");
  c1->SaveAs("cosdPhiGG_SS_VHmetT.png");


  TCanvas * c1 = new TCanvas("c1", "c1", 800, 600);
  TFile *_file0 = TFile::Open("OptimizationSideband_081013_MC/root/mass_SSVHhad0.root");
  DAT->Rebin(10);
  BKG->Rebin(10);
  ERR->Rebin(10);
  DAT->Draw("E");
  BKG->Draw("same histo");
  ERR->Draw("E2same");
  c1->SaveAs("cosdPhiGG_SS_VHhad0.png");


  TCanvas * c1 = new TCanvas("c1", "c1", 800, 600);
  TFile *_file0 = TFile::Open("OptimizationSideband_081013_MC/root/mass_SSVHhadB.root");
  DAT->Rebin(10);
  BKG->Rebin(10);
  ERR->Rebin(10);
  DAT->Draw("E");
  BKG->Draw("same histo");
  ERR->Draw("E2same");
  c1->SaveAs("cosdPhiGG_SS_VHhadB.png");


  TCanvas * c1 = new TCanvas("c1", "c1", 800, 600);
  TFile *_file0 = TFile::Open("OptimizationSideband_081013_MC/root/mass_SSttHhad.root");
  DAT->Rebin(10);
  BKG->Rebin(10);
  ERR->Rebin(10);
  DAT->Draw("E");
  BKG->Draw("same histo");
  ERR->Draw("E2same");
  c1->SaveAs("cosdPhiGG_SS_ttHhad.png");

  //sigmaMwvoM
  TCanvas * c1 = new TCanvas("c1", "c1", 800, 600);
  TFile *_file0 = TFile::Open("OptimizationSideband_081013_MC/root/mass_CSVHlep1.root");
  DAT->Rebin(10);
  BKG->Rebin(10);
  ERR->Rebin(10);
  DAT->Draw("E");
  BKG->Draw("same histo");
  ERR->Draw("E2same");
  c1->SaveAs("sigmaMwvoM_CS_VHlep1.png");


  TCanvas * c1 = new TCanvas("c1", "c1", 800, 600);
  TFile *_file0 = TFile::Open("OptimizationSideband_081013_MC/root/mass_CSVHlep2.root");
  DAT->Rebin(10);
  BKG->Rebin(10);
  ERR->Rebin(10);
  DAT->Draw("E");
  BKG->Draw("same histo");
  ERR->Draw("E2same");
  c1->SaveAs("sigmaMwvoM_CS_VHlep2.png");


  TCanvas * c1 = new TCanvas("c1", "c1", 800, 600);
  TFile *_file0 = TFile::Open("OptimizationSideband_081013_MC/root/mass_CSVHmetT.root");
  DAT->Rebin(10);
  BKG->Rebin(10);
  ERR->Rebin(10);
  DAT->Draw("E");
  BKG->Draw("same histo");
  ERR->Draw("E2same");
  c1->SaveAs("sigmaMwvoM_CS_VHmetT.png");


  TCanvas * c1 = new TCanvas("c1", "c1", 800, 600);
  TFile *_file0 = TFile::Open("OptimizationSideband_081013_MC/root/mass_CSVHhad0.root");
  DAT->Rebin(10);
  BKG->Rebin(10);
  ERR->Rebin(10);
  DAT->Draw("E");
  BKG->Draw("same histo");
  ERR->Draw("E2same");
  c1->SaveAs("sigmaMwvoM_CS_VHhad0.png");


  TCanvas * c1 = new TCanvas("c1", "c1", 800, 600);
  TFile *_file0 = TFile::Open("OptimizationSideband_081013_MC/root/mass_CSVHhadB.root");
  DAT->Rebin(10);
  BKG->Rebin(10);
  ERR->Rebin(10);
  DAT->Draw("E");
  BKG->Draw("same histo");
  ERR->Draw("E2same");
  c1->SaveAs("sigmaMwvoM_CS_VHhadB.png");


  TCanvas * c1 = new TCanvas("c1", "c1", 800, 600);
  TFile *_file0 = TFile::Open("OptimizationSideband_081013_MC/root/mass_CSttHhad.root");
  DAT->Rebin(10);
  BKG->Rebin(10);
  ERR->Rebin(10);
  DAT->Draw("E");
  BKG->Draw("same histo");
  ERR->Draw("E2same");
  c1->SaveAs("sigmaMwvoM_CS_ttHhad.png");


  TCanvas * c1 = new TCanvas("c1", "c1", 800, 600);
  TFile *_file0 = TFile::Open("OptimizationSideband_081013_MC/root/mass_SSVHlep1.root");
  DAT->Rebin(10);
  BKG->Rebin(10);
  ERR->Rebin(10);
  DAT->Draw("E");
  BKG->Draw("same histo");
  ERR->Draw("E2same");
  c1->SaveAs("sigmaMwvoM_SS_VHlep1.png");


  TCanvas * c1 = new TCanvas("c1", "c1", 800, 600);
  TFile *_file0 = TFile::Open("OptimizationSideband_081013_MC/root/mass_SSVHlep2.root");
  DAT->Rebin(10);
  BKG->Rebin(10);
  ERR->Rebin(10);
  DAT->Draw("E");
  BKG->Draw("same histo");
  ERR->Draw("E2same");
  c1->SaveAs("sigmaMwvoM_SS_VHlep2.png");


  TCanvas * c1 = new TCanvas("c1", "c1", 800, 600);
  TFile *_file0 = TFile::Open("OptimizationSideband_081013_MC/root/mass_SSVHmetT.root");
  DAT->Rebin(10);
  BKG->Rebin(10);
  ERR->Rebin(10);
  DAT->Draw("E");
  BKG->Draw("same histo");
  ERR->Draw("E2same");
  c1->SaveAs("sigmaMwvoM_SS_VHmetT.png");


  TCanvas * c1 = new TCanvas("c1", "c1", 800, 600);
  TFile *_file0 = TFile::Open("OptimizationSideband_081013_MC/root/mass_SSVHhad0.root");
  DAT->Rebin(10);
  BKG->Rebin(10);
  ERR->Rebin(10);
  DAT->Draw("E");
  BKG->Draw("same histo");
  ERR->Draw("E2same");
  c1->SaveAs("sigmaMwvoM_SS_VHhad0.png");


  TCanvas * c1 = new TCanvas("c1", "c1", 800, 600);
  TFile *_file0 = TFile::Open("OptimizationSideband_081013_MC/root/mass_SSVHhadB.root");
  DAT->Rebin(10);
  BKG->Rebin(10);
  ERR->Rebin(10);
  DAT->Draw("E");
  BKG->Draw("same histo");
  ERR->Draw("E2same");
  c1->SaveAs("sigmaMwvoM_SS_VHhadB.png");


  TCanvas * c1 = new TCanvas("c1", "c1", 800, 600);
  TFile *_file0 = TFile::Open("OptimizationSideband_081013_MC/root/mass_SSttHhad.root");
  DAT->Rebin(10);
  BKG->Rebin(10);
  ERR->Rebin(10);
  DAT->Draw("E");
  BKG->Draw("same histo");
  ERR->Draw("E2same");
  c1->SaveAs("sigmaMwvoM_SS_ttHhad.png");

  //sigmaMrvoM
  TCanvas * c1 = new TCanvas("c1", "c1", 800, 600);
  TFile *_file0 = TFile::Open("OptimizationSideband_081013_MC/root/mass_CSVHlep1.root");
  DAT->Rebin(10);
  BKG->Rebin(10);
  ERR->Rebin(10);
  DAT->Draw("E");
  BKG->Draw("same histo");
  ERR->Draw("E2same");
  c1->SaveAs("sigmaMrvoM_CS_VHlep1.png");


  TCanvas * c1 = new TCanvas("c1", "c1", 800, 600);
  TFile *_file0 = TFile::Open("OptimizationSideband_081013_MC/root/mass_CSVHlep2.root");
  DAT->Rebin(10);
  BKG->Rebin(10);
  ERR->Rebin(10);
  DAT->Draw("E");
  BKG->Draw("same histo");
  ERR->Draw("E2same");
  c1->SaveAs("sigmaMrvoM_CS_VHlep2.png");


  TCanvas * c1 = new TCanvas("c1", "c1", 800, 600);
  TFile *_file0 = TFile::Open("OptimizationSideband_081013_MC/root/mass_CSVHmetT.root");
  DAT->Rebin(10);
  BKG->Rebin(10);
  ERR->Rebin(10);
  DAT->Draw("E");
  BKG->Draw("same histo");
  ERR->Draw("E2same");
  c1->SaveAs("sigmaMrvoM_CS_VHmetT.png");


  TCanvas * c1 = new TCanvas("c1", "c1", 800, 600);
  TFile *_file0 = TFile::Open("OptimizationSideband_081013_MC/root/mass_CSVHhad0.root");
  DAT->Rebin(10);
  BKG->Rebin(10);
  ERR->Rebin(10);
  DAT->Draw("E");
  BKG->Draw("same histo");
  ERR->Draw("E2same");
  c1->SaveAs("sigmaMrvoM_CS_VHhad0.png");


  TCanvas * c1 = new TCanvas("c1", "c1", 800, 600);
  TFile *_file0 = TFile::Open("OptimizationSideband_081013_MC/root/mass_CSVHhadB.root");
  DAT->Rebin(10);
  BKG->Rebin(10);
  ERR->Rebin(10);
  DAT->Draw("E");
  BKG->Draw("same histo");
  ERR->Draw("E2same");
  c1->SaveAs("sigmaMrvoM_CS_VHhadB.png");


  TCanvas * c1 = new TCanvas("c1", "c1", 800, 600);
  TFile *_file0 = TFile::Open("OptimizationSideband_081013_MC/root/mass_CSttHhad.root");
  DAT->Rebin(10);
  BKG->Rebin(10);
  ERR->Rebin(10);
  DAT->Draw("E");
  BKG->Draw("same histo");
  ERR->Draw("E2same");
  c1->SaveAs("sigmaMrvoM_CS_ttHhad.png");


  TCanvas * c1 = new TCanvas("c1", "c1", 800, 600);
  TFile *_file0 = TFile::Open("OptimizationSideband_081013_MC/root/mass_SSVHlep1.root");
  DAT->Rebin(10);
  BKG->Rebin(10);
  ERR->Rebin(10);
  DAT->Draw("E");
  BKG->Draw("same histo");
  ERR->Draw("E2same");
  c1->SaveAs("sigmaMrvoM_SS_VHlep1.png");


  TCanvas * c1 = new TCanvas("c1", "c1", 800, 600);
  TFile *_file0 = TFile::Open("OptimizationSideband_081013_MC/root/mass_SSVHlep2.root");
  DAT->Rebin(10);
  BKG->Rebin(10);
  ERR->Rebin(10);
  DAT->Draw("E");
  BKG->Draw("same histo");
  ERR->Draw("E2same");
  c1->SaveAs("sigmaMrvoM_SS_VHlep2.png");


  TCanvas * c1 = new TCanvas("c1", "c1", 800, 600);
  TFile *_file0 = TFile::Open("OptimizationSideband_081013_MC/root/mass_SSVHmetT.root");
  DAT->Rebin(10);
  BKG->Rebin(10);
  ERR->Rebin(10);
  DAT->Draw("E");
  BKG->Draw("same histo");
  ERR->Draw("E2same");
  c1->SaveAs("sigmaMrvoM_SS_VHmetT.png");


  TCanvas * c1 = new TCanvas("c1", "c1", 800, 600);
  TFile *_file0 = TFile::Open("OptimizationSideband_081013_MC/root/mass_SSVHhad0.root");
  DAT->Rebin(10);
  BKG->Rebin(10);
  ERR->Rebin(10);
  DAT->Draw("E");
  BKG->Draw("same histo");
  ERR->Draw("E2same");
  c1->SaveAs("sigmaMrvoM_SS_VHhad0.png");


  TCanvas * c1 = new TCanvas("c1", "c1", 800, 600);
  TFile *_file0 = TFile::Open("OptimizationSideband_081013_MC/root/mass_SSVHhadB.root");
  DAT->Rebin(10);
  BKG->Rebin(10);
  ERR->Rebin(10);
  DAT->Draw("E");
  BKG->Draw("same histo");
  ERR->Draw("E2same");
  c1->SaveAs("sigmaMrvoM_SS_VHhadB.png");


  TCanvas * c1 = new TCanvas("c1", "c1", 800, 600);
  TFile *_file0 = TFile::Open("OptimizationSideband_081013_MC/root/mass_SSttHhad.root");
  DAT->Rebin(10);
  BKG->Rebin(10);
  ERR->Rebin(10);
  DAT->Draw("E");
  BKG->Draw("same histo");
  ERR->Draw("E2same");
  c1->SaveAs("sigmaMrvoM_SS_ttHhad.png");

  //vtxprob
  TCanvas * c1 = new TCanvas("c1", "c1", 800, 600);
  TFile *_file0 = TFile::Open("OptimizationSideband_081013_MC/root/mass_CSVHlep1.root");
  DAT->Rebin(10);
  BKG->Rebin(10);
  ERR->Rebin(10);
  DAT->Draw("E");
  BKG->Draw("same histo");
  ERR->Draw("E2same");
  c1->SaveAs("vtxprob_CS_VHlep1.png");


  TCanvas * c1 = new TCanvas("c1", "c1", 800, 600);
  TFile *_file0 = TFile::Open("OptimizationSideband_081013_MC/root/mass_CSVHlep2.root");
  DAT->Rebin(10);
  BKG->Rebin(10);
  ERR->Rebin(10);
  DAT->Draw("E");
  BKG->Draw("same histo");
  ERR->Draw("E2same");
  c1->SaveAs("vtxprob_CS_VHlep2.png");


  TCanvas * c1 = new TCanvas("c1", "c1", 800, 600);
  TFile *_file0 = TFile::Open("OptimizationSideband_081013_MC/root/mass_CSVHmetT.root");
  DAT->Rebin(10);
  BKG->Rebin(10);
  ERR->Rebin(10);
  DAT->Draw("E");
  BKG->Draw("same histo");
  ERR->Draw("E2same");
  c1->SaveAs("vtxprob_CS_VHmetT.png");


  TCanvas * c1 = new TCanvas("c1", "c1", 800, 600);
  TFile *_file0 = TFile::Open("OptimizationSideband_081013_MC/root/mass_CSVHhad0.root");
  DAT->Rebin(10);
  BKG->Rebin(10);
  ERR->Rebin(10);
  DAT->Draw("E");
  BKG->Draw("same histo");
  ERR->Draw("E2same");
  c1->SaveAs("vtxprob_CS_VHhad0.png");


  TCanvas * c1 = new TCanvas("c1", "c1", 800, 600);
  TFile *_file0 = TFile::Open("OptimizationSideband_081013_MC/root/mass_CSVHhadB.root");
  DAT->Rebin(10);
  BKG->Rebin(10);
  ERR->Rebin(10);
  DAT->Draw("E");
  BKG->Draw("same histo");
  ERR->Draw("E2same");
  c1->SaveAs("vtxprob_CS_VHhadB.png");


  TCanvas * c1 = new TCanvas("c1", "c1", 800, 600);
  TFile *_file0 = TFile::Open("OptimizationSideband_081013_MC/root/mass_CSttHhad.root");
  DAT->Rebin(10);
  BKG->Rebin(10);
  ERR->Rebin(10);
  DAT->Draw("E");
  BKG->Draw("same histo");
  ERR->Draw("E2same");
  c1->SaveAs("vtxprob_CS_ttHhad.png");


  TCanvas * c1 = new TCanvas("c1", "c1", 800, 600);
  TFile *_file0 = TFile::Open("OptimizationSideband_081013_MC/root/mass_SSVHlep1.root");
  DAT->Rebin(10);
  BKG->Rebin(10);
  ERR->Rebin(10);
  DAT->Draw("E");
  BKG->Draw("same histo");
  ERR->Draw("E2same");
  c1->SaveAs("vtxprob_SS_VHlep1.png");


  TCanvas * c1 = new TCanvas("c1", "c1", 800, 600);
  TFile *_file0 = TFile::Open("OptimizationSideband_081013_MC/root/mass_SSVHlep2.root");
  DAT->Rebin(10);
  BKG->Rebin(10);
  ERR->Rebin(10);
  DAT->Draw("E");
  BKG->Draw("same histo");
  ERR->Draw("E2same");
  c1->SaveAs("vtxprob_SS_VHlep2.png");


  TCanvas * c1 = new TCanvas("c1", "c1", 800, 600);
  TFile *_file0 = TFile::Open("OptimizationSideband_081013_MC/root/mass_SSVHmetT.root");
  DAT->Rebin(10);
  BKG->Rebin(10);
  ERR->Rebin(10);
  DAT->Draw("E");
  BKG->Draw("same histo");
  ERR->Draw("E2same");
  c1->SaveAs("vtxprob_SS_VHmetT.png");


  TCanvas * c1 = new TCanvas("c1", "c1", 800, 600);
  TFile *_file0 = TFile::Open("OptimizationSideband_081013_MC/root/mass_SSVHhad0.root");
  DAT->Rebin(10);
  BKG->Rebin(10);
  ERR->Rebin(10);
  DAT->Draw("E");
  BKG->Draw("same histo");
  ERR->Draw("E2same");
  c1->SaveAs("vtxprob_SS_VHhad0.png");


  TCanvas * c1 = new TCanvas("c1", "c1", 800, 600);
  TFile *_file0 = TFile::Open("OptimizationSideband_081013_MC/root/mass_SSVHhadB.root");
  DAT->Rebin(10);
  BKG->Rebin(10);
  ERR->Rebin(10);
  DAT->Draw("E");
  BKG->Draw("same histo");
  ERR->Draw("E2same");
  c1->SaveAs("vtxprob_SS_VHhadB.png");


  TCanvas * c1 = new TCanvas("c1", "c1", 800, 600);
  TFile *_file0 = TFile::Open("OptimizationSideband_081013_MC/root/mass_SSttHhad.root");
  DAT->Rebin(10);
  BKG->Rebin(10);
  ERR->Rebin(10);
  DAT->Draw("E");
  BKG->Draw("same histo");
  ERR->Draw("E2same");
  c1->SaveAs("vtxprob_SS_ttHhad.png");

  //phoid_mvaout_lead
  TCanvas * c1 = new TCanvas("c1", "c1", 800, 600);
  TFile *_file0 = TFile::Open("OptimizationSideband_081013_MC/root/mass_CSVHlep1.root");
  DAT->Rebin(10);
  BKG->Rebin(10);
  ERR->Rebin(10);
  DAT->Draw("E");
  BKG->Draw("same histo");
  ERR->Draw("E2same");
  c1->SaveAs("phoid_mvaout_lead_CS_VHlep1.png");


  TCanvas * c1 = new TCanvas("c1", "c1", 800, 600);
  TFile *_file0 = TFile::Open("OptimizationSideband_081013_MC/root/mass_CSVHlep2.root");
  DAT->Rebin(10);
  BKG->Rebin(10);
  ERR->Rebin(10);
  DAT->Draw("E");
  BKG->Draw("same histo");
  ERR->Draw("E2same");
  c1->SaveAs("phoid_mvaout_lead_CS_VHlep2.png");


  TCanvas * c1 = new TCanvas("c1", "c1", 800, 600);
  TFile *_file0 = TFile::Open("OptimizationSideband_081013_MC/root/mass_CSVHmetT.root");
  DAT->Rebin(10);
  BKG->Rebin(10);
  ERR->Rebin(10);
  DAT->Draw("E");
  BKG->Draw("same histo");
  ERR->Draw("E2same");
  c1->SaveAs("phoid_mvaout_lead_CS_VHmetT.png");


  TCanvas * c1 = new TCanvas("c1", "c1", 800, 600);
  TFile *_file0 = TFile::Open("OptimizationSideband_081013_MC/root/mass_CSVHhad0.root");
  DAT->Rebin(10);
  BKG->Rebin(10);
  ERR->Rebin(10);
  DAT->Draw("E");
  BKG->Draw("same histo");
  ERR->Draw("E2same");
  c1->SaveAs("phoid_mvaout_lead_CS_VHhad0.png");


  TCanvas * c1 = new TCanvas("c1", "c1", 800, 600);
  TFile *_file0 = TFile::Open("OptimizationSideband_081013_MC/root/mass_CSVHhadB.root");
  DAT->Rebin(10);
  BKG->Rebin(10);
  ERR->Rebin(10);
  DAT->Draw("E");
  BKG->Draw("same histo");
  ERR->Draw("E2same");
  c1->SaveAs("phoid_mvaout_lead_CS_VHhadB.png");


  TCanvas * c1 = new TCanvas("c1", "c1", 800, 600);
  TFile *_file0 = TFile::Open("OptimizationSideband_081013_MC/root/mass_CSttHhad.root");
  DAT->Rebin(10);
  BKG->Rebin(10);
  ERR->Rebin(10);
  DAT->Draw("E");
  BKG->Draw("same histo");
  ERR->Draw("E2same");
  c1->SaveAs("phoid_mvaout_lead_CS_ttHhad.png");


  TCanvas * c1 = new TCanvas("c1", "c1", 800, 600);
  TFile *_file0 = TFile::Open("OptimizationSideband_081013_MC/root/mass_SSVHlep1.root");
  DAT->Rebin(10);
  BKG->Rebin(10);
  ERR->Rebin(10);
  DAT->Draw("E");
  BKG->Draw("same histo");
  ERR->Draw("E2same");
  c1->SaveAs("phoid_mvaout_lead_SS_VHlep1.png");


  TCanvas * c1 = new TCanvas("c1", "c1", 800, 600);
  TFile *_file0 = TFile::Open("OptimizationSideband_081013_MC/root/mass_SSVHlep2.root");
  DAT->Rebin(10);
  BKG->Rebin(10);
  ERR->Rebin(10);
  DAT->Draw("E");
  BKG->Draw("same histo");
  ERR->Draw("E2same");
  c1->SaveAs("phoid_mvaout_lead_SS_VHlep2.png");


  TCanvas * c1 = new TCanvas("c1", "c1", 800, 600);
  TFile *_file0 = TFile::Open("OptimizationSideband_081013_MC/root/mass_SSVHmetT.root");
  DAT->Rebin(10);
  BKG->Rebin(10);
  ERR->Rebin(10);
  DAT->Draw("E");
  BKG->Draw("same histo");
  ERR->Draw("E2same");
  c1->SaveAs("phoid_mvaout_lead_SS_VHmetT.png");


  TCanvas * c1 = new TCanvas("c1", "c1", 800, 600);
  TFile *_file0 = TFile::Open("OptimizationSideband_081013_MC/root/mass_SSVHhad0.root");
  DAT->Rebin(10);
  BKG->Rebin(10);
  ERR->Rebin(10);
  DAT->Draw("E");
  BKG->Draw("same histo");
  ERR->Draw("E2same");
  c1->SaveAs("phoid_mvaout_lead_SS_VHhad0.png");


  TCanvas * c1 = new TCanvas("c1", "c1", 800, 600);
  TFile *_file0 = TFile::Open("OptimizationSideband_081013_MC/root/mass_SSVHhadB.root");
  DAT->Rebin(10);
  BKG->Rebin(10);
  ERR->Rebin(10);
  DAT->Draw("E");
  BKG->Draw("same histo");
  ERR->Draw("E2same");
  c1->SaveAs("phoid_mvaout_lead_SS_VHhadB.png");


  TCanvas * c1 = new TCanvas("c1", "c1", 800, 600);
  TFile *_file0 = TFile::Open("OptimizationSideband_081013_MC/root/mass_SSttHhad.root");
  DAT->Rebin(10);
  BKG->Rebin(10);
  ERR->Rebin(10);
  DAT->Draw("E");
  BKG->Draw("same histo");
  ERR->Draw("E2same");
  c1->SaveAs("phoid_mvaout_lead_SS_ttHhad.png");

  //phoid_mvaout_sublead
  TCanvas * c1 = new TCanvas("c1", "c1", 800, 600);
  TFile *_file0 = TFile::Open("OptimizationSideband_081013_MC/root/mass_CSVHlep1.root");
  DAT->Rebin(10);
  BKG->Rebin(10);
  ERR->Rebin(10);
  DAT->Draw("E");
  BKG->Draw("same histo");
  ERR->Draw("E2same");
  c1->SaveAs("phoid_mvaout_sublead_CS_VHlep1.png");


  TCanvas * c1 = new TCanvas("c1", "c1", 800, 600);
  TFile *_file0 = TFile::Open("OptimizationSideband_081013_MC/root/mass_CSVHlep2.root");
  DAT->Rebin(10);
  BKG->Rebin(10);
  ERR->Rebin(10);
  DAT->Draw("E");
  BKG->Draw("same histo");
  ERR->Draw("E2same");
  c1->SaveAs("phoid_mvaout_sublead_CS_VHlep2.png");


  TCanvas * c1 = new TCanvas("c1", "c1", 800, 600);
  TFile *_file0 = TFile::Open("OptimizationSideband_081013_MC/root/mass_CSVHmetT.root");
  DAT->Rebin(10);
  BKG->Rebin(10);
  ERR->Rebin(10);
  DAT->Draw("E");
  BKG->Draw("same histo");
  ERR->Draw("E2same");
  c1->SaveAs("phoid_mvaout_sublead_CS_VHmetT.png");


  TCanvas * c1 = new TCanvas("c1", "c1", 800, 600);
  TFile *_file0 = TFile::Open("OptimizationSideband_081013_MC/root/mass_CSVHhad0.root");
  DAT->Rebin(10);
  BKG->Rebin(10);
  ERR->Rebin(10);
  DAT->Draw("E");
  BKG->Draw("same histo");
  ERR->Draw("E2same");
  c1->SaveAs("phoid_mvaout_sublead_CS_VHhad0.png");


  TCanvas * c1 = new TCanvas("c1", "c1", 800, 600);
  TFile *_file0 = TFile::Open("OptimizationSideband_081013_MC/root/mass_CSVHhadB.root");
  DAT->Rebin(10);
  BKG->Rebin(10);
  ERR->Rebin(10);
  DAT->Draw("E");
  BKG->Draw("same histo");
  ERR->Draw("E2same");
  c1->SaveAs("phoid_mvaout_sublead_CS_VHhadB.png");


  TCanvas * c1 = new TCanvas("c1", "c1", 800, 600);
  TFile *_file0 = TFile::Open("OptimizationSideband_081013_MC/root/mass_CSttHhad.root");
  DAT->Rebin(10);
  BKG->Rebin(10);
  ERR->Rebin(10);
  DAT->Draw("E");
  BKG->Draw("same histo");
  ERR->Draw("E2same");
  c1->SaveAs("phoid_mvaout_sublead_CS_ttHhad.png");


  TCanvas * c1 = new TCanvas("c1", "c1", 800, 600);
  TFile *_file0 = TFile::Open("OptimizationSideband_081013_MC/root/mass_SSVHlep1.root");
  DAT->Rebin(10);
  BKG->Rebin(10);
  ERR->Rebin(10);
  DAT->Draw("E");
  BKG->Draw("same histo");
  ERR->Draw("E2same");
  c1->SaveAs("phoid_mvaout_sublead_SS_VHlep1.png");


  TCanvas * c1 = new TCanvas("c1", "c1", 800, 600);
  TFile *_file0 = TFile::Open("OptimizationSideband_081013_MC/root/mass_SSVHlep2.root");
  DAT->Rebin(10);
  BKG->Rebin(10);
  ERR->Rebin(10);
  DAT->Draw("E");
  BKG->Draw("same histo");
  ERR->Draw("E2same");
  c1->SaveAs("phoid_mvaout_sublead_SS_VHlep2.png");


  TCanvas * c1 = new TCanvas("c1", "c1", 800, 600);
  TFile *_file0 = TFile::Open("OptimizationSideband_081013_MC/root/mass_SSVHmetT.root");
  DAT->Rebin(10);
  BKG->Rebin(10);
  ERR->Rebin(10);
  DAT->Draw("E");
  BKG->Draw("same histo");
  ERR->Draw("E2same");
  c1->SaveAs("phoid_mvaout_sublead_SS_VHmetT.png");


  TCanvas * c1 = new TCanvas("c1", "c1", 800, 600);
  TFile *_file0 = TFile::Open("OptimizationSideband_081013_MC/root/mass_SSVHhad0.root");
  DAT->Rebin(10);
  BKG->Rebin(10);
  ERR->Rebin(10);
  DAT->Draw("E");
  BKG->Draw("same histo");
  ERR->Draw("E2same");
  c1->SaveAs("phoid_mvaout_sublead_SS_VHhad0.png");


  TCanvas * c1 = new TCanvas("c1", "c1", 800, 600);
  TFile *_file0 = TFile::Open("OptimizationSideband_081013_MC/root/mass_SSVHhadB.root");
  DAT->Rebin(10);
  BKG->Rebin(10);
  ERR->Rebin(10);
  DAT->Draw("E");
  BKG->Draw("same histo");
  ERR->Draw("E2same");
  c1->SaveAs("phoid_mvaout_sublead_SS_VHhadB.png");


  TCanvas * c1 = new TCanvas("c1", "c1", 800, 600);
  TFile *_file0 = TFile::Open("OptimizationSideband_081013_MC/root/mass_SSttHhad.root");
  DAT->Rebin(10);
  BKG->Rebin(10);
  ERR->Rebin(10);
  DAT->Draw("E");
  BKG->Draw("same histo");
  ERR->Draw("E2same");
  c1->SaveAs("phoid_mvaout_sublead_SS_ttHhad.png");




}
