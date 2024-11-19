#include <iostream>
#include <string>
using namespace std;


bool isVowel(char c) {
    c = tolower(c); 
        return (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');
}
string replacer(string s ){
    for (int  i = 0; i < s.length(); i++)
    {
        if(isVowel(s[i])){
            s[i] = '*';
        }
    }
    return s;
}

// string swapcase(string str ){
//     for (int  i = 0; i < str.length(); i++)
//     {
//         if (islower(str[i]))
//         {
//             str[i] = toupper(str[i]);
//         }else if(isupper(str[i])){
//             str[i] = tolower(str[i]);
//         }
        
//     }
//     return str;
    
    
// }

int main() {
    string input = "Today is Sunny Day";

    // Process and output the modified string
    // string result = replacer(input);
    cout << replacer(input) << endl;
    // string res = swapcase(input);
    // cout << res << endl;

    return 0;
}
