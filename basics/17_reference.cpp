#include <iostream>
#include <string>
using namespace std;

int main() {
    string food = "Pizza";
    string &meal = food;

    cout << food << "\n";
    cout << meal << "\n";
    return 0;
}//output - Pizza, pizza
/*In the example from the previous page, the & operator was used to create a reference variable. But it can also be used to get the memory address of a variable; which is the location of where the variable is stored on the computer.*/
