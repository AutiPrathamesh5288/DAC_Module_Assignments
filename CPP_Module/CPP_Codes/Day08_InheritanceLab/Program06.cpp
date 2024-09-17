/*
Geometric Shapes with Polymorphism:
Problem Statement: Extend the shape hierarchy example by implementing polymorphism. Define a base class Shape with methods to calculate area and perimeter. Then, create derived classes like Circle, Rectangle, and Triangle, each with its own implementation of these methods.

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

class Triangle : public Shape {
private:
    double a, b, c;
public:
    Triangle(double x, double y, double z) : a(x), b(y), c(z) {}
    double area() const override {
        double s = (a + b + c) / 2;
        return sqrt(s * (s - a) * (s - b) * (s - c));
    }
    double perimeter() const override {
        return a + b + c;
    }
};

int main() {
    double radius, width, height, a, b, c;

    cout << "Enter the radius of the circle: ";
    cin >> radius;
    Circle circle(radius);

    cout << "Enter the width and height of the rectangle: ";
    cin >> width >> height;
    Rectangle rectangle(width, height);

    cout << "Enter the sides of the triangle: ";
    cin >> a >> b >> c;
    Triangle triangle(a, b, c);

    Shape* shapes[] = { &circle, &rectangle, &triangle };

    for (Shape* shape : shapes) {
        cout << "Area: " << shape->area() << ", Perimeter: " << shape->perimeter() << endl;
    }

    return 0;
}