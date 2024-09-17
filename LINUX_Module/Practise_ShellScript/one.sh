#!/bin/bash

echo 'Welcome';

#print 1 to 5

for x in 1 2 3 4 5
do
	echo $x

done

for i in {1..10}
do
	#sleep 2
	echo $i
done

for((i=1;i<11;i++))
do
	echo $i
done
