/*
Create Date class with members day,month ,year.
Write no argument and parameterised constructor .Create two object s and initialize them using no argument and parameterised constructor
respectively.Print date using display function.
*/

#include <iostream>
using namespace std;

class Date
{
private:
    int day, month, year;

public:
    Date()
    {
        cout << "-----Default Constructor-----" << endl;
        day = 02;
        month = 06;
        year = 2004;
    }

    Date(int day, int month, int year)
    {
        cout << "-----Parameterized Constructor-----" << endl;
        this->day = day;
        this->month = month;
        this->year = year;
    }
    void displayData()
    {
        cout << "Day is : " << day << endl;
        cout << "Month is : " << month << endl;
        cout << "Year is : " << year << endl;
    }
};
int main()
{
    Date date1;
    date1.displayData();

    Date date2(01, 05, 2002);
    date2.displayData();
}