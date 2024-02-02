#include <iostream>
#include <cmath>
using namespace std;

// Base class: Shape
class Shape {
public:
    Shape() {
        cout << "Shape created." << endl;
    }
};

// Derived class: Circle
class Circle : public Shape {
private:
    double radius;

public:
    // Constructor for Circle
    Circle(double r) {
        radius = r;
        cout << "Circle created." << endl;
    }

    // Area method for Circle
    double Area() {
        return M_PI * radius * radius;
    }
};

// Derived class: Rectangle
class Rectangle : public Shape {
private:
    double length;
    double width;

public:
    // Constructor for Rectangle
    Rectangle(double l, double w) {
        length = l;
        width = w;
        cout << "Rectangle created." << endl;
    }

    // Area method for Rectangle
    double Area() {
        return length * width;
    }
};

int main() {
    // Creating objects of Circle and Rectangle
    Circle myCircle(5.0);
    Rectangle myRectangle(4.0, 6.0);

    // Calculating and displaying the area of the shapes
    cout << "Area of Circle: " << myCircle.Area() << endl;
    cout << "Area of Rectangle: " << myRectangle.Area() << endl;

    return 0;
}
