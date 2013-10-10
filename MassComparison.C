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
  TFile *_file0 = TFile::Open("v5_2/root/mass_CSVHlep1.root");
  DAT->Rebin(10);
  BKG->Rebin(10);
  ERR->Rebin(10);
  DAT->Draw("E");
  BKG->Draw("same histo");
  ERR->Draw("E2same");
  c1->SaveAs("mass_CS_VHlep1.png");

  //photonPT_leadOverM
  TCanvas * c1 = new TCanvas("c1", "c1", 800, 600);
  DAT_photonPT_leadOverM->Rebin(10);
  BKG_photonPT_leadOverM->Rebin(10);
  ERR_photonPT_leadOverM->Rebin(10);
  DAT_photonPT_leadOverM->Draw("E");
  BKG_photonPT_leadOverM->Draw("same histo");
  ERR_photonPT_leadOverM->Draw("E2same");
  c1->SaveAs("photonPT_leadOverM_CS_VHlep1.png");

  //photonPT_subleadOverM
  TCanvas * c1 = new TCanvas("c1", "c1", 800, 600);
  DAT_photonPT_subleadOverM->Rebin(10);
  BKG_photonPT_subleadOverM->Rebin(10);
  ERR_photonPT_subleadOverM->Rebin(10);
  DAT_photonPT_subleadOverM->Draw("E");
  BKG_photonPT_subleadOverM->Draw("same histo");
  ERR_photonPT_subleadOverM->Draw("E2same");
  c1->SaveAs("photonPT_subleadOverM_CS_VHlep1.png");

  //photonETA_lead
  TCanvas * c1 = new TCanvas("c1", "c1", 800, 600);
  DAT_photonETA_lead->Rebin(10);
  BKG_photonETA_lead->Rebin(10);
  ERR_photonETA_lead->Rebin(10);
  DAT_photonETA_lead->Draw("E");
  BKG_photonETA_lead->Draw("same histo");
  ERR_photonETA_lead->Draw("E2same");
  c1->SaveAs("photonETA_lead_CS_VHlep1.png");

  //photonETA_sublead
  TCanvas * c1 = new TCanvas("c1", "c1", 800, 600);
  DAT_photonETA_sublead->Rebin(10);
  BKG_photonETA_sublead->Rebin(10);
  ERR_photonETA_sublead->Rebin(10);
  DAT_photonETA_sublead->Draw("E");
  BKG_photonETA_sublead->Draw("same histo");
  ERR_photonETA_sublead->Draw("E2same");
  c1->SaveAs("photonETA_sublead_CS_VHlep1.png");

  //cosdPhiGG
  TCanvas * c1 = new TCanvas("c1", "c1", 800, 600);
  DAT_cosdPhiGG->Rebin(10);
  BKG_cosdPhiGG->Rebin(10);
  ERR_cosdPhiGG->Rebin(10);
  DAT_cosdPhiGG->Draw("E");
  BKG_cosdPhiGG->Draw("same histo");
  ERR_cosdPhiGG->Draw("E2same");
  c1->SaveAs("cosdPhiGG_CS_VHlep1.png");

  //sigmaMwvoM
  TCanvas * c1 = new TCanvas("c1", "c1", 800, 600);
  DAT_sigmaMwvoM->Rebin(10);
  BKG_sigmaMwvoM->Rebin(10);
  ERR_sigmaMwvoM->Rebin(10);
  DAT_sigmaMwvoM->Draw("E");
  BKG_sigmaMwvoM->Draw("same histo");
  ERR_sigmaMwvoM->Draw("E2same");
  c1->SaveAs("sigmaMwvoM_CS_VHlep1.png");

  //sigmaMrvoM
  TCanvas * c1 = new TCanvas("c1", "c1", 800, 600);
  DAT_sigmaMrvoM->Rebin(10);
  BKG_sigmaMrvoM->Rebin(10);
  ERR_sigmaMrvoM->Rebin(10);
  DAT_sigmaMrvoM->Draw("E");
  BKG_sigmaMrvoM->Draw("same histo");
  ERR_sigmaMrvoM->Draw("E2same");
  c1->SaveAs("sigmaMrvoM_CS_VHlep1.png");

  //vtxprob
  TCanvas * c1 = new TCanvas("c1", "c1", 800, 600);
  DAT_vtxprob->Rebin(10);
  BKG_vtxprob->Rebin(10);
  ERR_vtxprob->Rebin(10);
  DAT_vtxprob->Draw("E");
  BKG_vtxprob->Draw("same histo");
  ERR_vtxprob->Draw("E2same");
  c1->SaveAs("vtxprob_CS_VHlep1.png");

  //phoid_mvaout_lead
  TCanvas * c1 = new TCanvas("c1", "c1", 800, 600);
  DAT_phoid_mvaout_lead->Rebin(10);
  BKG_phoid_mvaout_lead->Rebin(10);
  ERR_phoid_mvaout_lead->Rebin(10);
  DAT_phoid_mvaout_lead->Draw("E");
  BKG_phoid_mvaout_lead->Draw("same histo");
  ERR_phoid_mvaout_lead->Draw("E2same");
  c1->SaveAs("phoid_mvaout_lead_CS_VHlep1.png");

  //phoid_mvaout_sublead
  TCanvas * c1 = new TCanvas("c1", "c1", 800, 600);
  DAT_phoid_mvaout_sublead->Rebin(10);
  BKG_phoid_mvaout_sublead->Rebin(10);
  ERR_phoid_mvaout_sublead->Rebin(10);
  DAT_phoid_mvaout_sublead->Draw("E");
  BKG_phoid_mvaout_sublead->Draw("same histo");
  ERR_phoid_mvaout_sublead->Draw("E2same");
  c1->SaveAs("phoid_mvaout_sublead_CS_VHlep1.png");


  TCanvas * c1 = new TCanvas("c1", "c1", 800, 600);
  TFile *_file0 = TFile::Open("v5_2/root/mass_CSVHlep2.root");
  DAT->Rebin(10);
  BKG->Rebin(10);
  ERR->Rebin(10);
  DAT->Draw("E");
  BKG->Draw("same histo");
  ERR->Draw("E2same");
  c1->SaveAs("mass_CS_VHlep2.png");

  TCanvas * c1 = new TCanvas("c1", "c1", 800, 600);
  DAT_photonPT_leadOverM->Rebin(10);
  BKG_photonPT_leadOverM->Rebin(10);
  ERR_photonPT_leadOverM->Rebin(10);
  DAT_photonPT_leadOverM->Draw("E");
  BKG_photonPT_leadOverM->Draw("same histo");
  ERR_photonPT_leadOverM->Draw("E2same");
  c1->SaveAs("photonPT_leadOverM_CS_VHlep2.png");

  TCanvas * c1 = new TCanvas("c1", "c1", 800, 600);
  DAT_photonPT_subleadOverM->Rebin(10);
  BKG_photonPT_subleadOverM->Rebin(10);
  ERR_photonPT_subleadOverM->Rebin(10);
  DAT_photonPT_subleadOverM->Draw("E");
  BKG_photonPT_subleadOverM->Draw("same histo");
  ERR_photonPT_subleadOverM->Draw("E2same");
  c1->SaveAs("photonPT_subleadOverM_CS_VHlep2.png");

  TCanvas * c1 = new TCanvas("c1", "c1", 800, 600);
  DAT_photonETA_lead->Rebin(10);
  BKG_photonETA_lead->Rebin(10);
  ERR_photonETA_lead->Rebin(10);
  DAT_photonETA_lead->Draw("E");
  BKG_photonETA_lead->Draw("same histo");
  ERR_photonETA_lead->Draw("E2same");
  c1->SaveAs("photonETA_lead_CS_VHlep2.png");

  TCanvas * c1 = new TCanvas("c1", "c1", 800, 600);
  DAT_photonETA_sublead->Rebin(10);
  BKG_photonETA_sublead->Rebin(10);
  ERR_photonETA_sublead->Rebin(10);
  DAT_photonETA_sublead->Draw("E");
  BKG_photonETA_sublead->Draw("same histo");
  ERR_photonETA_sublead->Draw("E2same");
  c1->SaveAs("photonETA_sublead_CS_VHlep2.png");

  TCanvas * c1 = new TCanvas("c1", "c1", 800, 600);
  DAT_cosdPhiGG->Rebin(10);
  BKG_cosdPhiGG->Rebin(10);
  ERR_cosdPhiGG->Rebin(10);
  DAT_cosdPhiGG->Draw("E");
  BKG_cosdPhiGG->Draw("same histo");
  ERR_cosdPhiGG->Draw("E2same");
  c1->SaveAs("cosdPhiGG_CS_VHlep2.png");

  TCanvas * c1 = new TCanvas("c1", "c1", 800, 600);
  DAT_sigmaMwvoM->Rebin(10);
  BKG_sigmaMwvoM->Rebin(10);
  ERR_sigmaMwvoM->Rebin(10);
  DAT_sigmaMwvoM->Draw("E");
  BKG_sigmaMwvoM->Draw("same histo");
  ERR_sigmaMwvoM->Draw("E2same");
  c1->SaveAs("sigmaMwvoM_CS_VHlep2.png");

  TCanvas * c1 = new TCanvas("c1", "c1", 800, 600);
  DAT_sigmaMrvoM->Rebin(10);
  BKG_sigmaMrvoM->Rebin(10);
  ERR_sigmaMrvoM->Rebin(10);
  DAT_sigmaMrvoM->Draw("E");
  BKG_sigmaMrvoM->Draw("same histo");
  ERR_sigmaMrvoM->Draw("E2same");
  c1->SaveAs("sigmaMrvoM_CS_VHlep2.png");

  TCanvas * c1 = new TCanvas("c1", "c1", 800, 600);
  DAT_vtxprob->Rebin(10);
  BKG_vtxprob->Rebin(10);
  ERR_vtxprob->Rebin(10);
  DAT_vtxprob->Draw("E");
  BKG_vtxprob->Draw("same histo");
  ERR_vtxprob->Draw("E2same");
  c1->SaveAs("vtxprob_CS_VHlep2.png");

  TCanvas * c1 = new TCanvas("c1", "c1", 800, 600);
  DAT_phoid_mvaout_lead->Rebin(10);
  BKG_phoid_mvaout_lead->Rebin(10);
  ERR_phoid_mvaout_lead->Rebin(10);
  DAT_phoid_mvaout_lead->Draw("E");
  BKG_phoid_mvaout_lead->Draw("same histo");
  ERR_phoid_mvaout_lead->Draw("E2same");
  c1->SaveAs("phoid_mvaout_lead_CS_VHlep2.png");

  TCanvas * c1 = new TCanvas("c1", "c1", 800, 600);
  DAT_phoid_mvaout_sublead->Rebin(10);
  BKG_phoid_mvaout_sublead->Rebin(10);
  ERR_phoid_mvaout_sublead->Rebin(10);
  DAT_phoid_mvaout_sublead->Draw("E");
  BKG_phoid_mvaout_sublead->Draw("same histo");
  ERR_phoid_mvaout_sublead->Draw("E2same");
  c1->SaveAs("phoid_mvaout_sublead_CS_VHlep2.png");



  TCanvas * c1 = new TCanvas("c1", "c1", 800, 600);
  TFile *_file0 = TFile::Open("v5_2/root/mass_CSVHmetT.root");
  DAT->Rebin(10);
  BKG->Rebin(10);
  ERR->Rebin(10);
  DAT->Draw("E");
  BKG->Draw("same histo");
  ERR->Draw("E2same");
  c1->SaveAs("mass_CS_VHmetT.png");

  TCanvas * c1 = new TCanvas("c1", "c1", 800, 600);
  DAT_photonPT_leadOverM->Rebin(10);
  BKG_photonPT_leadOverM->Rebin(10);
  ERR_photonPT_leadOverM->Rebin(10);
  DAT_photonPT_leadOverM->Draw("E");
  BKG_photonPT_leadOverM->Draw("same histo");
  ERR_photonPT_leadOverM->Draw("E2same");
  c1->SaveAs("photonPT_leadOverM_CS_VHmetT.png");

  TCanvas * c1 = new TCanvas("c1", "c1", 800, 600);
  DAT_photonPT_subleadOverM->Rebin(10);
  BKG_photonPT_subleadOverM->Rebin(10);
  ERR_photonPT_subleadOverM->Rebin(10);
  DAT_photonPT_subleadOverM->Draw("E");
  BKG_photonPT_subleadOverM->Draw("same histo");
  ERR_photonPT_subleadOverM->Draw("E2same");
  c1->SaveAs("photonPT_subleadOverM_CS_VHmetT.png");

  TCanvas * c1 = new TCanvas("c1", "c1", 800, 600);
  DAT_photonETA_lead->Rebin(10);
  BKG_photonETA_lead->Rebin(10);
  ERR_photonETA_lead->Rebin(10);
  DAT_photonETA_lead->Draw("E");
  BKG_photonETA_lead->Draw("same histo");
  ERR_photonETA_lead->Draw("E2same");
  c1->SaveAs("photonETA_lead_CS_VHmetT.png");

  TCanvas * c1 = new TCanvas("c1", "c1", 800, 600);
  DAT_photonETA_sublead->Rebin(10);
  BKG_photonETA_sublead->Rebin(10);
  ERR_photonETA_sublead->Rebin(10);
  DAT_photonETA_sublead->Draw("E");
  BKG_photonETA_sublead->Draw("same histo");
  ERR_photonETA_sublead->Draw("E2same");
  c1->SaveAs("photonETA_sublead_CS_VHmetT.png");

  TCanvas * c1 = new TCanvas("c1", "c1", 800, 600);
  DAT_cosdPhiGG->Rebin(10);
  BKG_cosdPhiGG->Rebin(10);
  ERR_cosdPhiGG->Rebin(10);
  DAT_cosdPhiGG->Draw("E");
  BKG_cosdPhiGG->Draw("same histo");
  ERR_cosdPhiGG->Draw("E2same");
  c1->SaveAs("cosdPhiGG_CS_VHmetT.png");

  TCanvas * c1 = new TCanvas("c1", "c1", 800, 600);
  DAT_sigmaMwvoM->Rebin(10);
  BKG_sigmaMwvoM->Rebin(10);
  ERR_sigmaMwvoM->Rebin(10);
  DAT_sigmaMwvoM->Draw("E");
  BKG_sigmaMwvoM->Draw("same histo");
  ERR_sigmaMwvoM->Draw("E2same");
  c1->SaveAs("sigmaMwvoM_CS_VHmetT.png");

  TCanvas * c1 = new TCanvas("c1", "c1", 800, 600);
  DAT_sigmaMrvoM->Rebin(10);
  BKG_sigmaMrvoM->Rebin(10);
  ERR_sigmaMrvoM->Rebin(10);
  DAT_sigmaMrvoM->Draw("E");
  BKG_sigmaMrvoM->Draw("same histo");
  ERR_sigmaMrvoM->Draw("E2same");
  c1->SaveAs("sigmaMrvoM_CS_VHmetT.png");

  TCanvas * c1 = new TCanvas("c1", "c1", 800, 600);
  DAT_vtxprob->Rebin(10);
  BKG_vtxprob->Rebin(10);
  ERR_vtxprob->Rebin(10);
  DAT_vtxprob->Draw("E");
  BKG_vtxprob->Draw("same histo");
  ERR_vtxprob->Draw("E2same");
  c1->SaveAs("vtxprob_CS_VHmetT.png");

  TCanvas * c1 = new TCanvas("c1", "c1", 800, 600);
  DAT_phoid_mvaout_lead->Rebin(10);
  BKG_phoid_mvaout_lead->Rebin(10);
  ERR_phoid_mvaout_lead->Rebin(10);
  DAT_phoid_mvaout_lead->Draw("E");
  BKG_phoid_mvaout_lead->Draw("same histo");
  ERR_phoid_mvaout_lead->Draw("E2same");
  c1->SaveAs("phoid_mvaout_lead_CS_VHmetT.png");

  TCanvas * c1 = new TCanvas("c1", "c1", 800, 600);
  DAT_phoid_mvaout_sublead->Rebin(10);
  BKG_phoid_mvaout_sublead->Rebin(10);
  ERR_phoid_mvaout_sublead->Rebin(10);
  DAT_phoid_mvaout_sublead->Draw("E");
  BKG_phoid_mvaout_sublead->Draw("same histo");
  ERR_phoid_mvaout_sublead->Draw("E2same");
  c1->SaveAs("phoid_mvaout_sublead_CS_VHmetT.png");


  TCanvas * c1 = new TCanvas("c1", "c1", 800, 600);
  TFile *_file0 = TFile::Open("v5_2/root/mass_CSVHhad0.root");
  DAT->Rebin(10);
  BKG->Rebin(10);
  ERR->Rebin(10);
  DAT->Draw("E");
  BKG->Draw("same histo");
  ERR->Draw("E2same");
  c1->SaveAs("mass_CS_VHhad0.png");

  TCanvas * c1 = new TCanvas("c1", "c1", 800, 600);
  DAT_photonPT_leadOverM->Rebin(10);
  BKG_photonPT_leadOverM->Rebin(10);
  ERR_photonPT_leadOverM->Rebin(10);
  DAT_photonPT_leadOverM->Draw("E");
  BKG_photonPT_leadOverM->Draw("same histo");
  ERR_photonPT_leadOverM->Draw("E2same");
  c1->SaveAs("photonPT_leadOverM_CS_VHhad0.png");

  TCanvas * c1 = new TCanvas("c1", "c1", 800, 600);
  DAT_photonPT_subleadOverM->Rebin(10);
  BKG_photonPT_subleadOverM->Rebin(10);
  ERR_photonPT_subleadOverM->Rebin(10);
  DAT_photonPT_subleadOverM->Draw("E");
  BKG_photonPT_subleadOverM->Draw("same histo");
  ERR_photonPT_subleadOverM->Draw("E2same");
  c1->SaveAs("photonPT_subleadOverM_CS_VHhad0.png");

  TCanvas * c1 = new TCanvas("c1", "c1", 800, 600);
  DAT_photonETA_lead->Rebin(10);
  BKG_photonETA_lead->Rebin(10);
  ERR_photonETA_lead->Rebin(10);
  DAT_photonETA_lead->Draw("E");
  BKG_photonETA_lead->Draw("same histo");
  ERR_photonETA_lead->Draw("E2same");
  c1->SaveAs("photonETA_lead_CS_VHhad0.png");

  TCanvas * c1 = new TCanvas("c1", "c1", 800, 600);
  DAT_photonETA_sublead->Rebin(10);
  BKG_photonETA_sublead->Rebin(10);
  ERR_photonETA_sublead->Rebin(10);
  DAT_photonETA_sublead->Draw("E");
  BKG_photonETA_sublead->Draw("same histo");
  ERR_photonETA_sublead->Draw("E2same");
  c1->SaveAs("photonETA_sublead_CS_VHhad0.png");

  TCanvas * c1 = new TCanvas("c1", "c1", 800, 600);
  DAT_cosdPhiGG->Rebin(10);
  BKG_cosdPhiGG->Rebin(10);
  ERR_cosdPhiGG->Rebin(10);
  DAT_cosdPhiGG->Draw("E");
  BKG_cosdPhiGG->Draw("same histo");
  ERR_cosdPhiGG->Draw("E2same");
  c1->SaveAs("cosdPhiGG_CS_VHhad0.png");

  TCanvas * c1 = new TCanvas("c1", "c1", 800, 600);
  DAT_sigmaMwvoM->Rebin(10);
  BKG_sigmaMwvoM->Rebin(10);
  ERR_sigmaMwvoM->Rebin(10);
  DAT_sigmaMwvoM->Draw("E");
  BKG_sigmaMwvoM->Draw("same histo");
  ERR_sigmaMwvoM->Draw("E2same");
  c1->SaveAs("sigmaMwvoM_CS_VHhad0.png");

  TCanvas * c1 = new TCanvas("c1", "c1", 800, 600);
  DAT_sigmaMrvoM->Rebin(10);
  BKG_sigmaMrvoM->Rebin(10);
  ERR_sigmaMrvoM->Rebin(10);
  DAT_sigmaMrvoM->Draw("E");
  BKG_sigmaMrvoM->Draw("same histo");
  ERR_sigmaMrvoM->Draw("E2same");
  c1->SaveAs("sigmaMrvoM_CS_VHhad0.png");

  TCanvas * c1 = new TCanvas("c1", "c1", 800, 600);
  DAT_vtxprob->Rebin(10);
  BKG_vtxprob->Rebin(10);
  ERR_vtxprob->Rebin(10);
  DAT_vtxprob->Draw("E");
  BKG_vtxprob->Draw("same histo");
  ERR_vtxprob->Draw("E2same");
  c1->SaveAs("vtxprob_CS_VHhad0.png");

  TCanvas * c1 = new TCanvas("c1", "c1", 800, 600);
  DAT_phoid_mvaout_lead->Rebin(10);
  BKG_phoid_mvaout_lead->Rebin(10);
  ERR_phoid_mvaout_lead->Rebin(10);
  DAT_phoid_mvaout_lead->Draw("E");
  BKG_phoid_mvaout_lead->Draw("same histo");
  ERR_phoid_mvaout_lead->Draw("E2same");
  c1->SaveAs("phoid_mvaout_lead_CS_VHhad0.png");

  TCanvas * c1 = new TCanvas("c1", "c1", 800, 600);
  DAT_phoid_mvaout_sublead->Rebin(10);
  BKG_phoid_mvaout_sublead->Rebin(10);
  ERR_phoid_mvaout_sublead->Rebin(10);
  DAT_phoid_mvaout_sublead->Draw("E");
  BKG_phoid_mvaout_sublead->Draw("same histo");
  ERR_phoid_mvaout_sublead->Draw("E2same");
  c1->SaveAs("phoid_mvaout_sublead_CS_VHhad0.png");


  TCanvas * c1 = new TCanvas("c1", "c1", 800, 600);
  TFile *_file0 = TFile::Open("v5_2/root/mass_CSVHhadB.root");
  DAT->Rebin(10);
  BKG->Rebin(10);
  ERR->Rebin(10);
  DAT->Draw("E");
  BKG->Draw("same histo");
  ERR->Draw("E2same");
  c1->SaveAs("mass_CS_VHhadB.png");

  TCanvas * c1 = new TCanvas("c1", "c1", 800, 600);
  DAT_photonPT_leadOverM->Rebin(10);
  BKG_photonPT_leadOverM->Rebin(10);
  ERR_photonPT_leadOverM->Rebin(10);
  DAT_photonPT_leadOverM->Draw("E");
  BKG_photonPT_leadOverM->Draw("same histo");
  ERR_photonPT_leadOverM->Draw("E2same");
  c1->SaveAs("photonPT_leadOverM_CS_VHhadB.png");

  TCanvas * c1 = new TCanvas("c1", "c1", 800, 600);
  DAT_photonPT_subleadOverM->Rebin(10);
  BKG_photonPT_subleadOverM->Rebin(10);
  ERR_photonPT_subleadOverM->Rebin(10);
  DAT_photonPT_subleadOverM->Draw("E");
  BKG_photonPT_subleadOverM->Draw("same histo");
  ERR_photonPT_subleadOverM->Draw("E2same");
  c1->SaveAs("photonPT_subleadOverM_CS_VHhadB.png");

  TCanvas * c1 = new TCanvas("c1", "c1", 800, 600);
  DAT_photonETA_lead->Rebin(10);
  BKG_photonETA_lead->Rebin(10);
  ERR_photonETA_lead->Rebin(10);
  DAT_photonETA_lead->Draw("E");
  BKG_photonETA_lead->Draw("same histo");
  ERR_photonETA_lead->Draw("E2same");
  c1->SaveAs("photonETA_lead_CS_VHhadB.png");

  TCanvas * c1 = new TCanvas("c1", "c1", 800, 600);
  DAT_photonETA_sublead->Rebin(10);
  BKG_photonETA_sublead->Rebin(10);
  ERR_photonETA_sublead->Rebin(10);
  DAT_photonETA_sublead->Draw("E");
  BKG_photonETA_sublead->Draw("same histo");
  ERR_photonETA_sublead->Draw("E2same");
  c1->SaveAs("photonETA_sublead_CS_VHhadB.png");

  TCanvas * c1 = new TCanvas("c1", "c1", 800, 600);
  DAT_cosdPhiGG->Rebin(10);
  BKG_cosdPhiGG->Rebin(10);
  ERR_cosdPhiGG->Rebin(10);
  DAT_cosdPhiGG->Draw("E");
  BKG_cosdPhiGG->Draw("same histo");
  ERR_cosdPhiGG->Draw("E2same");
  c1->SaveAs("cosdPhiGG_CS_VHhadB.png");

  TCanvas * c1 = new TCanvas("c1", "c1", 800, 600);
  DAT_sigmaMwvoM->Rebin(10);
  BKG_sigmaMwvoM->Rebin(10);
  ERR_sigmaMwvoM->Rebin(10);
  DAT_sigmaMwvoM->Draw("E");
  BKG_sigmaMwvoM->Draw("same histo");
  ERR_sigmaMwvoM->Draw("E2same");
  c1->SaveAs("sigmaMwvoM_CS_VHhadB.png");

  TCanvas * c1 = new TCanvas("c1", "c1", 800, 600);
  DAT_sigmaMrvoM->Rebin(10);
  BKG_sigmaMrvoM->Rebin(10);
  ERR_sigmaMrvoM->Rebin(10);
  DAT_sigmaMrvoM->Draw("E");
  BKG_sigmaMrvoM->Draw("same histo");
  ERR_sigmaMrvoM->Draw("E2same");
  c1->SaveAs("sigmaMrvoM_CS_VHhadB.png");

  TCanvas * c1 = new TCanvas("c1", "c1", 800, 600);
  DAT_vtxprob->Rebin(10);
  BKG_vtxprob->Rebin(10);
  ERR_vtxprob->Rebin(10);
  DAT_vtxprob->Draw("E");
  BKG_vtxprob->Draw("same histo");
  ERR_vtxprob->Draw("E2same");
  c1->SaveAs("vtxprob_CS_VHhadB.png");

  TCanvas * c1 = new TCanvas("c1", "c1", 800, 600);
  DAT_phoid_mvaout_lead->Rebin(10);
  BKG_phoid_mvaout_lead->Rebin(10);
  ERR_phoid_mvaout_lead->Rebin(10);
  DAT_phoid_mvaout_lead->Draw("E");
  BKG_phoid_mvaout_lead->Draw("same histo");
  ERR_phoid_mvaout_lead->Draw("E2same");
  c1->SaveAs("phoid_mvaout_lead_CS_VHhadB.png");

  TCanvas * c1 = new TCanvas("c1", "c1", 800, 600);
  DAT_phoid_mvaout_sublead->Rebin(10);
  BKG_phoid_mvaout_sublead->Rebin(10);
  ERR_phoid_mvaout_sublead->Rebin(10);
  DAT_phoid_mvaout_sublead->Draw("E");
  BKG_phoid_mvaout_sublead->Draw("same histo");
  ERR_phoid_mvaout_sublead->Draw("E2same");
  c1->SaveAs("phoid_mvaout_sublead_CS_VHhadB.png");


  TCanvas * c1 = new TCanvas("c1", "c1", 800, 600);
  TFile *_file0 = TFile::Open("v5_2/root/mass_CSttHhad.root");
  DAT->Rebin(10);
  BKG->Rebin(10);
  ERR->Rebin(10);
  DAT->Draw("E");
  BKG->Draw("same histo");
  ERR->Draw("E2same");
  c1->SaveAs("mass_CS_ttHhad.png");

  TCanvas * c1 = new TCanvas("c1", "c1", 800, 600);
  DAT_phoid_mvaout_sublead->Rebin(10);
  BKG_phoid_mvaout_sublead->Rebin(10);
  ERR_phoid_mvaout_sublead->Rebin(10);
  DAT_phoid_mvaout_sublead->Draw("E");
  BKG_phoid_mvaout_sublead->Draw("same histo");
  ERR_phoid_mvaout_sublead->Draw("E2same");
  c1->SaveAs("phoid_mvaout_sublead_CS_ttHhad.png");


  TCanvas * c1 = new TCanvas("c1", "c1", 800, 600);
  DAT_phoid_mvaout_lead->Rebin(10);
  BKG_phoid_mvaout_lead->Rebin(10);
  ERR_phoid_mvaout_lead->Rebin(10);
  DAT_phoid_mvaout_lead->Draw("E");
  BKG_phoid_mvaout_lead->Draw("same histo");
  ERR_phoid_mvaout_lead->Draw("E2same");
  c1->SaveAs("phoid_mvaout_lead_CS_ttHhad.png");


  TCanvas * c1 = new TCanvas("c1", "c1", 800, 600);
  DAT_vtxprob->Rebin(10);
  BKG_vtxprob->Rebin(10);
  ERR_vtxprob->Rebin(10);
  DAT_vtxprob->Draw("E");
  BKG_vtxprob->Draw("same histo");
  ERR_vtxprob->Draw("E2same");
  c1->SaveAs("vtxprob_CS_ttHhad.png");


  TCanvas * c1 = new TCanvas("c1", "c1", 800, 600);
  DAT_sigmaMrvoM->Rebin(10);
  BKG_sigmaMrvoM->Rebin(10);
  ERR_sigmaMrvoM->Rebin(10);
  DAT_sigmaMrvoM->Draw("E");
  BKG_sigmaMrvoM->Draw("same histo");
  ERR_sigmaMrvoM->Draw("E2same");
  c1->SaveAs("sigmaMrvoM_CS_ttHhad.png");


  TCanvas * c1 = new TCanvas("c1", "c1", 800, 600);
  DAT_sigmaMwvoM->Rebin(10);
  BKG_sigmaMwvoM->Rebin(10);
  ERR_sigmaMwvoM->Rebin(10);
  DAT_sigmaMwvoM->Draw("E");
  BKG_sigmaMwvoM->Draw("same histo");
  ERR_sigmaMwvoM->Draw("E2same");
  c1->SaveAs("sigmaMwvoM_CS_ttHhad.png");


  TCanvas * c1 = new TCanvas("c1", "c1", 800, 600);
  DAT_cosdPhiGG->Rebin(10);
  BKG_cosdPhiGG->Rebin(10);
  ERR_cosdPhiGG->Rebin(10);
  DAT_cosdPhiGG->Draw("E");
  BKG_cosdPhiGG->Draw("same histo");
  ERR_cosdPhiGG->Draw("E2same");
  c1->SaveAs("cosdPhiGG_CS_ttHhad.png");


  TCanvas * c1 = new TCanvas("c1", "c1", 800, 600);
  DAT_photonETA_sublead->Rebin(10);
  BKG_photonETA_sublead->Rebin(10);
  ERR_photonETA_sublead->Rebin(10);
  DAT_photonETA_sublead->Draw("E");
  BKG_photonETA_sublead->Draw("same histo");
  ERR_photonETA_sublead->Draw("E2same");
  c1->SaveAs("photonETA_sublead_CS_ttHhad.png");


  TCanvas * c1 = new TCanvas("c1", "c1", 800, 600);
  DAT_photonETA_lead->Rebin(10);
  BKG_photonETA_lead->Rebin(10);
  ERR_photonETA_lead->Rebin(10);
  DAT_photonETA_lead->Draw("E");
  BKG_photonETA_lead->Draw("same histo");
  ERR_photonETA_lead->Draw("E2same");
  c1->SaveAs("photonETA_lead_CS_ttHhad.png");


  TCanvas * c1 = new TCanvas("c1", "c1", 800, 600);
  DAT_photonPT_subleadOverM->Rebin(10);
  BKG_photonPT_subleadOverM->Rebin(10);
  ERR_photonPT_subleadOverM->Rebin(10);
  DAT_photonPT_subleadOverM->Draw("E");
  BKG_photonPT_subleadOverM->Draw("same histo");
  ERR_photonPT_subleadOverM->Draw("E2same");
  c1->SaveAs("photonPT_subleadOverM_CS_ttHhad.png");


  TCanvas * c1 = new TCanvas("c1", "c1", 800, 600);
  DAT_photonPT_leadOverM->Rebin(10);
  BKG_photonPT_leadOverM->Rebin(10);
  ERR_photonPT_leadOverM->Rebin(10);
  DAT_photonPT_leadOverM->Draw("E");
  BKG_photonPT_leadOverM->Draw("same histo");
  ERR_photonPT_leadOverM->Draw("E2same");
  c1->SaveAs("photonPT_leadOverM_CS_ttHhad.png");



  TCanvas * c1 = new TCanvas("c1", "c1", 800, 600);
  TFile *_file0 = TFile::Open("v5_2/root/mass_SSVHlep1.root");
  DAT->Rebin(10);
  BKG->Rebin(10);
  ERR->Rebin(10);
  DAT->Draw("E");
  BKG->Draw("same histo");
  ERR->Draw("E2same");
  c1->SaveAs("mass_SS_VHlep1.png");

  TCanvas * c1 = new TCanvas("c1", "c1", 800, 600);
  DAT_photonPT_leadOverM->Rebin(10);
  BKG_photonPT_leadOverM->Rebin(10);
  ERR_photonPT_leadOverM->Rebin(10);
  DAT_photonPT_leadOverM->Draw("E");
  BKG_photonPT_leadOverM->Draw("same histo");
  ERR_photonPT_leadOverM->Draw("E2same");
  c1->SaveAs("photonPT_leadOverM_SS_VHlep1.png");

  TCanvas * c1 = new TCanvas("c1", "c1", 800, 600);
  DAT_photonPT_subleadOverM->Rebin(10);
  BKG_photonPT_subleadOverM->Rebin(10);
  ERR_photonPT_subleadOverM->Rebin(10);
  DAT_photonPT_subleadOverM->Draw("E");
  BKG_photonPT_subleadOverM->Draw("same histo");
  ERR_photonPT_subleadOverM->Draw("E2same");
  c1->SaveAs("photonPT_subleadOverM_SS_VHlep1.png");

  TCanvas * c1 = new TCanvas("c1", "c1", 800, 600);
  DAT_photonETA_lead->Rebin(10);
  BKG_photonETA_lead->Rebin(10);
  ERR_photonETA_lead->Rebin(10);
  DAT_photonETA_lead->Draw("E");
  BKG_photonETA_lead->Draw("same histo");
  ERR_photonETA_lead->Draw("E2same");
  c1->SaveAs("photonETA_lead_SS_VHlep1.png");

  TCanvas * c1 = new TCanvas("c1", "c1", 800, 600);
  DAT_photonETA_sublead->Rebin(10);
  BKG_photonETA_sublead->Rebin(10);
  ERR_photonETA_sublead->Rebin(10);
  DAT_photonETA_sublead->Draw("E");
  BKG_photonETA_sublead->Draw("same histo");
  ERR_photonETA_sublead->Draw("E2same");
  c1->SaveAs("photonETA_sublead_SS_VHlep1.png");

  TCanvas * c1 = new TCanvas("c1", "c1", 800, 600);
  DAT_cosdPhiGG->Rebin(10);
  BKG_cosdPhiGG->Rebin(10);
  ERR_cosdPhiGG->Rebin(10);
  DAT_cosdPhiGG->Draw("E");
  BKG_cosdPhiGG->Draw("same histo");
  ERR_cosdPhiGG->Draw("E2same");
  c1->SaveAs("cosdPhiGG_SS_VHlep1.png");

  TCanvas * c1 = new TCanvas("c1", "c1", 800, 600);
  DAT_sigmaMwvoM->Rebin(10);
  BKG_sigmaMwvoM->Rebin(10);
  ERR_sigmaMwvoM->Rebin(10);
  DAT_sigmaMwvoM->Draw("E");
  BKG_sigmaMwvoM->Draw("same histo");
  ERR_sigmaMwvoM->Draw("E2same");
  c1->SaveAs("sigmaMwvoM_SS_VHlep1.png");

  TCanvas * c1 = new TCanvas("c1", "c1", 800, 600);
  DAT_sigmaMrvoM->Rebin(10);
  BKG_sigmaMrvoM->Rebin(10);
  ERR_sigmaMrvoM->Rebin(10);
  DAT_sigmaMrvoM->Draw("E");
  BKG_sigmaMrvoM->Draw("same histo");
  ERR_sigmaMrvoM->Draw("E2same");
  c1->SaveAs("sigmaMrvoM_SS_VHlep1.png");

  TCanvas * c1 = new TCanvas("c1", "c1", 800, 600);
  DAT_vtxprob->Rebin(10);
  BKG_vtxprob->Rebin(10);
  ERR_vtxprob->Rebin(10);
  DAT_vtxprob->Draw("E");
  BKG_vtxprob->Draw("same histo");
  ERR_vtxprob->Draw("E2same");
  c1->SaveAs("vtxprob_SS_VHlep1.png");

  TCanvas * c1 = new TCanvas("c1", "c1", 800, 600);
  DAT_phoid_mvaout_lead->Rebin(10);
  BKG_phoid_mvaout_lead->Rebin(10);
  ERR_phoid_mvaout_lead->Rebin(10);
  DAT_phoid_mvaout_lead->Draw("E");
  BKG_phoid_mvaout_lead->Draw("same histo");
  ERR_phoid_mvaout_lead->Draw("E2same");
  c1->SaveAs("phoid_mvaout_lead_SS_VHlep1.png");

  TCanvas * c1 = new TCanvas("c1", "c1", 800, 600);
  DAT_phoid_mvaout_sublead->Rebin(10);
  BKG_phoid_mvaout_sublead->Rebin(10);
  ERR_phoid_mvaout_sublead->Rebin(10);
  DAT_phoid_mvaout_sublead->Draw("E");
  BKG_phoid_mvaout_sublead->Draw("same histo");
  ERR_phoid_mvaout_sublead->Draw("E2same");
  c1->SaveAs("phoid_mvaout_sublead_SS_VHlep1.png");


  TCanvas * c1 = new TCanvas("c1", "c1", 800, 600);
  TFile *_file0 = TFile::Open("v5_2/root/mass_SSVHlep2.root");
  DAT->Rebin(10);
  BKG->Rebin(10);
  ERR->Rebin(10);
  DAT->Draw("E");
  BKG->Draw("same histo");
  ERR->Draw("E2same");
  c1->SaveAs("mass_SS_VHlep2.png");

  TCanvas * c1 = new TCanvas("c1", "c1", 800, 600);
  DAT_photonPT_leadOverM->Rebin(10);
  BKG_photonPT_leadOverM->Rebin(10);
  ERR_photonPT_leadOverM->Rebin(10);
  DAT_photonPT_leadOverM->Draw("E");
  BKG_photonPT_leadOverM->Draw("same histo");
  ERR_photonPT_leadOverM->Draw("E2same");
  c1->SaveAs("photonPT_leadOverM_SS_VHlep2.png");

  TCanvas * c1 = new TCanvas("c1", "c1", 800, 600);
  DAT_photonPT_subleadOverM->Rebin(10);
  BKG_photonPT_subleadOverM->Rebin(10);
  ERR_photonPT_subleadOverM->Rebin(10);
  DAT_photonPT_subleadOverM->Draw("E");
  BKG_photonPT_subleadOverM->Draw("same histo");
  ERR_photonPT_subleadOverM->Draw("E2same");
  c1->SaveAs("photonPT_subleadOverM_SS_VHlep2.png");

  TCanvas * c1 = new TCanvas("c1", "c1", 800, 600);
  DAT_photonETA_lead->Rebin(10);
  BKG_photonETA_lead->Rebin(10);
  ERR_photonETA_lead->Rebin(10);
  DAT_photonETA_lead->Draw("E");
  BKG_photonETA_lead->Draw("same histo");
  ERR_photonETA_lead->Draw("E2same");
  c1->SaveAs("photonETA_lead_SS_VHlep2.png");

  TCanvas * c1 = new TCanvas("c1", "c1", 800, 600);
  DAT_photonETA_sublead->Rebin(10);
  BKG_photonETA_sublead->Rebin(10);
  ERR_photonETA_sublead->Rebin(10);
  DAT_photonETA_sublead->Draw("E");
  BKG_photonETA_sublead->Draw("same histo");
  ERR_photonETA_sublead->Draw("E2same");
  c1->SaveAs("photonETA_sublead_SS_VHlep2.png");

  TCanvas * c1 = new TCanvas("c1", "c1", 800, 600);
  DAT_cosdPhiGG->Rebin(10);
  BKG_cosdPhiGG->Rebin(10);
  ERR_cosdPhiGG->Rebin(10);
  DAT_cosdPhiGG->Draw("E");
  BKG_cosdPhiGG->Draw("same histo");
  ERR_cosdPhiGG->Draw("E2same");
  c1->SaveAs("cosdPhiGG_SS_VHlep2.png");

  TCanvas * c1 = new TCanvas("c1", "c1", 800, 600);
  DAT_sigmaMwvoM->Rebin(10);
  BKG_sigmaMwvoM->Rebin(10);
  ERR_sigmaMwvoM->Rebin(10);
  DAT_sigmaMwvoM->Draw("E");
  BKG_sigmaMwvoM->Draw("same histo");
  ERR_sigmaMwvoM->Draw("E2same");
  c1->SaveAs("sigmaMwvoM_SS_VHlep2.png");

  TCanvas * c1 = new TCanvas("c1", "c1", 800, 600);
  DAT_sigmaMrvoM->Rebin(10);
  BKG_sigmaMrvoM->Rebin(10);
  ERR_sigmaMrvoM->Rebin(10);
  DAT_sigmaMrvoM->Draw("E");
  BKG_sigmaMrvoM->Draw("same histo");
  ERR_sigmaMrvoM->Draw("E2same");
  c1->SaveAs("sigmaMrvoM_SS_VHlep2.png");

  TCanvas * c1 = new TCanvas("c1", "c1", 800, 600);
  DAT_vtxprob->Rebin(10);
  BKG_vtxprob->Rebin(10);
  ERR_vtxprob->Rebin(10);
  DAT_vtxprob->Draw("E");
  BKG_vtxprob->Draw("same histo");
  ERR_vtxprob->Draw("E2same");
  c1->SaveAs("vtxprob_SS_VHlep2.png");

  TCanvas * c1 = new TCanvas("c1", "c1", 800, 600);
  DAT_phoid_mvaout_lead->Rebin(10);
  BKG_phoid_mvaout_lead->Rebin(10);
  ERR_phoid_mvaout_lead->Rebin(10);
  DAT_phoid_mvaout_lead->Draw("E");
  BKG_phoid_mvaout_lead->Draw("same histo");
  ERR_phoid_mvaout_lead->Draw("E2same");
  c1->SaveAs("phoid_mvaout_lead_SS_VHlep2.png");

  TCanvas * c1 = new TCanvas("c1", "c1", 800, 600);
  DAT_phoid_mvaout_sublead->Rebin(10);
  BKG_phoid_mvaout_sublead->Rebin(10);
  ERR_phoid_mvaout_sublead->Rebin(10);
  DAT_phoid_mvaout_sublead->Draw("E");
  BKG_phoid_mvaout_sublead->Draw("same histo");
  ERR_phoid_mvaout_sublead->Draw("E2same");
  c1->SaveAs("phoid_mvaout_sublead_SS_VHlep2.png");


  TCanvas * c1 = new TCanvas("c1", "c1", 800, 600);
  TFile *_file0 = TFile::Open("v5_2/root/mass_SSVHmetT.root");
  DAT->Rebin(10);
  BKG->Rebin(10);
  ERR->Rebin(10);
  DAT->Draw("E");
  BKG->Draw("same histo");
  ERR->Draw("E2same");
  c1->SaveAs("mass_SS_VHmetT.png");

  TCanvas * c1 = new TCanvas("c1", "c1", 800, 600);
  DAT_photonPT_leadOverM->Rebin(10);
  BKG_photonPT_leadOverM->Rebin(10);
  ERR_photonPT_leadOverM->Rebin(10);
  DAT_photonPT_leadOverM->Draw("E");
  BKG_photonPT_leadOverM->Draw("same histo");
  ERR_photonPT_leadOverM->Draw("E2same");
  c1->SaveAs("photonPT_leadOverM_SS_VHmetT.png");

  TCanvas * c1 = new TCanvas("c1", "c1", 800, 600);
  DAT_photonPT_subleadOverM->Rebin(10);
  BKG_photonPT_subleadOverM->Rebin(10);
  ERR_photonPT_subleadOverM->Rebin(10);
  DAT_photonPT_subleadOverM->Draw("E");
  BKG_photonPT_subleadOverM->Draw("same histo");
  ERR_photonPT_subleadOverM->Draw("E2same");
  c1->SaveAs("photonPT_subleadOverM_SS_VHmetT.png");

  TCanvas * c1 = new TCanvas("c1", "c1", 800, 600);
  DAT_photonETA_lead->Rebin(10);
  BKG_photonETA_lead->Rebin(10);
  ERR_photonETA_lead->Rebin(10);
  DAT_photonETA_lead->Draw("E");
  BKG_photonETA_lead->Draw("same histo");
  ERR_photonETA_lead->Draw("E2same");
  c1->SaveAs("photonETA_lead_SS_VHmetT.png");

  TCanvas * c1 = new TCanvas("c1", "c1", 800, 600);
  DAT_photonETA_sublead->Rebin(10);
  BKG_photonETA_sublead->Rebin(10);
  ERR_photonETA_sublead->Rebin(10);
  DAT_photonETA_sublead->Draw("E");
  BKG_photonETA_sublead->Draw("same histo");
  ERR_photonETA_sublead->Draw("E2same");
  c1->SaveAs("photonETA_sublead_SS_VHmetT.png");

  TCanvas * c1 = new TCanvas("c1", "c1", 800, 600);
  DAT_cosdPhiGG->Rebin(10);
  BKG_cosdPhiGG->Rebin(10);
  ERR_cosdPhiGG->Rebin(10);
  DAT_cosdPhiGG->Draw("E");
  BKG_cosdPhiGG->Draw("same histo");
  ERR_cosdPhiGG->Draw("E2same");
  c1->SaveAs("cosdPhiGG_SS_VHmetT.png");

  TCanvas * c1 = new TCanvas("c1", "c1", 800, 600);
  DAT_sigmaMwvoM->Rebin(10);
  BKG_sigmaMwvoM->Rebin(10);
  ERR_sigmaMwvoM->Rebin(10);
  DAT_sigmaMwvoM->Draw("E");
  BKG_sigmaMwvoM->Draw("same histo");
  ERR_sigmaMwvoM->Draw("E2same");
  c1->SaveAs("sigmaMwvoM_SS_VHmetT.png");

  TCanvas * c1 = new TCanvas("c1", "c1", 800, 600);
  DAT_sigmaMrvoM->Rebin(10);
  BKG_sigmaMrvoM->Rebin(10);
  ERR_sigmaMrvoM->Rebin(10);
  DAT_sigmaMrvoM->Draw("E");
  BKG_sigmaMrvoM->Draw("same histo");
  ERR_sigmaMrvoM->Draw("E2same");
  c1->SaveAs("sigmaMrvoM_SS_VHmetT.png");

  TCanvas * c1 = new TCanvas("c1", "c1", 800, 600);
  DAT_vtxprob->Rebin(10);
  BKG_vtxprob->Rebin(10);
  ERR_vtxprob->Rebin(10);
  DAT_vtxprob->Draw("E");
  BKG_vtxprob->Draw("same histo");
  ERR_vtxprob->Draw("E2same");
  c1->SaveAs("vtxprob_SS_VHmetT.png");

  TCanvas * c1 = new TCanvas("c1", "c1", 800, 600);
  DAT_phoid_mvaout_lead->Rebin(10);
  BKG_phoid_mvaout_lead->Rebin(10);
  ERR_phoid_mvaout_lead->Rebin(10);
  DAT_phoid_mvaout_lead->Draw("E");
  BKG_phoid_mvaout_lead->Draw("same histo");
  ERR_phoid_mvaout_lead->Draw("E2same");
  c1->SaveAs("phoid_mvaout_lead_SS_VHmetT.png");

  TCanvas * c1 = new TCanvas("c1", "c1", 800, 600);
  DAT_phoid_mvaout_sublead->Rebin(10);
  BKG_phoid_mvaout_sublead->Rebin(10);
  ERR_phoid_mvaout_sublead->Rebin(10);
  DAT_phoid_mvaout_sublead->Draw("E");
  BKG_phoid_mvaout_sublead->Draw("same histo");
  ERR_phoid_mvaout_sublead->Draw("E2same");
  c1->SaveAs("phoid_mvaout_sublead_SS_VHmetT.png");


  TCanvas * c1 = new TCanvas("c1", "c1", 800, 600);
  TFile *_file0 = TFile::Open("v5_2/root/mass_SSVHhad0.root");
  DAT->Rebin(10);
  BKG->Rebin(10);
  ERR->Rebin(10);
  DAT->Draw("E");
  BKG->Draw("same histo");
  ERR->Draw("E2same");
  c1->SaveAs("mass_SS_VHhad0.png");

  TCanvas * c1 = new TCanvas("c1", "c1", 800, 600);
  DAT_photonPT_leadOverM->Rebin(10);
  BKG_photonPT_leadOverM->Rebin(10);
  ERR_photonPT_leadOverM->Rebin(10);
  DAT_photonPT_leadOverM->Draw("E");
  BKG_photonPT_leadOverM->Draw("same histo");
  ERR_photonPT_leadOverM->Draw("E2same");
  c1->SaveAs("photonPT_leadOverM_SS_VHhad0.png");

  TCanvas * c1 = new TCanvas("c1", "c1", 800, 600);
  DAT_photonPT_subleadOverM->Rebin(10);
  BKG_photonPT_subleadOverM->Rebin(10);
  ERR_photonPT_subleadOverM->Rebin(10);
  DAT_photonPT_subleadOverM->Draw("E");
  BKG_photonPT_subleadOverM->Draw("same histo");
  ERR_photonPT_subleadOverM->Draw("E2same");
  c1->SaveAs("photonPT_subleadOverM_SS_VHhad0.png");

  TCanvas * c1 = new TCanvas("c1", "c1", 800, 600);
  DAT_photonETA_lead->Rebin(10);
  BKG_photonETA_lead->Rebin(10);
  ERR_photonETA_lead->Rebin(10);
  DAT_photonETA_lead->Draw("E");
  BKG_photonETA_lead->Draw("same histo");
  ERR_photonETA_lead->Draw("E2same");
  c1->SaveAs("photonETA_lead_SS_VHhad0.png");

  TCanvas * c1 = new TCanvas("c1", "c1", 800, 600);
  DAT_photonETA_sublead->Rebin(10);
  BKG_photonETA_sublead->Rebin(10);
  ERR_photonETA_sublead->Rebin(10);
  DAT_photonETA_sublead->Draw("E");
  BKG_photonETA_sublead->Draw("same histo");
  ERR_photonETA_sublead->Draw("E2same");
  c1->SaveAs("photonETA_sublead_SS_VHhad0.png");

  TCanvas * c1 = new TCanvas("c1", "c1", 800, 600);
  DAT_cosdPhiGG->Rebin(10);
  BKG_cosdPhiGG->Rebin(10);
  ERR_cosdPhiGG->Rebin(10);
  DAT_cosdPhiGG->Draw("E");
  BKG_cosdPhiGG->Draw("same histo");
  ERR_cosdPhiGG->Draw("E2same");
  c1->SaveAs("cosdPhiGG_SS_VHhad0.png");

  TCanvas * c1 = new TCanvas("c1", "c1", 800, 600);
  DAT_sigmaMwvoM->Rebin(10);
  BKG_sigmaMwvoM->Rebin(10);
  ERR_sigmaMwvoM->Rebin(10);
  DAT_sigmaMwvoM->Draw("E");
  BKG_sigmaMwvoM->Draw("same histo");
  ERR_sigmaMwvoM->Draw("E2same");
  c1->SaveAs("sigmaMwvoM_SS_VHhad0.png");

  TCanvas * c1 = new TCanvas("c1", "c1", 800, 600);
  DAT_sigmaMrvoM->Rebin(10);
  BKG_sigmaMrvoM->Rebin(10);
  ERR_sigmaMrvoM->Rebin(10);
  DAT_sigmaMrvoM->Draw("E");
  BKG_sigmaMrvoM->Draw("same histo");
  ERR_sigmaMrvoM->Draw("E2same");
  c1->SaveAs("sigmaMrvoM_SS_VHhad0.png");

  TCanvas * c1 = new TCanvas("c1", "c1", 800, 600);
  DAT_vtxprob->Rebin(10);
  BKG_vtxprob->Rebin(10);
  ERR_vtxprob->Rebin(10);
  DAT_vtxprob->Draw("E");
  BKG_vtxprob->Draw("same histo");
  ERR_vtxprob->Draw("E2same");
  c1->SaveAs("vtxprob_SS_VHhad0.png");

  TCanvas * c1 = new TCanvas("c1", "c1", 800, 600);
  DAT_phoid_mvaout_lead->Rebin(10);
  BKG_phoid_mvaout_lead->Rebin(10);
  ERR_phoid_mvaout_lead->Rebin(10);
  DAT_phoid_mvaout_lead->Draw("E");
  BKG_phoid_mvaout_lead->Draw("same histo");
  ERR_phoid_mvaout_lead->Draw("E2same");
  c1->SaveAs("phoid_mvaout_lead_SS_VHhad0.png");

  TCanvas * c1 = new TCanvas("c1", "c1", 800, 600);
  DAT_phoid_mvaout_sublead->Rebin(10);
  BKG_phoid_mvaout_sublead->Rebin(10);
  ERR_phoid_mvaout_sublead->Rebin(10);
  DAT_phoid_mvaout_sublead->Draw("E");
  BKG_phoid_mvaout_sublead->Draw("same histo");
  ERR_phoid_mvaout_sublead->Draw("E2same");
  c1->SaveAs("phoid_mvaout_sublead_SS_VHhad0.png");


  TCanvas * c1 = new TCanvas("c1", "c1", 800, 600);
  TFile *_file0 = TFile::Open("v5_2/root/mass_SSVHhadB.root");
  DAT->Rebin(10);
  BKG->Rebin(10);
  ERR->Rebin(10);
  DAT->Draw("E");
  BKG->Draw("same histo");
  ERR->Draw("E2same");
  c1->SaveAs("mass_SS_VHhadB.png");

  TCanvas * c1 = new TCanvas("c1", "c1", 800, 600);
  DAT_photonPT_leadOverM->Rebin(10);
  BKG_photonPT_leadOverM->Rebin(10);
  ERR_photonPT_leadOverM->Rebin(10);
  DAT_photonPT_leadOverM->Draw("E");
  BKG_photonPT_leadOverM->Draw("same histo");
  ERR_photonPT_leadOverM->Draw("E2same");
  c1->SaveAs("photonPT_leadOverM_SS_VHhadB.png");

  TCanvas * c1 = new TCanvas("c1", "c1", 800, 600);
  DAT_photonPT_subleadOverM->Rebin(10);
  BKG_photonPT_subleadOverM->Rebin(10);
  ERR_photonPT_subleadOverM->Rebin(10);
  DAT_photonPT_subleadOverM->Draw("E");
  BKG_photonPT_subleadOverM->Draw("same histo");
  ERR_photonPT_subleadOverM->Draw("E2same");
  c1->SaveAs("photonPT_subleadOverM_SS_VHhadB.png");

  TCanvas * c1 = new TCanvas("c1", "c1", 800, 600);
  DAT_photonETA_lead->Rebin(10);
  BKG_photonETA_lead->Rebin(10);
  ERR_photonETA_lead->Rebin(10);
  DAT_photonETA_lead->Draw("E");
  BKG_photonETA_lead->Draw("same histo");
  ERR_photonETA_lead->Draw("E2same");
  c1->SaveAs("photonETA_lead_SS_VHhadB.png");

  TCanvas * c1 = new TCanvas("c1", "c1", 800, 600);
  DAT_photonETA_sublead->Rebin(10);
  BKG_photonETA_sublead->Rebin(10);
  ERR_photonETA_sublead->Rebin(10);
  DAT_photonETA_sublead->Draw("E");
  BKG_photonETA_sublead->Draw("same histo");
  ERR_photonETA_sublead->Draw("E2same");
  c1->SaveAs("photonETA_sublead_SS_VHhadB.png");

  TCanvas * c1 = new TCanvas("c1", "c1", 800, 600);
  DAT_cosdPhiGG->Rebin(10);
  BKG_cosdPhiGG->Rebin(10);
  ERR_cosdPhiGG->Rebin(10);
  DAT_cosdPhiGG->Draw("E");
  BKG_cosdPhiGG->Draw("same histo");
  ERR_cosdPhiGG->Draw("E2same");
  c1->SaveAs("cosdPhiGG_SS_VHhadB.png");

  TCanvas * c1 = new TCanvas("c1", "c1", 800, 600);
  DAT_sigmaMwvoM->Rebin(10);
  BKG_sigmaMwvoM->Rebin(10);
  ERR_sigmaMwvoM->Rebin(10);
  DAT_sigmaMwvoM->Draw("E");
  BKG_sigmaMwvoM->Draw("same histo");
  ERR_sigmaMwvoM->Draw("E2same");
  c1->SaveAs("sigmaMwvoM_SS_VHhadB.png");

  TCanvas * c1 = new TCanvas("c1", "c1", 800, 600);
  DAT_sigmaMrvoM->Rebin(10);
  BKG_sigmaMrvoM->Rebin(10);
  ERR_sigmaMrvoM->Rebin(10);
  DAT_sigmaMrvoM->Draw("E");
  BKG_sigmaMrvoM->Draw("same histo");
  ERR_sigmaMrvoM->Draw("E2same");
  c1->SaveAs("sigmaMrvoM_SS_VHhadB.png");

  TCanvas * c1 = new TCanvas("c1", "c1", 800, 600);
  DAT_vtxprob->Rebin(10);
  BKG_vtxprob->Rebin(10);
  ERR_vtxprob->Rebin(10);
  DAT_vtxprob->Draw("E");
  BKG_vtxprob->Draw("same histo");
  ERR_vtxprob->Draw("E2same");
  c1->SaveAs("vtxprob_SS_VHhadB.png");

  TCanvas * c1 = new TCanvas("c1", "c1", 800, 600);
  DAT_phoid_mvaout_lead->Rebin(10);
  BKG_phoid_mvaout_lead->Rebin(10);
  ERR_phoid_mvaout_lead->Rebin(10);
  DAT_phoid_mvaout_lead->Draw("E");
  BKG_phoid_mvaout_lead->Draw("same histo");
  ERR_phoid_mvaout_lead->Draw("E2same");
  c1->SaveAs("phoid_mvaout_lead_SS_VHhadB.png");

  TCanvas * c1 = new TCanvas("c1", "c1", 800, 600);
  DAT_phoid_mvaout_sublead->Rebin(10);
  BKG_phoid_mvaout_sublead->Rebin(10);
  ERR_phoid_mvaout_sublead->Rebin(10);
  DAT_phoid_mvaout_sublead->Draw("E");
  BKG_phoid_mvaout_sublead->Draw("same histo");
  ERR_phoid_mvaout_sublead->Draw("E2same");
  c1->SaveAs("phoid_mvaout_sublead_SS_VHhadB.png");


  TCanvas * c1 = new TCanvas("c1", "c1", 800, 600);
  TFile *_file0 = TFile::Open("v5_2/root/mass_SSttHhad.root");
  DAT->Rebin(10);
  BKG->Rebin(10);
  ERR->Rebin(10);
  DAT->Draw("E");
  BKG->Draw("same histo");
  ERR->Draw("E2same");
  c1->SaveAs("mass_SS_ttHhad.png");


  TCanvas * c1 = new TCanvas("c1", "c1", 800, 600);
  DAT_photonPT_leadOverM->Rebin(10);
  BKG_photonPT_leadOverM->Rebin(10);
  ERR_photonPT_leadOverM->Rebin(10);
  DAT_photonPT_leadOverM->Draw("E");
  BKG_photonPT_leadOverM->Draw("same histo");
  ERR_photonPT_leadOverM->Draw("E2same");
  c1->SaveAs("photonPT_leadOverM_SS_ttHhad.png");



  TCanvas * c1 = new TCanvas("c1", "c1", 800, 600);
  DAT_photonPT_subleadOverM->Rebin(10);
  BKG_photonPT_subleadOverM->Rebin(10);
  ERR_photonPT_subleadOverM->Rebin(10);
  DAT_photonPT_subleadOverM->Draw("E");
  BKG_photonPT_subleadOverM->Draw("same histo");
  ERR_photonPT_subleadOverM->Draw("E2same");
  c1->SaveAs("photonPT_subleadOverM_SS_ttHhad.png");



  TCanvas * c1 = new TCanvas("c1", "c1", 800, 600);
  DAT_photonETA_lead->Rebin(10);
  BKG_photonETA_lead->Rebin(10);
  ERR_photonETA_lead->Rebin(10);
  DAT_photonETA_lead->Draw("E");
  BKG_photonETA_lead->Draw("same histo");
  ERR_photonETA_lead->Draw("E2same");
  c1->SaveAs("photonETA_lead_SS_ttHhad.png");



  TCanvas * c1 = new TCanvas("c1", "c1", 800, 600);
  DAT_photonETA_sublead->Rebin(10);
  BKG_photonETA_sublead->Rebin(10);
  ERR_photonETA_sublead->Rebin(10);
  DAT_photonETA_sublead->Draw("E");
  BKG_photonETA_sublead->Draw("same histo");
  ERR_photonETA_sublead->Draw("E2same");
  c1->SaveAs("photonETA_sublead_SS_ttHhad.png");



  TCanvas * c1 = new TCanvas("c1", "c1", 800, 600);
  DAT_cosdPhiGG->Rebin(10);
  BKG_cosdPhiGG->Rebin(10);
  ERR_cosdPhiGG->Rebin(10);
  DAT_cosdPhiGG->Draw("E");
  BKG_cosdPhiGG->Draw("same histo");
  ERR_cosdPhiGG->Draw("E2same");
  c1->SaveAs("cosdPhiGG_SS_ttHhad.png");



  TCanvas * c1 = new TCanvas("c1", "c1", 800, 600);
  DAT_sigmaMwvoM->Rebin(10);
  BKG_sigmaMwvoM->Rebin(10);
  ERR_sigmaMwvoM->Rebin(10);
  DAT_sigmaMwvoM->Draw("E");
  BKG_sigmaMwvoM->Draw("same histo");
  ERR_sigmaMwvoM->Draw("E2same");
  c1->SaveAs("sigmaMwvoM_SS_ttHhad.png");



  TCanvas * c1 = new TCanvas("c1", "c1", 800, 600);
  DAT_sigmaMrvoM->Rebin(10);
  BKG_sigmaMrvoM->Rebin(10);
  ERR_sigmaMrvoM->Rebin(10);
  DAT_sigmaMrvoM->Draw("E");
  BKG_sigmaMrvoM->Draw("same histo");
  ERR_sigmaMrvoM->Draw("E2same");
  c1->SaveAs("sigmaMrvoM_SS_ttHhad.png");



  TCanvas * c1 = new TCanvas("c1", "c1", 800, 600);
  DAT_vtxprob->Rebin(10);
  BKG_vtxprob->Rebin(10);
  ERR_vtxprob->Rebin(10);
  DAT_vtxprob->Draw("E");
  BKG_vtxprob->Draw("same histo");
  ERR_vtxprob->Draw("E2same");
  c1->SaveAs("vtxprob_SS_ttHhad.png");



  TCanvas * c1 = new TCanvas("c1", "c1", 800, 600);
  DAT_phoid_mvaout_lead->Rebin(10);
  BKG_phoid_mvaout_lead->Rebin(10);
  ERR_phoid_mvaout_lead->Rebin(10);
  DAT_phoid_mvaout_lead->Draw("E");
  BKG_phoid_mvaout_lead->Draw("same histo");
  ERR_phoid_mvaout_lead->Draw("E2same");
  c1->SaveAs("phoid_mvaout_lead_SS_ttHhad.png");



  TCanvas * c1 = new TCanvas("c1", "c1", 800, 600);
  DAT_phoid_mvaout_sublead->Rebin(10);
  BKG_phoid_mvaout_sublead->Rebin(10);
  ERR_phoid_mvaout_sublead->Rebin(10);
  DAT_phoid_mvaout_sublead->Draw("E");
  BKG_phoid_mvaout_sublead->Draw("same histo");
  ERR_phoid_mvaout_sublead->Draw("E2same");
  c1->SaveAs("phoid_mvaout_sublead_SS_ttHhad.png");

}
