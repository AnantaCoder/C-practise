#include <iostream>
using namespace std;

class Compare {
    private:
        int num1, num2;

    public:
        // Constructor to initialize numbers
        Compare(int a, int b) : num1(a), num2(b) {}

        // Declare the friend function
        friend int findMax(Compare c);
};

// Friend function to find the maximum of two numbers
int findMax(Compare c) {
    return (c.num1 > c.num2) ? c.num1 : c.num2;
}

int main() {
    int a, b;
    cout << "Enter two numbers: ";
    cin >> a >> b;

    // Create an object of Compare with the input values
    Compare cmp(a, b);

    // Call the friend function to find the maximum
    cout << "The maximum of the two numbers is: " << findMax(cmp) << endl;

    return 0;
}
