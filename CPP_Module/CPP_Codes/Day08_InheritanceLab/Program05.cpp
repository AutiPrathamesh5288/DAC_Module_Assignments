/*
Bank Account Inheritance:
Problem Statement: Design a system for managing bank accounts. Create a base class BankAccount with attributes like account number and balance. Derive classes like SavingsAccount and CheckingAccount, each with specialized methods like withdraw() and calculate_interest().

*/
#include <iostream>
#include <string>

using namespace std;

class BankAccount {
protected:
    double balance;
public:
    BankAccount(double balance) : balance(balance) {}

    virtual void withdraw(double amount) = 0;
    virtual void calculateInterest() const = 0;
    virtual ~BankAccount() {}
};

class SavingsAccount : public BankAccount {
private:
    double interestRate;
public:
    SavingsAccount(double balance, double rate)
        : BankAccount(balance), interestRate(rate) {}

    void withdraw(double amount) override {
        if (amount <= balance) {
            balance -= amount;
        }
    }

    void calculateInterest() const override {
        double interest = balance * interestRate;
        cout << "Interest: " << interest << endl;
    }
};

int main() {
    double balance, rate, amount;

    cout << "Enter Savings Account balance and interest rate: ";
    cin >> balance >> rate;
    SavingsAccount sa(balance, rate);

    cout << "Enter amount to withdraw: ";
    cin >> amount;
    sa.withdraw(amount);
    cout << "Balance after withdrawal: " << balance << endl;
    sa.calculateInterest();

    return 0;
}