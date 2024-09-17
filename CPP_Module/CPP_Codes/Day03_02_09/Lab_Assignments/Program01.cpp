/*
1.
* Create a class Date with data members as dd, mm, yy.
* Write a method acceptDate(inti,int j,int k) fro assigning day month year;
*Also add the display function to print day,month,year
*Create the
object of this class in main method and invoke all the methods in that class.
*/

#include <iostream>
using namespace std;

class Date
{
private:
	int dd;
	int mm;
	int yy;

public:
	void acceptDate(int i, int j, int k)
	{
		dd = i;
		mm = j;
		yy = k;
	}
	void displayDate()
	{
		cout << "Day is : " << dd << endl;
		cout << "Month is : " << mm << endl;
		cout << "Year is : " << yy;
	}
};
int main()
{

	Date date1;
	date1.acceptDate(02, 02, 2004);
	date1.displayDate();

	return 0;
}
