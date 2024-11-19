//A boolean variable is declared with the bool keyword and can only take the values true or false:
#include <iostream>
using namespace std;

int main() {
    bool isCodingFun = true;
    bool isFishTasty = false;
        cout << isCodingFun << "\n";
        cout << isFishTasty;
    return 0;
}


//______________________________________________________________________________________________//
#include <iostream>

using namespace std;

int main() {

    int age ;
    cout<<"Enter your age:";
    cin>>age;

    if (age>=21)
    {
        cout<<"You are allowed to drink";
    }
    else if (age==18)
    {
        cout<<"Just wait for few years";
        
    }
    
    else
    {
        cout<<"You are not allowed to drink";
        
    }
    

return 0;

}