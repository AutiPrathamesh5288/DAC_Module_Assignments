#Shell Script to display the first 10 natural numbers.

#!/bin/bash
echo "----- First 10 natural Numbers are -----"
for((i=1;i<=10;i++));
do
	echo $i
done
