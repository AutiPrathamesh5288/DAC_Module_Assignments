//1. accept month number from user and display month name

#include<iostream>
using namespace std;

int main1() {
	
	int monthNum;
	cout<<"Enter month number : "<<endl;
	cin>>monthNum;
	
	switch(monthNum) {
		
		case 1:
			cout<<"January";
			break;
		case 2:
			cout<<"February";
			break;
		case 3:
			cout<<"March";
			break;
		case 4:
			cout<<"April";
			break;
		case 5:
			cout<<"May";
			break;
		case 6:
			cout<<"June";
			break;
		case 7:
			cout<<"July";
			break;
		case 8:
			cout<<"August";
			break;
		case 9:
			cout<<"September";
			break;
		case 10:
			cout<<"October";
			break;	
		case 11:
			cout<<"November";
			break;
		case 12:
			cout<<"December";
			break;
			
		default:
			cout<<"Enter correct month number";
		
	}
	
}


int main2() {
	
	int monthNum;
	cout<<"Enter month number : "<<endl;
	cin>>monthNum;
	
	if(monthNum==1)
	  	cout<<"January";
	else if(monthNum==2)
		cout<<"February";
	else if(monthNum==3)
		cout<<"March";
	else if(monthNum==4)
		cout<<"April";		
	else if(monthNum==5)
		cout<<"May";
	else if(monthNum==6)
		cout<<"June";
	else if(monthNum==7)
		cout<<"July";
	else if(monthNum==8)
		cout<<"August";
	else if(monthNum==9)
		cout<<"September";
	else if(monthNum==10)
		cout<<"October";
	else if(monthNum==11)
		cout<<"November";
	else if(monthNum==12)
		cout<<"December";
	else
		cout<<"Enter correct month number";
	
}
