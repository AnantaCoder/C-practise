#include <iostream>
#include <cmath> // for math 

using namespace std;

int main() {

    cout<< max(max(min(max(45,65),71),78),47)<<"\n"; // max and min to find largest and smallet btn 2 numbers
    cout<< sqrt(49)<<"\n";
    cout<< round(45.4)<<"\n";
    cout<< log(4)<<"\n";

        // Common mathematical functions
    double x = 2.0;
    double a = 5.0;
    double b = 6.0;

    cout << "Square root of " << x << ": " << sqrt(x) << endl;
    cout << "Power of " << x << " to the 3rd: " << pow(x, 3) << endl;
    cout << "Absolute value of " << a - b << ": " << abs(a - b) << endl;

    // Trigonometric functions
    double angle_in_degrees = 45.0;
    double angle_in_radians = angle_in_degrees * M_PI / 180.0;

    cout << "Sine of " << angle_in_degrees << " degrees: " << sin(angle_in_radians) << endl;
    cout << "Cosine of " << angle_in_degrees << " degrees: " << cos(angle_in_radians) << endl;
    cout << "Tangent of " << angle_in_degrees << " degrees: " << tan(angle_in_radians) << endl;

return 0;

}

