#include <iostream>
using namespace std;

int plusint(int x, int y){
    return x + y; // return kokrlle z anar dorkar nei
}

double plusdouble(double x, double y){
    return x + y; // return kokrlle z anar dorkar nei
}
int main() {

    int f1= plusint(45,89);
    double f2 = plusdouble(8947.89,89.57);

    cout << f1 << "\n" << f2;
return 0;

} //output -- no eeroor

//-------------------------------------------------------------------------------------------

//Recursion is the technique of making a function call itself. This technique provides a way to break complicated problems down into simple problems which are easier to solve.

//++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++

//writing a recursion to find the factorial of a number

#include <iostream>
using namespace std;
int factorial(int x){
    if (x==0 || x==1)
    {
        return 1;
    }
    else
    {
            return x*factorial(x-1);
        
    }
    
}

int main() {

    int number;
    cout<< "Enter a number ";
    cin>>number;

    int result = factorial(number);
    cout<< "The factorial of "<< number << " is:-  "<< result;

return 0;

}

/*x: This is the current value for which we want to calculate the factorial.
factorial(x - 1): This is the recursive call to the factorial function with the argument x - 1. This recursive call is crucial as it calculates the factorial of the number one less than the current value of x. It continues the recursive process until the base case is reached.
Now, let's understand the entire logic:

If x is 0 or 1, the base case is satisfied, and the function returns 1 (since the factorial of 0 and 1 is 1).
If x is greater than 1, the else block is executed. It calculates the factorial of x by multiplying x with the result of the factorial of x - 1. This multiplication continues recursively until the base case is reached, and then the results are multiplied back up the chain.
This recursive approach allows us to break down the problem of calculating the factorial of a number into smaller subproblems until we reach a base case, simplifying the overall computation.*/