#! /bin/bash

sample=$1

for ((i = 0; i < 20 ; i++)) ;
do
    if [ "$i" -lt "10" ]; then
	combine --verbose=2 -M MaxLikelihoodFit -S 1 diphoton_$i\_$sample.dat -t -1 --expectSignal=1 --rMin=-200 --rMax=200 > $sample\_0$i.txt
    fi
    if [ "$i" -gt "9" ]; then
	combine --verbose=2 -M MaxLikelihoodFit -S 1 diphoton_$i\_$sample.dat -t -1 --expectSignal=1 --rMin=-200 --rMax=200 > $sample\_$i.txt
    fi
done

echo "" > $sample.txt
grep "Best fit r" $sample*.txt >> $sample.txt

rm -rf roo*
rm -rf higgs*root

