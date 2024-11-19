#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;

    vector<string> array(n); // Create a vector of strings with size n

    // Input elements into the vector
    for (int i = 0; i < n; i++) {
        cout << "Enter element " << i + 1 << ": ";
        cin >> array[i];
    }

    // Output the contents of the vector
    cout << "The elements in the array are: " << endl;
    for (const string& element : array) {
        cout << element << " "; // Print each element on a new line
    }

    return 0;
}
