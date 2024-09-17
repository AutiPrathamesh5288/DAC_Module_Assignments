#! /bin/bash

vehicle=$1

case $vehicle in
	"car" )
		echo "Rent of $vehicle is 100   " ;;
	"van" )
                echo "Rent of $vehicle is 100 dollar ";;

	"bicycle" )
                echo "Rent of $vehicle is 100 dollar ";;

	"cycle" )
                echo "Rent of $vehicle is 100 dollar ";;
	*)
		echo "Unknown vehicle";;

esac
