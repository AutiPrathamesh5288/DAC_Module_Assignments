
#include<iostream>
using namespace std;

class Date {
	private:
		int dd;
		int mm;
		int yy;
		
	public:
		Date() {
			cout<<"\n-----In Default Constructor-----"<<endl;
			dd=01;
			mm=01;
			yy=2002;
		}
		Date(int i,int j,int k) {
			cout<<"\n-----In Parameterized Constructor-----"<<endl;
			dd=i;
			mm=j;
			yy=k;
		}
		void displayDate() {
			cout<<"Day is : "<<dd<<endl;
			cout<<"Month is : "<<mm<<endl;
			cout<<"Year is : "<<yy<<endl;
		}
		
	
};

class Box {
	private:
		string size;
		string color;
		string shape;
	public:
		Box (){
			cout<<"\n-----In Default Constructor-----"<<endl;
			size = "big";
			color = "Blue";
			shape = "rectangle";
		}
		Box(string s,string c,string sh) {
			cout<<"\n-----In Parameterized Constructor-----"<<endl;
			size = s;
			color = c;
			shape = sh;
		}
		void displayBoxData() {
			cout<<"Size of Box is : "<<size<<endl;
			cout<<"Color of Box is : "<<color<<endl;
			cout<<"Shape of Box is : "<<shape<<endl;
		}
		
	
};
class ComplexNumber {
	private:
		int realNumber;
		int imaginaryNumber;
	public:
		ComplexNumber() {
			cout<<"\n-----In Default Constructor-----"<<endl;
			realNumber=2;
			imaginaryNumber=4;
		}
		
		ComplexNumber(int r,int i) {
			cout<<"\n-----In Parameterized Constructor-----"<<endl;
			realNumber=r;
			imaginaryNumber=i;
		}
		void displayData() {
			cout<<"Real Number is : "<<realNumber<<endl;
			cout<<"Imaginary Number is : "<<imaginaryNumber<<endl;
		}
		int getReal(){ 
		 	return realNumber;
		}
	
};
int main() {
	
	Date date;
	date.displayDate();
	Date date1(02,02,2004);
	date1.displayDate();

	Box box;
	box.displayBoxData();
	Box box1("big","red","square");	
	box1.displayBoxData();
	
	ComplexNumber cn;
	cn.displayData();
	ComplexNumber cn1(6,9);
	cn1.displayData();
	
	return 0;
	
}
