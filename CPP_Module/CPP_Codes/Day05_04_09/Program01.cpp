// /*

// Fresh business scenario to apply inheritance , polymorphism   to emp based organization scenario.

// Create Emp based organization structure --- Emp , Mgr , Worker


// 1.1 Emp state--- id(int), name, deptId , basicSalary(double)
// Accept all of above in constructor arguments.

// Methods ---
// 1.2. compute net salary ---ret 0
// (eg : public double computeNetSalary(){return 0;})

// 1.2 Mgr state  ---id,name,basic,deptId , perfBonus
// Add suitable constructor
// Methods ----
// 1. compute net salary (formula: basic+perfBonus) -- override computeNetSalary


// 1.3 Worker state  --id,name,basic,deptId,hoursWorked,hourlyRate
// Methods :
// 1.  compute net salary (formula:  = basic+(hoursWorked*hourlyRate) --override computeNetSalary
// 2. get hrlyRate of the worker  -- add a new method to return hourly rate of a worker.(getter)

// Create suitable array to store organization details.
// Provide following options
// 1. Hire Manager
// I/P : all manager details

// 2. Hire Worker
// I/P : all worker details

// 3. Display information of all employees net salary (by invoking computeNetSal),

// 4. Exit
// ----------------------------------------------------

// */

// #include <iostream>
// using namespace std;
// class Employee
// {

// private:
//     int id;
//     string name;
//     int deptID;
//     double basicSalary;

// public:
//     Employee()
//     {
//     }
//     Employee(int id, string name, int deptId, double basicSalary)
//     {

//         this->id = id;
//         this->name = name;
//         this->deptID = deptID;
//         this->basicSalary = basicSalary;
//     }
//     double computeNetSalary()
//     {

//         return 0;
//     }
//    virtual void display()
//     {
//         cout << id << name << basicSalary << deptID ;
//     }
// };
// class Manager : public Employee
// {
// private:
//     int id;
//     string name;
//     int deptID;
//     double basicSalary, perfBonus, netSalary;

// public:
//     Manager()
//     {
//     }
//     Manager(int id, string name, int deptId, double basicSalary, double perfBonus) : Employee(id, name, deptId, basicSalary)
//     {
//         this->id=id;
//         this->name=name;
//         this->deptID=deptID;
//         this->basicSalary=basicSalary;
//        this->perfBonus=perfBonus;

       
//     }
//     double computeNetSalary()
//     {

//         return basicSalary + perfBonus;
//     }
//     void display()
//     {
//         cout << id << name << basicSalary << deptID ;
//     }
// };
// class Worker : public Employee
// {

// private:
//     int id;
//     string name;
//     int deptID;
//     double basicSalary;
//     double hoursWorked, hourlyRate;

// public:
//     Worker()
//     {
//     }
//     Worker(int id, string name, int deptId, double basicSalary, double hoursWorked, double hourlyRate) : Employee(id, name, deptId, basicSalary)
//     {

//         this->id=id;
//         this->name=name;
//         this->deptID=deptID;
//         this->basicSalary=basicSalary;
//         this->hoursWorked = hoursWorked;
//         this->hourlyRate = hourlyRate;
//     }
//     void computeNetSalary()
//     {

//         cout<< basicSalary + (hoursWorked * hourlyRate);
//     }
//     double gethrlyRate()
//     {
//         return hourlyRate;
//     }
//     void display()
//     {
//         cout << id << name << basicSalary << deptID ;
//     }
// };
// void getComputeSalary(Employee *employee)
// {
//     employee->display();
//     // cout<<employee;
// }
// int main()
// {

//     int choice;

//     Employee *employee[40];
//     Manager *mn;
//     Worker *wk;
//     int id;
//     string name;
//     int deptID;
//     double basicSalary, perfBonus;
//     double hoursWorked,hourlyRate;
//     int index = 0;
//     do
//     {
//         cout << "1.Hire Manager\n 2.Hire Worker \n 3.Display information of all employees net salary (by invoking computeNetSal) \n 4.Exit";
//         cout << "Enter choice : " << endl;
//         cin >> choice;

//         switch (choice)
//         {
//         case 1:
//             cout << "Enter id name deptId basicSalry perfbonus  :" << endl;
//             cin >> id >> name >> deptID >> basicSalary >> perfBonus;

//             mn = new Manager(id, name, deptID, basicSalary, perfBonus);
//             employee[index] = mn;
//             index++;
//             cout << "Manager Hired"<<endl;
            

//             break;

//         case 2:
//             cout << "Enter id name deptId basicSalry perfbonus hoursWorked  hourlyRate :" << endl;
//             cin >> id >> name >> deptID >> basicSalary >> hoursWorked>>hourlyRate;

//             wk = new Worker(id, name, deptID, basicSalary, hoursWorked,hourlyRate);
//             employee[index] = wk;
//             index++;
//             cout << "Worker Hired"<<endl;
            
//             break;

//         case 3:
//             // cout<<mn->computeNetSalary();
//             wk->computeNetSalary();
//             break;           


//         default:
//             break;
//         }

//     } while (choice != 4);
//     // mn->display();
//     getComputeSalary(employee[0]);
// }

// /*

#include <iostream>
#include <string>
using namespace std;

// Base class Employee
class Employee {
protected:
    int id;
    string name;
    int deptID;
    double basicSalary;

public:
    Employee(int id, string name, int deptID, double basicSalary)
        : id(id), name(name), deptID(deptID), basicSalary(basicSalary) {}

    // Virtual function to compute net salary (to be overridden in derived classes)
    virtual double computeNetSalary() {
        return 0;  // Base class doesn't have a formula for salary
    }

    // Virtual function to display employee details (to be overridden)
    virtual void display() {
        cout << "ID: " << id << ", Name: " << name
             << ", DeptID: " << deptID << ", Basic Salary: " << basicSalary;
    }

    // Virtual destructor for proper cleanup of derived classes
    virtual ~Employee() {}
};

// Derived class Manager
class Manager : public Employee {
private:
    double perfBonus;

public:
    Manager(int id, string name, int deptID, double basicSalary, double perfBonus)
        : Employee(id, name, deptID, basicSalary), perfBonus(perfBonus) {}

    // Override computeNetSalary for Manager
    double computeNetSalary() override {
        return basicSalary + perfBonus;
    }

    // Override display 
    void display() override {
        Employee::display();
        cout << ", Performance Bonus: " << perfBonus
             << ", Net Salary: " << computeNetSalary() << endl;
    }
};

// Derived class Worker
class Worker : public Employee {
private:
    double hoursWorked;
    double hourlyRate;

public:
    Worker(int id, string name, int deptID, double basicSalary, double hoursWorked, double hourlyRate)
        : Employee(id, name, deptID, basicSalary), hoursWorked(hoursWorked), hourlyRate(hourlyRate) {}

    // Override computeNetSalary for Worker
    double computeNetSalary() override {
        return basicSalary + (hoursWorked * hourlyRate);
    }

    // Additional method to get the hourly rate
    double getHourlyRate() {
        return hourlyRate;
    }

    // Override display 
    void display()  {
        Employee::display();
        cout << ", Hours Worked: " << hoursWorked << ", Hourly Rate: " << hourlyRate
             << ", Net Salary: " << computeNetSalary() << endl;
    }
};


int main() {
    Employee* employee[40];  
    int index = 0;           
    int choice;

    do {
        cout << "1. Hire Manager\n2. Hire Worker\n3. Display all employees' net salary\n4. Exit\n";
        cout << "Enter choice: ";
        cin >> choice;

        switch (choice) {
        case 1: {
            // Hire Manager
            int id, deptID;
            string name;
            double basicSalary, perfBonus;
            cout << "Enter ID, Name, DeptID, Basic Salary, Performance Bonus: ";
            cin >> id >> name >> deptID >> basicSalary >> perfBonus;
            employee[index] = new Manager(id, name, deptID, basicSalary, perfBonus);
            index++;
            break;
        }
        case 2: {
            // Hire Worker
            int id, deptID;
            string name;
            double basicSalary, hoursWorked, hourlyRate;
            cout << "Enter ID, Name, DeptID, Basic Salary, Hours Worked, Hourly Rate: ";
            cin >> id >> name >> deptID >> basicSalary >> hoursWorked >> hourlyRate;
            employee[index] = new Worker(id, name, deptID, basicSalary, hoursWorked, hourlyRate);
            index++;
            cout << "Worker Hired\n";
            break;
        }
        case 3:
            // Display all employees' net salary
            for (int i = 0; i < index; i++) {
                employee[i]->display();
            }
            break;
        case 4:
            cout << "Exiting...\n";
            break;
        default:
            cout << "Invalid choice! Try again.\n";
        }
    } while (choice != 4);

    // Clean up dynamically allocated memory
    for (int i = 0; i < index; i++) {
        delete employee[i];
    }

    return 0;
}


