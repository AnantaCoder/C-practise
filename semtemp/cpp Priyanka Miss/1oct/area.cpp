#include <iostream>
#include <cmath>
using namespace std;

// Class for Circle
class Circle {
private:
    double radius;

public:
    Circle(double r) : radius(r) {}

    double area() const {
        return M_PI * radius * radius;
    }
};

// Class for Cylinder
class Cylinder {
private:
    double radius;
    double height;

public:
    Cylinder(double r, double h) : radius(r), height(h) {}

    double surfaceArea() const {
        return 2 * M_PI * radius * (radius + height);
    }
};

// Class for Cone
class Cone {
private:
    double radius;
    double height;

public:
    Cone(double r, double h) : radius(r), height(h) {}

    double surfaceArea() const {
        double slantHeight = sqrt(radius * radius + height * height);
        return M_PI * radius * (radius + slantHeight);
    }
};

// Class for Rectangle
class Rectangle {
private:
    double length;
    double width;

public:
    Rectangle(double l, double w) : length(l), width(w) {}

    double area() const {
        return length * width;
    }
};

// Class for Parallelepiped
class Parallelepiped {
private:
    double length;
    double width;
    double height;

public:
    Parallelepiped(double l, double w, double h) : length(l), width(w), height(h) {}

    double surfaceArea() const {
        return 2 * (length * width + width * height + height * length);
    }
};

// Class for Cube
class Cube {
private:
    double side;

public:
    Cube(double s) : side(s) {}

    double surfaceArea() const {
        return 6 * side * side;
    }
};

int main() {
    // Circle
    Circle circle(5.0);
    cout << "Area of Circle: " << circle.area() << endl;

    // Cylinder
    Cylinder cylinder(5.0, 10.0);
    cout << "Surface Area of Cylinder: " << cylinder.surfaceArea() << endl;

    // Cone
    Cone cone(5.0, 10.0);
    cout << "Surface Area of Cone: " << cone.surfaceArea() << endl;

    // Rectangle
    Rectangle rectangle(10.0, 5.0);
    cout << "Area of Rectangle: " << rectangle.area() << endl;

    // Parallelepiped
    Parallelepiped parallelepiped(10.0, 5.0, 8.0);
    cout << "Surface Area of Parallelepiped: " << parallelepiped.surfaceArea() << endl;

    // Cube
    Cube cube(4.0);
    cout << "Surface Area of Cube: " << cube.surfaceArea() << endl;

    return 0;
}
