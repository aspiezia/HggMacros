#include "TROOT.h"
#include "TFile.h"
#include "TTree.h"
#include "TBrowser.h"
#include "TH2.h"
#include "TRandom.h"
#include "TCanvas.h"
#include "TStyle.h"
#include "THStack.h"
#include "TLatex.h"
#include "TLegend.h"
#include <iostream>

void PlotSSvsCS(bool save=false, TString sel="prova", TString variable_string="mass", int nbin=80, int nbin_min=100, int nbin_max=180)
{
  if(sel=="prova"){
    cout<<endl;
    cout<<"You have to provide 4 arguments:"<<endl;
    cout<<"    - boolean to save (true) or not save (false)"<<endl;
    cout<<"    - string for the category you want to use ('VHlep1' or 'VHlep2' or 'VHlep' or 'ttHhad' or 'VHhadB' or 'VHhad0')"<<endl;
    cout<<"    - string for the name of the branch to plot/save"<<endl;
    cout<<endl;
    return;
  }
	
  gROOT->Reset();
  gStyle->SetCanvasColor(0);
  gStyle->SetFrameBorderMode(0);
  gStyle->SetOptStat(0);
  gStyle->SetPalette(1,0);
  gStyle->SetTitleX(0.5); //title X location 
  gStyle->SetTitleY(0.96); //title Y location 
  using namespace std;
	
  TFile *f2 = new TFile("/afs/cern.ch/work/a/aspiezia/Analysis_legacy/CMSSW_6_1_1/src/h2gglobe-legacy_paper_8TeV_optimization_v1/AnalysisScripts/data2.root");   //DATA

  //------------------------------------------- DATA -------------------------------------------//
  TTree *s_data   = (TTree*)f2->Get("Data");
  s_data->SetMakeClass(1);
	
  int dataset_;
  float weight_; float met_; float mass_;
  float leptonPt_; float photonPT_lead_; float photonPT_sublead_;
  float photonPT_leadOverM_; float photonPT_subleadOverM_;
  float cosdPhiGG_;float sigmaMwvoM_;float sigmaMrvoM_;float vtxprob_;float phoid_mvaout_lead_;float phoid_mvaout_sublead_;
  float photonETA_lead_; float photonETA_sublead_;
  float dPhiMetGG_; float dPhiMetJet_;
  float deltaR_lead_; float deltaR_sublead_;
  float electron_M_lead_; float electron_M_sublead_;
  int Njet20_; float eleMVA_;
  float leptonISO_; float leptonD0_; float leptonDZ_;
  float diphobdt_output_;
  int blind2_;
  int electron_; int muon_;
  float variable_;
  float JetsMass_;
  float cosThetaStar_;
  int njets_passing_kLooseID_;
  float j1_algoPF1_csvBtag_;
  float j2_pt_;
  float j2_algoPF1_csvBtag_;
  float j3_pt_;
  float j3_algoPF1_csvBtag_;
  float j4_pt_;
  float j4_algoPF1_csvBtag_;
  float j5_algoPF1_csvBtag_;
  float j6_algoPF1_csvBtag_;
  float j7_algoPF1_csvBtag_;
  float j8_algoPF1_csvBtag_;
  float j9_algoPF1_csvBtag_;
  float j10_algoPF1_csvBtag_;
  int category_;
  float dipho_pt_;

  s_data->SetBranchAddress("dataset",&dataset_);
  s_data->SetBranchAddress("weight",&weight_);
  s_data->SetBranchAddress("met",&met_);
  s_data->SetBranchAddress("mass",&mass_);
  s_data->SetBranchAddress("leptonPt",&leptonPt_);
  s_data->SetBranchAddress("photonPT_lead",&photonPT_lead_);
  s_data->SetBranchAddress("photonPT_sublead",&photonPT_sublead_);
  s_data->SetBranchAddress("photonPT_leadOverM",&photonPT_leadOverM_);
  s_data->SetBranchAddress("photonPT_subleadOverM",&photonPT_subleadOverM_);
  s_data->SetBranchAddress("photonETA_lead",&photonETA_lead_);
  s_data->SetBranchAddress("photonETA_sublead",&photonETA_sublead_);
  s_data->SetBranchAddress("cosdPhiGG",&cosdPhiGG_);
  s_data->SetBranchAddress("sigmaMwvoM",&sigmaMwvoM_);
  s_data->SetBranchAddress("sigmaMrvoM",&sigmaMrvoM_);
  s_data->SetBranchAddress("vtxprob",&vtxprob_);
  s_data->SetBranchAddress("phoid_mvaout_lead",&phoid_mvaout_lead_);
  s_data->SetBranchAddress("phoid_mvaout_sublead",&phoid_mvaout_sublead_);
  s_data->SetBranchAddress("dPhiMetGG",&dPhiMetGG_);
  s_data->SetBranchAddress("dPhiMetJet",&dPhiMetJet_);
  s_data->SetBranchAddress("deltaR_lead",&deltaR_lead_);
  s_data->SetBranchAddress("deltaR_sublead",&deltaR_sublead_);
  s_data->SetBranchAddress("electron_M_lead",&electron_M_lead_);
  s_data->SetBranchAddress("electron_M_sublead",&electron_M_sublead_);
  s_data->SetBranchAddress("Njet20",&Njet20_);
  s_data->SetBranchAddress("eleMVA",&eleMVA_);
  s_data->SetBranchAddress("leptonISO",&leptonISO_);
  s_data->SetBranchAddress("leptonD0",&leptonD0_);
  s_data->SetBranchAddress("leptonDZ",&leptonDZ_);
  s_data->SetBranchAddress("diphobdt_output",&diphobdt_output_);
  s_data->SetBranchAddress("blind2",&blind2_);
  s_data->SetBranchAddress("electron",&electron_);
  s_data->SetBranchAddress("muon",&muon_);
  s_data->SetBranchAddress("njets_passing_kLooseID",&njets_passing_kLooseID_);
  s_data->SetBranchAddress("j1_algoPF1_csvBtag",&j1_algoPF1_csvBtag_);
  s_data->SetBranchAddress("j2_pt",&j2_pt_);
  s_data->SetBranchAddress("j2_algoPF1_csvBtag",&j2_algoPF1_csvBtag_);
  s_data->SetBranchAddress("j3_pt",&j3_pt_);
  s_data->SetBranchAddress("j3_algoPF1_csvBtag",&j3_algoPF1_csvBtag_);
  s_data->SetBranchAddress("j4_pt",&j4_pt_);
  s_data->SetBranchAddress("j4_algoPF1_csvBtag",&j4_algoPF1_csvBtag_);
  s_data->SetBranchAddress("j5_algoPF1_csvBtag",&j5_algoPF1_csvBtag_);
  s_data->SetBranchAddress("j6_algoPF1_csvBtag",&j6_algoPF1_csvBtag_);
  s_data->SetBranchAddress("j7_algoPF1_csvBtag",&j7_algoPF1_csvBtag_);
  s_data->SetBranchAddress("j8_algoPF1_csvBtag",&j8_algoPF1_csvBtag_);
  s_data->SetBranchAddress("j9_algoPF1_csvBtag",&j9_algoPF1_csvBtag_);
  s_data->SetBranchAddress("j10_algoPF1_csvBtag",&j10_algoPF1_csvBtag_);
  s_data->SetBranchAddress("JetsMass",&JetsMass_);
  s_data->SetBranchAddress("cosThetaStar",&cosThetaStar_);
  s_data->SetBranchAddress("category",&category_);
  s_data->SetBranchAddress("dipho_pt",&dipho_pt_);


  TString rootfile_name = variable_string+"_"+sel+".root";
  TFile fileTosave(rootfile_name,"recreate"); 
	
  TH1D *h_SS; h_SS  = new TH1D("","",nbin,nbin_min,nbin_max); 
  Int_t nentries_data = (Int_t)s_data->GetEntries();
  for (Int_t i=0;i<nentries_data;i++) {
    s_data->GetEntry(i);
    if(variable_string=="mass")                  variable_ = mass_;
    if(variable_string=="diphobdt_output")       variable_ = diphobdt_output_; 
    if(variable_string=="met")                   variable_ = met_;
    if(variable_string=="dPhiMetGG")             variable_ = dPhiMetGG_;
    if(variable_string=="dPhiMetJet")            variable_ = dPhiMetJet_;
    if(variable_string=="photonPT_leadOverM")    variable_ = photonPT_leadOverM_;
    if(variable_string=="photonPT_subleadOverM") variable_ = photonPT_subleadOverM_;
    if(variable_string=="photonETA_lead")        variable_ = photonETA_lead_;
    if(variable_string=="photonETA_sublead")     variable_ = photonETA_sublead_;
    if(variable_string=="cosdPhiGG")             variable_ = cosdPhiGG_;
    if(variable_string=="sigmaMwvoM")            variable_ = sigmaMwvoM_;
    if(variable_string=="sigmaMrvoM")            variable_ = sigmaMrvoM_;
    if(variable_string=="vtxprob")               variable_ = vtxprob_;
    if(variable_string=="phoid_mvaout_lead")     variable_ = phoid_mvaout_lead_;
    if(variable_string=="phoid_mvaout_sublead")  variable_ = phoid_mvaout_sublead_;

		
    if(!(blind2_==1)) continue;
    if(!(mass_>100 && mass_<180)) continue;

    if(sel=="VHlep1") {
      if(category_!=7) continue;
    } else if(sel=="VHlep2") {
      if(category_!=8) continue;
    } else if(sel=="VHlep")  {
      if(!(category_==7 || category_==8)) continue;
    }else if (sel=="VHmetT"){
      if(category_!=9) continue;
    }else if(sel=="ttHhad"){
      if(category_!=11)continue;
    }else if (sel=="VHhadB"){
      if(category_!=12)continue;
    }else if (sel=="VHhad0"){
      if(category_!=13)continue;
    }
    h_SS->Fill(variable_,weight_);
  }


  TH1D *h_CS; h_CS  = new TH1D("","",nbin,nbin_min,nbin_max); 
  for (Int_t i=0;i<nentries_data;i++) {
    s_data->GetEntry(i);
    if(variable_string=="mass")                  variable_ = mass_;
    if(variable_string=="diphobdt_output")       variable_ = diphobdt_output_; 
    if(variable_string=="met")                   variable_ = met_;
    if(variable_string=="dPhiMetGG")             variable_ = dPhiMetGG_;
    if(variable_string=="dPhiMetJet")            variable_ = dPhiMetJet_;
    if(variable_string=="photonPT_leadOverM")    variable_ = photonPT_leadOverM_;
    if(variable_string=="photonPT_subleadOverM") variable_ = photonPT_subleadOverM_;
    if(variable_string=="photonETA_lead")        variable_ = photonETA_lead_;
    if(variable_string=="photonETA_sublead")     variable_ = photonETA_sublead_;
    if(variable_string=="cosdPhiGG")             variable_ = cosdPhiGG_;
    if(variable_string=="sigmaMwvoM")            variable_ = sigmaMwvoM_;
    if(variable_string=="sigmaMrvoM")            variable_ = sigmaMrvoM_;
    if(variable_string=="vtxprob")               variable_ = vtxprob_;
    if(variable_string=="phoid_mvaout_lead")     variable_ = phoid_mvaout_lead_;
    if(variable_string=="phoid_mvaout_sublead")  variable_ = phoid_mvaout_sublead_;

		
    if(!(blind2_==1)) continue;
    if(!(mass_>100 && mass_<180)) continue;

    if((sel=="VHlep1")||(sel=="VHlep2")||(sel=="VHlep")){
      if(!(electron_==1 || muon_==1)) continue;
      if(!(deltaR_lead_>0.5 && deltaR_sublead_>0.5)) continue;
      if(!(leptonPt_>20)) continue;
      if(electron_==1){
	if(!(eleMVA_>0.0)) continue;
	if(!(electron_M_lead_>3)) continue;
	if(!(electron_M_sublead_>3)) continue;
	if(!(electron_M_lead_<10 || electron_M_sublead_<10 || deltaR_lead_<1.0 || deltaR_sublead_<1.0 || eleMVA_<0.9)) continue;
      }
      if(muon_==1){
	if(!(deltaR_lead_<1.0 || deltaR_sublead_<1.0)) continue;
      }
    }else if(sel=="ttHhad"){
      if(photonPT_lead_<60*mass_/120.)continue;
      if(photonPT_sublead_<25.)continue;
      if(j3_pt_<25.)continue;
      if((j1_algoPF1_csvBtag_>0.679 || j2_algoPF1_csvBtag_>0.679 || j3_algoPF1_csvBtag_>0.679 ||j4_algoPF1_csvBtag_>0.679||
	  j5_algoPF1_csvBtag_>0.679 || j6_algoPF1_csvBtag_>0.679 || j7_algoPF1_csvBtag_>0.679 ||j8_algoPF1_csvBtag_>0.679||
	  j9_algoPF1_csvBtag_>0.679 || j10_algoPF1_csvBtag_>0.679))continue;
    }else if (sel=="VHhadB"){
      if(photonPT_lead_<60*mass_/120.)continue;
      if(photonPT_sublead_<25.)continue;
      if(j2_pt_<27.)continue;
      if(j4_pt_>20.)continue;
      if(!(j1_algoPF1_csvBtag_>0.244 || j2_algoPF1_csvBtag_>0.244 || j3_algoPF1_csvBtag_>0.244 ||j4_algoPF1_csvBtag_>0.244||
	   j5_algoPF1_csvBtag_>0.244 || j6_algoPF1_csvBtag_>0.244 || j7_algoPF1_csvBtag_>0.244 ||j8_algoPF1_csvBtag_>0.244||
	   j9_algoPF1_csvBtag_>0.244 || j10_algoPF1_csvBtag_>0.244))continue;
      if(dipho_pt_<117*mass_/120.)continue;
      if(JetsMass_<60. ||JetsMass_>120.)continue;
      if(cosThetaStar_<0.56)continue;
    }else if (sel=="VHhad0"){
      if(photonPT_lead_<60*mass_/120.)continue;
      if(photonPT_sublead_<25.)continue;
      if(j2_pt_<40.)continue;
      if(j4_pt_>20.)continue;
      if((j1_algoPF1_csvBtag_>0.244 || j2_algoPF1_csvBtag_>0.244 || j3_algoPF1_csvBtag_>0.244 ||j4_algoPF1_csvBtag_>0.244||
	  j5_algoPF1_csvBtag_>0.244 || j6_algoPF1_csvBtag_>0.244 || j7_algoPF1_csvBtag_>0.244 ||j8_algoPF1_csvBtag_>0.244||
	  j9_algoPF1_csvBtag_>0.244 || j10_algoPF1_csvBtag_>0.244))continue;
      if(dipho_pt_<130*mass_/120.)continue;
      if(JetsMass_<60. ||JetsMass_>120.)continue;
      if(cosThetaStar_<0.50)continue;
    }else if (sel=="VHmetT"){
      if(!(photonETA_lead_<1.5 && photonETA_sublead_<1.5)) continue;
      if(!(dPhiMetGG_>2.1)) continue;
      if(!(dPhiMetJet_<2.7)) continue;
      if(!(met_>67 && met_<70)) continue;
    }
    
    h_CS->Fill(variable_,weight_);
  }
  
	
  TH1D *DAT_SS  = new TH1D("DAT_SS","DAT_SS",h_SS->GetNbinsX(),h_SS->GetXaxis()->GetXmin(),h_SS->GetXaxis()->GetXmax());
  TH1D *DAT_CS  = new TH1D("DAT_CS","DAT_CS",h_SS->GetNbinsX(),h_SS->GetXaxis()->GetXmin(),h_SS->GetXaxis()->GetXmax());
  for(int m=1; m<h_SS->GetNbinsX()+1; m++){
    DAT_SS->SetBinContent(m,h_SS->GetBinContent(m));
    DAT_CS->SetBinContent(m,h_CS->GetBinContent(m));
  }
  
  DAT_SS->SetLineColor(kBlue);
  DAT_SS->SetLineWidth(2);
  DAT_CS->SetLineColor(kRed);
  DAT_CS->SetLineWidth(2);
	
  DAT_SS->Sumw2();
  DAT_CS->Sumw2();
  DAT_SS->Scale(1/DAT_SS->Integral());
  DAT_CS->Scale(1/DAT_CS->Integral());
  DAT_SS->Sumw2();
  DAT_CS->Sumw2();

  TCanvas * c1 = new TCanvas("c1", "c1", 800, 600);
  DAT_CS->Draw("E");
  DAT_SS->Draw("Esame");
	
  DAT_CS->SetTitle(0);
  DAT_CS->GetXaxis()->SetTitle(variable_string);
  DAT_CS->GetYaxis()->SetTitle("Events");
  DAT_CS->GetYaxis()->SetTitleSize(0.045);
  DAT_CS->GetXaxis()->SetTitleSize(0.045);
  DAT_CS->GetYaxis()->SetLabelSize(0.045);
  DAT_CS->GetXaxis()->SetLabelSize(0.045);
  DAT_CS->GetYaxis()->SetTitleOffset(1);
	
  TLatex latexLabel2;
  latexLabel2.SetTextSize(0.04);
  latexLabel2.SetTextFont(32);
  latexLabel2.SetNDC();
  latexLabel2.DrawLatex(0.6, 0.86, "L = 19.6 fb^{-1} at #sqrt{s} = 8 TeV");
  
  TLegend *pl = new TLegend(0.12,0.73,0.25,0.89);
  pl->SetTextSize(0.05); 
  pl->SetFillColor(0);
  TLegendEntry *ple = pl->AddEntry(DAT_SS, "SS",  "L"); 
  ple = pl->AddEntry(DAT_CS, "CS",  "L"); 
  pl->Draw();
	

  if(save){
    DAT_SS->Write();
    DAT_CS->Write();
    c1->SaveAs(variable_string+"_"+sel+".png");
  }
}
