#include <iostream>
#include <cmath> // For M_PI (PI constant)

using namespace std;

// Function to calculate the area of a circle
double area(double radius) {
    return M_PI * radius * radius;
}

// Function to calculate the area of a triangle
double area(double base, double height) {
    return 0.5 * base * height;
}

// Function to calculate the area of a square
double area(int side) {
    return side * side;
}

int main() {
    double radius;
    double base, height;
    int side;
    
    // Calculate the area of a circle
    cout << "Enter the radius of the circle: ";
    cin >> radius;
    cout << "Area of the circle: " << area(radius) << endl;
    
    // Calculate the area of a triangle
    cout << "Enter the base and height of the triangle: ";
    cin >> base >> height;
    cout << "Area of the triangle: " << area(base, height) << endl;
    
    // Calculate the area of a square
    cout << "Enter the side length of the square: ";
    cin >> side;
    cout << "Area of the square: " << area(side) << endl;
    
    return 0;
}
