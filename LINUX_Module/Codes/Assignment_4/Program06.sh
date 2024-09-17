#6.Shell Script to print number between 1 to 10 in character format using switch-case.

#!/bin/bash

for i in {1..10};
do
	case $i in
		1)
			echo "one";;
		2)
                        echo "two";;
		3)
                        echo "three";;
		4)
                        echo "four";;
		5)
                        echo "five";;
		6)
                        echo "six";;
		7)
                        echo "seven";;
		8)
                        echo "eight";;
		9)
                        echo "nine";;
		10)
                        echo "ten";;
		*)
			echo "Invalid";;
esac

done
