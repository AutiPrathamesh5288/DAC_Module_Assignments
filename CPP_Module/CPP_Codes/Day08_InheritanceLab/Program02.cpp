/*
Shape Hierarchy:
Problem Statement: Design a hierarchy of shape classes. Begin with a base class Shape and then create derived classes like Circle, Rectangle, and Triangle. Each shape should have methods for calculating area and perimeter specific to its geometry.


*/

#include <iostream>
#include <cmath>

using namespace std;

class Shape {
public:
    virtual double area() const = 0;
    virtual double perimeter() const = 0;
    virtual ~Shape() {}
};

class Circle : public Shape {
private:
    double radius;
public:
    Circle(double r) : radius(r) {}
    double area() const override {
        return 3.14 * radius * radius;
    }
    double perimeter() const override {
        return 2 * 3.14 * radius;
    }
};

class Rectangle : public Shape {
private:
    double width, height;
public:
    Rectangle(double w, double h) : width(w), height(h) {}
    double area() const override {
        return width * height;
    }
    double perimeter() const override {
        return 2 * (width + height);
    }
};

int main() {
    double radius, width, height;

    cout << "Enter the radius of the circle: ";
    cin >> radius;
    Circle circle(radius);

    cout << "Enter the width and height of the rectangle: ";
    cin >> width >> height;
    Rectangle rectangle(width, height);

    cout << "Circle: Area = " << circle.area() << ", Perimeter = " << circle.perimeter() << endl;
    cout << "Rectangle: Area = " << rectangle.area() << ", Perimeter = " << rectangle.perimeter() << endl;

    return 0;
}