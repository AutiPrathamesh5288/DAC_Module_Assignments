//Write a program to find factorial of a given number. ex:no5  fact=5*4*3*2*1=120

#include<iostream>
using namespace std;

int main() {
    int a,fact=1;
    cout<<"Enter Number : "<<endl;
    cin>>a;

    for(int i=1;i<=a;i++){
        fact*=i;
    }
    cout<<"Factorial of "<<a<<" number is : "<<fact;

}
 