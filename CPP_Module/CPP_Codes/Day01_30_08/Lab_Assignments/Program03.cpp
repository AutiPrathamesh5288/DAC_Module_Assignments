// Write a program to swap two numbers.

#include <iostream>
using namespace std;

int main()
{
    int a, b, temp;
    cout << "Enter 1st Number : " << endl;
    cin >> a;
    cout << "Enter 2nd Number : " << endl;
    cin >> b;

    cout << "Numbers before swapping: " << a << " & " << b << endl;
    temp = a;
    a = b;
    b = temp;
    cout << "Numbers after swapping: " << a << " & " << b << endl;

    int p, q;
    cout << "Enter 1st Number : " << endl;
    cin >> p;
    cout << "Enter 2nd Number : " << endl;
    cin >> q;

    cout << "Numbers before swapping: " << p << " & " << q << endl;
    p = p + q;
    q = p - q;
    p = p - q;

    cout << "Numbers after swapping: " << p << " & " << q << endl;

    
    int x, y;
    cout << "Enter 1st Number : " << endl;
    cin >> x;
    cout << "Enter 2nd Number : " << endl;
    cin >> y;

    cout << "Numbers before swapping: " << x << " & " << y << endl;
    x = x ^ y;
    y = x ^ y;
    x = x ^ y;

    cout << "Numbers after swapping: " << x << " & " << y << endl;
}