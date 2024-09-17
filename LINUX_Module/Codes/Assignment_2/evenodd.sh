#Write a Shell Script to check whether a number is even or odd.

#!/bin/bash

read -p "Enter a number : " num

if ((num%2==0));
then
	echo "$num Number is even"
else
	echo "$num Number is odd"
fi
