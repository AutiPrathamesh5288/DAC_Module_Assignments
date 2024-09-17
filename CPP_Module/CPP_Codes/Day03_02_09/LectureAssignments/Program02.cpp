#include<iostream>
using namespace std;

int swapNumbers(int &num1,int &num2) {
	
	int temp;
	temp=num1;
	num1=num2;
	num2=temp;
	
		
}

int main2() {
	int num1,num2;
	cout<<"Enter the 1st Number : ";
	cin>>num1;
	cout<<"Enter the 2nd Number : ";
	cin>>num2;
	int *ptr1=&num1;
	int *ptr2=&num2;
	cout<<"Number before swapping : "<<*ptr1<<" & "<<*ptr2<<endl;
	swapNumbers(*ptr1,*ptr2);
	cout<<"Number after swapping : "<<*ptr1<<" & "<<*ptr2<<endl;
	
}
