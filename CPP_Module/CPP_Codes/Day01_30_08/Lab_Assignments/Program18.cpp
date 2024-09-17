// Write a program to find greatest of three numbers using nested if-else.

#include <iostream>
using namespace std;

int main()
{
    int num1, num2, num3;
    cout << "Enter three numbers : ";
    cin >> num1 >> num2 >> num3;

    if (num1 >= num2)
    {
        if (num1 >= num3)
        {
            cout << "Number num1 " << num1 << " is greater.";
        }
        else
        {
            cout << "Number num3 " << num3 << " is greater.";
        }
    }
    else
    {
        if (num2 >= num3)
        {
            cout << "Number num2 " << num2 << " is greater.";
        }
        else
        {
            cout << "Number num3 " << num3 << " is greater.";
        }
    }
}