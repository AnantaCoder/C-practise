/* Its only valid for 3 numbers*/
/*

#include <bits/stdc++.h>
using namespace std;

int main(){

    int a = 123;
    int sum =0;
    int last_digit = 0;
    int second_digit = 0 ;
    int first_digit = 0 ;
    for (int  i = 0; i <= a; i++)
    {
        // int devidor = a/10;
        last_digit = a%10;
         first_digit = a/100;
        second_digit = (a/10)%10;
        // cout<<last_digit<<second_digit<<first_digit;
    }
    cout<<last_digit<<second_digit<<first_digit;


return 0;

}   
*/
#include <bits/stdc++.h>
using namespace std;


int main(){

    int a = 12345;
    int reverse=0, remainder;
    while(a!= 0){
        remainder = a%10;
        reverse = reverse*10+ remainder;
        a = a/10;

    }
    cout << reverse<<endl;

return 0;

}