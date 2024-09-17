/*
Consider that payroll software needs to be developed for computerization of
operations of an ABC organization. The organization has employees.
3.1. Construct a class Employee with following members using private access
specifies:
 Employee Id integer
 Employee Name string
 Basic Salary double
 HRA double
 Medical double=1000
 PF double
PT double
 Net Salary double
 Gross Salary double
Please use following expressions for calculations://Note:Don't accept HRA,PF PT from user
 * HRA = 50% of Basic Salary
* PF = 12% of Basic Salary
* PT = Rs. 200

Write methods to display the details of an employee and calculate the gross
and net salary.
* Goss Salary = Basic Salary + HRA + Medical
* Net Salary = Gross Salary – (PT + PF)
*/

#include <iostream>
using namespace std;
class Employee
{
private:
    int empId;
    string name;
    double salary;
    double hra;
    double medical = 1000;
    double pf;
    double pt = 200;
    double netSalary;
    double grossSalary;

public:
    Employee()
    {
    }
    Employee(int empId, string name, double salary)
    {
        this->empId = empId;
        this->name = name;
        this->salary = salary;
    }
    double calGrossSalary()
    {

        grossSalary = salary + hra + medical;
        return grossSalary;
    }
    double calNetSalary()
    {

        netSalary = grossSalary - (pt + pf);
        return netSalary;
    }

    void displayDetails()
    {
        hra = 0.5 * salary;
        pf = 0.12 * salary;
        cout << "Employee Id : " << empId << endl;
        cout << "Employee Name : " << name << endl;
        cout << "Employee hra is : " << hra << endl;
        cout << "Employee pf is : " << pf << endl;
        cout << "Employee Basic Salary : " << salary << endl;
        cout << "Employee Gross Salary : " << calGrossSalary() << endl;
        cout << "Employee net Salary : " << calNetSalary() << endl;
    }
};
int main()

{
    Employee emp1(1, "Auti", 50000);
    emp1.displayDetails();
}