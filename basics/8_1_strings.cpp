#include <iostream>
#include<string>

using namespace std;

int main() {

    string greeting= "kya haaal hai bhai";
    cout<< greeting;

return 0;

}  // output - kya haal hai bhai

//------------------------------------------------------------------------------------------------------

#include <iostream>  

using namespace std;

int main() {

    string firstName = "Anirban ";
string lastName = "Sarkar ";
string fullName = firstName + " \n" + lastName; // concatenation
cout << fullName;

return 0;

} 

//-----------------------------------------------------------------------------------------------------

#include <iostream>

using namespace std;

int main() {

    string place = " purbadhantala ";
    string postoffice = "Fulbari hat";
    string address = place.append(postoffice);
    cout << address;

return 0;

}