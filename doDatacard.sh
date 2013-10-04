#! /bin/bash

directory=$1

root -b <<EOF
.x CreateTree.C
CreateTree(true,"CS","VHlep1",   "mass",80,100,180)
CreateTree(true,"CS","VHlep2",   "mass",80,100,180)
CreateTree(true,"SS","VHlep1",   "mass",80,100,180)
CreateTree(true,"SS","VHlep2",   "mass",80,100,180) 
CreateTree(true,"SS","ttHhad",   "mass",80,100,180) 
CreateTree(true,"SS","VHhadbtag","mass",80,100,180) 
CreateTree(true,"SS","VHhad0tag","mass",80,100,180) 
CreateTree(true,"CS","ttHhad",   "mass",80,100,180) 
CreateTree(true,"CS","VHhadbtag","mass",80,100,180) 
CreateTree(true,"CS","VHhad0tag","mass",80,100,180) 
CreateTree(true,"CS","VHlep1",   "diphobdt_output",200,-1,1)
CreateTree(true,"CS","VHlep2",   "diphobdt_output",200,-1,1)
CreateTree(true,"SS","VHlep1",   "diphobdt_output",200,-1,1)
CreateTree(true,"SS","VHlep2",   "diphobdt_output",200,-1,1)
CreateTree(true,"SS","VHlep",    "diphobdt_output",200,-1,1)
CreateTree(true,"SS","ttHhad",   "diphobdt_output",200,-1,1) 
CreateTree(true,"SS","VHhadbtag","diphobdt_output",200,-1,1) 
CreateTree(true,"SS","VHhad0tag","diphobdt_output",200,-1,1) 
CreateTree(true,"CS","ttHhad",   "diphobdt_output",200,-1,1) 
CreateTree(true,"CS","VHhadbtag","diphobdt_output",200,-1,1) 
CreateTree(true,"CS","VHhad0tag","diphobdt_output",200,-1,1) 

.x MakeFit.cpp
MakeFit(true,"VHlep1")
MakeFit(true,"VHlep2")
MakeFit(true,"ttHhad")
MakeFit(true,"VHhadbtag")
MakeFit(true,"VHhad0tag")

.x shapeComparison.cpp
shapeComparison(true,"VHlep")
shapeComparison(true,"ttHhad")
shapeComparison(true,"VHhadbtag")
shapeComparison(true,"VHhad0tag")

.q
EOF
mkdir $directory
mv *root $directory
mv *dat $directory
mv *png $directory
mv *txt $directory