/*Jump statements are used to manipulate the flow of the program if some conditions are met. It is used to terminate or continue the loop inside a program or to stop the execution of a function.

Types of Jump Statements in C++
In C++,  there is four jump statement

break
continue
goto
return*/

/*#include <iostream>

using namespace std;

int main() {
    int num = 69;
    for (int i = 0; i <= num; i++) {

        cout<<"Tum acche admi hon!"<<num;
        if (num == 69) {
            cout << "chal BSDK" << endl;
        }
        break;
    }

    return 0;
}
*/

// C++ program to demonstrate the
// continue statement
#include <iostream>
using namespace std;

// Driver code
int main()
{
	for (int i = 1; i < 10; i++) {

		if (i == 5)
			continue;
		cout << i << " ";
	}
	return 0;
}
