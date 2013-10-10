#! /bin/bash

directory=$1

mkdir $directory
cd $directory
cp ../doPLOT.sh .
cp ../PlotSSvsCS.C .

root -l -b -q PlotSSvsCS.C+\(true,\"VHlep1\",\"photonPT_leadOverM\",50,0,5\)
root -l -b -q PlotSSvsCS.C+\(true,\"VHlep1\",\"photonPT_subleadOverM\",50,0,5\)
root -l -b -q PlotSSvsCS.C+\(true,\"VHlep1\",\"photonETA_lead\",20,-4,4\)
root -l -b -q PlotSSvsCS.C+\(true,\"VHlep1\",\"photonETA_sublead\",20,-4,4\)
root -l -b -q PlotSSvsCS.C+\(true,\"VHlep1\",\"cosdPhiGG\",40,-2,2\)
root -l -b -q PlotSSvsCS.C+\(true,\"VHlep1\",\"sigmaMwvoM\",100,0,1\)
root -l -b -q PlotSSvsCS.C+\(true,\"VHlep1\",\"sigmaMrvoM\",100,0,1\)
root -l -b -q PlotSSvsCS.C+\(true,\"VHlep1\",\"vtxprob\",10,0,1\)
root -l -b -q PlotSSvsCS.C+\(true,\"VHlep1\",\"phoid_mvaout_lead\",20,-1,1\)
root -l -b -q PlotSSvsCS.C+\(true,\"VHlep1\",\"phoid_mvaout_sublead\",20,-1,1\)

root -l -b -q PlotSSvsCS.C+\(true,\"VHlep2\",\"photonPT_leadOverM\",50,0,5\)
root -l -b -q PlotSSvsCS.C+\(true,\"VHlep2\",\"photonPT_subleadOverM\",50,0,5\)
root -l -b -q PlotSSvsCS.C+\(true,\"VHlep2\",\"photonETA_lead\",20,-4,4\)
root -l -b -q PlotSSvsCS.C+\(true,\"VHlep2\",\"photonETA_sublead\",20,-4,4\)
root -l -b -q PlotSSvsCS.C+\(true,\"VHlep2\",\"cosdPhiGG\",40,-2,2\)
root -l -b -q PlotSSvsCS.C+\(true,\"VHlep2\",\"sigmaMwvoM\",100,0,1\)
root -l -b -q PlotSSvsCS.C+\(true,\"VHlep2\",\"sigmaMrvoM\",100,0,1\)
root -l -b -q PlotSSvsCS.C+\(true,\"VHlep2\",\"vtxprob\",10,0,1\)
root -l -b -q PlotSSvsCS.C+\(true,\"VHlep2\",\"phoid_mvaout_lead\",20,-1,1\)
root -l -b -q PlotSSvsCS.C+\(true,\"VHlep2\",\"phoid_mvaout_sublead\",20,-1,1\)

root -l -b -q PlotSSvsCS.C+\(true,\"VHmetT\",\"photonPT_leadOverM\",50,0,5\)
root -l -b -q PlotSSvsCS.C+\(true,\"VHmetT\",\"photonPT_subleadOverM\",50,0,5\)
root -l -b -q PlotSSvsCS.C+\(true,\"VHmetT\",\"photonETA_lead\",20,-4,4\)
root -l -b -q PlotSSvsCS.C+\(true,\"VHmetT\",\"photonETA_sublead\",20,-4,4\)
root -l -b -q PlotSSvsCS.C+\(true,\"VHmetT\",\"cosdPhiGG\",40,-2,2\)
root -l -b -q PlotSSvsCS.C+\(true,\"VHmetT\",\"sigmaMwvoM\",100,0,1\)
root -l -b -q PlotSSvsCS.C+\(true,\"VHmetT\",\"sigmaMrvoM\",100,0,1\)
root -l -b -q PlotSSvsCS.C+\(true,\"VHmetT\",\"vtxprob\",10,0,1\)
root -l -b -q PlotSSvsCS.C+\(true,\"VHmetT\",\"phoid_mvaout_lead\",20,-1,1\)
root -l -b -q PlotSSvsCS.C+\(true,\"VHmetT\",\"phoid_mvaout_sublead\",20,-1,1\)

root -l -b -q PlotSSvsCS.C+\(true,\"VHhad0\",\"photonPT_leadOverM\",50,0,5\)
root -l -b -q PlotSSvsCS.C+\(true,\"VHhad0\",\"photonPT_subleadOverM\",50,0,5\)
root -l -b -q PlotSSvsCS.C+\(true,\"VHhad0\",\"photonETA_lead\",20,-4,4\)
root -l -b -q PlotSSvsCS.C+\(true,\"VHhad0\",\"photonETA_sublead\",20,-4,4\)
root -l -b -q PlotSSvsCS.C+\(true,\"VHhad0\",\"cosdPhiGG\",40,-2,2\)
root -l -b -q PlotSSvsCS.C+\(true,\"VHhad0\",\"sigmaMwvoM\",100,0,1\)
root -l -b -q PlotSSvsCS.C+\(true,\"VHhad0\",\"sigmaMrvoM\",100,0,1\)
root -l -b -q PlotSSvsCS.C+\(true,\"VHhad0\",\"vtxprob\",10,0,1\)
root -l -b -q PlotSSvsCS.C+\(true,\"VHhad0\",\"phoid_mvaout_lead\",20,-1,1\)
root -l -b -q PlotSSvsCS.C+\(true,\"VHhad0\",\"phoid_mvaout_sublead\",20,-1,1\)

root -l -b -q PlotSSvsCS.C+\(true,\"VHhadB\",\"photonPT_leadOverM\",50,0,5\)
root -l -b -q PlotSSvsCS.C+\(true,\"VHhadB\",\"photonPT_subleadOverM\",50,0,5\)
root -l -b -q PlotSSvsCS.C+\(true,\"VHhadB\",\"photonETA_lead\",20,-4,4\)
root -l -b -q PlotSSvsCS.C+\(true,\"VHhadB\",\"photonETA_sublead\",20,-4,4\)
root -l -b -q PlotSSvsCS.C+\(true,\"VHhadB\",\"cosdPhiGG\",40,-2,2\)
root -l -b -q PlotSSvsCS.C+\(true,\"VHhadB\",\"sigmaMwvoM\",100,0,1\)
root -l -b -q PlotSSvsCS.C+\(true,\"VHhadB\",\"sigmaMrvoM\",100,0,1\)
root -l -b -q PlotSSvsCS.C+\(true,\"VHhadB\",\"vtxprob\",10,0,1\)
root -l -b -q PlotSSvsCS.C+\(true,\"VHhadB\",\"phoid_mvaout_lead\",20,-1,1\)
root -l -b -q PlotSSvsCS.C+\(true,\"VHhadB\",\"phoid_mvaout_sublead\",20,-1,1\)

root -l -b -q PlotSSvsCS.C+\(true,\"ttHhad\",\"photonPT_leadOverM\",50,0,5\)
root -l -b -q PlotSSvsCS.C+\(true,\"ttHhad\",\"photonPT_subleadOverM\",50,0,5\)
root -l -b -q PlotSSvsCS.C+\(true,\"ttHhad\",\"photonETA_lead\",20,-4,4\)
root -l -b -q PlotSSvsCS.C+\(true,\"ttHhad\",\"photonETA_sublead\",20,-4,4\)
root -l -b -q PlotSSvsCS.C+\(true,\"ttHhad\",\"cosdPhiGG\",40,-2,2\)
root -l -b -q PlotSSvsCS.C+\(true,\"ttHhad\",\"sigmaMwvoM\",100,0,1\)
root -l -b -q PlotSSvsCS.C+\(true,\"ttHhad\",\"sigmaMrvoM\",100,0,1\)
root -l -b -q PlotSSvsCS.C+\(true,\"ttHhad\",\"vtxprob\",10,0,1\)
root -l -b -q PlotSSvsCS.C+\(true,\"ttHhad\",\"phoid_mvaout_lead\",20,-1,1\)
root -l -b -q PlotSSvsCS.C+\(true,\"ttHhad\",\"phoid_mvaout_sublead\",20,-1,1\)

