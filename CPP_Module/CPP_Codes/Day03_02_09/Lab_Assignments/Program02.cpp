/*
Create a class Box with data members
 *create function to assign values and retrive value
 * create object of this class in main method and invoke all the methods in that class. 
 */
 
 
#include<iostream>
using namespace std;

class Box {
	private:
		string size;
		string color;
		string shape;
	public:
		void boxData(string s,string c,string sh) {
			size = s;
			color = c;
			shape = sh;
		}
		void displayBoxData() {
			cout<<"Size of Box is : "<<size<<endl;
			cout<<"Color of Box is : "<<color<<endl;
			cout<<"Shape of Box is : "<<shape;
		}
		
	
};
int main() {
	
	Box box1;
	
	string size;
	string color;
	string shape;
	
	cout<<"Enter size of Box e.g. big,medium,small,large : ";
	cin>>size;
	cout<<"Enter color of Box e.g. red,blue,etc. ";
	cin>>color;
	cout<<"Enter shape of Box e.g. square,rectangular,etc. ";
	cin>>shape;
	
	box1.boxData(size,color,shape);
	box1.displayBoxData();
	
	return 0;
	
	
}
