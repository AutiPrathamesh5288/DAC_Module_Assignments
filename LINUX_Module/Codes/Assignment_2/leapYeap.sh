#Write a Shell Script to check whether a year is leap year or not.

#!/bin/bash

read -p "Enter a year : " year

if ((year%400==0));
then
	echo "$year year is leap year"
elif((year%100==0));
then
	echo "$year year is not leap year"
elif((year%4==0));
then
	echo "$year year is leap year"
else
	echo "invalid"

fi
