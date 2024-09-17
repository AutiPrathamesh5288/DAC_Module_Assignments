/*
Vehicle Inheritance:
Problem Statement: Develop a class hierarchy for vehicles. Start with a base class Vehicle and create derived classes like Car, Motorcycle, and Truck. Each derived class should have unique properties like the number of wheels and specific methods like start_engine().

*/
#include <iostream>
#include <string>

using namespace std;

class Vehicle {
protected:
    int numberOfWheels;
public:
    Vehicle(int wheels) : numberOfWheels(wheels) {}

    virtual void startEngine() const = 0;
    virtual ~Vehicle() {}
};

class Car : public Vehicle {
public:
    Car() : Vehicle(4) {}

    void startEngine() const override {
        cout << "Car engine started" << endl;
    }
};

class Motorcycle : public Vehicle {
public:
    Motorcycle() : Vehicle(2) {}

    void startEngine() const override {
        cout << "Motorcycle engine started" << endl;
    }
};

int main() {
    Car car;
    Motorcycle motorcycle;

    car.startEngine();
    motorcycle.startEngine();

    return 0;
}