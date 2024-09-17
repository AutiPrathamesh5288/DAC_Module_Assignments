/*
Write a program, which accepts annual basic salary of an employee and calculates and displays the 
Income tax as per the following rules. 
Basic: < 1, 50,000 Tax = 0 
1, 50,000 to 3,00,000 Tax = 20% 
> 3,00,000 Tax = 30% 
*/

#include<iostream>
using namespace std;
int main() {
    float salary,tax;
    cout<<"Enter Employee Salary : "<<endl;
    cin>>salary;
    
    if(salary<=150000) {
        cout<<"Tax is 0"<<"%"<<" for "<<salary<<endl;
    }
    else if(salary>150000 && salary<=300000) {
        tax = salary*0.2;
        cout<<"Tax is 20"<<"%"<<" for "<<salary<<" so your tax is : "<<tax<<endl;
    }
    else if(salary>300000) {
         tax = salary*0.3;
        cout<<"Tax is 30"<<"%"<<" for "<<salary<<" so your tax is : "<<tax<<endl;
    }
    else{
        cout<<"Enter correct amount ";
    }
    
}
