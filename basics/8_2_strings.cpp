#include <iostream>

using namespace std;

int main() {

    string text = "qwerttyuiopasdfghjklmnbvcxz";
    cout << text.length();

return 0; 

// output - 27

//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

//access strngs 

#include <iostream>
#include <string>

using namespace std;

int main() {
    string text = "qwertyuiopasdfghjklmnbvcxz";
    
    cout << "Character at index 4: " << text[4] << endl;

    return 0;
}

//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

#include <iostream> // change the letter of a string

using namespace std;

int main() {

    string myname = "Anirban ";
    myname[3]= 'p'; // single quote should be used
    cout<< myname;

return 0;

} //output - Anipban

//=-----------------------------------------------------------------------------------------------------

// to add quote in a string /" , //, can be used

#include <iostream>
using namespace std;

int main() {
  string txt = "We are the so-called \"Vikings\" from the north.";
  cout << txt;
  return 0;
}
