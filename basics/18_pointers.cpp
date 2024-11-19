#include <iostream>

using namespace std;

int main() {

    int number = 15;
    int *ptr,**ptrtopointer;
    ptr = &number;
    ptrtopointer = &ptr;

    cout<<"The number stored in the memory address of the pointer is "<<*ptr <<"\n";
    cout<<"memory address of the pointer is "<<ptr <<"\n";
    cout<<"The number stored in the memory address of the pointer to pointer is "<<**ptrtopointer<<"\n";
    *ptr = 46;
    cout<<"The number stored in the memory address of the pointer is "<<*ptr <<"\n";


return 0;

}//output - 15,0x61ff08,15,46