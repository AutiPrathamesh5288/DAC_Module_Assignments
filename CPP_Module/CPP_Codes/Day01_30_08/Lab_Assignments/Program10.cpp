//Write a program to find m to the power n. m=3 and n=4 so 3*3*3*3.

#include<iostream>
using namespace std;

int main() {
    int a,raised,ans=1;
    cout<<"Enter base Number : "<<endl;
    cin>>a;
    cout<<"Enter raised Number : "<<endl;
    cin>>raised;
    

    for(int i=1;i<=raised;i++) {
        ans=ans*a;
    }
    cout<<"Answer of "<<a<<"^"<<raised<<" is : "<<ans;
    
}