// /*myFunction() is the name of the function
// void means that the function does not have a return value.
// inside the function (the body), add code that defines what the function should do*/
#include <iostream>
using namespace std;

void myfunction(string Country = "India"){    //parameter of the function
    cout<<"My country is "<< Country<<"\n";
}

int main() {

    myfunction("Nepal");
    myfunction();// this is for default value ie.India


return 0;

}

//------------------------------------------------------------------------------------------

/*The void keyword, used in the previous examples, indicates that the function should not return a value. If you want the function to return a value, you can use a data type (such as int, string, etc.) instead of void, and use the return keyword inside the function:*/
#include <iostream>
using namespace std;

int myFunction(int x, int y) {
    return x + y; 
}

int main() {
    cout << myFunction(5, 3);
    return 0;
}
//OUTPUT IS 8
//-----------------------------------------------------------------------------------------------

//You can also pass a reference to the function. This can be useful when you need to change the value of the arguments:

#include <iostream>
using namespace std;


//swapping two numbers

int swap(int x , int y){
    int z = x;
    x=y;
    y=z;

    cout<<"The Numbers after swapping is " <<x << " & "<<y;
}


int main() {


    int firstnum,secondnum;
    cout<<"Enter 1st number ";
    cin>>firstnum;
    cout<<"Enter 2nd number ";
    cin>>secondnum;

    swap(firstnum,secondnum);

return 0;

}//output- works fine

#include <iostream>
using namespace std
void array(int myarray[10]){
    for (int i = 0; i < 11; i++)
    {
        cout<< "My numbers in a array is "<<myarray[i]<<"\n";
    }
    
}

int main() {

    int Numbers[]={12,5,8947,56,8,65,2,659,9,7,8};
    array(Numbers);

return 0;

}//My numbers in a array is 12