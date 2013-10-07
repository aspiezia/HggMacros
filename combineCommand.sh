#! /bin/bash

sample=$1
directory=$2

for ((i = 0; i < 20 ; i++)) ;
do
    if [ "$i" -lt "10" ]; then
	combine --verbose=2 -M MaxLikelihoodFit -S 1 diphoton_$i\_$sample.dat -t -1 --expectSignal=1 --rMin=-200 --rMax=200 > $sample\_0$i.txt
	#mv $sample\_0$i.txt $directory/combine/
    fi
    if [ "$i" -gt "9" ]; then
	combine --verbose=2 -M MaxLikelihoodFit -S 1 diphoton_$i\_$sample.dat -t -1 --expectSignal=1 --rMin=-200 --rMax=200 > $sample\_$i.txt
	#mv $sample\_$i.txt $directory/combine/
    fi
done

echo ""
echo "" > $sample.txt
grep "Best fit r" $sample*.txt >> $sample.txt
echo "" >> $sample.txt
#cat $sample.txt | sed '$a \n\n\n' > $sample\_EOF.txt
#sed '${/^$/!s/$/\ \n /;}' $sample.txt > $sample_EOF.txt

rm -rf roo*
rm -rf higgs*root
echo ""

