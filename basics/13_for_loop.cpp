#include <iostream>

using namespace std;

int main() {

    for (int i = 0; i < 11; i++)
    {
        /* code */cout<<"The number is "<<i<<"\n";
    }
    

return 0;

}//12345678910

//for (statement 1; statement 2; statement 3) {
  // code block to be executed
/*Statement 1 is executed (one time) before the execution of the code block.

Statement 2 defines the condition for executing the code block.

Statement 3 is executed (every time) after the code block has been executed.*/

#include <iostream>

using namespace std;

int main() {

    for (int i = 0; i < 10; i=i+2)
    {
       cout<<"The number is "<<i<<"\n";
    }
    

return 0;

} //output = 0,2,4,6,8

#include <iostream>

using namespace std;

int main() {

    int num;
    cout<<"Enter the number :";
    cin>>num;
    for (int i = 0; i <= num; i++)
    {
        cout << "Outer number is: " << i << "\n";
        for (int j = 1; j <= num; j++)
        {
            cout<<"Inner number is " << j<<"\n";
        }
        
    }
    
return 0;

} //output baire outer and bhetore inner loop run hobe

//````````````````````````````````````````````````````````````````````````````````````````````````````````````````

#include <iostream>
using namespace std;

int main() {
    int myNumbers[5] = {10, 20, 30, 40, 50};
    for (int i : myNumbers) {
    cout << i << "\n";
    }
    return 0;
} //prints all the elements of an array
