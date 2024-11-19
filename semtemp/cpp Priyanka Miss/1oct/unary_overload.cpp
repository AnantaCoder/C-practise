#include <iostream>
using namespace std;

class Counter {
private:
    int count;

public:
    // Constructor to initialize the counter
    Counter(int c = 0) : count(c) {}

    // Overloading the unary ++ operator as a member function
    Counter operator++() {
        ++count;  // Increment the count
        return *this;  // Return the current object
    }

    // Function to display the current count
    void display() const {
        cout << "Count: " << count << endl;
    }
};

int main() {
    Counter c1(5); // Initialize counter with 5

    cout << "Initial ";
    c1.display(); // Display initial count

    ++c1; // Use overloaded ++ operator

    cout << "After incrementing ";
    c1.display(); // Display count after increment

    return 0;
}
