#! /bin/bash

num1=20
num2=10

<<one
echo $(( num1+num2 ))
echo $(( num1-num2 ))
echo $(( num1*num2 ))
echo $(( num1/num2 ))
one

echo $(expr $num1 + $num2 )
echo $(expr $num1 - $num2 )
echo $(expr $num1 \* $num2 )
echo $(expr $num1 / $num2 )
