# Write a Linux shell script to accept 10 number and tell how many are +tive, -tive and zero.
#!/bin/bash

positive_count=0
negative_count=0
zero_count=0
for i in {1..10}
do
	read -p "Enter $i Number : " num
       	
	if(( num>0 ));
	then
		((positive_count++));
	elif(( num<0 ));
	then
		((negative_count++));
	else
		((zero_count++));
	fi
done

echo "Number of positive numbers: $positive_count"
echo "Number of negative numbers: $negative_count"
echo "Number of zeros: $zero_count"

