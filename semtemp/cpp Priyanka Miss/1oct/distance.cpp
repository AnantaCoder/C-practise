#include <iostream>
using namespace std;

class Distance {
private:
    int meters;
    int centimeters;

public:
    // Constructor to initialize distance
    Distance(int m = 0, int cm = 0) : meters(m), centimeters(cm) {
        normalize();
    }

    // Function to normalize the distance (cm >= 100 should be converted to meters)
    void normalize() {
        if (centimeters >= 100) {
            meters += centimeters / 100;
            centimeters = centimeters % 100;
        }
    }

    // Function to input distance
    void input() {
        cout << "Enter distance (meters and centimeters): ";
        cin >> meters >> centimeters;
        normalize();
    }

    // Function to add two distances
    Distance add(const Distance &d) const {
        return Distance(meters + d.meters, centimeters + d.centimeters);
    }

    // Function to display distance
    void display() const {
        cout << "Distance: " << meters << " meters and " << centimeters << " centimeters" << endl;
    }
};

int main() {
    Distance d1, d2;

    // Input first distance
    d1.input();

    // Input second distance
    d2.input();

    // Sum of distances
    Distance sum = d1.add(d2);

    // Display the result
    cout << "Sum of distances: ";
    sum.display();

    return 0;
}
