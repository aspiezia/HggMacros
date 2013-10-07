
int shapeComparison(bool save=false, TString sel="prova"){
  if(sel=="prova"){
    cout<<endl;
    cout<<"You have to provide 2 arguments:"<<endl;
    cout<<"    - boolean to save (true) or not save (false)"<<endl;
    cout<<"    - string for categories: 'VHlep' or 'ttHhad' or 'VHhadbtag' or 'VHhad0tag'"<<endl;
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
  gStyle->SetErrorX(0.5);
  gSystem->Load("libPhysics");
  gSystem->Load("/Users/aniellospiezia/Downloads/root/lib/libRooFit.so");
  using namespace RooFit;
  using namespace std;
	
	
  TCanvas * c = new TCanvas("c", "c", 800, 600);
	
  //OPEN THE ROOT FILE AND HISTOGRAMS/TREES
  if(sel=="VHlep"){
    TFile *diphotonMVA_CS  = new TFile("diphobdt_output_CSVHlep1.root");
    TFile *diphotonMVA_SS  = new TFile("diphobdt_output_SSVHlep.root");
  }
  if(sel=="ttHhad"){
    TFile *diphotonMVA_CS  = new TFile("diphobdt_output_CSttHhad.root");
    TFile *diphotonMVA_SS  = new TFile("diphobdt_output_SSttHhad.root");
  }
  if(sel=="VHhadB"){
    TFile *diphotonMVA_CS  = new TFile("diphobdt_output_CSVHhadB.root");
    TFile *diphotonMVA_SS  = new TFile("diphobdt_output_SSVHhadB.root");
  }
  if(sel=="VHhad0"){
    TFile *diphotonMVA_CS  = new TFile("diphobdt_output_CSVHhad0.root");
    TFile *diphotonMVA_SS  = new TFile("diphobdt_output_SSVHhad0.root");
  }
  if(sel=="VHmetT"){
    TFile *diphotonMVA_CS  = new TFile("diphobdt_output_CSVHmetT.root");
    TFile *diphotonMVA_SS  = new TFile("diphobdt_output_SSVHmetT.root");
  }
  TTree *tree_diphotonMVA_CS  = (TTree*)diphotonMVA_CS->Get("treeDat");
  TTree *tree_diphotonMVA_SS  = (TTree*)diphotonMVA_SS->Get("treeDat");
	
  //CREATE THE DATASET AND MAKE THE FIT ON THE DIPHOTON MVA
	
  //variables definition
  RooRealVar diphoMVA("diphoMVA","diphoMVA",-1,1); 
  RooRealVar mass("mass","mass",100,180); 
  RooRealVar wgt("wgt","wgt",0,100);
  RooArgList VarSet(wgt,diphoMVA,mass);	
	
  //workspace definition
  RooDataSet workspaceCS("data","data",tree_diphotonMVA_CS,VarSet,0,"wgt");
  RooDataSet workspaceSS("data","data",tree_diphotonMVA_SS,VarSet,0,"wgt");
	
  //shape definition
  RooKeysPdf bkgCS("bkgCS","bkgCS",diphoMVA,workspaceCS,RooKeysPdf::MirrorBoth,2);
  RooRealVar nbkgCS("nbkgCS","background fraction",50,0.,100000.);
  RooAddPdf modelCS("modelCS","modelCS",RooArgList(bkgCS),RooArgList(nbkgCS));
  RooKeysPdf bkgSS("bkgSS","bkgSS",diphoMVA,workspaceSS,RooKeysPdf::MirrorBoth,2);
  RooRealVar nbkgSS("nbkgSS","background fraction",50,0.,100000.);
  RooAddPdf modelSS("modelSS","modelSS",RooArgList(bkgSS),RooArgList(nbkgSS));
	
	
  //fit
  modelCS.fitTo(workspaceCS, Range(-1,1), Extended(kTRUE));
  modelSS.fitTo(workspaceSS, Range(-1,1), Extended(kTRUE));
	
  RooPlot* frame = diphoMVA.frame(); 
  //modelSS.plotOn(frame,LineColor(kBlack),Normalization(10,RooAbsReal::NumEvent)); 
	
  workspaceCS->plotOn(frame,Binning(10),LineColor(kRed),MarkerColor(kRed)); 
  workspaceSS->plotOn(frame,Binning(10),LineColor(kBlack)); 
  modelSS.plotOn(frame,LineColor(kBlack),Normalization(1,RooAbsReal::NumEvent)); 
  modelCS.plotOn(frame,LineColor(kRed),Normalization(1,RooAbsReal::NumEvent));
	
  frame->SetTitle("Leptonic categories");
  frame->SetXTitle("diphotonMVA");
  frame->SetYTitle("");
  frame->GetYaxis()->SetRangeUser(0,0.1);
  frame->GetYaxis()->SetTitleSize(0.045);
  frame->GetXaxis()->SetTitleSize(0.045);
  frame->GetYaxis()->SetLabelSize(0.035);
  frame->GetXaxis()->SetLabelSize(0.035);
  frame->GetXaxis()->SetNdivisions(0020);
  frame->Draw();
  RooArgSet* params = modelCS->getVariables();
  params->Print("V");
	
	
  TH1F *histo0 = (TH1F*) diphotonMVA_SS->Get("DAT"); 
  TH1F *histo2 = (TH1F*) diphotonMVA_CS->Get("DAT"); 
  float integralCS = histo2->Integral();

  histo0->Sumw2();
  histo2->Sumw2();
	
  histo0->Scale(1/histo0->Integral());
  histo2->Scale(1/histo2->Integral());

  histo0->Rebin(20);
  histo2->Rebin(20);
	
  histo0->Sumw2();
  histo2->Sumw2();
	
  histo0->Draw("E1");
  histo2->Draw("same E1");
	
  histo0->SetLineColor(1);
  histo0->SetLineWidth(2);
  histo0->SetMarkerStyle(21);
  histo0->SetMarkerColor(1);
  histo2->SetLineColor(2);
  histo2->SetLineWidth(2);
  histo2->SetMarkerStyle(21);
  histo2->SetMarkerColor(2);
	
  histo0->GetYaxis()->SetRangeUser(0.0000001,0.8);
  histo0->SetTitle(0);
  histo0->GetXaxis()->SetTitle("diphoton MVA");
  histo0->GetYaxis()->SetTitle("Events");
	
  frame->Draw("same");
  
  TLegend *pl = new TLegend(0.70,0.73,0.89,0.89);
  pl->SetTextSize(0.05); 
  pl->SetFillColor(0);
  TLegendEntry *ple = pl->AddEntry(histo0, "SS",  "L"); 
  ple = pl->AddEntry(histo2, "CS",  "L"); 
  pl->Draw();
  
  if(save) c->SaveAs("ShapeComparison_"+sel+".png");
}

