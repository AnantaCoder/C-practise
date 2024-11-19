#include <iostream>
#include <cmath> // For mathematical constants and functions
using namespace std;

int main() {
    int choice, radius, side;
    double area;

    cout << "Choose the shape to calculate the area " << endl;
    cout << "1. Square" << endl;
    cout << "2. Circle" << endl;
    cout << "3. Sphere" << endl;
    cout << "Enter your choice (1/2/3): ";
    cin >> choice;

    switch (choice) {
        case 1: // Square
            side = 5; // Example side length
            area = side * side;
            cout << "Area of the square: " << area << endl;
            break;

        case 2: // Circle
            radius = 7.5; // Example radius
            area = M_PI * radius * radius; // Use M_PI for pi
            cout << "Area of the Circle is: " << area << endl;
            break;

        case 3: // Sphere
            cout << "Enter the radius of the sphere: ";
            cin >> radius;
            area = 4 * M_PI * radius * radius; // Surface area of the sphere
            cout << "Surface area of the sphere: " << area << endl;
            break;

        default:
            cout << "Invalid choice." << endl; // Handle invalid choices
            break;
    }

    return 0;
}
