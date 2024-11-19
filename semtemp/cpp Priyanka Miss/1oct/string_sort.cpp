#include <iostream>
#include <string>
#include <algorithm> // For std::sort

using namespace std;

class StringSorter {
private:
    string str;

public:
    // Constructor to initialize the string
    StringSorter(const string &inputStr) : str(inputStr) {}

    // Member function to sort the string
    void sortString() {
        sort(str.begin(), str.end()); // Sort the string in-place
    }

    // Function to display the sorted string
    void display() const {
        cout << "Sorted string: " << str << endl;
    }
};

int main() {
    string input;

    cout << "Enter a string to sort: ";
    getline(cin, input); // Read a string with spaces

    StringSorter sorter(input); // Create a StringSorter object
    sorter.sortString(); // Sort the string
    sorter.display(); // Display the sorted string

    return 0;
}
