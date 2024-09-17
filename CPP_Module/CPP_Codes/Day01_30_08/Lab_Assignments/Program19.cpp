// Create menu driven program for Pizza Shop.And display total amount.

#include <iostream>
#include <string.h>
using namespace std;
int main()
{

    char name[20], pass[8], secNum[8], checkSecNum[8];
    int choice, menuChoice, qty, totalAmount = 0, amount, totalQty = 0;
    cout << "------- Welcome to the Akurdi Pizza Shop -------\n";
    cout << "Enter Your name : ";
    cin >> name;

    cout << "Enter Password : " << endl;
    cout << "----Note: Password should consist of maximum 8 characters.----" << endl;
    cin >> pass;

    cout << "Enter secure number for payment : " << endl;
    cout << "----Note: Secure number should consist of maximum 8 characters.----" << endl;
    cin >> secNum;

    // cout << "Confrm Password : ";
    // cin >> confPass;

    // if(pass==confPass){
    //     cout<<"Account created Successfully";

    // }
    cout << "Welcome, " << name << " how can we help you ?\n";
    do
    {

        cout << "Please use our following services : \n";
        cout << "1. Show Menu\n"
             << "2. Display total amount\n"
             << "3. Disply total quantity\n"
             << "4. Pay\n"
             << "5. Exit\n";
        cin >> choice;

        switch (choice)
        {
        case 1:
            do
            {
                cout << "---------Our Menu---------" << endl;
                cout << "Please choose pizza among following : " << endl;
                cout << "1. Normal Pizza - 80Rs \n"
                     << "2. Cheese Pizza - 120Rs\n"
                     << "3. Family Pizza - 300Rs\n"
                     << "4. Go to main Page.\n";
                cin >> menuChoice;
                switch (menuChoice)
                {
                case 1:
                    cout << "Enter Quantity : " << endl;
                    cin >> qty;
                    amount = qty * 80;
                    totalAmount += amount;
                    totalQty += qty;
                    cout << "Added to cart......" << endl;
                    break;
                case 2:
                    cout << "Enter Quantity : " << endl;
                    cin >> qty;
                    totalAmount = qty * 120;
                    totalAmount += amount;
                    totalQty += qty;
                    cout << "Added to cart......" << endl;
                    break;
                case 3:
                    cout << "Enter Quantity : " << endl;
                    cin >> qty;
                    totalAmount = qty * 300;
                    totalAmount += amount;
                    totalQty += qty;
                    cout << "Added to cart......" << endl;
                    break;
                case 4:
                    cout << "Exiting......" << endl;
                    break;
                default:
                    cout << "Enter correct choice." << endl;
                    break;
                }

            } while (menuChoice != 4);

            break;

        case 2:
            cout << "You choose pizza of " << totalAmount << "Rs" << endl;
            break;
        case 3:
            cout << "You choose total " << totalQty << "pizzas." << endl;
            break;
        case 4:
            cout << "You have to pay total " << totalAmount << endl;
            cout << "Enter secure number for payment : ";
            cin >> checkSecNum;
            if (strcmp(checkSecNum, secNum) == 0)
            {
                cout << "Payment Successfully..." << endl;
                cout << "Now Enjoy..." << endl;
            }
            else
            {
                cout << "Enter correct secure Number ...";
            }
            break;
        case 5:
            cout << "Exiting...." << endl;
            break;
        default:
            break;
        }
    } while (choice != 5);
}
