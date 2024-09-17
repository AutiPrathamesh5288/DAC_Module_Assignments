#Write a Shell Script to check whether a number is negative, positive or zero.

#!/bin/bash

read -p "Enter a number : " num

if ((num>0));
then
	echo "$num Number is positive"
elif((num<0));
then
	echo "$num Number is negative"
else
	echo "$num Number is zero"
fi
