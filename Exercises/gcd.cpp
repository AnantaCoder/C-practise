#include <bits/stdc++.h>
using namespace std;

int gcd(int a, int b){
    int hcf = 1;
    for (int  i = 1; i <= min(a,b); i++) //min returns minimum of n int
    {
        if (a %i == 0 && b %i ==0){
            hcf = i;
        }
        
    }
    return hcf;
    
    
}

int main(){

    int x = 100 ;
    int y = 200 ;
    int z = gcd(x,y);
    cout <<"The highest common favtor of the two numbers is: "<< z << endl;


return 0;

}
/*
    * gcd or hcf of two number s
    * the mutilpes of that specific number 
    * and compare of them to two numbers 
    * 
    * 
    *
*/