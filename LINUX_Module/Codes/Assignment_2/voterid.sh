#Write shell script to check eligibility of candidate for voter id card

#!/bin/bash

read -p "Enter a age : " age

if ((age>=18));
then
	echo "Your age is $age , eligible for voter id"
else
	echo "Your age is $age , not eligible for voter id"

fi
