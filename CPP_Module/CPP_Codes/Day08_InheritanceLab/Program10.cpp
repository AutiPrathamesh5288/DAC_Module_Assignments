/*
Employee Payroll System with Abstract Classes:
Problem Statement: Design an employee payroll system. Create an abstract class Employee with attributes like name and employee ID. Derive concrete classes like HourlyEmployee and SalariedEmployee. Define abstract methods for calculating pay in the base class and implement them in the derived classes.

*/

#include <iostream>
#include <string>

using namespace std;

class Employee {
protected:
    string name;
    int employeeID;
public:
    Employee(const string& name, int id)
        : name(name), employeeID(id) {}

    virtual double calculatePay() const = 0;
    virtual ~Employee() {}
};

class HourlyEmployee : public Employee {
private:
    double hourlyRate;
    int hoursWorked;
public:
    HourlyEmployee(const string& name, int id, double rate, int hours)
        : Employee(name, id), hourlyRate(rate), hoursWorked(hours) {}

    double calculatePay() const override {
        return hourlyRate * hoursWorked;
    }
};

class SalariedEmployee : public Employee {
private:
    double annualSalary;
public:
    SalariedEmployee(const string& name, int id, double salary)
        : Employee(name, id), annualSalary(salary) {}

    double calculatePay() const override {
        return annualSalary / 12; // Monthly salary
    }
};

int main() {
    string name;
    int id, hours;
    double rate, salary;

    cout << "Enter Hourly Employee's name, ID, hourly rate, and hours worked: ";
    cin >> name >> id >> rate >> hours;
    HourlyEmployee hourlyEmployee(name, id, rate, hours);
    cout << "Hourly Employee's Pay: " << hourlyEmployee.calculatePay() << endl;

    cout << "Enter Salaried Employee's name, ID, annual salary: ";
    cin >> name >> id >> salary;
    SalariedEmployee salariedEmployee(name, id, salary);
    cout << "Salaried Employee's Pay: " << salariedEmployee.calculatePay() << endl;

    return 0;
}