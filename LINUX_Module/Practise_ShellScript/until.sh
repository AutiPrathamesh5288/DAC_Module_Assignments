#!/bin/bash -x

x=10
until(($x<5))
do
	echo $x
	((x--))
done

