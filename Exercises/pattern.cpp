/* SQARE PATTERN HOLLOW
#include <bits/stdc++.h>
using namespace std;

int main(){

    for (int i = 1; i <=9; i++)
    {
        for(int j = 1; j<= 9 ;j++ ){
            if(i == 9||j ==9|| i ==1 || j==1){
                cout<< " @";
            }
            else{
                cout<< "  ";
            }
        }
        cout<<endl;
    }
    

return 0;

}*/

/*  for square pattern FILLED   
#include <bits/stdc++.h>
using namespace std;

int main(){

    for (int i = 0; i <= 10; i++)
    {
        for (int  i = 0; i < 10; i++)
        {
            cout<< " *";
        }
        cout<<endl;
    }
    

return 0;

} */
/*half  pyramid pattern
#include <bits/stdc++.h>
using namespace std;

int main(){

    for (int i = 0; i <= 10; i++)
    {
        for (int  j = 1 ;  j<=i ; j++ )
        {
            cout<< " *";
        }
        cout<<endl;
    }
    

return 0;
} */

#include <bits/stdc++.h>
using namespace std;

int main() {
    int n = 10;  // Height of the triangle
    for (int i = 1; i <= n; i++) {
        // Printing spaces
        for (int j = i; j < n; j++) {
            cout << "-";
        }
        // Printing stars
        for (int j = 1; j <= (2 * i - 1); j++) {
            cout << "*";
        }
        cout << endl;
    }

    return 0;

}
/*
---------*
--------***
-------*****
------*******
-----*********
----***********
---*************
--***************
-*****************
******************* */