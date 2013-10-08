#! /bin/bash

directory=$1
sideband=$2

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
root -l -b -q CreateTree.C+\(true,\"CS\",\"VHhadB\",\"mass\",80,100,180\) 
root -l -b -q CreateTree.C+\(true,\"CS\",\"VHhad0\",\"mass\",80,100,180\) 
root -l -b -q CreateTree.C+\(true,\"CS\",\"VHmetT\",\"mass\",80,100,180\) 
root -l -b -q CreateTree.C+\(true,\"SS\",\"VHlep1\",\"mass\",80,100,180\)
root -l -b -q CreateTree.C+\(true,\"SS\",\"VHlep2\",\"mass\",80,100,180\) 
root -l -b -q CreateTree.C+\(true,\"SS\",\"ttHhad\",\"mass\",80,100,180\) 
root -l -b -q CreateTree.C+\(true,\"SS\",\"VHhadB\",\"mass\",80,100,180\) 
root -l -b -q CreateTree.C+\(true,\"SS\",\"VHhad0\",\"mass\",80,100,180\) 
root -l -b -q CreateTree.C+\(true,\"SS\",\"VHmetT\",\"mass\",80,100,180\) 
root -l -b -q CreateTree.C+\(true,\"CS\",\"VHlep1\",\"diphobdt\_output\",200,-1,1\)
root -l -b -q CreateTree.C+\(true,\"CS\",\"VHlep2\",\"diphobdt\_output\",200,-1,1\)
root -l -b -q CreateTree.C+\(true,\"CS\",\"ttHhad\",\"diphobdt\_output\",200,-1,1\) 
root -l -b -q CreateTree.C+\(true,\"CS\",\"VHhadB\",\"diphobdt\_output\",200,-1,1\) 
root -l -b -q CreateTree.C+\(true,\"CS\",\"VHhad0\",\"diphobdt\_output\",200,-1,1\) 
root -l -b -q CreateTree.C+\(true,\"CS\",\"VHmetT\",\"diphobdt\_output\",200,-1,1\) 
root -l -b -q CreateTree.C+\(true,\"SS\",\"VHlep1\",\"diphobdt\_output\",200,-1,1\)
root -l -b -q CreateTree.C+\(true,\"SS\",\"VHlep2\",\"diphobdt\_output\",200,-1,1\)
root -l -b -q CreateTree.C+\(true,\"SS\",\"VHlep\",\"diphobdt\_output\",200,-1,1\)
root -l -b -q CreateTree.C+\(true,\"SS\",\"ttHhad\",\"diphobdt\_output\",200,-1,1\) 
root -l -b -q CreateTree.C+\(true,\"SS\",\"VHhadB\",\"diphobdt\_output\",200,-1,1\) 
root -l -b -q CreateTree.C+\(true,\"SS\",\"VHhad0\",\"diphobdt\_output\",200,-1,1\) 
root -l -b -q CreateTree.C+\(true,\"SS\",\"VHmetT\",\"diphobdt\_output\",200,-1,1\) 


if [ "$sideband" == "true" ]; then
    root -b <<EOF
.x MakeFit.cpp
MakeFit(true,"VHlep1",true)
MakeFit(true,"VHlep2",true)
MakeFit(true,"ttHhad",true)
MakeFit(true,"VHhadB",true)
MakeFit(true,"VHhad0",true)
MakeFit(true,"VHmetT",true)
.q
EOF
fi

if [ "$sideband" == "false" ]; then
    root -b <<EOF
.x MakeFit.cpp
MakeFit(true,"VHlep1",false)
MakeFit(true,"VHlep2",false)
MakeFit(true,"ttHhad",false)
MakeFit(true,"VHhadB",false)
MakeFit(true,"VHhad0",false)
MakeFit(true,"VHmetT",false)
.q
EOF
fi

root -b <<EOF
.x shapeComparison.cpp
shapeComparison(true,"VHlep")
shapeComparison(true,"ttHhad")
shapeComparison(true,"VHhadB")
shapeComparison(true,"VHhad0")
shapeComparison(true,"VHmetT")

.q
EOF

./combineCommand.sh VHlep1
./combineCommand.sh VHlep2
./combineCommand.sh VHmetT
./combineCommand.sh ttHhad
./combineCommand.sh VHhadB
./combineCommand.sh VHhad0


root -b <<EOF
.x print.C
print("VHlep1")
print("VHlep2")
print("VHmetT")
print("ttHhad")
print("VHhadB")
print("VHhad0")
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
