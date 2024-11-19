#include <iostream>
using namespace std;

// Hollow rectangle pattern

int main() {
    int rows, columns;

    cout << "Enter the rows and columns for rectangles: ";
    cin >> rows >> columns;

    for (int i = 1; i <= rows; i++) {
        for (int j = 1; j <= columns; j++) {
            if (i == 1 || i == rows || j == 1 || j == columns) {
                cout << " * ";
            } else {
                cout << "   "; // Three spaces for the hollow part  
            }
        }
        cout << endl;
    }

    return 0;
}
       /*  *  *  *  *
        *           *
        *           *
        *           *
        *  *  *  *  */