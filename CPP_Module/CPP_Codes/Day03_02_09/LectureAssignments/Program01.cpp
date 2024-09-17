#include<iostream>
using namespace std;

int swapNumbers(int *num1,int *num2) {
	
	int temp;
	temp=*num1;
	*num1=*num2;
	*num2=temp;
		
}

int main1() {
	int num1,num2;
	cout<<"Enter the 1st Number : ";
	cin>>num1;
	cout<<"Enter the 2nd Number : ";
	cin>>num2;
	
	cout<<"Number before swapping : "<<num1<<" & "<<num2<<endl;
	swapNumbers(&num1,&num2);
	cout<<"Number after swapping : "<<num1<<" & "<<num2<<endl;
	
}
