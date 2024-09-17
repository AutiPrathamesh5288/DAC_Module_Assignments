#include <iostream>
#include <string>
#include <string.h>
using namespace std;

int main()
{

    char name[20];
    char oldName[20];
    char newName[20];
    int accountNumber = 0, currBalance, deposit, withdraw, option;

    cout << "\n-------Welcome in Bank of Akurdi Online Services-------\n"
         << endl;
    cout << "Enter your full name : ";
    cin >> name;

    do
    {
        cout << "Welcome, " << name << endl;
        cout << "1.Create Account\n"
             << "2.Deposit Money\n"
             << "3.withdraw Money\n"
             << "4.View Account Details\n"
             << "5.Update Profile\n"
             << "6.Log Out\n";
        cout << "Enter Service Option : " << endl;
        cin >> option;

        switch (option)
        {
        case 1:
            cout << "Welcome, " << name << endl;
            cout << "Enter Account Number : " << endl;
            cin >> accountNumber;
            cout << "Pay 500 Rs for account confirmation it will deposit in your account." << endl;
            cin >> currBalance;
            if (currBalance >= 500)
            {
                if (accountNumber >= 0)
                {
                    cout << "Account Created Successfully ... " << endl;
                }
                else
                {
                    cout << "You already have an account" << endl;
                }
            }
            else
            {
                cout << "Not paid confirmation fees..." << endl;
            }
            cout << "----------------------------------------------------------------------" << endl;
            break;

        case 2:
            cout << "Enter amount for deposit money : " << endl;
            cin >> deposit;
            if (deposit > 0)
            {
                cout << deposit << " Rs deposited Successfully..." << endl;
                currBalance += deposit;
                cout << " You can check your total balance by chossing option - 4 " << endl;
            }
            else
            {
                cout << "Please deposit non zero amount..." << endl;
            }
            cout << "----------------------------------------------------------------------" << endl;
            break;

        case 3:
            cout << "Enter amount for withdraw money : " << endl;
            cin >> withdraw;
            if (withdraw > 0)
            {
                if ((currBalance - withdraw) > 500)
                {
                    cout << withdraw << " Rs withdraw Successfully..." << endl;
                    currBalance -= withdraw;
                    cout << " You can check your remaining balance by chossing option - 4 " << endl;
                }
                else
                {
                    cout << "Should be consist of minimum 500 Rs...so rejected!!" << endl;
                }
            }
            else
            {
                cout << "Please enter non zero amount..." << endl;
            }
            cout << "----------------------------------------------------------------------" << endl;
            break;
        case 4:
            cout << "User Name : " << name << endl;
            cout << "User Account no. : " << accountNumber << endl;
            cout << "Total Balance is : " << currBalance << endl;
            cout << "----------------------------------------------------------------------" << endl;
            break;
        case 5:

            cout << "Enter New Name : " << endl;
            cin >> name;

            cout << "----------------------------------------------------------------------" << endl;
            break;
        case 6:
            cout << "Log Out Successfully ..." << endl;
            cout << "Thank You ..." << endl;
            cout << "----------------------------------------------------------------------" << endl;
            break;

        default:
            cout << "Enter correct option : ";
            break;
        }
    } while (option != 6);
}