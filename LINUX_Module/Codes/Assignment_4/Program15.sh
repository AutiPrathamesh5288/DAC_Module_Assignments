#Write a shell script to print given number’s sum of all digits (eg. If number is 123, then it’s sum of all digits will be 1+2+3=6)
#!/bin/bash


read -p "Enter a Number : " num
sum=0
num1=$num
while (( $num != 0 ));
do
	rem=$((num%10))
	sum=$((sum+rem))
	num=$((num/10))
done

echo "Sum of Number $num1 is : $sum"

