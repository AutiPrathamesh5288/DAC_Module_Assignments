#Shell Script to check password is correct or incorrect using switch-case.


#!/bin/bash 

myPassword="key123"
read -sp "Enter Password : " password
echo
case $password in

	
	$myPassword)
                echo "Password is Correct";;
	*)
		echo "Password is Incorrect";;

esac
