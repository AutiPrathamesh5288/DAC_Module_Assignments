/*
Person and Student Inheritance:
Problem Statement: Model a system for handling individuals and students within an educational institution. Create a base class Person with attributes like name and age. Derive a Student class with additional attributes like student ID and GPA, inheriting the common attributes from the Person class.

*/

#include <iostream>
#include <string>

using namespace std;

class Person {
protected:
    string name;
    int age;
public:
    Person(const string& name, int age) : name(name), age(age) {}
    virtual ~Person() {}
};

class Student : public Person {
private:
    string studentID;
    double GPA;
public:
    Student(const string& name, int age, const string& id, double gpa)
        : Person(name, age), studentID(id), GPA(gpa) {}
};

int main() {
    string name, studentID;
    int age;
    double GPA;

    cout << "Enter student's name, age, student ID, and GPA: ";
    cin >> name >> age >> studentID >> GPA;
    Student student(name, age, studentID, GPA);

    cout << "Student Name: " << name << endl;
    cout << "Age: " << age << endl;
    cout << "Student ID: " << studentID << endl;
    cout << "GPA: " << GPA << endl;

    return 0;
}