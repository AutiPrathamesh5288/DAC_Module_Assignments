#!/bin/bash

echo "Enter five numbers : "

read num1
read num2
read num3
read num4
read num5

max=min=num1


if((max>num2 & max>num3 & max>num4 & max>num5))
then 
	max=num1
else if((num2>num1 & num2>num3 & num2>num4 & num2>num5))
then
	max=num2
else if((num3>num1 & num3>num2 & num3>num4 & num3>num5))
then
        max=num3
else if((num4>num1 & num4>num3 & num4>num2 & num4>num5))
then
        max=num4
else if((num5>num1 & num5>num3 & num5>num4 & num5>num2))
then
        max=num5
fi

echo "Maximum number is : $max"

