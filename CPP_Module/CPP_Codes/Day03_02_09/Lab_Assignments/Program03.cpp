/*
Create a class ComplexNumber with data members real, imaginary.  *create a methods for assigning values and displaying values
*write a method for retriving realNumber
ex. int getReal(){ return real;}
 write same method for getImaginary
*create an objct in main method and invoke all methods
*/


 
#include<iostream>
using namespace std;

class ComplexNumber {
	private:
		int realNumber;
		int imaginaryNumber;
	public:
		void assignValues(int r,int i) {
			realNumber=r;
			imaginaryNumber=i;
		}
		void displayBoxData() {
			cout<<"Real Number is : "<<realNumber<<endl;
			cout<<"Imaginary Number is : "<<imaginaryNumber<<endl;
		}
		int getReal(){ 
		 	return realNumber;
		}
	
};
int main() {
	
	ComplexNumber cm1;
	
	int realNumber;
	int imaginaryNumber;
	
	cout<<"Enter Real Number : ";
	cin>>realNumber;
	cout<<"Enter Imaginary Number : ";
	cin>>imaginaryNumber;

	
	cm1.assignValues(realNumber,imaginaryNumber);
	cm1.displayBoxData();
	cout<<"Real Number is : "<<cm1.getReal();
	
	
	return 0;
	
}
