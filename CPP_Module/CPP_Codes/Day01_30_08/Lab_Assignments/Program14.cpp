//Write a  program to find sum of all even and odd numbers between 1 to n. 

#include<iostream>
using namespace std;

int main() {

    int evenSum=0,oddSum=0,n;
    cout<<"Enter a number : ";
    cin>>n;

    for(int i=1;i<=n;i++) {
        if(i%2==0) {
            evenSum+=i;
        }
        else{
            oddSum+=i;
        }
    }

    cout<<"Sum of Even Numbers is : "<<evenSum<<endl;
    cout<<"Sum of odd Numbers is : "<<oddSum;
}