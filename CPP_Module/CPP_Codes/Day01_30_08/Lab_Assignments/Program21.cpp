/*
Write a program, which accepts two integers and an operator as a character (+ - * / ), performs the 
corresponding operation and displays the result.
*/

#include<iostream>
using namespace std;
int main() {
    int a,b,ans;
    char op;
    cout<<"Enter 1st number : ";
    cin>>a;
    cout<<"Enter 2nd number : ";
    cin>>b;
    cout<<"Enter operator from(+,/,*,-) : "<<endl;
    cin>>op;

    switch (op)
    {
    case '+':
        ans = a+b;
        cout<<"Addition is : "<<ans;
        break;
    case '-':
        ans = a-b;
        cout<<"Substraction is : "<<ans;
        break;
    case '*':
        ans= a*b;
        cout<<"Mulitplication is : "<<ans;
        break;
    case '/':
        ans= a/b;
        cout<<"Division is : "<<ans;
        break;
    default:
        cout<<"Enter correct operator.";
        break;
    }

}