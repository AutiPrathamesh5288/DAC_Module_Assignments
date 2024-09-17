#Shell Script to accept id from user to confirm department using switch-case.
#!/bin/bash

read -p "Enter Id : " id

case $id in
	IT[0-9])
		echo "IT department";;
	COMP[0-9])
		echo "Comp Department";;
	FIN[0-9])
                echo "Finance Department";;
	SDE[0-9])
                echo "Software Development Department";;
	UI[0-9])
                echo "UI Department";;
	*)
		echo "Invalid ID";;

esac
