#include <bits/stdc++.h>
using namespace std;

class Objectcounter
{
private:
   static int objcount;

public:
   // constructor

   Objectcounter() { objcount++ ;}

   static void showcount()
   {
      cout << "Number of objects created are " << objcount << endl;
   }
};


// initialise the static variable counter
int Objectcounter::objcount = 0;

int main()
{
      Objectcounter obj1;
      Objectcounter obj3;
      Objectcounter obj2;

      Objectcounter::showcount();


   return 0;
}