// Write a program to check entered number is Armstrong number or not.

#include <iostream>
using namespace std;
int main()
{

    int n, count = 0, sum = 0;
    cout << "Enter a number : ";
    cin >> n;
    int temp1 = n;
    int temp2 = n;

    while (temp1 != 0)
    {
        temp1 /= 10;
        count++;
    }
    while (temp2 != 0)
    {
        int rem = temp2 % 10;
        int mult = 1;
        for (int i = 1; i <= count; i++)
        {
            mult *= rem;
        }
        sum += mult;
        temp2 /= 10;
    }

    if (n == sum)
    {
        cout << n << " is a Armstrong Number .";
    }
    else
    {
        cout << n << " is not a Armstrong Number.";
    }
}