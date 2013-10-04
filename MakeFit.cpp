#include "TCanvas.h"
#include "TAxis.h"
#include "TH1.h"


int MakeFit(bool save=false, TString sel="prova"){
  if(sel=="prova"){
    cout<<endl;
    cout<<"You have to provide 2 arguments:"<<endl;
    cout<<"    - boolean to save (true) or not save (false)"<<endl;
    cout<<"    - string for high-met category ('VHlep1') , for low-met category ('VHlep2') or ('ttHhad') or ('VHhadbtag') or ('VHhad0tag')"<<endl;
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
  gStyle->SetErrorX(0);
  gSystem->Load("libPhysics");
  gSystem->Load("/Users/aniellospiezia/Downloads/root/lib/libRooFit.so");
  using namespace RooFit;
  using namespace std;
	
  TCanvas * c = new TCanvas("c", "c", 800, 600);
	
  //OPEN THE ROOT FILE AND HISTOGRAMS/TREES
  if(sel=="VHlep1"){
    TFile *mass_CS  = new TFile("mass_CSVHlep1.root");
    TFile *mass_SS  = new TFile("mass_SSVHlep1.root");
    TFile *dipho_SS = new TFile("diphobdt_output_SSVHlep1.root");
  }
  if(sel=="VHlep2"){
    TFile *mass_CS  = new TFile("mass_CSVHlep2.root");
    TFile *mass_SS  = new TFile("mass_SSVHlep2.root");
    TFile *dipho_SS = new TFile("diphobdt_output_SSVHlep2.root");
  }
  if(sel=="ttHhad"){
    TFile *mass_CS  = new TFile("mass_CSttHhad.root");
    TFile *mass_SS  = new TFile("mass_SSttHhad.root");
    TFile *dipho_SS = new TFile("diphobdt_output_SSttHhad.root");
  }
  if(sel=="VHhadBtag"){
    TFile *mass_CS  = new TFile("mass_CSVHhadBtag.root");
    TFile *mass_SS  = new TFile("mass_SSVHhadBtag.root");
    TFile *dipho_SS = new TFile("diphobdt_output_SSVHhadBtag.root");
  }
  if(sel=="VHhad0tag"){
    TFile *mass_CS  = new TFile("mass_CSVHhad0tag.root");
    TFile *mass_SS  = new TFile("mass_SSVHhad0tag.root");
    TFile *dipho_SS = new TFile("diphobdt_output_SSVHhad0tag.root");
  }
  TTree *tree_mass_CS  = (TTree*)mass_CS->Get("treeDat");
  TH1F *histo_mass_CS  = (TH1F*) mass_CS->Get("DAT");
  TH1F *histo_mass_SS  = (TH1F*) mass_SS->Get("DAT");
  TH1F *histo_dipho_SS = (TH1F*) dipho_SS->Get("SIG");
	
  //CREATE THE DATASET AND MAKE THE FIT ON THE DIPHOTON MVA
  RooRealVar diphoMVA("diphoMVA","diphoMVA",-1,1); 
  RooRealVar mass("mass","mass",100,180); 
  RooRealVar wgt("wgt","wgt",0,100);
  RooArgList VarSet(wgt,diphoMVA,mass);	
  RooDataSet wdata("data","data",tree_mass_CS,VarSet,0,"wgt");
  RooKeysPdf bkg("bkg","bkg",diphoMVA,wdata,RooKeysPdf::MirrorBoth,2);
  RooRealVar nbkg("nbkg","background fraction",50,0.,100000.);
  RooAddPdf model("model","model",RooArgList(bkg),RooArgList(nbkg));
  model.fitTo(wdata, Range(-1,1), Extended(kTRUE));
  RooPlot* frame = diphoMVA.frame(); 
  wdata->plotOn(frame,Binning(10)); 
  model.plotOn(frame,LineColor(kBlack)); 
  model.plotOn(frame, Components(model),LineColor(kBlack),LineStyle(kDashed));
  frame->SetTitle(0);
  frame->SetXTitle("diphotonMVA");
  frame->Draw();
  RooArgSet* params = model->getVariables();
  params->Print("V");
  if(save) c->SaveAs("fit_diphoMVA"+sel+".png");
	
  //MAKE THE FIT ON THE Mgg
  RooRealVar c1("c1","coefficient #1", 0.5,-1000,1000); 
  RooExponential bkg_mass("bkg_mass","bkg_mass",mass,c1) ;
  RooRealVar nbkg_mass("nbkg_mass","background fraction",50,0.,100000.);
  RooAddPdf model_mass("model_mass","model_mass",RooArgList(bkg_mass),RooArgList(nbkg_mass));
  mass.setRange("R1",100,120); 
  mass.setRange("R2",130,180); 
  model_mass.fitTo(wdata, Range("R1,R2"), Extended(kTRUE));
  RooPlot* frame_mass = mass.frame(); 
  wdata->plotOn(frame_mass,Binning(50)); 
  model_mass.plotOn(frame_mass,LineColor(kBlack)); 
  model_mass.plotOn(frame_mass, Components(model_mass),LineColor(kBlack),LineStyle(kDashed));
  frame_mass->SetTitle(0);
  frame_mass->SetXTitle("mass");
  frame_mass->Draw();
  RooArgSet* params_mass = model_mass->getVariables();
  params_mass->Print("V");
  if(save) c->SaveAs("fit_Mgg"+sel+".png");
  mass.setRange("cut", 125-1.5, 125+1.5);
  RooAbsReal* sig = model_mass.createIntegral (mass, NormSet (mass), Range("cut"));
  sig->getVal(); 
	
  //DEFINE NORMALIZATON FACTOR
  ofstream norma;
  norma.open("normalization_"+sel+".txt");
  float N_CS = histo_mass_CS->Integral();
  float N_SS = histo_mass_SS->Integral();
  float eps_FWHM = sig->getVal();
  float SF = N_SS/N_CS;
  float norm = eps_FWHM * SF;
  cout<<"eps_FWHM = "<<eps_FWHM<<endl;
  cout<<"SF = "<<SF<<endl;
  cout<<"NORMALIZATION = "<<norm<<endl;
  norma<<"eps_FWHM = "<<eps_FWHM<<endl;
  norma<<"SF = "<<SF<<endl;
  norma<<"NORMALIZATION = "<<norm<<endl;
  norma.close();
	
  TH1D *DEN1  = new TH1D("yield_sig","yield_sig",20,-1-0.05,1-0.05);
  TH1D *DEN2  = new TH1D("yield_bkg","yield_bkg",20,-1-0.05,1-0.05);
  TH1D *DEN3  = new TH1D("Efficiency","Efficiency",20,-1-0.05,1-0.05);
  TH2D *DEN4  = new TH2D("ROC","ROC",100,0,1,100,0,1);
	
  float bdt_low = -1.0; float mass_low = 1;
  for(int i=0; i<20; i++){
    sig01->getVal()
      diphoMVA.setRange("cut01", bdt_low, 1.0);
    RooAbsReal* sig01 = model.createIntegral (diphoMVA, NormSet (diphoMVA), Range("cut01"));
		
    char txt[100];
    sprintf(txt, "diphoton_%i_",i);
		
    DEN1->SetBinContent(i+1,0.75*histo_dipho_SS->Integral(mass_low,200));
    DEN1->SetBinError(i+1,0.00001);
    DEN2->SetBinContent(i+1,sig01->getVal()*norm*nbkg.getVal());
    DEN2->SetBinError(i+1,0.00001);
    DEN3->SetBinContent(i+1,sig01->getVal());
    DEN3->SetBinError(i+1,0.00001);
    DEN4->Fill(histo_dipho_SS->Integral(mass_low,200)/histo_dipho_SS->Integral(1,200),1-sig01->getVal());
		
    ofstream myfile;
    myfile.open(txt+sel+".dat");
    myfile<<"# Simple counting experiment, with one signal and a few background processes"<<endl;
    myfile<<"imax 1  number of channels"<<endl;
    myfile<<"jmax 1  number of backgrounds"<<endl;
    myfile<<"kmax 2  number of nuisance parameters (sources of systematical uncertainties)"<<endl;
    myfile<<"------------"<<endl;
    myfile<<"# we have just one channel, in which we observe 0 events"<<endl;
    myfile<<"bin         cat1"<<endl;
    myfile<<"observation 0 "<<endl;
    myfile<<"------------"<<endl;
    myfile<<"# now we list the expected events for signal and all backgrounds in that bin"<<endl;
    myfile<<"# the second 'process' line must have a positive number for backgrounds, and 0 for signal"<<endl;
    myfile<<"# then we list the independent sources of uncertainties, and give their effect (syst. error)"<<endl;
    myfile<<"# on each process and bin"<<endl;
    myfile<<"bin            cat1       cat1 "<<endl;
    myfile<<"process         VH        bkg  "<<endl;
    myfile<<"process          0         1   "<<endl;
    myfile<<"rate          "<<0.75*histo_dipho_SS->Integral(mass_low,200)<<"   "<<sig01->getVal()*norm*nbkg.getVal()<<endl;
    myfile<<"------------"<<endl;
    myfile<<"VH     lnN     1.30        - "<<endl;  
    myfile<<"bkg    lnN       -        1.30 "<<endl;
    myfile.close();
		
    bdt_low  = bdt_low  + 0.1;
    mass_low = mass_low + 10.;
  }
	
	
  TCanvas *c5 = new TCanvas("c5","c5",30,30,800,600);
  DEN1->SetMarkerColor(2);
  DEN1->SetMarkerStyle(20);
  DEN1->SetMarkerSize(1.0);
  DEN1->SetFillColor(2);
  DEN1->SetLineColor(2);
  DEN1->SetLineWidth(2);
  DEN1->GetYaxis()->SetRangeUser(0.0,6.0);
  DEN1->GetXaxis()->SetRangeUser(-1,1);
  DEN1->SetXTitle("diphotonMVA cut");
  DEN1->SetYTitle("Number of events");
  DEN1->SetTitle(0);
  DEN1->SetTitle("Number of events");
  DEN1->GetYaxis()->SetTitleOffset(1.1);
  DEN1->GetYaxis()->SetTitleSize(0.045);
  DEN1->GetXaxis()->SetTitleSize(0.045);
  DEN1->GetYaxis()->SetLabelSize(0.045);
  DEN1->GetXaxis()->SetLabelSize(0.040);
  DEN1->GetXaxis()->SetNdivisions(515);
  DEN1->GetYaxis()->SetNdivisions(515);
  DEN1->Draw("E");
	
  DEN2->SetMarkerColor(4);
  DEN2->SetMarkerStyle(20);
  DEN2->SetMarkerSize(1.0);
  DEN2->SetFillColor(4);
  DEN2->SetLineColor(4);
  DEN2->SetLineWidth(2);
  DEN2->Draw("Esame");
	
  TLegend *pl = new TLegend(0.61,0.77,0.89,0.89);
  pl->SetTextSize(0.045); 
  pl->SetFillColor(0);
  TLegendEntry *ple = pl->AddEntry(DEN1, "Signal",  "L");
  ple = pl->AddEntry(DEN2, "Background",  "L"); 
  pl->Draw();
  if(save) c5->SaveAs("Yield_"+sel+".png");	
	
  TCanvas *c6 = new TCanvas("c6","c6",30,30,800,600);
  DEN3->SetMarkerColor(2);
  DEN3->SetMarkerStyle(20);
  DEN3->SetMarkerSize(1.0);
  DEN3->SetFillColor(2);
  DEN3->SetLineColor(2);
  DEN3->SetLineWidth(2);
  DEN3->GetYaxis()->SetRangeUser(0.0,1.0);
  DEN3->GetXaxis()->SetRangeUser(-1,1);
  DEN3->SetXTitle("diphotonMVA cut");
  DEN3->SetYTitle("efficiency diphotonMVA cut");
  DEN3->GetYaxis()->SetTitleOffset(1.1);
  DEN3->GetYaxis()->SetTitleSize(0.045);
  DEN3->GetXaxis()->SetTitleSize(0.045);
  DEN3->GetYaxis()->SetLabelSize(0.045);
  DEN3->GetXaxis()->SetLabelSize(0.040);
  DEN3->GetXaxis()->SetNdivisions(515);
  DEN3->GetYaxis()->SetNdivisions(515);
  DEN3->Draw("E");
  if(save) c6->SaveAs("effDiphoMVA"+sel+".png");
	
  DEN4->SetMarkerColor(2);
  DEN4->SetMarkerStyle(20);
  DEN4->SetMarkerSize(1.0);
  DEN4->SetFillColor(2);
  DEN4->SetLineColor(2);
  DEN4->SetLineWidth(2);
  DEN4->GetYaxis()->SetRangeUser(0.0,1.0);
  DEN4->GetXaxis()->SetRangeUser(0.0,1.0);
  DEN4->SetXTitle("Signal Efficiency");
  DEN4->SetYTitle("(1 - Background Efficiency)");
  DEN4->GetYaxis()->SetTitleOffset(0.95);
  DEN4->GetYaxis()->SetTitleSize(0.045);
  DEN4->GetXaxis()->SetTitleSize(0.045);
  DEN4->GetYaxis()->SetLabelSize(0.045);
  DEN4->GetXaxis()->SetLabelSize(0.040);
  DEN4->GetXaxis()->SetNdivisions(515);
  DEN4->GetYaxis()->SetNdivisions(515);
  DEN4->Draw();
  if(save) c6->SaveAs("ROC_"+sel+".png");
	
}
