<<hey 
Shell Script to compute the sum of the first 10 natural numbers.
Expected Output :
The first 10 natural number is :
1 2 3 4 5 6 7 8 9 10
The Sum is : 55
hey

#! /bin/bash
sum=0
for i in {1..10}
do
	sum=$((sum+i))
done
echo "The Sum is : $sum"
