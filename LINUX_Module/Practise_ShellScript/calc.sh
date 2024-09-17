i#!/bin/bash

echo "Welcome in Calculator"
echo "===================="

echo "Enter Your choice for calculation "
echo "1.Addition"
echo "2.Substraction"
echo "======================"

read -p "Enter Your choice : " choice

case $choice in
	1)
		read -p "Enter 1st Number : " num1
		read -p "Enter 2nd Number : " num2
		echo $((num1+num2))
		echo "Thank you";;

	2)
                read -p "Enter 1st Number : " num1
                read -p "Enter 2nd Number : " num2
                echo $((num1-num2))
                echo "Thank you";;

	*)
		echo "Enter right choice";;

esac
