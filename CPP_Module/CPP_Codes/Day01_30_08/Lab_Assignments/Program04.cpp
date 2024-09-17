//Write a program to accept an integer and check if it is even or odd.

#include <iostream>
using namespace std;

int main()
{
    int a;
    cout << "Enter Number : " << endl;
    cin >> a;

    if(a%2==0) {
        cout<<"Even Number is : "<<a;
    }
    else{
        cout<<"Not even number";
    }

}