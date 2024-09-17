# Write a script to find out String is palindrome or not. 
#!/bin/bash

read -p "Enter a string : " str;

len=${#str}
i=0
j=$((len-1))
is_palindrome="true"

while((i<j));
do
	if [ "${str:$i:1}" != "${str:$j:1}" ];
	then
		is_palindrome="false"
		break
	fi
	((i++))
	((j--))
done
if [[ $is_palindrome == "true" ]];
then
	echo "The String $str is Palindrome "
else
	echo "The String $str is not palindrome"
fi
