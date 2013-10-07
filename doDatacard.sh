#! /bin/bash

directory=$1

mkdir $directory
cd $directory
cp ../doDatacard.sh .
cp ../CreateTree.C .
cp ../MakeFit.cpp .
cp ../shapeComparison.cpp .
cp ../print.C .
cp ../combineCommand.sh .

root -l -b -q CreateTree.C+\(true,\"CS\",\"VHlep1\",\"mass\",80,100,180\)
root -l -b -q CreateTree.C+\(true,\"CS\",\"VHlep2\",\"mass\",80,100,180\)
root -l -b -q CreateTree.C+\(true,\"CS\",\"ttHhad\",\"mass\",80,100,180\) 
root -l -b -q CreateTree.C+\(true,\"CS\",\"VHhadbtag\",\"mass\",80,100,180\) 
root -l -b -q CreateTree.C+\(true,\"CS\",\"VHhad0tag\",\"mass\",80,100,180\) 
root -l -b -q CreateTree.C+\(true,\"CS\",\"VHmet\",\"mass\",80,100,180\) 
root -l -b -q CreateTree.C+\(true,\"SS\",\"VHlep1\",\"mass\",80,100,180\)
root -l -b -q CreateTree.C+\(true,\"SS\",\"VHlep2\",\"mass\",80,100,180\) 
root -l -b -q CreateTree.C+\(true,\"SS\",\"ttHhad\",\"mass\",80,100,180\) 
root -l -b -q CreateTree.C+\(true,\"SS\",\"VHhadbtag\",\"mass\",80,100,180\) 
root -l -b -q CreateTree.C+\(true,\"SS\",\"VHhad0tag\",\"mass\",80,100,180\) 
root -l -b -q CreateTree.C+\(true,\"SS\",\"VHmet\",\"mass\",80,100,180\) 
root -l -b -q CreateTree.C+\(true,\"CS\",\"VHlep1\",\"diphobdt\_output\",200,-1,1\)
root -l -b -q CreateTree.C+\(true,\"CS\",\"VHlep2\",\"diphobdt\_output\",200,-1,1\)
root -l -b -q CreateTree.C+\(true,\"CS\",\"ttHhad\",\"diphobdt\_output\",200,-1,1\) 
root -l -b -q CreateTree.C+\(true,\"CS\",\"VHhadbtag\",\"diphobdt\_output\",200,-1,1\) 
root -l -b -q CreateTree.C+\(true,\"CS\",\"VHhad0tag\",\"diphobdt\_output\",200,-1,1\) 
root -l -b -q CreateTree.C+\(true,\"CS\",\"VHmet\",\"diphobdt\_output\",200,-1,1\) 
root -l -b -q CreateTree.C+\(true,\"SS\",\"VHlep1\",\"diphobdt\_output\",200,-1,1\)
root -l -b -q CreateTree.C+\(true,\"SS\",\"VHlep2\",\"diphobdt\_output\",200,-1,1\)
root -l -b -q CreateTree.C+\(true,\"SS\",\"VHlep\",\"diphobdt\_output\",200,-1,1\)
root -l -b -q CreateTree.C+\(true,\"SS\",\"ttHhad\",\"diphobdt\_output\",200,-1,1\) 
root -l -b -q CreateTree.C+\(true,\"SS\",\"VHhadbtag\",\"diphobdt\_output\",200,-1,1\) 
root -l -b -q CreateTree.C+\(true,\"SS\",\"VHhad0tag\",\"diphobdt\_output\",200,-1,1\) 
root -l -b -q CreateTree.C+\(true,\"SS\",\"VHmet\",\"diphobdt\_output\",200,-1,1\) 

root -b <<EOF
.x MakeFit.cpp
MakeFit(true,"VHlep1")
MakeFit(true,"VHlep2")
MakeFit(true,"ttHhad")
MakeFit(true,"VHhadbtag")
MakeFit(true,"VHhad0tag")
MakeFit(true,"VHmet")

.x shapeComparison.cpp
shapeComparison(true,"VHlep")
shapeComparison(true,"ttHhad")
shapeComparison(true,"VHhadbtag")
shapeComparison(true,"VHhad0tag")
shapeComparison(true,"VHmet")

.q
EOF

./combineCommand.sh VHlep1 OptimizationSideband_061013
./combineCommand.sh VHlep2 OptimizationSideband_061013
./combineCommand.sh VHmet  OptimizationSideband_061013
./combineCommand.sh ttHhad OptimizationSideband_061013
./combineCommand.sh VHhadbtag OptimizationSideband_061013
./combineCommand.sh VHhad0tag OptimizationSideband_061013


root -b <<EOF
.x print.C
print("VHlep1")
print("VHlep2")
print("VHmet")
print("ttHhad")
print("VHhadbtag")
print("VHhad0tag")
.q
EOF

mkdir datacard
mkdir plot
mkdir root
mkdir txt
mv *.dat datacard
mv *.png plot
mv *.root root
mv *.txt txt
