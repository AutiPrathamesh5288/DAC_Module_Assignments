#Shell Script to create calculator using switch-case.

#! /bin/bash

while true;
do
    echo "Welcome to the Calculator!"
    echo "Menu:"
    echo "1. Addition"
    echo "2. Subtraction"
    echo "3. Multiplication"
    echo "4. Division"
    echo "5. Exit"
    echo -n "Enter your choice: "
    read choice

    case $choice in 

	    	1)
		    read -p "Enter 1st Number : " num1
		    read -p "Enter 2nd Number : " num2
		    result=$(( num1+num2 ))
		    echo "Answer is : $result"
		    ;;
		2)
                    read -p "Enter 1st Number : " num1
                    read -p "Enter 2nd Number : " num2
                    result=$((num1-num2))
                    echo "Answer is : $result"
                    ;;
		3)
                    read -p "Enter 1st Number : " num1
                    read -p "Enter 2nd Number : " num2
                    result=$((num1*num2))
                    echo "Answer is : $result"
                    ;;
		4)
                    read -p "Enter 1st Number : " num1
                    read -p "Enter 2nd Number : " num2
		    if(( $num2==0 ));
		    then
			    echo "Divide by zero"
		    else
                    	result=$((num1/num2))
                    	echo "Answer is : $result"
		    fi;;

		5)
			echo "Exiting...."
			exit;;

		*)
			echo "Invalid Option Please Choose correct from Menu ...."
			;;
	esac
	echo
done
