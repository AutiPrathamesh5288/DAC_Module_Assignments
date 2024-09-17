/*
Shape Sorting with Interfaces:
Problem Statement: Implement a shape sorting program. Define a base class Shape with properties like area and perimeter. Create derived classes like Circle, Rectangle, and Triangle. Implement an interface Sortable with a method to compare shapes by area. Use this interface to sort a list of shapes.

*/

#include <iostream>
#include <vector>
#include <algorithm>
#include <math.h>


using namespace std;

class Shape {
public:
    virtual double area() const = 0;
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
};

class Rectangle : public Shape {
private:
    double width, height;
public:
    Rectangle(double w, double h) : width(w), height(h) {}
    double area() const override {
        return width * height;
    }
};

class Triangle : public Shape {
private:
    double a, b, c;
public:
    Triangle(double x, double y, double z) : a(x), b(y), c(z) {}
    double area() const override {
        double s = (a + b + c) / 2;
        return sqrt(s * (s - a) * (s - b) * (s - c));
    }
};

bool compareArea(const Shape* s1, const Shape* s2) {
    return s1->area() < s2->area();
}

int main() {
    vector<Shape*> shapes;
    shapes.push_back(new Circle(5));
    shapes.push_back(new Rectangle(4, 6));
    shapes.push_back(new Triangle(3, 4, 5));

    sort(shapes.begin(), shapes.end(), compareArea);

    for (const Shape* shape : shapes) {
        cout << "Area: " << shape->area() << endl;
    }

    // Clean up
    for (Shape* shape : shapes) {
        delete shape;
    }

    return 0;
}