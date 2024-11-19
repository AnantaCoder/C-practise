#include <bits/stdc++.h>
using namespace std;
int factorial(int n ){
    if(n==0)
    return 1;
    else{
        return n * factorial(n-1);
    }
}
int main(){
    int number= 10;
    int result;
    result = factorial(number);
    cout<< "The factorial of the number 5 is "<<result;

return 0;

}