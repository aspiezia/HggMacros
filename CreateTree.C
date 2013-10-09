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
#include <iostream>

void CreateTree(bool save=false, TString sample="prova", TString sel="prova", TString variable_string="mass", int nbin=80, int nbin_min=100, int nbin_max=180)
{
  if(sample=="prova"){
    cout<<endl;
    cout<<"You have to provide 4 arguments:"<<endl;
    cout<<"    - boolean to save (true) or not save (false)"<<endl;
    cout<<"    - string for the sample you want to use ('CS' or 'SS')"<<endl;
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
	
  //  TFile *f2 = new TFile("/afs/cern.ch/work/a/aspiezia/Analysis_legacyV2/CMSSW_6_1_1/src/h2gglobe/AnalysisScripts/tree_legacy2.root"); //DATA
  //  TFile *f3 = new TFile("/afs/cern.ch/work/a/aspiezia/Analysis_legacyV2/CMSSW_6_1_1/src/h2gglobe/AnalysisScripts/tree_legacy2.root"); //SIGNAL
	
  //  TFile *f2 = new TFile("/afs/cern.ch/work/a/aspiezia/public/4Francesco/data.root"); //DATA
  TFile *f2 = new TFile("/tmp/micheli/data_bkg.root");
  TFile *f3 = new TFile("/afs/cern.ch/work/a/aspiezia/public/4Francesco/signal.root"); //SIGNAL
	

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
 
  // dijet variables_;
  float JetsMass_;
  float cosThetaStar_;

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


  TString rootfile_name = variable_string+"_"+sample+sel+".root";
  TFile fileTosave(rootfile_name,"recreate"); 

	
  TH1D *h_data; h_data  = new TH1D("","",nbin,nbin_min,nbin_max); 
  TH1D *h_data_photonPT_leadOverM=new TH1D("photonPT_leadOverM","photonPT_leadOverM",100,0.,4.);
  TH1D *h_data_photonPT_subleadOverM=new TH1D("photonPT_subleadOverM","photonPT_subleadOverM",100,0.,4.);
  TH1D *h_data_photonETA_lead=new TH1D("photonETA_lead","photonETA_lead",100,-3.,3.);
  TH1D *h_data_photonETA_sublead=new TH1D("photonETA_sublead","photonETA_sublead",100,-3.,3.);
  TH1D *h_data_cosdPhiGG=new TH1D("cosdPhiGG","cosdPhiGG",100,0.,1.);
  TH1D *h_data_sigmaMwvoM=new TH1D("sigmaMwvoM","sigmaMwvoM",100,0.,1.);
  TH1D *h_data_sigmaMrvoM=new TH1D("sigmaMrvoM","sigmaMrvoM",100,0.,1.);
  TH1D *h_data_vtxprob=new TH1D("vtxprob","vtxprob",100,0.,1.);
  TH1D *h_data_phoid_mvaout_lead=new TH1D("phoid_mvaout_lead","phoid_mvaout_lead",100,-1.,1.);
  TH1D *h_data_phoid_mvaout_sublead=new TH1D("phoid_mvaout_sublead","phoid_mvaout_sublead",100,-1.,1.);

  TTree treeDat("treeDat","treeDat");
  float diphoMVA_dat_=-99;
  float wgt_dat_=-99;
  float mass_dat_=-99;
  treeDat.Branch("mass",&mass_dat_,"mass/F");
  treeDat.Branch("diphoMVA",&diphoMVA_dat_,"diphoMVA/F");
  treeDat.Branch("wgt",&wgt_dat_,"wgt/F");
  Int_t nentries_data = (Int_t)s_data->GetEntries();
  for (Int_t i=0;i<nentries_data;i++) {
    s_data->GetEntry(i);
    if(variable_string=="mass")               variable_ = mass_;
    if(variable_string=="diphobdt_output")    variable_ = diphobdt_output_; 
		
    if(!(blind2_==1)) continue;
    if(!(mass_>100 && mass_<180)) continue;

    if((sel=="VHlep1")||(sel=="VHlep2")||(sel=="VHlep")){
      if(sample=="SS"){
	if(sel=="VHlep1") {if(category_!=7) continue;}
	if(sel=="VHlep2") {if(category_!=8) continue;}
	if(sel=="VHlep")  {if(!(category_==7 || category_==8)) continue;}
      }
      if(sample=="CS"){
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
      }
    }else if(sel=="ttHhad"){
      if(sample=="SS"){
	if(category_!=11)continue;
      }else if(sample=="CS"){
	//at least three jets and 0 btag medium
	if(photonPT_lead_<60*mass_/120.)continue;
	if(photonPT_sublead_<25.)continue;
	if(j3_pt_<25.)continue;
	if((j1_algoPF1_csvBtag_>0.679 || j2_algoPF1_csvBtag_>0.679 || j3_algoPF1_csvBtag_>0.679 ||j4_algoPF1_csvBtag_>0.679||
	    j5_algoPF1_csvBtag_>0.679 || j6_algoPF1_csvBtag_>0.679 || j7_algoPF1_csvBtag_>0.679 ||j8_algoPF1_csvBtag_>0.679||
	    j9_algoPF1_csvBtag_>0.679 || j10_algoPF1_csvBtag_>0.679))continue;
      }
    }else if (sel=="VHhadB"){
      if(sample=="SS"){
	if(category_!=12)continue;
      }else if (sample=="CS"){
	//same cut as vhhadbtag but inverted costheta
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
      }
    }else if (sel=="VHhad0"){
      if(sample=="SS"){
	if(category_!=13)continue;
      }else if (sample=="CS"){
	//same cut as vhhadbtag but inverted costheta
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
      }
    }else if (sel=="VHmetT"){
      if(sample=="SS"){
	if(category_!=9) continue;
      }
      if(sample=="CS"){
	if(!(photonETA_lead_<1.5 && photonETA_sublead_<1.5)) continue;
	if(!(dPhiMetGG_>2.1)) continue;
	if(!(dPhiMetJet_<2.7)) continue;
	if(!(met_>67 && met_<70)) continue;
      }
    }
    
    wgt_dat_ = weight_;
    diphoMVA_dat_ = diphobdt_output_;
    mass_dat_ = mass_;
    treeDat.Fill();
    h_data->Fill(variable_,weight_);
    h_data_photonPT_leadOverM->Fill(photonPT_leadOverM_,weight_);
    h_data_photonPT_subleadOverM->Fill(photonPT_subleadOverM_,weight_);
    h_data_photonETA_lead->Fill(photonETA_lead_,weight_);
    h_data_photonETA_sublead->Fill(photonETA_sublead_,weight_);
    h_data_cosdPhiGG->Fill(cosdPhiGG_,weight_);
    h_data_sigmaMwvoM->Fill(sigmaMwvoM_,weight_);
    h_data_sigmaMrvoM->Fill(sigmaMrvoM_,weight_);
    h_data_vtxprob->Fill(vtxprob_,weight_);
    h_data_phoid_mvaout_lead->Fill(phoid_mvaout_lead_,weight_);
    h_data_phoid_mvaout_sublead->Fill(phoid_mvaout_sublead_,weight_);
    //h_data->Sumw2();
  }
  cout<<"FMDEBUG:data ok"<<endl;	
  //------------------------------------------- SIGNAL -------------------------------------------//
  TTree treeSig("treeSig","treeSig");
  float diphoMVA_sig_=-99;
  float wgt_sig_=-99;
  float mass_sig_=-99;
  treeSig.Branch("mass",&mass_sig_,"mass/F");
  treeSig.Branch("diphoMVA",&diphoMVA_sig_,"diphoMVA/F");
  treeSig.Branch("wgt",&wgt_sig_,"wgt/F");
  vector<TString> names_sig;
  names_sig.clear();
  names_sig.push_back("wzh_m126_8TeV");
  names_sig.push_back("vbf_m126_8TeV");
  names_sig.push_back("tth_m126_8TeV");
  names_sig.push_back("ggh_m126_8TeV");
  TH1D *h_sig[4]; 
  TH1D *h_sig_photonPT_leadOverM[4];
  TH1D *h_sig_photonPT_subleadOverM[4];
  TH1D *h_sig_photonETA_lead[4];
  TH1D *h_sig_photonETA_sublead[4];
  TH1D *h_sig_cosdPhiGG[4];
  TH1D *h_sig_sigmaMwvoM[4];
  TH1D *h_sig_sigmaMrvoM[4];
  TH1D *h_sig_vtxprob[4];
  TH1D *h_sig_phoid_mvaout_lead[4];
  TH1D *h_sig_phoid_mvaout_sublead[4];

  for(unsigned int j=0; j<4; j++){

    TTree *s_sig   = (TTree*)f3->Get(names_sig[j]);
    h_sig[j] = new TH1D("","",nbin,nbin_min,nbin_max); 
    h_sig_photonPT_leadOverM[j] = new TH1D("","",100,0.,10.);
    h_sig_photonPT_subleadOverM[j] = new TH1D("","",100,0.,10.);
    h_sig_photonETA_lead[j] = new TH1D("","",100,-3.,3.);
    h_sig_photonETA_sublead[j] = new TH1D("","",100,-3.,3.);
    h_sig_cosdPhiGG[j] = new TH1D("","",100,0.,1.);
    h_sig_sigmaMwvoM[j] = new TH1D("","",100,0.,1.);
    h_sig_sigmaMrvoM[j] = new TH1D("","",100,0.,1.);
    h_sig_vtxprob[j] = new TH1D("","",100,0.,1.);
    h_sig_phoid_mvaout_lead[j] = new TH1D("","",100,-1.,1.);
    h_sig_phoid_mvaout_sublead[j] = new TH1D("","",100,-1.,1.);

    s_sig->SetMakeClass(1);
		
    s_sig->SetBranchAddress("dataset",&dataset_);
    s_sig->SetBranchAddress("weight",&weight_);
    s_sig->SetBranchAddress("met",&met_);
    s_sig->SetBranchAddress("mass",&mass_);
    s_sig->SetBranchAddress("leptonPt",&leptonPt_);
    s_sig->SetBranchAddress("photonPT_lead",&photonPT_lead_);
    s_sig->SetBranchAddress("photonPT_sublead",&photonPT_sublead_);
    s_sig->SetBranchAddress("photonPT_leadOverM",&photonPT_leadOverM_);
    s_sig->SetBranchAddress("photonPT_subleadOverM",&photonPT_subleadOverM_);
    s_sig->SetBranchAddress("photonETA_lead",&photonETA_lead_);
    s_sig->SetBranchAddress("photonETA_sublead",&photonETA_sublead_);
    s_sig->SetBranchAddress("cosdPhiGG",&cosdPhiGG_);
    s_sig->SetBranchAddress("sigmaMwvoM",&sigmaMwvoM_);
    s_sig->SetBranchAddress("sigmaMrvoM",&sigmaMrvoM_);
    s_sig->SetBranchAddress("vtxprob",&vtxprob_);
    s_sig->SetBranchAddress("phoid_mvaout_lead",&phoid_mvaout_lead_);
    s_sig->SetBranchAddress("phoid_mvaout_sublead",&phoid_mvaout_sublead_);
    s_sig->SetBranchAddress("dPhiMetGG",&dPhiMetGG_);
    s_sig->SetBranchAddress("dPhiMetJet",&dPhiMetJet_);
    s_sig->SetBranchAddress("deltaR_lead",&deltaR_lead_);
    s_sig->SetBranchAddress("deltaR_sublead",&deltaR_sublead_);
    s_sig->SetBranchAddress("electron_M_lead",&electron_M_lead_);
    s_sig->SetBranchAddress("electron_M_sublead",&electron_M_sublead_);
    s_sig->SetBranchAddress("Njet20",&Njet20_);
    s_sig->SetBranchAddress("eleMVA",&eleMVA_);
    s_sig->SetBranchAddress("leptonISO",&leptonISO_);
    s_sig->SetBranchAddress("leptonD0",&leptonD0_);
    s_sig->SetBranchAddress("leptonDZ",&leptonDZ_);
    s_sig->SetBranchAddress("diphobdt_output",&diphobdt_output_);
    s_sig->SetBranchAddress("blind2",&blind2_);
    s_sig->SetBranchAddress("electron",&electron_);
    s_sig->SetBranchAddress("muon",&muon_);
    s_sig->SetBranchAddress("njets_passing_kLooseID",&njets_passing_kLooseID_);
    s_sig->SetBranchAddress("j1_algoPF1_csvBtag",&j1_algoPF1_csvBtag_);
    s_sig->SetBranchAddress("j2_pt",&j2_pt_);
    s_sig->SetBranchAddress("j2_algoPF1_csvBtag",&j2_algoPF1_csvBtag_);
    s_sig->SetBranchAddress("j3_pt",&j3_pt_);
    s_sig->SetBranchAddress("j3_algoPF1_csvBtag",&j3_algoPF1_csvBtag_);
    s_sig->SetBranchAddress("j4_pt",&j4_pt_);
    s_sig->SetBranchAddress("j4_algoPF1_csvBtag",&j4_algoPF1_csvBtag_);
    s_sig->SetBranchAddress("j5_algoPF1_csvBtag",&j5_algoPF1_csvBtag_);
    s_sig->SetBranchAddress("j6_algoPF1_csvBtag",&j6_algoPF1_csvBtag_);
    s_sig->SetBranchAddress("j7_algoPF1_csvBtag",&j7_algoPF1_csvBtag_);
    s_sig->SetBranchAddress("j8_algoPF1_csvBtag",&j8_algoPF1_csvBtag_);
    s_sig->SetBranchAddress("j9_algoPF1_csvBtag",&j9_algoPF1_csvBtag_);
    s_sig->SetBranchAddress("j10_algoPF1_csvBtag",&j10_algoPF1_csvBtag_);
    s_sig->SetBranchAddress("JetsMass",&JetsMass_);
    s_sig->SetBranchAddress("cosThetaStar",&cosThetaStar_);
    s_sig->SetBranchAddress("category",&category_);
    s_sig->SetBranchAddress("dipho_pt",&dipho_pt_);

		
    Int_t nentries_sig = (Int_t)s_sig->GetEntries();
    for (Int_t i=0;i<nentries_sig;i++) {
      s_sig->GetEntry(i);
      if(variable_string=="mass")               variable_ = mass_;
      if(variable_string=="diphobdt_output")    variable_ = diphobdt_output_; 
			
      //if(!(blind2_==1)) continue;
      if(!(mass_>100 && mass_<180)) continue;
      
      if((sel=="VHlep1")||(sel=="VHlep2")||(sel=="VHlep")){
	if(sample=="SS"){
	  if(sel=="VHlep1") {if(category_!=7) continue;}
	  if(sel=="VHlep2") {if(category_!=8) continue;}
	  if(sel=="VHlep")  {if(!(category_==7 || category_==8)) continue;}
	}
	if(sample=="CS"){
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
	}
      }else if(sel=="ttHhad"){
	if(sample=="SS"){
	  if(category_!=11)continue;
	}else if(sample=="CS"){
	  //at least three jets and 0 btag medium
	  if(photonPT_lead_<60*mass_/120.)continue;
	  if(photonPT_sublead_<25.)continue;
	  if(j3_pt_<25.)continue;
	  if(dipho_pt_<50)continue;
	  if((j1_algoPF1_csvBtag_>0.679 || j2_algoPF1_csvBtag_>0.679 || j3_algoPF1_csvBtag_>0.679 ||j4_algoPF1_csvBtag_>0.679||
	      j5_algoPF1_csvBtag_>0.679 || j6_algoPF1_csvBtag_>0.679 || j7_algoPF1_csvBtag_>0.679 ||j8_algoPF1_csvBtag_>0.679||
	      j9_algoPF1_csvBtag_>0.679 || j10_algoPF1_csvBtag_>0.679))continue;
	}
      }else if (sel=="VHhadB"){
	if(sample=="SS"){
	  if(category_!=12)continue;
	}else if (sample=="CS"){
	  //same cut as vhhadbtag but inverted costheta
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
	}
      }else if (sel=="VHhad0"){
	if(sample=="SS"){
	  if(category_!=13)continue;
	}else if (sample=="CS"){
	  //same cut as vhhadbtag but inverted costheta
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
	}
      }else if (sel=="VHmetT"){
	if(sample=="SS"){
	  if(category_!=9) continue;
	}
	if(sample=="CS"){
	  if(!(photonETA_lead_<1.5 && photonETA_sublead_<1.5)) continue;
	  if(!(dPhiMetGG_>2.1)) continue;
	  if(!(dPhiMetJet_<2.7)) continue;
	  if(!(met_>67 && met_<70)) continue;
	}
      }
      
      wgt_sig_ = weight_;
      diphoMVA_sig_ = diphobdt_output_;
      mass_sig_ = mass_;
      treeSig.Fill();
      h_sig[j]->Fill(variable_,weight_);
      //      h_sig[j]->Sumw2();
      h_sig_photonPT_leadOverM[j]->Fill(photonPT_leadOverM_,weight_);
      //      h_sig_photonPT_leadOverM[j]->Sumw2();
      h_sig_photonPT_subleadOverM[j]->Fill(photonPT_subleadOverM_,weight_);
      //      h_sig_photonPT_subleadOverM[j]->Sumw2();
      h_sig_photonETA_lead[j]->Fill(photonETA_lead_,weight_);
      //      h_sig_photonETA_lead[j]->Sumw2();
      h_sig_photonETA_sublead[j]->Fill(photonETA_sublead_,weight_);
      //      h_sig_photonETA_sublead[j]->Sumw2();
      h_sig_cosdPhiGG[j]->Fill(cosdPhiGG_,weight_);
      //      h_sig_cosdPhiGG[j]->Sumw2();
      h_sig_sigmaMwvoM[j]->Fill(sigmaMwvoM_,weight_);
      //      h_sig_sigmaMwvoM[j]->Sumw2();
      h_sig_sigmaMrvoM[j]->Fill(sigmaMrvoM_,weight_);
      //      h_sig_sigmaMrvoM[j]->Sumw2();
      h_sig_vtxprob[j]->Fill(vtxprob_,weight_);
      //      h_sig_vtxprob[j]->Sumw2();
      h_sig_phoid_mvaout_lead[j]->Fill(phoid_mvaout_lead_,weight_);
      //      h_sig_phoid_mvaout_lead[j]->Sumw2();
      h_sig_phoid_mvaout_sublead[j]->Fill(phoid_mvaout_sublead_,weight_);
      //      h_sig_phoid_mvaout_sublead[j]->Sumw2();

    }
  }
    
    
  //------------------------------------------- BKG -------------------------------------------//
  cout<<"FMDEBUG:tree ok"<<endl;	
  TTree treeBkg("treeBkg","treeBkg");
  float diphoMVA_bkg_=-99;
  float wgt_bkg_=-99;
  float mass_bkg_=-99;
  treeBkg.Branch("mass",&mass_bkg_,"mass/F");
  treeBkg.Branch("diphoMVA",&diphoMVA_bkg_,"diphoMVA/F");
  treeBkg.Branch("wgt",&wgt_bkg_,"wgt/F");
  vector <TString> names_bkg;
  names_bkg.clear();
  names_bkg.push_back("diphojet_sherpa_8TeV");
  names_bkg.push_back("gjet_20_8TeV_pf");
  //names_bkg.push_back("gjet_40_8TeV_pf");
  /*  names_bkg.push_back("qcd_30_8TeV_ff");
  names_bkg.push_back("qcd_30_8TeV_pf");
  names_bkg.push_back("DYJetsToLL");
  names_bkg.push_back("ZGToLLG");
  names_bkg.push_back("WGToLNuG");
  names_bkg.push_back("ZGToLLG");
  names_bkg.push_back("WWJetsTo2L2Nu");
  names_bkg.push_back("WZJetsTo3LNu");
  names_bkg.push_back("ZZJetsTo2L2Nu");
  names_bkg.push_back("ZZJetsTo2L2Q");
  names_bkg.push_back("ZZJetsTo4L");
  names_bkg.push_back("Wpgg_dR02");
  names_bkg.push_back("Wmgg_dR02");
  names_bkg.push_back("Zgg_dR02");
  names_bkg.push_back("ttgg_dR02");*/
  const int Nbkg = names_bkg.size();
  TH1D *h_bkg[Nbkg];
  TH1D *h_bkg_photonPT_leadOverM[Nbkg];
  TH1D *h_bkg_photonPT_subleadOverM[Nbkg];
  TH1D *h_bkg_photonETA_lead[Nbkg];
  TH1D *h_bkg_photonETA_sublead[Nbkg];
  TH1D *h_bkg_cosdPhiGG[Nbkg];
  TH1D *h_bkg_sigmaMwvoM[Nbkg];
  TH1D *h_bkg_sigmaMrvoM[Nbkg];
  TH1D *h_bkg_vtxprob[Nbkg];
  TH1D *h_bkg_phoid_mvaout_lead[Nbkg];
  TH1D *h_bkg_phoid_mvaout_sublead[Nbkg];

   for(unsigned int j=0; j<names_bkg.size(); j++){
    TTree *s_bkg   = (TTree*)f2->Get(names_bkg[j]);
    h_bkg[j] = new TH1D("","",nbin,nbin_min,nbin_max); 
    s_bkg->SetMakeClass(1);
    h_bkg_photonPT_leadOverM[j] = new TH1D("","",100,0.,10.);
    h_bkg_photonPT_subleadOverM[j] = new TH1D("","",100,0.,10.);
    h_bkg_photonETA_lead[j] = new TH1D("","",100,-3.,3.);
    h_bkg_photonETA_sublead[j] = new TH1D("","",100,-3.,3.);
    h_bkg_cosdPhiGG[j] = new TH1D("","",100,0.,1.);
    h_bkg_sigmaMwvoM[j] = new TH1D("","",100,0.,1.);
    h_bkg_sigmaMrvoM[j] = new TH1D("","",100,0.,1.);
    h_bkg_vtxprob[j] = new TH1D("","",100,0.,1.);
    h_bkg_phoid_mvaout_lead[j] = new TH1D("","",100,-1.,1.);
    h_bkg_phoid_mvaout_sublead[j] = new TH1D("","",100,-1.,1.);

		
    s_bkg->SetBranchAddress("dataset",&dataset_);
    s_bkg->SetBranchAddress("weight",&weight_);
    s_bkg->SetBranchAddress("met",&met_);
    s_bkg->SetBranchAddress("mass",&mass_);
    s_bkg->SetBranchAddress("leptonPt",&leptonPt_);
    s_bkg->SetBranchAddress("photonPT_lead",&photonPT_lead_);
    s_bkg->SetBranchAddress("photonPT_sublead",&photonPT_sublead_);
    s_bkg->SetBranchAddress("photonETA_lead",&photonETA_lead_);
    s_bkg->SetBranchAddress("photonETA_sublead",&photonETA_sublead_);
    s_bkg->SetBranchAddress("dPhiMetGG",&dPhiMetGG_);
    s_bkg->SetBranchAddress("dPhiMetJet",&dPhiMetJet_);
    s_bkg->SetBranchAddress("deltaR_lead",&deltaR_lead_);
    s_bkg->SetBranchAddress("deltaR_sublead",&deltaR_sublead_);
    s_bkg->SetBranchAddress("electron_M_lead",&electron_M_lead_);
    s_bkg->SetBranchAddress("electron_M_sublead",&electron_M_sublead_);
    s_bkg->SetBranchAddress("Njet20",&Njet20_);
    s_bkg->SetBranchAddress("eleMVA",&eleMVA_);
    s_bkg->SetBranchAddress("leptonISO",&leptonISO_);
    s_bkg->SetBranchAddress("leptonD0",&leptonD0_);
    s_bkg->SetBranchAddress("leptonDZ",&leptonDZ_);
    s_bkg->SetBranchAddress("diphobdt_output",&diphobdt_output_);
    s_bkg->SetBranchAddress("blind2",&blind2_);
    s_bkg->SetBranchAddress("electron",&electron_);
    s_bkg->SetBranchAddress("muon",&muon_);
    s_bkg->SetBranchAddress("njets_passing_kLooseID",&njets_passing_kLooseID_);
    s_bkg->SetBranchAddress("j1_algoPF1_csvBtag",&j1_algoPF1_csvBtag_);
    s_bkg->SetBranchAddress("j2_pt",&j2_pt_);
    s_bkg->SetBranchAddress("j2_algoPF1_csvBtag",&j2_algoPF1_csvBtag_);
    s_bkg->SetBranchAddress("j3_pt",&j3_pt_);
    s_bkg->SetBranchAddress("j3_algoPF1_csvBtag",&j3_algoPF1_csvBtag_);
    s_bkg->SetBranchAddress("j4_pt",&j4_pt_);
    s_bkg->SetBranchAddress("j4_algoPF1_csvBtag",&j4_algoPF1_csvBtag_);
    s_bkg->SetBranchAddress("j5_algoPF1_csvBtag",&j5_algoPF1_csvBtag_);
    s_bkg->SetBranchAddress("j6_algoPF1_csvBtag",&j6_algoPF1_csvBtag_);
    s_bkg->SetBranchAddress("j7_algoPF1_csvBtag",&j7_algoPF1_csvBtag_);
    s_bkg->SetBranchAddress("j8_algoPF1_csvBtag",&j8_algoPF1_csvBtag_);
    s_bkg->SetBranchAddress("j9_algoPF1_csvBtag",&j9_algoPF1_csvBtag_);
    s_bkg->SetBranchAddress("j10_algoPF1_csvBtag",&j10_algoPF1_csvBtag_);
    s_bkg->SetBranchAddress("JetsMass",&JetsMass_);
    s_bkg->SetBranchAddress("cosThetaStar",&cosThetaStar_);
    s_bkg->SetBranchAddress("category",&category_);
    s_bkg->SetBranchAddress("dipho_pt",&dipho_pt_);

		
    Int_t nentries_bkg = (Int_t)s_bkg->GetEntries();
    for (Int_t i=0;i<nentries_bkg;i++) {
      s_bkg->GetEntry(i);
      if(variable_string=="mass")               variable_ = mass_;
      if(variable_string=="diphobdt_output")    variable_ = diphobdt_output_; 
			
      //if(!(blind2_==1)) continue;
      if(!(mass_>100 && mass_<180)) continue;
      
      if((sel=="VHlep1")||(sel=="VHlep2")||(sel=="VHlep")){
	if(sample=="SS"){
	  if(sel=="VHlep1") {if(category_!=7) continue;}
	  if(sel=="VHlep2") {if(category_!=8) continue;}
	  if(sel=="VHlep")  {if(!(category_==7 || category_==8)) continue;}
	}
	if(sample=="CS"){
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
	}
      }else if(sel=="ttHhad"){
	if(sample=="SS"){
	  if(category_!=11)continue;
	}else if(sample=="CS"){
	  //at least three jets and 0 btag medium
	  if(photonPT_lead_<60*mass_/120.)continue;
	  if(photonPT_sublead_<25.)continue;
	  if(j3_pt_<25.)continue;
	  if(dipho_pt_<50)continue;
	  if((j1_algoPF1_csvBtag_>0.679 || j2_algoPF1_csvBtag_>0.679 || j3_algoPF1_csvBtag_>0.679 ||j4_algoPF1_csvBtag_>0.679||
	      j5_algoPF1_csvBtag_>0.679 || j6_algoPF1_csvBtag_>0.679 || j7_algoPF1_csvBtag_>0.679 ||j8_algoPF1_csvBtag_>0.679||
	      j9_algoPF1_csvBtag_>0.679 || j10_algoPF1_csvBtag_>0.679))continue;
	}
      }else if (sel=="VHhadB"){
	if(sample=="SS"){
	  if(category_!=12)continue;
	}else if (sample=="CS"){
	  //same cut as vhhadbtag but inverted costheta
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
	}
      }else if (sel=="VHhad0"){
	if(sample=="SS"){
	  if(category_!=13)continue;
	}else if (sample=="CS"){
	  //same cut as vhhadbtag but inverted costheta
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
	}
      }else if (sel=="VHmetT"){
	if(sample=="SS"){
	  if(category_!=9) continue;
	}
	if(sample=="CS"){
	  if(!(photonETA_lead_<1.5 && photonETA_sublead_<1.5)) continue;
	  if(!(dPhiMetGG_>2.1)) continue;
	  if(!(dPhiMetJet_<2.7)) continue;
	  if(!(met_>67 && met_<70)) continue;
	}
      }
      
      wgt_bkg_ = weight_;
      diphoMVA_bkg_ = diphobdt_output_;
      mass_bkg_ = mass_;
      treeBkg.Fill();
      h_bkg[j]->Fill(variable_,weight_);
      //      h_bkg[j]->Sumw2();
      h_bkg_photonPT_leadOverM[j]->Fill(photonPT_leadOverM_,weight_);
      //      h_bkg_photonPT_leadOverM[j]->Sumw2();
      h_bkg_photonPT_subleadOverM[j]->Fill(photonPT_subleadOverM_,weight_);
      //      h_bkg_photonPT_subleadOverM[j]->Sumw2();
      h_bkg_photonETA_lead[j]->Fill(photonETA_lead_,weight_);
      //      h_bkg_photonETA_lead[j]->Sumw2();
      h_bkg_photonETA_sublead[j]->Fill(photonETA_sublead_,weight_);
      //      h_bkg_photonETA_sublead[j]->Sumw2();
      h_bkg_cosdPhiGG[j]->Fill(cosdPhiGG_,weight_);
      //      h_bkg_cosdPhiGG[j]->Sumw2();
      h_bkg_sigmaMwvoM[j]->Fill(sigmaMwvoM_,weight_);
      //      h_bkg_sigmaMwvoM[j]->Sumw2();
      h_bkg_sigmaMrvoM[j]->Fill(sigmaMrvoM_,weight_);
      //      h_bkg_sigmaMrvoM[j]->Sumw2();
      h_bkg_vtxprob[j]->Fill(vtxprob_,weight_);
      //      h_bkg_vtxprob[j]->Sumw2();
      h_bkg_phoid_mvaout_lead[j]->Fill(phoid_mvaout_lead_,weight_);
      //      h_bkg_phoid_mvaout_lead[j]->Sumw2();
      h_bkg_phoid_mvaout_sublead[j]->Fill(phoid_mvaout_sublead_,weight_);
      //      h_bkg_phoid_mvaout_sublead[j]->Sumw2();

    }
  }   
  cout<<"FMDEBUG:bkg ok"<<endl;		
  TH1D *DAT  = new TH1D("DAT","DAT",h_data->GetNbinsX(),h_data->GetXaxis()->GetXmin(),h_data->GetXaxis()->GetXmax());
  TH1D *SIG  = new TH1D("SIG","SIG",h_data->GetNbinsX(),h_data->GetXaxis()->GetXmin(),h_data->GetXaxis()->GetXmax());
  TH1D *BKG  = new TH1D("BKG","BKG",h_data->GetNbinsX(),h_data->GetXaxis()->GetXmin(),h_data->GetXaxis()->GetXmax());
  TH1D *ERR  = new TH1D("ERR","ERR",h_data->GetNbinsX(),h_data->GetXaxis()->GetXmin(),h_data->GetXaxis()->GetXmax());

  TH1D *DAT_photonPT_leadOverM  = new TH1D("DAT_photonPT_leadOverM","DAT_photonPT_leadOverM",h_data_photonPT_leadOverM->GetNbinsX(),h_data_photonPT_leadOverM->GetXaxis()->GetXmin(),h_data_photonPT_leadOverM->GetXaxis()->GetXmax());
  TH1D *SIG_photonPT_leadOverM  = new TH1D("SIG_photonPT_leadOverM","SIG_photonPT_leadOverM",h_data_photonPT_leadOverM->GetNbinsX(),h_data_photonPT_leadOverM->GetXaxis()->GetXmin(),h_data_photonPT_leadOverM->GetXaxis()->GetXmax());
  TH1D *BKG_photonPT_leadOverM  = new TH1D("BKG_photonPT_leadOverM","BKG_photonPT_leadOverM",h_data_photonPT_leadOverM->GetNbinsX(),h_data_photonPT_leadOverM->GetXaxis()->GetXmin(),h_data_photonPT_leadOverM->GetXaxis()->GetXmax());
  TH1D *ERR_photonPT_leadOverM  = new TH1D("ERR_photonPT_leadOverM","ERR_photonPT_leadOverM",h_data_photonPT_leadOverM->GetNbinsX(),h_data_photonPT_leadOverM->GetXaxis()->GetXmin(),h_data_photonPT_leadOverM->GetXaxis()->GetXmax());


  TH1D *DAT_photonPT_subleadOverM   = new TH1D("DAT_photonPT_subleadOverM","DAT_photonPT_subleadOverM",h_data_photonPT_subleadOverM ->GetNbinsX(),h_data_photonPT_subleadOverM ->GetXaxis()->GetXmin(),h_data_photonPT_subleadOverM ->GetXaxis()->GetXmax());
  TH1D *SIG_photonPT_subleadOverM   = new TH1D("SIG_photonPT_subleadOverM","SIG_photonPT_subleadOverM",h_data_photonPT_subleadOverM ->GetNbinsX(),h_data_photonPT_subleadOverM ->GetXaxis()->GetXmin(),h_data_photonPT_subleadOverM ->GetXaxis()->GetXmax());
  TH1D *BKG_photonPT_subleadOverM   = new TH1D("BKG_photonPT_subleadOverM","BKG_photonPT_subleadOverM",h_data_photonPT_subleadOverM ->GetNbinsX(),h_data_photonPT_subleadOverM ->GetXaxis()->GetXmin(),h_data_photonPT_subleadOverM ->GetXaxis()->GetXmax());
  TH1D *ERR_photonPT_subleadOverM   = new TH1D("ERR_photonPT_subleadOverM","ERR_photonPT_subleadOverM",h_data_photonPT_subleadOverM ->GetNbinsX(),h_data_photonPT_subleadOverM ->GetXaxis()->GetXmin(),h_data_photonPT_subleadOverM ->GetXaxis()->GetXmax());

  TH1D *DAT_photonETA_lead   = new TH1D("DAT_photonETA_lead","DAT_photonETA_lead",h_data_photonETA_lead ->GetNbinsX(),h_data_photonETA_lead ->GetXaxis()->GetXmin(),h_data_photonETA_lead ->GetXaxis()->GetXmax());
  TH1D *SIG_photonETA_lead   = new TH1D("SIG_photonETA_lead","SIG_photonETA_lead",h_data_photonETA_lead ->GetNbinsX(),h_data_photonETA_lead ->GetXaxis()->GetXmin(),h_data_photonETA_lead ->GetXaxis()->GetXmax());
  TH1D *BKG_photonETA_lead   = new TH1D("BKG_photonETA_lead","BKG_photonETA_lead",h_data_photonETA_lead ->GetNbinsX(),h_data_photonETA_lead ->GetXaxis()->GetXmin(),h_data_photonETA_lead ->GetXaxis()->GetXmax());
  TH1D *ERR_photonETA_lead   = new TH1D("ERR_photonETA_lead","ERR_photonETA_lead",h_data_photonETA_lead ->GetNbinsX(),h_data_photonETA_lead ->GetXaxis()->GetXmin(),h_data_photonETA_lead ->GetXaxis()->GetXmax());


  TH1D *DAT_photonETA_sublead   = new TH1D("DAT_photonETA_sublead","DAT_photonETA_sublead",h_data_photonETA_sublead ->GetNbinsX(),h_data_photonETA_sublead ->GetXaxis()->GetXmin(),h_data_photonETA_sublead ->GetXaxis()->GetXmax());
  TH1D *SIG_photonETA_sublead   = new TH1D("SIG_photonETA_sublead","SIG_photonETA_sublead",h_data_photonETA_sublead ->GetNbinsX(),h_data_photonETA_sublead ->GetXaxis()->GetXmin(),h_data_photonETA_sublead ->GetXaxis()->GetXmax());
  TH1D *BKG_photonETA_sublead   = new TH1D("BKG_photonETA_sublead","BKG_photonETA_sublead",h_data_photonETA_sublead ->GetNbinsX(),h_data_photonETA_sublead ->GetXaxis()->GetXmin(),h_data_photonETA_sublead ->GetXaxis()->GetXmax());
  TH1D *ERR_photonETA_sublead   = new TH1D("ERR_photonETA_sublead","ERR_photonETA_sublead",h_data_photonETA_sublead ->GetNbinsX(),h_data_photonETA_sublead ->GetXaxis()->GetXmin(),h_data_photonETA_sublead ->GetXaxis()->GetXmax());


  TH1D *DAT_cosdPhiGG   = new TH1D("DAT_cosdPhiGG","DAT_cosdPhiGG",h_data_cosdPhiGG ->GetNbinsX(),h_data_cosdPhiGG ->GetXaxis()->GetXmin(),h_data_cosdPhiGG ->GetXaxis()->GetXmax());
  TH1D *SIG_cosdPhiGG   = new TH1D("SIG_cosdPhiGG","SIG_cosdPhiGG",h_data_cosdPhiGG ->GetNbinsX(),h_data_cosdPhiGG ->GetXaxis()->GetXmin(),h_data_cosdPhiGG ->GetXaxis()->GetXmax());
  TH1D *BKG_cosdPhiGG   = new TH1D("BKG_cosdPhiGG","BKG_cosdPhiGG",h_data_cosdPhiGG ->GetNbinsX(),h_data_cosdPhiGG ->GetXaxis()->GetXmin(),h_data_cosdPhiGG ->GetXaxis()->GetXmax());
  TH1D *ERR_cosdPhiGG   = new TH1D("ERR_cosdPhiGG","ERR_cosdPhiGG",h_data_cosdPhiGG ->GetNbinsX(),h_data_cosdPhiGG ->GetXaxis()->GetXmin(),h_data_cosdPhiGG ->GetXaxis()->GetXmax());


  TH1D *DAT_sigmaMwvoM   = new TH1D("DAT_sigmaMwvoM","DAT_sigmaMwvoM",h_data_sigmaMwvoM ->GetNbinsX(),h_data_sigmaMwvoM ->GetXaxis()->GetXmin(),h_data_sigmaMwvoM ->GetXaxis()->GetXmax());
  TH1D *SIG_sigmaMwvoM   = new TH1D("SIG_sigmaMwvoM","SIG_sigmaMwvoM",h_data_sigmaMwvoM ->GetNbinsX(),h_data_sigmaMwvoM ->GetXaxis()->GetXmin(),h_data_sigmaMwvoM ->GetXaxis()->GetXmax());
  TH1D *BKG_sigmaMwvoM   = new TH1D("BKG_sigmaMwvoM","BKG_sigmaMwvoM",h_data_sigmaMwvoM ->GetNbinsX(),h_data_sigmaMwvoM ->GetXaxis()->GetXmin(),h_data_sigmaMwvoM ->GetXaxis()->GetXmax());
  TH1D *ERR_sigmaMwvoM   = new TH1D("ERR_sigmaMwvoM","ERR_sigmaMwvoM",h_data_sigmaMwvoM ->GetNbinsX(),h_data_sigmaMwvoM ->GetXaxis()->GetXmin(),h_data_sigmaMwvoM ->GetXaxis()->GetXmax());


  TH1D *DAT_sigmaMrvoM   = new TH1D("DAT_sigmaMrvoM","DAT_sigmaMrvoM",h_data_sigmaMrvoM ->GetNbinsX(),h_data_sigmaMrvoM ->GetXaxis()->GetXmin(),h_data_sigmaMrvoM ->GetXaxis()->GetXmax());
  TH1D *SIG_sigmaMrvoM   = new TH1D("SIG_sigmaMrvoM","SIG_sigmaMrvoM",h_data_sigmaMrvoM ->GetNbinsX(),h_data_sigmaMrvoM ->GetXaxis()->GetXmin(),h_data_sigmaMrvoM ->GetXaxis()->GetXmax());
  TH1D *BKG_sigmaMrvoM   = new TH1D("BKG_sigmaMrvoM","BKG_sigmaMrvoM",h_data_sigmaMrvoM ->GetNbinsX(),h_data_sigmaMrvoM ->GetXaxis()->GetXmin(),h_data_sigmaMrvoM ->GetXaxis()->GetXmax());
  TH1D *ERR_sigmaMrvoM   = new TH1D("ERR_sigmaMrvoM","ERR_sigmaMrvoM",h_data_sigmaMrvoM ->GetNbinsX(),h_data_sigmaMrvoM ->GetXaxis()->GetXmin(),h_data_sigmaMrvoM ->GetXaxis()->GetXmax());

  TH1D *DAT_vtxprob   = new TH1D("DAT_vtxprob","DAT_vtxprob",h_data_vtxprob ->GetNbinsX(),h_data_vtxprob ->GetXaxis()->GetXmin(),h_data_vtxprob ->GetXaxis()->GetXmax());
  TH1D *SIG_vtxprob   = new TH1D("SIG_vtxprob","SIG_vtxprob",h_data_vtxprob ->GetNbinsX(),h_data_vtxprob ->GetXaxis()->GetXmin(),h_data_vtxprob ->GetXaxis()->GetXmax());
  TH1D *BKG_vtxprob   = new TH1D("BKG_vtxprob","BKG_vtxprob",h_data_vtxprob ->GetNbinsX(),h_data_vtxprob ->GetXaxis()->GetXmin(),h_data_vtxprob ->GetXaxis()->GetXmax());
  TH1D *ERR_vtxprob   = new TH1D("ERR_vtxprob","ERR_vtxprob",h_data_vtxprob ->GetNbinsX(),h_data_vtxprob ->GetXaxis()->GetXmin(),h_data_vtxprob ->GetXaxis()->GetXmax());


  TH1D *DAT_phoid_mvaout_lead   = new TH1D("DAT_phoid_mvaout_lead","DAT_phoid_mvaout_lead",h_data_phoid_mvaout_lead ->GetNbinsX(),h_data_phoid_mvaout_lead ->GetXaxis()->GetXmin(),h_data_phoid_mvaout_lead ->GetXaxis()->GetXmax());
  TH1D *SIG_phoid_mvaout_lead   = new TH1D("SIG_phoid_mvaout_lead","SIG_phoid_mvaout_lead",h_data_phoid_mvaout_lead ->GetNbinsX(),h_data_phoid_mvaout_lead ->GetXaxis()->GetXmin(),h_data_phoid_mvaout_lead ->GetXaxis()->GetXmax());
  TH1D *BKG_phoid_mvaout_lead   = new TH1D("BKG_phoid_mvaout_lead","BKG_phoid_mvaout_lead",h_data_phoid_mvaout_lead ->GetNbinsX(),h_data_phoid_mvaout_lead ->GetXaxis()->GetXmin(),h_data_phoid_mvaout_lead ->GetXaxis()->GetXmax());
  TH1D *ERR_phoid_mvaout_lead   = new TH1D("ERR_phoid_mvaout_lead","ERR_phoid_mvaout_lead",h_data_phoid_mvaout_lead ->GetNbinsX(),h_data_phoid_mvaout_lead ->GetXaxis()->GetXmin(),h_data_phoid_mvaout_lead ->GetXaxis()->GetXmax());


  TH1D *DAT_phoid_mvaout_sublead   = new TH1D("DAT_phoid_mvaout_sublead","DAT_phoid_mvaout_sublead",h_data_phoid_mvaout_sublead ->GetNbinsX(),h_data_phoid_mvaout_sublead ->GetXaxis()->GetXmin(),h_data_phoid_mvaout_sublead ->GetXaxis()->GetXmax());
  TH1D *SIG_phoid_mvaout_sublead   = new TH1D("SIG_phoid_mvaout_sublead","SIG_phoid_mvaout_sublead",h_data_phoid_mvaout_sublead ->GetNbinsX(),h_data_phoid_mvaout_sublead ->GetXaxis()->GetXmin(),h_data_phoid_mvaout_sublead ->GetXaxis()->GetXmax());
  TH1D *BKG_phoid_mvaout_sublead   = new TH1D("BKG_phoid_mvaout_sublead","BKG_phoid_mvaout_sublead",h_data_phoid_mvaout_sublead ->GetNbinsX(),h_data_phoid_mvaout_sublead ->GetXaxis()->GetXmin(),h_data_phoid_mvaout_sublead ->GetXaxis()->GetXmax());
  TH1D *ERR_phoid_mvaout_sublead   = new TH1D("ERR_phoid_mvaout_sublead","ERR_phoid_mvaout_sublead",h_data_phoid_mvaout_sublead ->GetNbinsX(),h_data_phoid_mvaout_sublead ->GetXaxis()->GetXmin(),h_data_phoid_mvaout_sublead ->GetXaxis()->GetXmax());


  for(int m=1; m<h_data->GetNbinsX()+1; m++){
    DAT->SetBinContent(m,h_data->GetBinContent(m));
    SIG->SetBinContent(m,h_sig[0]->GetBinContent(m)+h_sig[1]->GetBinContent(m)+h_sig[2]->GetBinContent(m)+h_sig[3]->GetBinContent(m));
    SIG->SetBinError(m,sqrt(h_sig[0]->GetBinError(m)*h_sig[0]->GetBinError(m)+h_sig[1]->GetBinError(m)*h_sig[1]->GetBinError(m)+
			    h_sig[2]->GetBinError(m)*h_sig[2]->GetBinError(m)+h_sig[3]->GetBinError(m)*h_sig[3]->GetBinError(m)));
    float bkg=0; float err_bkg=0;
    for(unsigned int j=0; j<names_bkg.size(); j++){
      bkg = bkg + h_bkg[j]->GetBinContent(m);
      err_bkg = err_bkg + h_bkg[j]->GetBinError(m)*h_bkg[j]->GetBinError(m);
    }
    BKG->SetBinContent(m,bkg);
    BKG->SetBinError(m,sqrt(err_bkg));
    ERR->SetBinContent(m,bkg);
    ERR->SetBinError(m,sqrt(err_bkg));

  }	
  
  ERR->SetFillStyle(3005);
  ERR->SetFillColor(12);
  ERR->SetLineColor(12);
  BKG->SetLineColor(1);
  BKG->SetLineWidth(2);
  DAT->SetLineColor(kBlue);
  DAT->SetLineWidth(2);
  SIG->SetLineColor(kRed);
  SIG->SetLineWidth(2);
	
  TCanvas * c1 = new TCanvas("c1", "c1", 800, 600);
  DAT->Draw("E");
  SIG->Draw("histo same");
  BKG->Draw("histo same");
  ERR->Draw("E2same");
	
  DAT->GetXaxis()->SetTitle(0);
  DAT->GetYaxis()->SetTitle("Events");
  DAT->GetYaxis()->SetTitleSize(0.045);
  DAT->GetXaxis()->SetTitleSize(0.045);
  DAT->GetYaxis()->SetLabelSize(0.045);
  DAT->GetXaxis()->SetLabelSize(0.045);
  DAT->GetYaxis()->SetTitleOffset(1);
  if(variable_string=="mass")            DAT->SetTitle("M(#gamma,#gamma)");
  if(variable_string=="diphobdt_output") DAT->SetTitle("Diphoton MVA output");
  DAT->SetMinimum(0);
	
  TLatex latexLabel2;
  latexLabel2.SetTextSize(0.04);
  latexLabel2.SetTextFont(32);
  latexLabel2.SetNDC();
  latexLabel2.DrawLatex(0.6, 0.86, "L = 19.6 fb^{-1} at #sqrt{s} = 8 TeV");

	
  if(save){
    DAT->Write();
    SIG->Write();
    BKG->Write();
    ERR->Write();
    treeBkg.Write();
    treeSig.Write();
    treeDat.Write();
  }

  ////photonPT_leadOverM
  for(int m=1; m<h_data_photonPT_leadOverM->GetNbinsX()+1; m++){
    DAT_photonPT_leadOverM->SetBinContent(m,h_data_photonPT_leadOverM->GetBinContent(m));
    SIG_photonPT_leadOverM->SetBinContent(m,h_sig_photonPT_leadOverM[0]->GetBinContent(m)+h_sig_photonPT_leadOverM[1]->GetBinContent(m)+h_sig_photonPT_leadOverM[2]->GetBinContent(m)+h_sig_photonPT_leadOverM[3]->GetBinContent(m));
    SIG_photonPT_leadOverM->SetBinError(m,sqrt(h_sig_photonPT_leadOverM[0]->GetBinError(m)*h_sig_photonPT_leadOverM[0]->GetBinError(m)+h_sig_photonPT_leadOverM[1]->GetBinError(m)*h_sig_photonPT_leadOverM[1]->GetBinError(m)+
			    h_sig_photonPT_leadOverM[2]->GetBinError(m)*h_sig_photonPT_leadOverM[2]->GetBinError(m)+h_sig_photonPT_leadOverM[3]->GetBinError(m)*h_sig_photonPT_leadOverM[3]->GetBinError(m)));
    float bkg=0; float err_bkg=0;
    for(unsigned int j=0; j<names_bkg.size(); j++){
      bkg = bkg + h_bkg_photonPT_leadOverM[j]->GetBinContent(m);
      err_bkg = err_bkg + h_bkg_photonPT_leadOverM[j]->GetBinError(m)*h_bkg_photonPT_leadOverM[j]->GetBinError(m);
    }
    BKG_photonPT_leadOverM->SetBinContent(m,bkg);
    BKG_photonPT_leadOverM->SetBinError(m,sqrt(err_bkg));
    ERR_photonPT_leadOverM->SetBinContent(m,bkg);
    ERR_photonPT_leadOverM->SetBinError(m,sqrt(err_bkg));

  }	
  
  ERR_photonPT_leadOverM->SetFillStyle(3005);
  ERR_photonPT_leadOverM->SetFillColor(12);
  ERR_photonPT_leadOverM->SetLineColor(12);
  BKG_photonPT_leadOverM->SetLineColor(1);
  BKG_photonPT_leadOverM->SetLineWidth(2);
  DAT_photonPT_leadOverM->SetLineColor(kBlue);
  DAT_photonPT_leadOverM->SetLineWidth(2);
  SIG_photonPT_leadOverM->SetLineColor(kRed);
  SIG_photonPT_leadOverM->SetLineWidth(2);
	
  TCanvas * c1_photonPT_leadOverM = new TCanvas("c1", "c1", 800, 600);
  DAT_photonPT_leadOverM->Draw("E");
  SIG_photonPT_leadOverM->Draw("histo same");
  BKG_photonPT_leadOverM->Draw("histo same");
  ERR_photonPT_leadOverM->Draw("E2same");
	
  DAT_photonPT_leadOverM->GetXaxis()->SetTitle(0);
  DAT_photonPT_leadOverM->GetYaxis()->SetTitle("Events");
  DAT_photonPT_leadOverM->GetYaxis()->SetTitleSize(0.045);
  DAT_photonPT_leadOverM->GetXaxis()->SetTitleSize(0.045);
  DAT_photonPT_leadOverM->GetYaxis()->SetLabelSize(0.045);
  DAT_photonPT_leadOverM->GetXaxis()->SetLabelSize(0.045);
  DAT_photonPT_leadOverM->GetYaxis()->SetTitleOffset(1);
  if(variable_string=="mass")            DAT_photonPT_leadOverM->SetTitle("M(#gamma,#gamma)");
  if(variable_string=="diphobdt_output") DAT_photonPT_leadOverM->SetTitle("Diphoton MVA output");
  DAT_photonPT_leadOverM->SetMinimum(0);
	
  TLatex latexLabel2_photonPT_leadOverM;
  latexLabel2_photonPT_leadOverM.SetTextSize(0.04);
  latexLabel2_photonPT_leadOverM.SetTextFont(32);
  latexLabel2_photonPT_leadOverM.SetNDC();
  latexLabel2_photonPT_leadOverM.DrawLatex(0.6, 0.86, "L = 19.6 fb^{-1} at #sqrt{s} = 8 TeV");

	
  if(save){
    DAT_photonPT_leadOverM->Write();
    SIG_photonPT_leadOverM->Write();
    BKG_photonPT_leadOverM->Write();
    ERR_photonPT_leadOverM->Write();
  }

  ////photonPT_subleadOverM
  for(int m=1; m<h_data_photonPT_subleadOverM->GetNbinsX()+1; m++){
    DAT_photonPT_subleadOverM->SetBinContent(m,h_data_photonPT_subleadOverM->GetBinContent(m));
    SIG_photonPT_subleadOverM->SetBinContent(m,h_sig_photonPT_subleadOverM[0]->GetBinContent(m)+h_sig_photonPT_subleadOverM[1]->GetBinContent(m)+h_sig_photonPT_subleadOverM[2]->GetBinContent(m)+h_sig_photonPT_subleadOverM[3]->GetBinContent(m));
    SIG_photonPT_subleadOverM->SetBinError(m,sqrt(h_sig_photonPT_subleadOverM[0]->GetBinError(m)*h_sig_photonPT_subleadOverM[0]->GetBinError(m)+h_sig_photonPT_subleadOverM[1]->GetBinError(m)*h_sig_photonPT_subleadOverM[1]->GetBinError(m)+
			    h_sig_photonPT_subleadOverM[2]->GetBinError(m)*h_sig_photonPT_subleadOverM[2]->GetBinError(m)+h_sig_photonPT_subleadOverM[3]->GetBinError(m)*h_sig_photonPT_subleadOverM[3]->GetBinError(m)));
    float bkg=0; float err_bkg=0;
    for(unsigned int j=0; j<names_bkg.size(); j++){
      bkg = bkg + h_bkg_photonPT_subleadOverM[j]->GetBinContent(m);
      err_bkg = err_bkg + h_bkg_photonPT_subleadOverM[j]->GetBinError(m)*h_bkg_photonPT_subleadOverM[j]->GetBinError(m);
    }
    BKG_photonPT_subleadOverM->SetBinContent(m,bkg);
    BKG_photonPT_subleadOverM->SetBinError(m,sqrt(err_bkg));
    ERR_photonPT_subleadOverM->SetBinContent(m,bkg);
    ERR_photonPT_subleadOverM->SetBinError(m,sqrt(err_bkg));

  }	
  
  ERR_photonPT_subleadOverM->SetFillStyle(3005);
  ERR_photonPT_subleadOverM->SetFillColor(12);
  ERR_photonPT_subleadOverM->SetLineColor(12);
  BKG_photonPT_subleadOverM->SetLineColor(1);
  BKG_photonPT_subleadOverM->SetLineWidth(2);
  DAT_photonPT_subleadOverM->SetLineColor(kBlue);
  DAT_photonPT_subleadOverM->SetLineWidth(2);
  SIG_photonPT_subleadOverM->SetLineColor(kRed);
  SIG_photonPT_subleadOverM->SetLineWidth(2);
	
  TCanvas * c1_photonPT_subleadOverM = new TCanvas("c1", "c1", 800, 600);
  DAT_photonPT_subleadOverM->Draw("E");
  SIG_photonPT_subleadOverM->Draw("histo same");
  BKG_photonPT_subleadOverM->Draw("histo same");
  ERR_photonPT_subleadOverM->Draw("E2same");
	
  DAT_photonPT_subleadOverM->GetXaxis()->SetTitle(0);
  DAT_photonPT_subleadOverM->GetYaxis()->SetTitle("Events");
  DAT_photonPT_subleadOverM->GetYaxis()->SetTitleSize(0.045);
  DAT_photonPT_subleadOverM->GetXaxis()->SetTitleSize(0.045);
  DAT_photonPT_subleadOverM->GetYaxis()->SetLabelSize(0.045);
  DAT_photonPT_subleadOverM->GetXaxis()->SetLabelSize(0.045);
  DAT_photonPT_subleadOverM->GetYaxis()->SetTitleOffset(1);
  if(variable_string=="mass")            DAT_photonPT_subleadOverM->SetTitle("M(#gamma,#gamma)");
  if(variable_string=="diphobdt_output") DAT_photonPT_subleadOverM->SetTitle("Diphoton MVA output");
  DAT_photonPT_subleadOverM->SetMinimum(0);
	
  TLatex latexLabel2_photonPT_subleadOverM;
  latexLabel2_photonPT_subleadOverM.SetTextSize(0.04);
  latexLabel2_photonPT_subleadOverM.SetTextFont(32);
  latexLabel2_photonPT_subleadOverM.SetNDC();
  latexLabel2_photonPT_subleadOverM.DrawLatex(0.6, 0.86, "L = 19.6 fb^{-1} at #sqrt{s} = 8 TeV");

	
  if(save){
    DAT_photonPT_subleadOverM->Write();
    SIG_photonPT_subleadOverM->Write();
    BKG_photonPT_subleadOverM->Write();
    ERR_photonPT_subleadOverM->Write();
  }


  ////photonETA_lead
  for(int m=1; m<h_data_photonETA_lead->GetNbinsX()+1; m++){
    DAT_photonETA_lead->SetBinContent(m,h_data_photonETA_lead->GetBinContent(m));
    SIG_photonETA_lead->SetBinContent(m,h_sig_photonETA_lead[0]->GetBinContent(m)+h_sig_photonETA_lead[1]->GetBinContent(m)+h_sig_photonETA_lead[2]->GetBinContent(m)+h_sig_photonETA_lead[3]->GetBinContent(m));
    SIG_photonETA_lead->SetBinError(m,sqrt(h_sig_photonETA_lead[0]->GetBinError(m)*h_sig_photonETA_lead[0]->GetBinError(m)+h_sig_photonETA_lead[1]->GetBinError(m)*h_sig_photonETA_lead[1]->GetBinError(m)+
			    h_sig_photonETA_lead[2]->GetBinError(m)*h_sig_photonETA_lead[2]->GetBinError(m)+h_sig_photonETA_lead[3]->GetBinError(m)*h_sig_photonETA_lead[3]->GetBinError(m)));
    float bkg=0; float err_bkg=0;
    for(unsigned int j=0; j<names_bkg.size(); j++){
      bkg = bkg + h_bkg_photonETA_lead[j]->GetBinContent(m);
      err_bkg = err_bkg + h_bkg_photonETA_lead[j]->GetBinError(m)*h_bkg_photonETA_lead[j]->GetBinError(m);
    }
    BKG_photonETA_lead->SetBinContent(m,bkg);
    BKG_photonETA_lead->SetBinError(m,sqrt(err_bkg));
    ERR_photonETA_lead->SetBinContent(m,bkg);
    ERR_photonETA_lead->SetBinError(m,sqrt(err_bkg));

  }	
  
  ERR_photonETA_lead->SetFillStyle(3005);
  ERR_photonETA_lead->SetFillColor(12);
  ERR_photonETA_lead->SetLineColor(12);
  BKG_photonETA_lead->SetLineColor(1);
  BKG_photonETA_lead->SetLineWidth(2);
  DAT_photonETA_lead->SetLineColor(kBlue);
  DAT_photonETA_lead->SetLineWidth(2);
  SIG_photonETA_lead->SetLineColor(kRed);
  SIG_photonETA_lead->SetLineWidth(2);
	
  TCanvas * c1_photonETA_lead = new TCanvas("c1", "c1", 800, 600);
  DAT_photonETA_lead->Draw("E");
  SIG_photonETA_lead->Draw("histo same");
  BKG_photonETA_lead->Draw("histo same");
  ERR_photonETA_lead->Draw("E2same");
	
  DAT_photonETA_lead->GetXaxis()->SetTitle(0);
  DAT_photonETA_lead->GetYaxis()->SetTitle("Events");
  DAT_photonETA_lead->GetYaxis()->SetTitleSize(0.045);
  DAT_photonETA_lead->GetXaxis()->SetTitleSize(0.045);
  DAT_photonETA_lead->GetYaxis()->SetLabelSize(0.045);
  DAT_photonETA_lead->GetXaxis()->SetLabelSize(0.045);
  DAT_photonETA_lead->GetYaxis()->SetTitleOffset(1);
  if(variable_string=="mass")            DAT_photonETA_lead->SetTitle("M(#gamma,#gamma)");
  if(variable_string=="diphobdt_output") DAT_photonETA_lead->SetTitle("Diphoton MVA output");
  DAT_photonETA_lead->SetMinimum(0);
	
  TLatex latexLabel2_photonETA_lead;
  latexLabel2_photonETA_lead.SetTextSize(0.04);
  latexLabel2_photonETA_lead.SetTextFont(32);
  latexLabel2_photonETA_lead.SetNDC();
  latexLabel2_photonETA_lead.DrawLatex(0.6, 0.86, "L = 19.6 fb^{-1} at #sqrt{s} = 8 TeV");

	
  if(save){
    DAT_photonETA_lead->Write();
    SIG_photonETA_lead->Write();
    BKG_photonETA_lead->Write();
    ERR_photonETA_lead->Write();
  }

  ////photonETA_sublead
  for(int m=1; m<h_data_photonETA_sublead->GetNbinsX()+1; m++){
    DAT_photonETA_sublead->SetBinContent(m,h_data_photonETA_sublead->GetBinContent(m));
    SIG_photonETA_sublead->SetBinContent(m,h_sig_photonETA_sublead[0]->GetBinContent(m)+h_sig_photonETA_sublead[1]->GetBinContent(m)+h_sig_photonETA_sublead[2]->GetBinContent(m)+h_sig_photonETA_sublead[3]->GetBinContent(m));
    SIG_photonETA_sublead->SetBinError(m,sqrt(h_sig_photonETA_sublead[0]->GetBinError(m)*h_sig_photonETA_sublead[0]->GetBinError(m)+h_sig_photonETA_sublead[1]->GetBinError(m)*h_sig_photonETA_sublead[1]->GetBinError(m)+
			    h_sig_photonETA_sublead[2]->GetBinError(m)*h_sig_photonETA_sublead[2]->GetBinError(m)+h_sig_photonETA_sublead[3]->GetBinError(m)*h_sig_photonETA_sublead[3]->GetBinError(m)));
    float bkg=0; float err_bkg=0;
    for(unsigned int j=0; j<names_bkg.size(); j++){
      bkg = bkg + h_bkg_photonETA_sublead[j]->GetBinContent(m);
      err_bkg = err_bkg + h_bkg_photonETA_sublead[j]->GetBinError(m)*h_bkg_photonETA_sublead[j]->GetBinError(m);
    }
    BKG_photonETA_sublead->SetBinContent(m,bkg);
    BKG_photonETA_sublead->SetBinError(m,sqrt(err_bkg));
    ERR_photonETA_sublead->SetBinContent(m,bkg);
    ERR_photonETA_sublead->SetBinError(m,sqrt(err_bkg));

  }	
  
  ERR_photonETA_sublead->SetFillStyle(3005);
  ERR_photonETA_sublead->SetFillColor(12);
  ERR_photonETA_sublead->SetLineColor(12);
  BKG_photonETA_sublead->SetLineColor(1);
  BKG_photonETA_sublead->SetLineWidth(2);
  DAT_photonETA_sublead->SetLineColor(kBlue);
  DAT_photonETA_sublead->SetLineWidth(2);
  SIG_photonETA_sublead->SetLineColor(kRed);
  SIG_photonETA_sublead->SetLineWidth(2);
	
  TCanvas * c1_photonETA_sublead = new TCanvas("c1", "c1", 800, 600);
  DAT_photonETA_sublead->Draw("E");
  SIG_photonETA_sublead->Draw("histo same");
  BKG_photonETA_sublead->Draw("histo same");
  ERR_photonETA_sublead->Draw("E2same");
	
  DAT_photonETA_sublead->GetXaxis()->SetTitle(0);
  DAT_photonETA_sublead->GetYaxis()->SetTitle("Events");
  DAT_photonETA_sublead->GetYaxis()->SetTitleSize(0.045);
  DAT_photonETA_sublead->GetXaxis()->SetTitleSize(0.045);
  DAT_photonETA_sublead->GetYaxis()->SetLabelSize(0.045);
  DAT_photonETA_sublead->GetXaxis()->SetLabelSize(0.045);
  DAT_photonETA_sublead->GetYaxis()->SetTitleOffset(1);
  if(variable_string=="mass")            DAT_photonETA_sublead->SetTitle("M(#gamma,#gamma)");
  if(variable_string=="diphobdt_output") DAT_photonETA_sublead->SetTitle("Diphoton MVA output");
  DAT_photonETA_sublead->SetMinimum(0);
	
  TLatex latexLabel2_photonETA_sublead;
  latexLabel2_photonETA_sublead.SetTextSize(0.04);
  latexLabel2_photonETA_sublead.SetTextFont(32);
  latexLabel2_photonETA_sublead.SetNDC();
  latexLabel2_photonETA_sublead.DrawLatex(0.6, 0.86, "L = 19.6 fb^{-1} at #sqrt{s} = 8 TeV");

	
  if(save){
    DAT_photonETA_sublead->Write();
    SIG_photonETA_sublead->Write();
    BKG_photonETA_sublead->Write();
    ERR_photonETA_sublead->Write();
  }

  ////cosdPhiGG
  for(int m=1; m<h_data_cosdPhiGG->GetNbinsX()+1; m++){
    DAT_cosdPhiGG->SetBinContent(m,h_data_cosdPhiGG->GetBinContent(m));
    SIG_cosdPhiGG->SetBinContent(m,h_sig_cosdPhiGG[0]->GetBinContent(m)+h_sig_cosdPhiGG[1]->GetBinContent(m)+h_sig_cosdPhiGG[2]->GetBinContent(m)+h_sig_cosdPhiGG[3]->GetBinContent(m));
    SIG_cosdPhiGG->SetBinError(m,sqrt(h_sig_cosdPhiGG[0]->GetBinError(m)*h_sig_cosdPhiGG[0]->GetBinError(m)+h_sig_cosdPhiGG[1]->GetBinError(m)*h_sig_cosdPhiGG[1]->GetBinError(m)+
			    h_sig_cosdPhiGG[2]->GetBinError(m)*h_sig_cosdPhiGG[2]->GetBinError(m)+h_sig_cosdPhiGG[3]->GetBinError(m)*h_sig_cosdPhiGG[3]->GetBinError(m)));
    float bkg=0; float err_bkg=0;
    for(unsigned int j=0; j<names_bkg.size(); j++){
      bkg = bkg + h_bkg_cosdPhiGG[j]->GetBinContent(m);
      err_bkg = err_bkg + h_bkg_cosdPhiGG[j]->GetBinError(m)*h_bkg_cosdPhiGG[j]->GetBinError(m);
    }
    BKG_cosdPhiGG->SetBinContent(m,bkg);
    BKG_cosdPhiGG->SetBinError(m,sqrt(err_bkg));
    ERR_cosdPhiGG->SetBinContent(m,bkg);
    ERR_cosdPhiGG->SetBinError(m,sqrt(err_bkg));

  }	
  
  ERR_cosdPhiGG->SetFillStyle(3005);
  ERR_cosdPhiGG->SetFillColor(12);
  ERR_cosdPhiGG->SetLineColor(12);
  BKG_cosdPhiGG->SetLineColor(1);
  BKG_cosdPhiGG->SetLineWidth(2);
  DAT_cosdPhiGG->SetLineColor(kBlue);
  DAT_cosdPhiGG->SetLineWidth(2);
  SIG_cosdPhiGG->SetLineColor(kRed);
  SIG_cosdPhiGG->SetLineWidth(2);
	
  TCanvas * c1_cosdPhiGG = new TCanvas("c1", "c1", 800, 600);
  DAT_cosdPhiGG->Draw("E");
  SIG_cosdPhiGG->Draw("histo same");
  BKG_cosdPhiGG->Draw("histo same");
  ERR_cosdPhiGG->Draw("E2same");
	
  DAT_cosdPhiGG->GetXaxis()->SetTitle(0);
  DAT_cosdPhiGG->GetYaxis()->SetTitle("Events");
  DAT_cosdPhiGG->GetYaxis()->SetTitleSize(0.045);
  DAT_cosdPhiGG->GetXaxis()->SetTitleSize(0.045);
  DAT_cosdPhiGG->GetYaxis()->SetLabelSize(0.045);
  DAT_cosdPhiGG->GetXaxis()->SetLabelSize(0.045);
  DAT_cosdPhiGG->GetYaxis()->SetTitleOffset(1);
  if(variable_string=="mass")            DAT_cosdPhiGG->SetTitle("M(#gamma,#gamma)");
  if(variable_string=="diphobdt_output") DAT_cosdPhiGG->SetTitle("Diphoton MVA output");
  DAT_cosdPhiGG->SetMinimum(0);
	
  TLatex latexLabel2_cosdPhiGG;
  latexLabel2_cosdPhiGG.SetTextSize(0.04);
  latexLabel2_cosdPhiGG.SetTextFont(32);
  latexLabel2_cosdPhiGG.SetNDC();
  latexLabel2_cosdPhiGG.DrawLatex(0.6, 0.86, "L = 19.6 fb^{-1} at #sqrt{s} = 8 TeV");

	
  if(save){
    DAT_cosdPhiGG->Write();
    SIG_cosdPhiGG->Write();
    BKG_cosdPhiGG->Write();
    ERR_cosdPhiGG->Write();
  }

  ////sigmaMwvoM
  for(int m=1; m<h_data_sigmaMwvoM->GetNbinsX()+1; m++){
    DAT_sigmaMwvoM->SetBinContent(m,h_data_sigmaMwvoM->GetBinContent(m));
    SIG_sigmaMwvoM->SetBinContent(m,h_sig_sigmaMwvoM[0]->GetBinContent(m)+h_sig_sigmaMwvoM[1]->GetBinContent(m)+h_sig_sigmaMwvoM[2]->GetBinContent(m)+h_sig_sigmaMwvoM[3]->GetBinContent(m));
    SIG_sigmaMwvoM->SetBinError(m,sqrt(h_sig_sigmaMwvoM[0]->GetBinError(m)*h_sig_sigmaMwvoM[0]->GetBinError(m)+h_sig_sigmaMwvoM[1]->GetBinError(m)*h_sig_sigmaMwvoM[1]->GetBinError(m)+
			    h_sig_sigmaMwvoM[2]->GetBinError(m)*h_sig_sigmaMwvoM[2]->GetBinError(m)+h_sig_sigmaMwvoM[3]->GetBinError(m)*h_sig_sigmaMwvoM[3]->GetBinError(m)));
    float bkg=0; float err_bkg=0;
    for(unsigned int j=0; j<names_bkg.size(); j++){
      bkg = bkg + h_bkg_sigmaMwvoM[j]->GetBinContent(m);
      err_bkg = err_bkg + h_bkg_sigmaMwvoM[j]->GetBinError(m)*h_bkg_sigmaMwvoM[j]->GetBinError(m);
    }
    BKG_sigmaMwvoM->SetBinContent(m,bkg);
    BKG_sigmaMwvoM->SetBinError(m,sqrt(err_bkg));
    ERR_sigmaMwvoM->SetBinContent(m,bkg);
    ERR_sigmaMwvoM->SetBinError(m,sqrt(err_bkg));

  }	
  
  ERR_sigmaMwvoM->SetFillStyle(3005);
  ERR_sigmaMwvoM->SetFillColor(12);
  ERR_sigmaMwvoM->SetLineColor(12);
  BKG_sigmaMwvoM->SetLineColor(1);
  BKG_sigmaMwvoM->SetLineWidth(2);
  DAT_sigmaMwvoM->SetLineColor(kBlue);
  DAT_sigmaMwvoM->SetLineWidth(2);
  SIG_sigmaMwvoM->SetLineColor(kRed);
  SIG_sigmaMwvoM->SetLineWidth(2);
	
  TCanvas * c1_sigmaMwvoM = new TCanvas("c1", "c1", 800, 600);
  DAT_sigmaMwvoM->Draw("E");
  SIG_sigmaMwvoM->Draw("histo same");
  BKG_sigmaMwvoM->Draw("histo same");
  ERR_sigmaMwvoM->Draw("E2same");
	
  DAT_sigmaMwvoM->GetXaxis()->SetTitle(0);
  DAT_sigmaMwvoM->GetYaxis()->SetTitle("Events");
  DAT_sigmaMwvoM->GetYaxis()->SetTitleSize(0.045);
  DAT_sigmaMwvoM->GetXaxis()->SetTitleSize(0.045);
  DAT_sigmaMwvoM->GetYaxis()->SetLabelSize(0.045);
  DAT_sigmaMwvoM->GetXaxis()->SetLabelSize(0.045);
  DAT_sigmaMwvoM->GetYaxis()->SetTitleOffset(1);
  if(variable_string=="mass")            DAT_sigmaMwvoM->SetTitle("M(#gamma,#gamma)");
  if(variable_string=="diphobdt_output") DAT_sigmaMwvoM->SetTitle("Diphoton MVA output");
  DAT_sigmaMwvoM->SetMinimum(0);
	
  TLatex latexLabel2_sigmaMwvoM;
  latexLabel2_sigmaMwvoM.SetTextSize(0.04);
  latexLabel2_sigmaMwvoM.SetTextFont(32);
  latexLabel2_sigmaMwvoM.SetNDC();
  latexLabel2_sigmaMwvoM.DrawLatex(0.6, 0.86, "L = 19.6 fb^{-1} at #sqrt{s} = 8 TeV");

	
  if(save){
    DAT_sigmaMwvoM->Write();
    SIG_sigmaMwvoM->Write();
    BKG_sigmaMwvoM->Write();
    ERR_sigmaMwvoM->Write();
  }

  ////sigmaMrvoM
  for(int m=1; m<h_data_sigmaMrvoM->GetNbinsX()+1; m++){
    DAT_sigmaMrvoM->SetBinContent(m,h_data_sigmaMrvoM->GetBinContent(m));
    SIG_sigmaMrvoM->SetBinContent(m,h_sig_sigmaMrvoM[0]->GetBinContent(m)+h_sig_sigmaMrvoM[1]->GetBinContent(m)+h_sig_sigmaMrvoM[2]->GetBinContent(m)+h_sig_sigmaMrvoM[3]->GetBinContent(m));
    SIG_sigmaMrvoM->SetBinError(m,sqrt(h_sig_sigmaMrvoM[0]->GetBinError(m)*h_sig_sigmaMrvoM[0]->GetBinError(m)+h_sig_sigmaMrvoM[1]->GetBinError(m)*h_sig_sigmaMrvoM[1]->GetBinError(m)+
			    h_sig_sigmaMrvoM[2]->GetBinError(m)*h_sig_sigmaMrvoM[2]->GetBinError(m)+h_sig_sigmaMrvoM[3]->GetBinError(m)*h_sig_sigmaMrvoM[3]->GetBinError(m)));
    float bkg=0; float err_bkg=0;
    for(unsigned int j=0; j<names_bkg.size(); j++){
      bkg = bkg + h_bkg_sigmaMrvoM[j]->GetBinContent(m);
      err_bkg = err_bkg + h_bkg_sigmaMrvoM[j]->GetBinError(m)*h_bkg_sigmaMrvoM[j]->GetBinError(m);
    }
    BKG_sigmaMrvoM->SetBinContent(m,bkg);
    BKG_sigmaMrvoM->SetBinError(m,sqrt(err_bkg));
    ERR_sigmaMrvoM->SetBinContent(m,bkg);
    ERR_sigmaMrvoM->SetBinError(m,sqrt(err_bkg));

  }	
  
  ERR_sigmaMrvoM->SetFillStyle(3005);
  ERR_sigmaMrvoM->SetFillColor(12);
  ERR_sigmaMrvoM->SetLineColor(12);
  BKG_sigmaMrvoM->SetLineColor(1);
  BKG_sigmaMrvoM->SetLineWidth(2);
  DAT_sigmaMrvoM->SetLineColor(kBlue);
  DAT_sigmaMrvoM->SetLineWidth(2);
  SIG_sigmaMrvoM->SetLineColor(kRed);
  SIG_sigmaMrvoM->SetLineWidth(2);
	
  TCanvas * c1_sigmaMrvoM = new TCanvas("c1", "c1", 800, 600);
  DAT_sigmaMrvoM->Draw("E");
  SIG_sigmaMrvoM->Draw("histo same");
  BKG_sigmaMrvoM->Draw("histo same");
  ERR_sigmaMrvoM->Draw("E2same");
	
  DAT_sigmaMrvoM->GetXaxis()->SetTitle(0);
  DAT_sigmaMrvoM->GetYaxis()->SetTitle("Events");
  DAT_sigmaMrvoM->GetYaxis()->SetTitleSize(0.045);
  DAT_sigmaMrvoM->GetXaxis()->SetTitleSize(0.045);
  DAT_sigmaMrvoM->GetYaxis()->SetLabelSize(0.045);
  DAT_sigmaMrvoM->GetXaxis()->SetLabelSize(0.045);
  DAT_sigmaMrvoM->GetYaxis()->SetTitleOffset(1);
  if(variable_string=="mass")            DAT_sigmaMrvoM->SetTitle("M(#gamma,#gamma)");
  if(variable_string=="diphobdt_output") DAT_sigmaMrvoM->SetTitle("Diphoton MVA output");
  DAT_sigmaMrvoM->SetMinimum(0);
	
  TLatex latexLabel2_sigmaMrvoM;
  latexLabel2_sigmaMrvoM.SetTextSize(0.04);
  latexLabel2_sigmaMrvoM.SetTextFont(32);
  latexLabel2_sigmaMrvoM.SetNDC();
  latexLabel2_sigmaMrvoM.DrawLatex(0.6, 0.86, "L = 19.6 fb^{-1} at #sqrt{s} = 8 TeV");

	
  if(save){
    DAT_sigmaMrvoM->Write();
    SIG_sigmaMrvoM->Write();
    BKG_sigmaMrvoM->Write();
    ERR_sigmaMrvoM->Write();
  }

  ////vtxprob
  for(int m=1; m<h_data_vtxprob->GetNbinsX()+1; m++){
    DAT_vtxprob->SetBinContent(m,h_data_vtxprob->GetBinContent(m));
    SIG_vtxprob->SetBinContent(m,h_sig_vtxprob[0]->GetBinContent(m)+h_sig_vtxprob[1]->GetBinContent(m)+h_sig_vtxprob[2]->GetBinContent(m)+h_sig_vtxprob[3]->GetBinContent(m));
    SIG_vtxprob->SetBinError(m,sqrt(h_sig_vtxprob[0]->GetBinError(m)*h_sig_vtxprob[0]->GetBinError(m)+h_sig_vtxprob[1]->GetBinError(m)*h_sig_vtxprob[1]->GetBinError(m)+
			    h_sig_vtxprob[2]->GetBinError(m)*h_sig_vtxprob[2]->GetBinError(m)+h_sig_vtxprob[3]->GetBinError(m)*h_sig_vtxprob[3]->GetBinError(m)));
    float bkg=0; float err_bkg=0;
    for(unsigned int j=0; j<names_bkg.size(); j++){
      bkg = bkg + h_bkg_vtxprob[j]->GetBinContent(m);
      err_bkg = err_bkg + h_bkg_vtxprob[j]->GetBinError(m)*h_bkg_vtxprob[j]->GetBinError(m);
    }
    BKG_vtxprob->SetBinContent(m,bkg);
    BKG_vtxprob->SetBinError(m,sqrt(err_bkg));
    ERR_vtxprob->SetBinContent(m,bkg);
    ERR_vtxprob->SetBinError(m,sqrt(err_bkg));

  }	
  
  ERR_vtxprob->SetFillStyle(3005);
  ERR_vtxprob->SetFillColor(12);
  ERR_vtxprob->SetLineColor(12);
  BKG_vtxprob->SetLineColor(1);
  BKG_vtxprob->SetLineWidth(2);
  DAT_vtxprob->SetLineColor(kBlue);
  DAT_vtxprob->SetLineWidth(2);
  SIG_vtxprob->SetLineColor(kRed);
  SIG_vtxprob->SetLineWidth(2);
	
  TCanvas * c1_vtxprob = new TCanvas("c1", "c1", 800, 600);
  DAT_vtxprob->Draw("E");
  SIG_vtxprob->Draw("histo same");
  BKG_vtxprob->Draw("histo same");
  ERR_vtxprob->Draw("E2same");
	
  DAT_vtxprob->GetXaxis()->SetTitle(0);
  DAT_vtxprob->GetYaxis()->SetTitle("Events");
  DAT_vtxprob->GetYaxis()->SetTitleSize(0.045);
  DAT_vtxprob->GetXaxis()->SetTitleSize(0.045);
  DAT_vtxprob->GetYaxis()->SetLabelSize(0.045);
  DAT_vtxprob->GetXaxis()->SetLabelSize(0.045);
  DAT_vtxprob->GetYaxis()->SetTitleOffset(1);
  if(variable_string=="mass")            DAT_vtxprob->SetTitle("M(#gamma,#gamma)");
  if(variable_string=="diphobdt_output") DAT_vtxprob->SetTitle("Diphoton MVA output");
  DAT_vtxprob->SetMinimum(0);
	
  TLatex latexLabel2_vtxprob;
  latexLabel2_vtxprob.SetTextSize(0.04);
  latexLabel2_vtxprob.SetTextFont(32);
  latexLabel2_vtxprob.SetNDC();
  latexLabel2_vtxprob.DrawLatex(0.6, 0.86, "L = 19.6 fb^{-1} at #sqrt{s} = 8 TeV");

	
  if(save){
    DAT_vtxprob->Write();
    SIG_vtxprob->Write();
    BKG_vtxprob->Write();
    ERR_vtxprob->Write();
  }

  ////phoid_mvaout_lead
  for(int m=1; m<h_data_phoid_mvaout_lead->GetNbinsX()+1; m++){
    DAT_phoid_mvaout_lead->SetBinContent(m,h_data_phoid_mvaout_lead->GetBinContent(m));
    SIG_phoid_mvaout_lead->SetBinContent(m,h_sig_phoid_mvaout_lead[0]->GetBinContent(m)+h_sig_phoid_mvaout_lead[1]->GetBinContent(m)+h_sig_phoid_mvaout_lead[2]->GetBinContent(m)+h_sig_phoid_mvaout_lead[3]->GetBinContent(m));
    SIG_phoid_mvaout_lead->SetBinError(m,sqrt(h_sig_phoid_mvaout_lead[0]->GetBinError(m)*h_sig_phoid_mvaout_lead[0]->GetBinError(m)+h_sig_phoid_mvaout_lead[1]->GetBinError(m)*h_sig_phoid_mvaout_lead[1]->GetBinError(m)+
			    h_sig_phoid_mvaout_lead[2]->GetBinError(m)*h_sig_phoid_mvaout_lead[2]->GetBinError(m)+h_sig_phoid_mvaout_lead[3]->GetBinError(m)*h_sig_phoid_mvaout_lead[3]->GetBinError(m)));
    float bkg=0; float err_bkg=0;
    for(unsigned int j=0; j<names_bkg.size(); j++){
      bkg = bkg + h_bkg_phoid_mvaout_lead[j]->GetBinContent(m);
      err_bkg = err_bkg + h_bkg_phoid_mvaout_lead[j]->GetBinError(m)*h_bkg_phoid_mvaout_lead[j]->GetBinError(m);
    }
    BKG_phoid_mvaout_lead->SetBinContent(m,bkg);
    BKG_phoid_mvaout_lead->SetBinError(m,sqrt(err_bkg));
    ERR_phoid_mvaout_lead->SetBinContent(m,bkg);
    ERR_phoid_mvaout_lead->SetBinError(m,sqrt(err_bkg));

  }	
  
  ERR_phoid_mvaout_lead->SetFillStyle(3005);
  ERR_phoid_mvaout_lead->SetFillColor(12);
  ERR_phoid_mvaout_lead->SetLineColor(12);
  BKG_phoid_mvaout_lead->SetLineColor(1);
  BKG_phoid_mvaout_lead->SetLineWidth(2);
  DAT_phoid_mvaout_lead->SetLineColor(kBlue);
  DAT_phoid_mvaout_lead->SetLineWidth(2);
  SIG_phoid_mvaout_lead->SetLineColor(kRed);
  SIG_phoid_mvaout_lead->SetLineWidth(2);
	
  TCanvas * c1_phoid_mvaout_lead = new TCanvas("c1", "c1", 800, 600);
  DAT_phoid_mvaout_lead->Draw("E");
  SIG_phoid_mvaout_lead->Draw("histo same");
  BKG_phoid_mvaout_lead->Draw("histo same");
  ERR_phoid_mvaout_lead->Draw("E2same");
	
  DAT_phoid_mvaout_lead->GetXaxis()->SetTitle(0);
  DAT_phoid_mvaout_lead->GetYaxis()->SetTitle("Events");
  DAT_phoid_mvaout_lead->GetYaxis()->SetTitleSize(0.045);
  DAT_phoid_mvaout_lead->GetXaxis()->SetTitleSize(0.045);
  DAT_phoid_mvaout_lead->GetYaxis()->SetLabelSize(0.045);
  DAT_phoid_mvaout_lead->GetXaxis()->SetLabelSize(0.045);
  DAT_phoid_mvaout_lead->GetYaxis()->SetTitleOffset(1);
  if(variable_string=="mass")            DAT_phoid_mvaout_lead->SetTitle("M(#gamma,#gamma)");
  if(variable_string=="diphobdt_output") DAT_phoid_mvaout_lead->SetTitle("Diphoton MVA output");
  DAT_phoid_mvaout_lead->SetMinimum(0);
	
  TLatex latexLabel2_phoid_mvaout_lead;
  latexLabel2_phoid_mvaout_lead.SetTextSize(0.04);
  latexLabel2_phoid_mvaout_lead.SetTextFont(32);
  latexLabel2_phoid_mvaout_lead.SetNDC();
  latexLabel2_phoid_mvaout_lead.DrawLatex(0.6, 0.86, "L = 19.6 fb^{-1} at #sqrt{s} = 8 TeV");

	
  if(save){
    DAT_phoid_mvaout_lead->Write();
    SIG_phoid_mvaout_lead->Write();
    BKG_phoid_mvaout_lead->Write();
    ERR_phoid_mvaout_lead->Write();
  }

  ////phoid_mvaout_sublead
  for(int m=1; m<h_data_phoid_mvaout_sublead->GetNbinsX()+1; m++){
    DAT_phoid_mvaout_sublead->SetBinContent(m,h_data_phoid_mvaout_sublead->GetBinContent(m));
    SIG_phoid_mvaout_sublead->SetBinContent(m,h_sig_phoid_mvaout_sublead[0]->GetBinContent(m)+h_sig_phoid_mvaout_sublead[1]->GetBinContent(m)+h_sig_phoid_mvaout_sublead[2]->GetBinContent(m)+h_sig_phoid_mvaout_sublead[3]->GetBinContent(m));
    SIG_phoid_mvaout_sublead->SetBinError(m,sqrt(h_sig_phoid_mvaout_sublead[0]->GetBinError(m)*h_sig_phoid_mvaout_sublead[0]->GetBinError(m)+h_sig_phoid_mvaout_sublead[1]->GetBinError(m)*h_sig_phoid_mvaout_sublead[1]->GetBinError(m)+
			    h_sig_phoid_mvaout_sublead[2]->GetBinError(m)*h_sig_phoid_mvaout_sublead[2]->GetBinError(m)+h_sig_phoid_mvaout_sublead[3]->GetBinError(m)*h_sig_phoid_mvaout_sublead[3]->GetBinError(m)));
    float bkg=0; float err_bkg=0;
    for(unsigned int j=0; j<names_bkg.size(); j++){
      bkg = bkg + h_bkg_phoid_mvaout_sublead[j]->GetBinContent(m);
      err_bkg = err_bkg + h_bkg_phoid_mvaout_sublead[j]->GetBinError(m)*h_bkg_phoid_mvaout_sublead[j]->GetBinError(m);
    }
    BKG_phoid_mvaout_sublead->SetBinContent(m,bkg);
    BKG_phoid_mvaout_sublead->SetBinError(m,sqrt(err_bkg));
    ERR_phoid_mvaout_sublead->SetBinContent(m,bkg);
    ERR_phoid_mvaout_sublead->SetBinError(m,sqrt(err_bkg));

  }	
  
  ERR_phoid_mvaout_sublead->SetFillStyle(3005);
  ERR_phoid_mvaout_sublead->SetFillColor(12);
  ERR_phoid_mvaout_sublead->SetLineColor(12);
  BKG_phoid_mvaout_sublead->SetLineColor(1);
  BKG_phoid_mvaout_sublead->SetLineWidth(2);
  DAT_phoid_mvaout_sublead->SetLineColor(kBlue);
  DAT_phoid_mvaout_sublead->SetLineWidth(2);
  SIG_phoid_mvaout_sublead->SetLineColor(kRed);
  SIG_phoid_mvaout_sublead->SetLineWidth(2);
	
  TCanvas * c1_phoid_mvaout_sublead = new TCanvas("c1", "c1", 800, 600);
  DAT_phoid_mvaout_sublead->Draw("E");
  SIG_phoid_mvaout_sublead->Draw("histo same");
  BKG_phoid_mvaout_sublead->Draw("histo same");
  ERR_phoid_mvaout_sublead->Draw("E2same");
	
  DAT_phoid_mvaout_sublead->GetXaxis()->SetTitle(0);
  DAT_phoid_mvaout_sublead->GetYaxis()->SetTitle("Events");
  DAT_phoid_mvaout_sublead->GetYaxis()->SetTitleSize(0.045);
  DAT_phoid_mvaout_sublead->GetXaxis()->SetTitleSize(0.045);
  DAT_phoid_mvaout_sublead->GetYaxis()->SetLabelSize(0.045);
  DAT_phoid_mvaout_sublead->GetXaxis()->SetLabelSize(0.045);
  DAT_phoid_mvaout_sublead->GetYaxis()->SetTitleOffset(1);
  if(variable_string=="mass")            DAT_phoid_mvaout_sublead->SetTitle("M(#gamma,#gamma)");
  if(variable_string=="diphobdt_output") DAT_phoid_mvaout_sublead->SetTitle("Diphoton MVA output");
  DAT_phoid_mvaout_sublead->SetMinimum(0);
	
  TLatex latexLabel2_phoid_mvaout_sublead;
  latexLabel2_phoid_mvaout_sublead.SetTextSize(0.04);
  latexLabel2_phoid_mvaout_sublead.SetTextFont(32);
  latexLabel2_phoid_mvaout_sublead.SetNDC();
  latexLabel2_phoid_mvaout_sublead.DrawLatex(0.6, 0.86, "L = 19.6 fb^{-1} at #sqrt{s} = 8 TeV");

	
  if(save){
    DAT_phoid_mvaout_sublead->Write();
    SIG_phoid_mvaout_sublead->Write();
    BKG_phoid_mvaout_sublead->Write();
    ERR_phoid_mvaout_sublead->Write();
  }


}
