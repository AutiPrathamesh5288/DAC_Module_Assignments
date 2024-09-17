#Write a Shell Script to find maximum between three numbers.
#! /bin/bash

echo "Enter 1st number : "
read num1
echo "Enter 2nd number : "
read num2
echo "Enter 3rd number : "
read num3

if (( num1>=num2 && num1>=num3 ))
then
	echo "$num1 is greater"
elif (( num2>=num1 && num2>=num3 ))
then
	echo "$num2 is greater"
else
	echo "$num3 is greater"
fi


