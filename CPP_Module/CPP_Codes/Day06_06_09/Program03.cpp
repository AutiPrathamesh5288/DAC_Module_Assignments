/*

Create a abstract class Shape with pure virtual method area;
Create Rectangle,Circle,Square class..inherit them from Shape class..Override area method.
Test these all classes by creating object of respective class.

*/
#include <iostream>
using namespace std;

class Shape
{
public:
    virtual void area() = 0; // Pure virtual method
    virtual ~Shape() {}      // Virtual destructor to ensure proper cleanup
};

class Rectangle : public Shape
{
    float length, breadth;

public:
    Rectangle(float length, float breadth) : length(length), breadth(breadth) {}
    void area() override
    {
        cout << "Area of Rectangle: " << length * breadth << endl;
    }
};

class Circle : public Shape
{
    float radius;
    const float pi = 3.142;

public:
    Circle(float radius) : radius(radius) {}
    void area() override
    {
        cout << "Area of Circle: " << pi * radius * radius << endl;
    }
};

class Square : public Shape
{
    float side;

public:
    Square(float side) : side(side) {}
    void area() override
    {
        cout << "Area of Square: " << side * side << endl;
    }
};

void calculateArea(Shape *shape)
{
    shape->area();
    delete shape; // Deletes the shape and calls the correct destructor
}

int main()
{
    Shape *shape = nullptr;
    int choice;
    do
    {

        cout << "-------- Calculate Area of Shapes ---------" << endl;
        cout << "1. Rectangle" << endl;
        cout << "2. Circle" << endl;
        cout << "3. Square" << endl;
        cout << "4. Exit" << endl;
        cin >> choice;

        switch (choice)
        {
        case 1:
        {
            float length, breadth;
            cout << "Enter length: ";
            cin >> length;
            cout << "Enter breadth: ";
            cin >> breadth;
            shape = new Rectangle(length, breadth); // Dynamically allocate Rectangle
            calculateArea(shape);
            break;
        }
        case 2:
        {
            float radius;
            cout << "Enter radius: ";
            cin >> radius;
            shape = new Circle(radius); // Dynamically allocate Circle
            calculateArea(shape);
            break;
        }
        case 3:
        {
            float side;
            cout << "Enter side length: ";
            cin >> side;
            shape = new Square(side); // Dynamically allocate Square
            calculateArea(shape);
            break;
        }
        case 4:
            cout << "Exiting..." << endl;
            return 0;
        default:
            cout << "Invalid choice!" << endl;
            return 1;
        }
    } while (choice != 4);

    
    return 0;
}
