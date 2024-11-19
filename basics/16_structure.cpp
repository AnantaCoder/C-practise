#include <iostream>
#include<string>

using namespace std;

struct school
{
    string name ;
    int rollnum ;
    int registration;


}Anirban,Rohit,Adarsh;


int main() {

    Anirban.name="Anirban Sarkar";
    Anirban.rollnum=24;
    Anirban.registration=4567134;

    cout<<Anirban.name<<endl;
    cout<<Anirban.registration;

return 0;

}

//union is same as structures.
/*Yes, there are certain advantages to using unions in C++ in specific situations. Here are some scenarios where unions can be beneficial:

Memory Efficiency:
Unions can be more memory-efficient than structs when you need to represent a set of data types that won't be used simultaneously. Since a union allocates memory based on the size of the largest member, it can help save memory compared to having separate variables for each data type.

Type Punning:
Unions allow for type punning, which is the practice of accessing a value through a different type than the one used for its storage. This can be useful in low-level programming scenarios and optimizations. However, type punning has some caveats and should be used carefully to avoid undefined behavior.*/