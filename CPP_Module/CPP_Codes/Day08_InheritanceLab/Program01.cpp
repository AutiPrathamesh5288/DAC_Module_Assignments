/*
Animal Hierarchy:
Problem Statement: Create a hierarchy of animal classes. Start with a base class Animal and then create derived 
classes like Mammal, Bird, and Fish. Each of these derived classes should have specific properties and methods 
related to their respective categories of animals.


*/

#include <iostream>
#include <string>

using namespace std;

class Animal {
protected:
    string name;
public:
    Animal(const string& name) : name(name) {}
    virtual void makeSound() const = 0;
    virtual ~Animal() {}
};

class Dog : public Animal {
public:
    Dog(const string& name) : Animal(name) {}
    void makeSound() const override {
        cout << "Woof!" << endl;
    }
};

int main() {
    string name;
    cout << "Enter the dog's name: ";
    getline(cin, name);

    Dog dog(name);
    dog.makeSound();

    return 0;
}