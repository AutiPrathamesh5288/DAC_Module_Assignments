/*
Create Employee class with members id(int),name(string),dob(Date).Use above created Date class.
Write default and parameterised constructor in Employee Class.Write accept() function to
accept information and display() to display emp information.
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
        cout << "-----Default Constructor Date-----" << endl;
        day = 02;
        month = 06;
        year = 2004;
    }

    Date(int day, int month, int year)
    {
        cout << "-----Parameterized Constructor Date-----" << endl;
        this->day = day;
        this->month = month;
        this->year = year;
    }
    void displayData()
    {
        cout << day << "-" << month << "-" << year << endl;
    }
};

class Employee
{
private:
    int id;
    string name;
    Date dob;

public:
    Employee()
    {

        cout << "-----Default Constructor Employee-----" << endl;
        id = 02;
        name = "Auti";
        dob = Date();
    }

    Employee(int id, string name, Date dob)
    {
        cout << "-----Parameterized Constructor Employee-----" << endl;
        this->id = id;
        this->name = name;
        this->dob = dob;
    }

    void accept()
    {
        cout << "Enter id : ";
        cin >> id;
        cout << "Enter Name : ";
        cin >> name;
        int day, month, year;
        cout << "Enter day : ";
        cin >> day;
        cout << "Enter Month : ";
        cin >> month;
        cout << "Enter year : ";
        cin >> year;

        dob = Date(day, month, year);
    }
    void displayData()
    {
        cout << "Id is : " << id << endl;
        cout << "Name is : " << name << endl;
        cout << "<---- Date of Birth is ----> " << endl;
        dob.displayData();
    }
};
int main()
{

    Employee emp1;
    emp1.displayData();

    emp1.accept();
    emp1.displayData();

    Employee emp2(3, "Auti", Date(01, 05, 2002));
    emp2.displayData();
}