#include <bits/stdc++.h>
using namespace std;

class Data{
    private:
    int number;

    public:
    Data(int num): number(num){
        cout<<"Parameterised constructor with the value "<< number<<endl;
    }
    //copy constructor 

    Data( const Data &obj){
        number = obj.number;
        cout<<"Copy constructor called"<<"data is "<<number<<endl;
    }

    void display() const{
        cout<< "Data is "<< number<<endl;
    }
};

int main(){

      // Creating an object using the parameterized constructor
    Data s1(156);

    // Creating a new object s2 as a copy of s1 (invokes the copy constructor)
    Data s2(s1);

    // Displaying data for both objects
    cout << "s1: ";
    s1.display();
    cout << "s2: ";
    s2.display();

    return 0;               

}