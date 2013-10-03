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
		cout<<"    - string for the category you want to use ('cat6' or 'cat7' or 'both'): if CS leave it empty!"<<endl;
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
	
	TFile *f2 = new TFile("../ROOT/tree_legacy.root"); //DATA
	TFile *f3 = new TFile("../ROOT/tree_legacy.root"); //SIGNAL
	
    //------------------------------------------- DATA -------------------------------------------//
    TTree *s_data   = (TTree*)f2->Get("Data");
    s_data->SetMakeClass(1);
	
	int dataset_;
	float weight_; float met_; float mass_;
	float leptonPt_; float photonPT_lead_; float photonPT_sublead_;
	float deltaR_lead_; float deltaR_sublead_;
	float electron_M_lead_; float electron_M_sublead_;
	int Njet20_; float eleMVA_;
	float leptonISO_; float leptonD0_; float leptonDZ_;
	float diphobdt_output_;
	int blind2_;
	int electron_; int muon_;
	float variable_;

	int njets_passing_kLooseID_;
	float j1_e_;
	float j1_pt_;
	float j1_phi_;
	float j1_eta_;
	float j1_beta_;
	float j1_betaStar_;
	float j1_betaStarClassic_;
	float j1_dR2Mean_;
	float j1_algoPF1_csvBtag_;
	float j2_e_;
	float j2_pt_;
	float j2_phi_;
	float j2_eta_;
	float j2_beta_;
	float j2_betaStar_;
	float j2_betaStarClassic_;
	float j2_dR2Mean_;
	float j2_algoPF1_csvBtag_;
	float j3_e_;
	float j3_pt_;
	float j3_phi_;
	float j3_eta_;
	float j3_beta_;
	float j3_betaStar_;
	float j3_betaStarClassic_;
	float j3_dR2Mean_;
	float j3_algoPF1_csvBtag_;
	float j4_e_;
	float j4_pt_;
	float j4_phi_;
	float j4_eta_;
	float j4_beta_;
	float j4_betaStar_;
	float j4_betaStarClassic_;
	float j4_dR2Mean_;
	float j4_algoPF1_csvBtag_;
	float j5_e_;
	float j5_pt_;
	float j5_phi_;
	float j5_eta_;
	float j5_beta_;
	float j5_betaStar_;
	float j5_betaStarClassic_;
	float j5_dR2Mean_;
	float j5_algoPF1_csvBtag_;
	float j6_e_;
	float j6_pt_;
	float j6_phi_;
	float j6_eta_;
	float j6_beta_;
	float j6_betaStar_;
	float j6_betaStarClassic_;
	float j6_dR2Mean_;
	float j6_algoPF1_csvBtag_;
	float j7_e_;
	float j7_pt_;
	float j7_phi_;
	float j7_eta_;
	float j7_beta_;
	float j7_betaStar_;
	float j7_betaStarClassic_;
	float j7_dR2Mean_;
	float j7_algoPF1_csvBtag_;
	float j8_e_;
	float j8_pt_;
	float j8_phi_;
	float j8_eta_;
	float j8_beta_;
	float j8_betaStar_;
	float j8_betaStarClassic_;
	float j8_dR2Mean_;
	float j8_algoPF1_csvBtag_;
	float j9_e_;
	float j9_pt_;
	float j9_phi_;
	float j9_eta_;
	float j9_beta_;
	float j9_betaStar_;
	float j9_betaStarClassic_;
	float j9_dR2Mean_;
	float j9_algoPF1_csvBtag_;
	float j10_e_;
	float j10_pt_;
	float j10_phi_;
	float j10_eta_;
	float j10_beta_;
	float j10_betaStar_;
	float j10_betaStarClassic_;
	float j10_dR2Mean_;
	float j10_algoPF1_csvBtag_;
 
	// dijet variables_;
	float JetsMass_;
	float dijet_E_;
	float dijet_Pt_;
	float dijet_Eta_;
	float dijet_Phi_;
	float cosThetaStar_;

	float category_;
	float dipho_pt_;

	s_data->SetBranchAddress("dataset",&dataset_);
	s_data->SetBranchAddress("weight",&weight_);
	s_data->SetBranchAddress("met",&met_);
	s_data->SetBranchAddress("mass",&mass_);
	s_data->SetBranchAddress("leptonPt",&leptonPt_);
	s_data->SetBranchAddress("photonPT_lead",&photonPT_lead_);
	s_data->SetBranchAddress("photonPT_sublead",&photonPT_sublead_);
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
	s_data->SetBranchAddress("j1_e",&j1_e_);
	s_data->SetBranchAddress("j1_pt",&j1_pt_);
	s_data->SetBranchAddress("j1_phi",&j1_phi_);
	s_data->SetBranchAddress("j1_eta",&j1_eta_);
	s_data->SetBranchAddress("j1_beta",&j1_beta_);
	s_data->SetBranchAddress("j1_betaStar",&j1_betaStar_);
	s_data->SetBranchAddress("j1_betaStarClassic",&j1_betaStarClassic_);
	s_data->SetBranchAddress("j1_dR2Mean",&j1_dR2Mean_);
	s_data->SetBranchAddress("j1_algoPF1_csvBtag",&j1_algoPF1_csvBtag_);
	s_data->SetBranchAddress("j2_e",&j2_e_);
	s_data->SetBranchAddress("j2_pt",&j2_pt_);
	s_data->SetBranchAddress("j2_phi",&j2_phi_);
	s_data->SetBranchAddress("j2_eta",&j2_eta_);
	s_data->SetBranchAddress("j2_beta",&j2_beta_);
	s_data->SetBranchAddress("j2_betaStar",&j2_betaStar_);
	s_data->SetBranchAddress("j2_betaStarClassic",&j2_betaStarClassic_);
	s_data->SetBranchAddress("j2_dR2Mean",&j2_dR2Mean_);
	s_data->SetBranchAddress("j2_algoPF1_csvBtag",&j2_algoPF1_csvBtag_);
	s_data->SetBranchAddress("j3_e",&j3_e_);
	s_data->SetBranchAddress("j3_pt",&j3_pt_);
	s_data->SetBranchAddress("j3_phi",&j3_phi_);
	s_data->SetBranchAddress("j3_eta",&j3_eta_);
	s_data->SetBranchAddress("j3_beta",&j3_beta_);
	s_data->SetBranchAddress("j3_betaStar",&j3_betaStar_);
	s_data->SetBranchAddress("j3_betaStarClassic",&j3_betaStarClassic_);
	s_data->SetBranchAddress("j3_dR2Mean",&j3_dR2Mean_);
	s_data->SetBranchAddress("j3_algoPF1_csvBtag",&j3_algoPF1_csvBtag_);
	s_data->SetBranchAddress("j4_e",&j4_e_);
	s_data->SetBranchAddress("j4_pt",&j4_pt_);
	s_data->SetBranchAddress("j4_phi",&j4_phi_);
	s_data->SetBranchAddress("j4_eta",&j4_eta_);
	s_data->SetBranchAddress("j4_beta",&j4_beta_);
	s_data->SetBranchAddress("j4_betaStar",&j4_betaStar_);
	s_data->SetBranchAddress("j4_betaStarClassic",&j4_betaStarClassic_);
	s_data->SetBranchAddress("j4_dR2Mean",&j4_dR2Mean_);
	s_data->SetBranchAddress("j4_algoPF1_csvBtag",&j4_algoPF1_csvBtag_);
	s_data->SetBranchAddress("j5_e",&j5_e_);
	s_data->SetBranchAddress("j5_pt",&j5_pt_);
	s_data->SetBranchAddress("j5_phi",&j5_phi_);
	s_data->SetBranchAddress("j5_eta",&j5_eta_);
	s_data->SetBranchAddress("j5_beta",&j5_beta_);
	s_data->SetBranchAddress("j5_betaStar",&j5_betaStar_);
	s_data->SetBranchAddress("j5_betaStarClassic",&j5_betaStarClassic_);
	s_data->SetBranchAddress("j5_dR2Mean",&j5_dR2Mean_);
	s_data->SetBranchAddress("j5_algoPF1_csvBtag",&j5_algoPF1_csvBtag_);
	s_data->SetBranchAddress("j6_e",&j6_e_);
	s_data->SetBranchAddress("j6_pt",&j6_pt_);
	s_data->SetBranchAddress("j6_phi",&j6_phi_);
	s_data->SetBranchAddress("j6_eta",&j6_eta_);
	s_data->SetBranchAddress("j6_beta",&j6_beta_);
	s_data->SetBranchAddress("j6_betaStar",&j6_betaStar_);
	s_data->SetBranchAddress("j6_betaStarClassic",&j6_betaStarClassic_);
	s_data->SetBranchAddress("j6_dR2Mean",&j6_dR2Mean_);
	s_data->SetBranchAddress("j6_algoPF1_csvBtag",&j6_algoPF1_csvBtag_);
	s_data->SetBranchAddress("j7_e",&j7_e_);
	s_data->SetBranchAddress("j7_pt",&j7_pt_);
	s_data->SetBranchAddress("j7_phi",&j7_phi_);
	s_data->SetBranchAddress("j7_eta",&j7_eta_);
	s_data->SetBranchAddress("j7_beta",&j7_beta_);
	s_data->SetBranchAddress("j7_betaStar",&j7_betaStar_);
	s_data->SetBranchAddress("j7_betaStarClassic",&j7_betaStarClassic_);
	s_data->SetBranchAddress("j7_dR2Mean",&j7_dR2Mean_);
	s_data->SetBranchAddress("j7_algoPF1_csvBtag",&j7_algoPF1_csvBtag_);
	s_data->SetBranchAddress("j8_e",&j8_e_);
	s_data->SetBranchAddress("j8_pt",&j8_pt_);
	s_data->SetBranchAddress("j8_phi",&j8_phi_);
	s_data->SetBranchAddress("j8_eta",&j8_eta_);
	s_data->SetBranchAddress("j8_beta",&j8_beta_);
	s_data->SetBranchAddress("j8_betaStar",&j8_betaStar_);
	s_data->SetBranchAddress("j8_betaStarClassic",&j8_betaStarClassic_);
	s_data->SetBranchAddress("j8_dR2Mean",&j8_dR2Mean_);
	s_data->SetBranchAddress("j8_algoPF1_csvBtag",&j8_algoPF1_csvBtag_);
	s_data->SetBranchAddress("j9_e",&j9_e_);
	s_data->SetBranchAddress("j9_pt",&j9_pt_);
	s_data->SetBranchAddress("j9_phi",&j9_phi_);
	s_data->SetBranchAddress("j9_eta",&j9_eta_);
	s_data->SetBranchAddress("j9_beta",&j9_beta_);
	s_data->SetBranchAddress("j9_betaStar",&j9_betaStar_);
	s_data->SetBranchAddress("j9_betaStarClassic",&j9_betaStarClassic_);
	s_data->SetBranchAddress("j9_dR2Mean",&j9_dR2Mean_);
	s_data->SetBranchAddress("j9_algoPF1_csvBtag",&j9_algoPF1_csvBtag_);
	s_data->SetBranchAddress("j10_e",&j10_e_);
	s_data->SetBranchAddress("j10_pt",&j10_pt_);
	s_data->SetBranchAddress("j10_phi",&j10_phi_);
	s_data->SetBranchAddress("j10_eta",&j10_eta_);
	s_data->SetBranchAddress("j10_beta",&j10_beta_);
	s_data->SetBranchAddress("j10_betaStar",&j10_betaStar_);
	s_data->SetBranchAddress("j10_betaStarClassic",&j10_betaStarClassic_);
	s_data->SetBranchAddress("j10_dR2Mean",&j10_dR2Mean_);
	s_data->SetBranchAddress("j10_algoPF1_csvBtag",&j10_algoPF1_csvBtag_);
 
	// dijet variables_;
	s_data->SetBranchAddress("JetsMass",&JetsMass_);
	s_data->SetBranchAddress("dijet_E",&dijet_E_);
	s_data->SetBranchAddress("dijet_Pt",&dijet_Pt_);
	s_data->SetBranchAddress("dijet_Eta",&dijet_Eta_);
	s_data->SetBranchAddress("dijet_Phi",&dijet_Phi_);
	s_data->SetBranchAddress("cosThetaStar",&cosThetaStar_);
	s_data->SetBranchAddress("category",&category_);
	s_data->SetBranchAddress("dipho_pt",&dipho_pt_);



	
    TH1D *h_data; h_data  = new TH1D("","",nbin,nbin_min,nbin_max); 
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
		if(variable_string=="met")                variable_ = met_;
		if(variable_string=="mass")               variable_ = mass_;
		if(variable_string=="leptonPt")           variable_ = leptonPt_;
		if(variable_string=="photonPT_lead")      variable_ = photonPT_lead_;
		if(variable_string=="photonPT_sublead")   variable_ = photonPT_sublead_;
		if(variable_string=="deltaR_lead")        variable_ = deltaR_lead_;
		if(variable_string=="deltaR_sublead")     variable_ = deltaR_sublead_;
		if(variable_string=="electron_M_lead")    variable_ = electron_M_lead_;
		if(variable_string=="electron_M_sublead") variable_ = electron_M_sublead_;
		if(variable_string=="Njet20")             variable_ = Njet20_;
		if(variable_string=="eleMVA")             variable_ = eleMVA_;
		if(variable_string=="leptonISO")          variable_ = leptonISO_;
		if(variable_string=="leptonD0")           variable_ = leptonD0_;
		if(variable_string=="leptonDZ")           variable_ = leptonDZ_;
		if(variable_string=="diphobdt_output")    variable_ = diphobdt_output_; 
		
		if(!(blind2_==1)) continue;
		if(!(mass_>100 && mass_<180)) continue;

		if((sel=="cat6")||(sel=="cat7")){
		  if(!(electron_==1 || muon_==1)) continue;
		  if(!(deltaR_lead_>0.5 && deltaR_sublead_>0.5)) continue;
		  if(!(leptonPt_>10)) continue;
		  if(sample=="CS"){
		    if(electron_==1){
		      if(!(eleMVA_>0.0)) continue;
		      if(!(electron_M_lead_<10 || electron_M_sublead_<10 || deltaR_lead_<1.0 || deltaR_sublead_<1.0)) continue;
		    }
		    if(muon_==1){
				if(!(deltaR_lead_<1.0 || deltaR_sublead_<1.0)) continue;
		    }
		  }
		  if(sample=="SS"){
		    if(electron_==1){
		      if(!(electron_M_lead_>10)) continue;
		      if(!(electron_M_sublead_>10)) continue;
		      if(!(eleMVA_>0.9)) continue;
		    }
		    if(!(deltaR_lead_>1.0)) continue;
		    if(!(deltaR_sublead_>1.0)) continue;
		    if(!(leptonPt_>20)) continue;
		    if(sel!="both"){
		      if(sel=="cat6") {if(!(met_>45)) continue;}
		      if(sel=="cat7") {if(!(met_<45)) continue;}
		    }
		  }
		}else if(sel=="ttHhad"){
		  if(sample="SS"){
		    if(category_!=10)continue;
		  }else if(sample=="CS"){
		    //at least three jets and 0 btag medium
		    if(photonPT_lead_<60*mass_/120.)continue;
		    if(photonPT_sublead_<25.)continue;
		    if(j3_pt<25.)continue;
		    if((j1_algoPF1_csvBtag_>0.679 || j2_algoPF1_csvBtag_>0.679 || j3_algoPF1_csvBtag_>0.679 ||j4_algoPF1_csvBtag_>0.679||
			 j5_algoPF1_csvBtag_>0.679 || j6_algoPF1_csvBtag_>0.679 || j7_algoPF1_csvBtag_>0.679 ||j8_algoPF1_csvBtag_>0.679||
			 j9_algoPF1_csvBtag_>0.679 || j10_algoPF1_csvBtag_>0.679))continue;
		  }
		}else if (sel=="VHhadbtag"){
		  if(sample="SS"){
		    if(category_!=11)continue;
		  }else if (sample="CS"){
		    //same cut as vhhadbtag but inverted costheta
		    if(photonPT_lead_<60*mass_/120.)continue;
		    if(photonPT_sublead_<25.)continue;
		    if(j2_pt<27.)continue;
		    if(j4_pt>20.)continue;
		    if(!(j1_algoPF1_csvBtag_>0.244 || j2_algoPF1_csvBtag_>0.244 || j3_algoPF1_csvBtag_>0.244 ||j4_algoPF1_csvBtag_>0.244||
			j5_algoPF1_csvBtag_>0.244 || j6_algoPF1_csvBtag_>0.244 || j7_algoPF1_csvBtag_>0.244 ||j8_algoPF1_csvBtag_>0.244||
			j9_algoPF1_csvBtag_>0.244 || j10_algoPF1_csvBtag_>0.244))continue;
		    if(dipho_pt<117*mass/120.)continue;
		    if(JetsMass<60. ||JetsMass>120.)continue;
		    if(cosThetaStar<0.56)continue;
		  }
		}else if (sel=="VHhad0tag"){
		  if(sample="SS"){
		    if(category_!=12)continue;
		  }else if (sample="CS"){
		    //same cut as vhhadbtag but inverted costheta
		    if(photonPT_lead_<60*mass_/120.)continue;
		    if(photonPT_sublead_<25.)continue;
		    if(j2_pt<40.)continue;
		    if(j4_pt>20.)continue;
		    if((j1_algoPF1_csvBtag_>0.244 || j2_algoPF1_csvBtag_>0.244 || j3_algoPF1_csvBtag_>0.244 ||j4_algoPF1_csvBtag_>0.244||
			j5_algoPF1_csvBtag_>0.244 || j6_algoPF1_csvBtag_>0.244 || j7_algoPF1_csvBtag_>0.244 ||j8_algoPF1_csvBtag_>0.244||
			j9_algoPF1_csvBtag_>0.244 || j10_algoPF1_csvBtag_>0.244))continue;
		    if(dipho_pt<130*mass/120.)continue;
		    if(JetsMass<60. ||JetsMass>120.)continue;
		    if(cosThetaStar<0.50)continue;
		  }
		}

		wgt_dat_ = weight_;
		diphoMVA_dat_ = diphobdt_output_;
		mass_dat_ = mass_;
		treeDat.Fill();
		h_data->Fill(variable_,weight_);
		h_data->Sumw2();
    }
	
    //------------------------------------------- SIGNAL -------------------------------------------//
	TTree treeSig("treeSig","treeSig");
	float diphoMVA_sig_=-99;
	float wgt_sig_=-99;
	float mass_sig_=-99;
	treeSig.Branch("mass",&mass_sig_,"mass/F");
	treeSig.Branch("diphoMVA",&diphoMVA_sig_,"diphoMVA/F");
	treeSig.Branch("wgt",&wgt_sig_,"wgt/F");
    vector<float> weight_sig;
    weight_sig.clear();
    vector<TString> names_sig;
    names_sig.clear();
    names_sig.push_back("wzh_m125_8TeV");
    names_sig.push_back("vbf_m125_8TeV");
    names_sig.push_back("tth_m125_8TeV");
    names_sig.push_back("ggh_m125_8TeV");
	TH1D *h_sig[4]; 
    for(unsigned int j=0; j<4; j++){
		TTree *s_sig   = (TTree*)f3->Get(names_sig[j]);
		h_sig[j] = new TH1D("","",nbin,nbin_min,nbin_max); 
		s_sig->SetMakeClass(1);
		
		s_sig->SetBranchAddress("dataset",&dataset_);
		s_sig->SetBranchAddress("weight",&weight_);
		s_sig->SetBranchAddress("met",&met_);
		s_sig->SetBranchAddress("mass",&mass_);
		s_sig->SetBranchAddress("leptonPt",&leptonPt_);
		s_sig->SetBranchAddress("photonPT_lead",&photonPT_lead_);
		s_sig->SetBranchAddress("photonPT_sublead",&photonPT_sublead_);
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
		s_sig->SetBranchAddress("j1_e",&j1_e_);
		s_sig->SetBranchAddress("j1_pt",&j1_pt_);
		s_sig->SetBranchAddress("j1_phi",&j1_phi_);
		s_sig->SetBranchAddress("j1_eta",&j1_eta_);
		s_sig->SetBranchAddress("j1_beta",&j1_beta_);
		s_sig->SetBranchAddress("j1_betaStar",&j1_betaStar_);
		s_sig->SetBranchAddress("j1_betaStarClassic",&j1_betaStarClassic_);
		s_sig->SetBranchAddress("j1_dR2Mean",&j1_dR2Mean_);
		s_sig->SetBranchAddress("j1_algoPF1_csvBtag",&j1_algoPF1_csvBtag_);
		s_sig->SetBranchAddress("j2_e",&j2_e_);
		s_sig->SetBranchAddress("j2_pt",&j2_pt_);
		s_sig->SetBranchAddress("j2_phi",&j2_phi_);
		s_sig->SetBranchAddress("j2_eta",&j2_eta_);
		s_sig->SetBranchAddress("j2_beta",&j2_beta_);
		s_sig->SetBranchAddress("j2_betaStar",&j2_betaStar_);
		s_sig->SetBranchAddress("j2_betaStarClassic",&j2_betaStarClassic_);
		s_sig->SetBranchAddress("j2_dR2Mean",&j2_dR2Mean_);
		s_sig->SetBranchAddress("j2_algoPF1_csvBtag",&j2_algoPF1_csvBtag_);
		s_sig->SetBranchAddress("j3_e",&j3_e_);
		s_sig->SetBranchAddress("j3_pt",&j3_pt_);
		s_sig->SetBranchAddress("j3_phi",&j3_phi_);
		s_sig->SetBranchAddress("j3_eta",&j3_eta_);
		s_sig->SetBranchAddress("j3_beta",&j3_beta_);
		s_sig->SetBranchAddress("j3_betaStar",&j3_betaStar_);
		s_sig->SetBranchAddress("j3_betaStarClassic",&j3_betaStarClassic_);
		s_sig->SetBranchAddress("j3_dR2Mean",&j3_dR2Mean_);
		s_sig->SetBranchAddress("j3_algoPF1_csvBtag",&j3_algoPF1_csvBtag_);
		s_sig->SetBranchAddress("j4_e",&j4_e_);
		s_sig->SetBranchAddress("j4_pt",&j4_pt_);
		s_sig->SetBranchAddress("j4_phi",&j4_phi_);
		s_sig->SetBranchAddress("j4_eta",&j4_eta_);
		s_sig->SetBranchAddress("j4_beta",&j4_beta_);
		s_sig->SetBranchAddress("j4_betaStar",&j4_betaStar_);
		s_sig->SetBranchAddress("j4_betaStarClassic",&j4_betaStarClassic_);
		s_sig->SetBranchAddress("j4_dR2Mean",&j4_dR2Mean_);
		s_sig->SetBranchAddress("j4_algoPF1_csvBtag",&j4_algoPF1_csvBtag_);
		s_sig->SetBranchAddress("j5_e",&j5_e_);
		s_sig->SetBranchAddress("j5_pt",&j5_pt_);
		s_sig->SetBranchAddress("j5_phi",&j5_phi_);
		s_sig->SetBranchAddress("j5_eta",&j5_eta_);
		s_sig->SetBranchAddress("j5_beta",&j5_beta_);
		s_sig->SetBranchAddress("j5_betaStar",&j5_betaStar_);
		s_sig->SetBranchAddress("j5_betaStarClassic",&j5_betaStarClassic_);
		s_sig->SetBranchAddress("j5_dR2Mean",&j5_dR2Mean_);
		s_sig->SetBranchAddress("j5_algoPF1_csvBtag",&j5_algoPF1_csvBtag_);
		s_sig->SetBranchAddress("j6_e",&j6_e_);
		s_sig->SetBranchAddress("j6_pt",&j6_pt_);
		s_sig->SetBranchAddress("j6_phi",&j6_phi_);
		s_sig->SetBranchAddress("j6_eta",&j6_eta_);
		s_sig->SetBranchAddress("j6_beta",&j6_beta_);
		s_sig->SetBranchAddress("j6_betaStar",&j6_betaStar_);
		s_sig->SetBranchAddress("j6_betaStarClassic",&j6_betaStarClassic_);
		s_sig->SetBranchAddress("j6_dR2Mean",&j6_dR2Mean_);
		s_sig->SetBranchAddress("j6_algoPF1_csvBtag",&j6_algoPF1_csvBtag_);
		s_sig->SetBranchAddress("j7_e",&j7_e_);
		s_sig->SetBranchAddress("j7_pt",&j7_pt_);
		s_sig->SetBranchAddress("j7_phi",&j7_phi_);
		s_sig->SetBranchAddress("j7_eta",&j7_eta_);
		s_sig->SetBranchAddress("j7_beta",&j7_beta_);
		s_sig->SetBranchAddress("j7_betaStar",&j7_betaStar_);
		s_sig->SetBranchAddress("j7_betaStarClassic",&j7_betaStarClassic_);
		s_sig->SetBranchAddress("j7_dR2Mean",&j7_dR2Mean_);
		s_sig->SetBranchAddress("j7_algoPF1_csvBtag",&j7_algoPF1_csvBtag_);
		s_sig->SetBranchAddress("j8_e",&j8_e_);
		s_sig->SetBranchAddress("j8_pt",&j8_pt_);
		s_sig->SetBranchAddress("j8_phi",&j8_phi_);
		s_sig->SetBranchAddress("j8_eta",&j8_eta_);
		s_sig->SetBranchAddress("j8_beta",&j8_beta_);
		s_sig->SetBranchAddress("j8_betaStar",&j8_betaStar_);
		s_sig->SetBranchAddress("j8_betaStarClassic",&j8_betaStarClassic_);
		s_sig->SetBranchAddress("j8_dR2Mean",&j8_dR2Mean_);
		s_sig->SetBranchAddress("j8_algoPF1_csvBtag",&j8_algoPF1_csvBtag_);
		s_sig->SetBranchAddress("j9_e",&j9_e_);
		s_sig->SetBranchAddress("j9_pt",&j9_pt_);
		s_sig->SetBranchAddress("j9_phi",&j9_phi_);
		s_sig->SetBranchAddress("j9_eta",&j9_eta_);
		s_sig->SetBranchAddress("j9_beta",&j9_beta_);
		s_sig->SetBranchAddress("j9_betaStar",&j9_betaStar_);
		s_sig->SetBranchAddress("j9_betaStarClassic",&j9_betaStarClassic_);
		s_sig->SetBranchAddress("j9_dR2Mean",&j9_dR2Mean_);
		s_sig->SetBranchAddress("j9_algoPF1_csvBtag",&j9_algoPF1_csvBtag_);
		s_sig->SetBranchAddress("j10_e",&j10_e_);
		s_sig->SetBranchAddress("j10_pt",&j10_pt_);
		s_sig->SetBranchAddress("j10_phi",&j10_phi_);
		s_sig->SetBranchAddress("j10_eta",&j10_eta_);
		s_sig->SetBranchAddress("j10_beta",&j10_beta_);
		s_sig->SetBranchAddress("j10_betaStar",&j10_betaStar_);
		s_sig->SetBranchAddress("j10_betaStarClassic",&j10_betaStarClassic_);
		s_sig->SetBranchAddress("j10_dR2Mean",&j10_dR2Mean_);
		s_sig->SetBranchAddress("j10_algoPF1_csvBtag",&j10_algoPF1_csvBtag_);
 
		// dijet variables_;
		s_sig->SetBranchAddress("JetsMass",&JetsMass_);
		s_sig->SetBranchAddress("dijet_E",&dijet_E_);
		s_sig->SetBranchAddress("dijet_Pt",&dijet_Pt_);
		s_sig->SetBranchAddress("dijet_Eta",&dijet_Eta_);
		s_sig->SetBranchAddress("dijet_Phi",&dijet_Phi_);
		s_sig->SetBranchAddress("cosThetaStar",&cosThetaStar_);
		s_sig->SetBranchAddress("category",&category_);
		s_sig->SetBranchAddress("dipho_pt",&dipho_pt_);

		
		Int_t nentries_sig = (Int_t)s_sig->GetEntries();
		for (Int_t i=0;i<nentries_sig;i++) {
			s_sig->GetEntry(i);
			if(variable_string=="met")                variable_ = met_;
			if(variable_string=="mass")               variable_ = mass_;
			if(variable_string=="leptonPt")           variable_ = leptonPt_;
			if(variable_string=="photonPT_lead")      variable_ = photonPT_lead_;
			if(variable_string=="photonPT_sublead")   variable_ = photonPT_sublead_;
			if(variable_string=="deltaR_lead")        variable_ = deltaR_lead_;
			if(variable_string=="deltaR_sublead")     variable_ = deltaR_sublead_;
			if(variable_string=="electron_M_lead")    variable_ = electron_M_lead_;
			if(variable_string=="electron_M_sublead") variable_ = electron_M_sublead_;
			if(variable_string=="Njet20")             variable_ = Njet20_;
			if(variable_string=="eleMVA")             variable_ = eleMVA_;
			if(variable_string=="leptonISO")          variable_ = leptonISO_;
			if(variable_string=="leptonD0")           variable_ = leptonD0_;
			if(variable_string=="leptonDZ")           variable_ = leptonDZ_;
			if(variable_string=="diphobdt_output")    variable_ = diphobdt_output_; 
			
			//if(!(blind2_==1)) continue;
			if(!(mass_>100 && mass_<180)) continue;
			if((sel=="cat6")||(sel=="cat7")){
			  if(!(electron_==1 || muon_==1)) continue;
			  if(!(deltaR_lead_>0.5 && deltaR_sublead_>0.5)) continue;
			  if(!(leptonPt_>10)) continue;
			  if(sample=="CS"){
			    if(electron_==1){
			      if(!(eleMVA_>0.9)) continue;
			      if(!(electron_M_lead_<10 || electron_M_sublead_<10 || deltaR_lead_<1.0 || deltaR_sublead_<1.0)) continue;
			    }
			    if(muon_==1){
			      if(!(deltaR_lead_<1.0 || deltaR_sublead_<1.0)) continue;
			    }
			  }
			  if(sample=="SS"){
			    if(electron_==1){
			      if(!(electron_M_lead_>10)) continue;
			      if(!(electron_M_sublead_>10)) continue;
			      if(!(eleMVA_>0.9)) continue;
			    }
			    if(!(deltaR_lead_>1.0)) continue;
			    if(!(deltaR_sublead_>1.0)) continue;
			    if(!(leptonPt_>20)) continue;
			    if(sel!="both"){
			      if(sel=="cat6") {if(!(met_>45)) continue;}
			      if(sel=="cat7") {if(!(met_<45)) continue;}
			    }
			  }
			}else if(sel=="ttHhad"){
			  if(sample="SS"){
			    if(category_!=10)continue;
			  }else if(sample=="CS"){
			    //at least three jets and 0 btag medium
			    if(photonPT_lead_<60*mass_/120.)continue;
			    if(photonPT_sublead_<25.)continue;
			    if(j3_pt<25.)continue;
			    if((j1_algoPF1_csvBtag_>0.679 || j2_algoPF1_csvBtag_>0.679 || j3_algoPF1_csvBtag_>0.679 ||j4_algoPF1_csvBtag_>0.679||
				j5_algoPF1_csvBtag_>0.679 || j6_algoPF1_csvBtag_>0.679 || j7_algoPF1_csvBtag_>0.679 ||j8_algoPF1_csvBtag_>0.679||
				j9_algoPF1_csvBtag_>0.679 || j10_algoPF1_csvBtag_>0.679))continue;
			  }
			}else if (sel=="VHhadbtag"){
			  if(sample="SS"){
			    if(category_!=11)continue;
			  }else if (sample="CS"){
			    //same cut as vhhadbtag but inverted costheta
			    if(photonPT_lead_<60*mass_/120.)continue;
			    if(photonPT_sublead_<25.)continue;
			    if(j2_pt<27.)continue;
			    if(j4_pt>20.)continue;
			    if(!(j1_algoPF1_csvBtag_>0.244 || j2_algoPF1_csvBtag_>0.244 || j3_algoPF1_csvBtag_>0.244 ||j4_algoPF1_csvBtag_>0.244||
				 j5_algoPF1_csvBtag_>0.244 || j6_algoPF1_csvBtag_>0.244 || j7_algoPF1_csvBtag_>0.244 ||j8_algoPF1_csvBtag_>0.244||
				 j9_algoPF1_csvBtag_>0.244 || j10_algoPF1_csvBtag_>0.244))continue;
			    if(dipho_pt<117*mass/120.)continue;
			    if(JetsMass<60. ||JetsMass>120.)continue;
			    if(cosThetaStar<0.56)continue;
			  }
			}else if (sel=="VHhad0tag"){
			  if(sample="SS"){
			    if(category_!=12)continue;
			  }else if (sample="CS"){
			    //same cut as vhhadbtag but inverted costheta
			    if(photonPT_lead_<60*mass_/120.)continue;
			    if(photonPT_sublead_<25.)continue;
			    if(j2_pt<40.)continue;
			    if(j4_pt>20.)continue;
			    if((j1_algoPF1_csvBtag_>0.244 || j2_algoPF1_csvBtag_>0.244 || j3_algoPF1_csvBtag_>0.244 ||j4_algoPF1_csvBtag_>0.244||
				j5_algoPF1_csvBtag_>0.244 || j6_algoPF1_csvBtag_>0.244 || j7_algoPF1_csvBtag_>0.244 ||j8_algoPF1_csvBtag_>0.244||
				j9_algoPF1_csvBtag_>0.244 || j10_algoPF1_csvBtag_>0.244))continue;
			    if(dipho_pt<130*mass/120.)continue;
			    if(JetsMass<60. ||JetsMass>120.)continue;
			    if(cosThetaStar<0.50)continue;
			  }
			}
			wgt_sig_ = weight_;
			diphoMVA_sig_ = diphobdt_output_;
			mass_sig_ = mass_;
			treeSig.Fill();
			h_sig[j]->Fill(variable_,weight_);
			h_sig[j]->Sumw2();
		}
    }
	
    TH1D *DAT  = new TH1D("DAT","DAT",h_data->GetNbinsX(),h_data->GetXaxis()->GetXmin(),h_data->GetXaxis()->GetXmax());
    TH1D *SIG  = new TH1D("SIG","SIG",h_data->GetNbinsX(),h_data->GetXaxis()->GetXmin(),h_data->GetXaxis()->GetXmax());
    for(int m=1; m<h_data->GetNbinsX()+1; m++){
		DAT->SetBinContent(m,h_data->GetBinContent(m));
		SIG->SetBinContent(m,h_sig[0]->GetBinContent(m)+h_sig[1]->GetBinContent(m)+h_sig[2]->GetBinContent(m)+h_sig[3]->GetBinContent(m));
		SIG->SetBinError(m,sqrt(h_sig[0]->GetBinError(m)*h_sig[0]->GetBinError(m)+h_sig[1]->GetBinError(m)*h_sig[1]->GetBinError(m)+
								h_sig[2]->GetBinError(m)*h_sig[2]->GetBinError(m)+h_sig[3]->GetBinError(m)*h_sig[3]->GetBinError(m)));
    }	
    
    DAT->SetLineColor(kBlue);
    DAT->SetLineWidth(2);
    SIG->SetLineColor(kRed);
    SIG->SetLineWidth(2);
	
	TCanvas * c1 = new TCanvas("c1", "c1", 800, 600);
    DAT->Draw("E");
	SIG->Draw("histo same");
	
	DAT->GetXaxis()->SetTitle(0);
	DAT->GetYaxis()->SetTitle("Events");
	DAT->GetYaxis()->SetTitleSize(0.045);
	DAT->GetXaxis()->SetTitleSize(0.045);
	DAT->GetYaxis()->SetLabelSize(0.045);
	DAT->GetXaxis()->SetLabelSize(0.045);
	DAT->GetYaxis()->SetTitleOffset(1);
	DAT->SetTitle("Diphoton MVA output");
	DAT->SetMinimum(0);
	
	TLatex latexLabel2;
	latexLabel2.SetTextSize(0.04);
	latexLabel2.SetTextFont(32);
	latexLabel2.SetNDC();
	latexLabel2.DrawLatex(0.6, 0.86, "L = 19.6 fb^{-1} at #sqrt{s} = 8 TeV");

	
	if(save){
		TString rootfile_name = variable_string+"_"+sample+sel+".root";
		TFile fileTosave(rootfile_name,"recreate"); 
		DAT->Write();
		SIG->Write();
		treeSig.Write();
		treeDat.Write();
    }
}
