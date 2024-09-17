#!/bin/bash -x


read -p "Enter your branch : " branch
case $branch in
	'dac')
		echo "DAC";;
	'ditiss')
		echo 'ditiss';;

	*)
		echo "any";;

esac
