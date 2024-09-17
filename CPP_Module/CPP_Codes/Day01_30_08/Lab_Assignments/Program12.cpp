//Sum of series :
	// 1+2+3+….+n


#include<iostream>
using namespace std;

int main() {

    int sum=0,n;
    cout<<"Enter the Number : ";
    cin>>n;
    for(int i=1;i<=n;i++) {
        sum+=i;
    }
    cout<<"Sum is : "<<sum;

    /*
    or
    (n*(n+1))/2
    */
}