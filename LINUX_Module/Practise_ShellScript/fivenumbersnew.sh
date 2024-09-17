#!/bin/bash

echo "Enter five numbers : "

read num1
read num2
read num3
read num4
read num5

echo $num1 > tmpfile.txt
echo $num2 >> tmpfile.txt
echo $num3 >> tmpfile.txt
echo $num4 >> tmpfile.txt
echo $num5 >> tmpfile.txt

echo -n "The maximum number is :"
sort  "tmpfile.txt" -n  | tail -n 1
 
echo -n "The minimum number is :"
sort "tmpfile.txt" -n | head -n

rm tmpfile.txt

