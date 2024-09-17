<<comment
Shell Script to display n terms of natural numbers and their sum.
Test Data : 7
Expected Output :
The first 7 natural number is :
1 2 3 4 5 6 7
The Sum of Natural Number upto 7 terms : 28
comment


#! /bin/bash
read -p "Enter number of terms(n) : " n

echo "The first $n natural numbers are : "
for (( i=1;i<=n;i++ ));
do
	echo -n "$i "
	sum=$((sum+i))
done

echo

echo "The Sum of Natural Number upto $n terms : $sum"

