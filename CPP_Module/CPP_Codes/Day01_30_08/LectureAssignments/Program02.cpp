//2. Accept three numbers from user and find min and max number

#include<iostream>
using namespace std;

int main3() {
	
	int num1,num2,num3;
	cout<<"Enter 1st Number : ";
	cin>>num1;
	cout<<"Enter 2nd Number : ";
	cin>>num2;
	cout<<"Enter 3rd Number : ";
	cin>>num3;
	
	if(num1==num2 && num2 == num3) {
		cout<<"All numbers are Equal";
	}
	else if(num1>=num2 && num1>num3) {
		cout<<"maximum Number is : "<<num1<<endl;
	}
	else if(num2>num1 && num2>=num3) {
		cout<<" maximum Number is : "<<num2<<endl;
	}
	else{
		cout<<" maximum Number is: "<<num3<<endl;
	}
	
	if(num1<=num2 && num1<num3) {
		cout<<"minimum Number is : "<<num1<<endl;
	}
	else if(num2<num1 && num2<=num3) {
		cout<<" minimum Number is : "<<num2<<endl;
	}
	else{
		cout<<" minimum Number is: "<<num3<<endl;
	}
	
	
}

