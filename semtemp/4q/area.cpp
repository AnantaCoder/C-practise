#include <iostream>
#include <cmath>

using namespace std;

int area_finder(int a, int b, int c) {
    float s = (a + b + c) / 2.0; // Semi-perimeter

    float area = sqrt(s * (s - a) * (s - b) * (s - c)); // Heron's formula
    return area; // Returns area
}

int main() {
    int a = 5;
    int b = 7;
    int c = 9;
    float result = area_finder(a, b, c); // Store result as float

    cout << "The area of the triangle is: " << result << endl; // Print the area
    return 0;
}
