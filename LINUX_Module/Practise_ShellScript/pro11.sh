 #! /bin/bash

num1=20.5
num2=10


echo "20.4*4.4" | bc
echo "20.4+4.4" | bc
echo "20.4-4.4" | bc
echo "scale=5;20.4/4.4" | bc
num=3
echo "scale=2;sqrt($num)" | bc -l #math library
echo "scale=2;3^($num)" | bc -l
