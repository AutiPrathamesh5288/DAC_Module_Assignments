#Write a Shell Script to check whether a number is divisible by 5 and 11 or not.

#!/bin/bash

read -p "Enter a number : " num

if ((num%5==0 && num%11==0));
then
	echo "$num Number is divisible by 5 and 11"
else
	echo "$num Number is not divisible by 5 and 11"
fi
