#include <bits/stdc++.h>
using namespace std;
class Complex{
private:
int a,b;
public:

    void setnumber(int num1, int num2){
        a = num1;
        b = num2;

    }
    void getnumber(){
        cout<<"Your complex number is "<< a<<"+"<<b<<"i"<<endl;
    }
    // friend function to give access of the public data to the friend function sumcomplex
    friend Complex sumcomplex(Complex o1, Complex o2);
};


Complex sumcomplex( Complex o1, Complex o2){
    Complex o3;
    o3.setnumber(o1.a+o2.a,o1.b+o2.b);
    return o3;
}

int main(){

    Complex com1, com2, sum;

    com1.setnumber(1,5);
    com2.setnumber(1,8);
    com1.getnumber();
    com2.getnumber();
    sum = sumcomplex(com1, com2);
    sum.getnumber();

return 0;

}
// properties of friend number 
/*
    * Friend function can access the private data members of the class
    * not in the schope of class
    * it cannot called the obj of the class s
    * can be uinvoked without the helpof obj
    * usually contains obj as arguments
    * can be declared inside public or private part of the class.
    * iIt cannot acccess the members directly by thedir names and need obj_name.member_name to access any members .
*/