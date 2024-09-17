<<comment
Shell Script to read 10 numbers from the keyboard and find their sum and average.
Test Data :
Input the 10 numbers :
Number-1 :2
...
Number-10 :2
Expected Output :
The sum of 10 no is : 55
The Average is : 5.500000
comment

sum=0
echo "Input the 10 numbers : "
for i in {1..10}
do
	read -p "Number-$i : " num
	sum=$((sum+num));
	
done

#avg=$(echo "$sum/10" | bc -l)
avg=$(echo "scale=6;$sum/10" | bc)

echo "The Sum of 10 no is : $sum"
echo "The Average is : $avg"


#result=$(echo "scale=2 ;12/5"|bc)
#echo $result
