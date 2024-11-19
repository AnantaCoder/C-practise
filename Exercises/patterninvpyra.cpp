#include <iostream>
using namespace std;

// Function to print '*' n times
void printStars(int n) {
    if (n == 0) {
        return;
    }
    cout << " * ";
    printStars(n - 1);
}

// Function to print inverted pyramid using recursion
void printInvertedPyramid(int n) {
    if (n == 0) {
        return;
    }

    // Call the printStars function to print '*' for the current row
    printStars(n);

    // Move to the next line after each row
    cout << endl;

    // Call the printInvertedPyramid function for the next row
    printInvertedPyramid(n - 1);
}

int main() {
    int height = 10; // You can change the height of the pyramid

    // Call the printInvertedPyramid function with the desired height
    printInvertedPyramid(height);

    return 0;
}
