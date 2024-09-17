/*

Employee Inheritance:
Problem Statement: Build a system for managing employees. Create a base class Employee with attributes such as name, employee ID, and salary. Then, derive classes like Manager and Developer, each with its own attributes and methods. Implement a common method, like calculate_salary(), in the base class.

*/

#include <iostream>
#include <string>

using namespace std;

class Employee {
protected:
    string name;
    double salary;
public:
    Employee(const string& name, double salary)
        : name(name), salary(salary) {}

    virtual double calculateSalary() const = 0;
    virtual ~Employee() {}
};

class Manager : public Employee {
public:
    Manager(const string& name, double salary)
        : Employee(name, salary) {}

    double calculateSalary() const override {
        return salary + 5000; // Simple bonus for Manager
    }
};

class Developer : public Employee {
public:
    Developer(const string& name, double salary)
        : Employee(name, salary) {}

    double calculateSalary() const override {
        return salary + 2000; // Simple overtime pay for Developer
    }
};

int main() {
    string name;
    double salary;

    cout << "Enter Manager's name and salary: ";
    cin >> name >> salary;
    Manager manager(name, salary);

    cout << "Enter Developer's name and salary: ";
    cin >> name >> salary;
    Developer developer(name, salary);

    cout << "Manager Salary: " << manager.calculateSalary() << endl;
    cout << "Developer Salary: " << developer.calculateSalary() << endl;

    return 0;
}