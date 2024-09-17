#Write a shell slcript to accept five number and display max and min value. 
#!/bin/bash

read -p "Enter 1st Number : " num
min=$num
max=$num

for i in {2..5}
do
	read -p "Enter $i Number : " num
	
	if(($num<$min));
	then
		min=$num
	
	elif(($num>$max));
	then
		max=$num;

	fi
done
echo "The maximum value is: $max"
echo "The minimum value is: $min"
