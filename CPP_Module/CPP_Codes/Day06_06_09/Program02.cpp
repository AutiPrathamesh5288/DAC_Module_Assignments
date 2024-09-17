/*
2:Create cpp application for bank account handling.
2.1. Create a class BankAccount -- acct no(int),customer name(string),balance(double)
Add  constr. (2 constrs : first to accept all details )

2.2 Add Business logic methods
Methods
public void withdraw(double amt) 
public void deposit(double amt)

2.3: Create object of account class and test withdraw and deposit methods.
*/


#include<iostream>

using namespace std;

class BankAccount{
    private:
        int accno;
        string cust_name;
        double balance;

    public:
        BankAccount(){
            cout<<"Default....."<<endl;
        }
        BankAccount(int accno, string cust_name,double balance){
            this->accno=accno;
            this->cust_name=cust_name;
            this->balance=balance;
        }
        void withdraw(double amt){
            if(amt<balance){
                balance-=amt;
                cout<<"Your Balance is : "<<balance<<endl;
            }
            else{
                cout<<"Insufficent balance...."<<endl;
            }
        }

        void deposite(double amt){
            if(amt>0){
                balance+=amt;
                cout<<"Your Balance is : "<<balance<<endl;
            }
            else{
                cout<<"Enter the sufficent balance....."<<endl;
            }
        }

};


int main(){
    BankAccount bobj(101,"Kiran",5000);
    bobj.deposite(4000);
    bobj.withdraw(290);
    bobj.withdraw(175);
    bobj.deposite(230);

    return 0;
}