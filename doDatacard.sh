#! /bin/bash

directory=$1

root -b <<EOF
.x CreateTree.C
CreateTree(true,"CS","",    "mass",80,100,180)
CreateTree(true,"SS","cat6","mass",80,100,180)
CreateTree(true,"SS","cat7","mass",80,100,180) 

CreateTree(true,"SS","ttHhad","mass",80,100,180) 
CreateTree(true,"SS","VHhadbtag","mass",80,100,180) 
CreateTree(true,"SS","VHhad0tag","mass",80,100,180) 
CreateTree(true,"CS","ttHhad","mass",80,100,180) 
CreateTree(true,"CS","VHhadbtag","mass",80,100,180) 
CreateTree(true,"CS","VHhad0tag","mass",80,100,180) 

CreateTree(true,"CS","",    "diphobdt_output",200,-1,1)
CreateTree(true,"SS","cat6","diphobdt_output",200,-1,1)
CreateTree(true,"SS","cat7","diphobdt_output",200,-1,1)
CreateTree(true,"SS","both","diphobdt_output",200,-1,1)

CreateTree(true,"SS","ttHhad","diphobdt_output",200,-1,1) 
CreateTree(true,"SS","VHhadbtag","diphobdt_output",200,-1,1) 
CreateTree(true,"SS","VHhad0tag","diphobdt_output",200,-1,1) 
CreateTree(true,"CS","ttHhad","diphobdt_output",200,-1,1) 
CreateTree(true,"CS","VHhadbtag","diphobdt_output",200,-1,1) 
CreateTree(true,"CS","VHhad0tag","diphobdt_output",200,-1,1) 


.x MakeFit.cpp
MakeFit(true,"cat6")
MakeFit(true,"cat7")

.x shapeComparison.cpp

.q
EOF
mkdir $directory
mv *root $directory
mv *dat $directory
mv *png $directory
mv *txt $directory