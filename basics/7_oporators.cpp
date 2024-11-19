/* C++ divides the operators into the following groups:

~Arithmetic operators
~Assignment operators
~Comparison operators
~Logical operators
~Bitwise operators */


/*1. Arithmetic Operators:

+ (Addition), - (Subtraction), * (Multiplication), / (Division), % (Modulus)
cpp
Copy code
int a = 10, b = 4;
int sum = a + b;     // 14
int difference = a - b;  // 6
int product = a * b;  // 40
int quotient = a / b; // 2
int remainder = a % b; // 2
2.Relational Operators:

== (Equal to), != (Not equal to), < (Less than), > (Greater than), <= (Less than or equal to), >= (Greater than or equal to)
cpp
Copy code
int x = 5, y = 10;
bool isEqual = (x == y);  // false
bool isNotEqual = (x != y);  // true
bool isLessThan = (x < y);  // true
bool isGreaterThan = (x > y);  // false
3. Logical Operators:

&& (Logical AND), || (Logical OR), ! (Logical NOT)
cpp
Copy code
bool condition1 = true, condition2 = false;
bool resultAnd = (condition1 && condition2);  // false
bool resultOr = (condition1 || condition2);   // true
bool resultNot = !condition1;  // false
4.Assignment Operators:

= (Assignment), += (Add and assign), -=, *=, /=, %=
cpp
Copy code
int num = 10;
num += 5;   // num is now 15
num -= 3;   // num is now 12
num *= 2;   // num is now 24
num /= 4;   // num is now 6
num %= 3;   // num is now 0
5.  Increment and Decrement Operators:

++ (Increment), -- (Decrement)
cpp
Copy code
int count = 5;
count++;    // Increment by 1, count is now 6
count--;    // Decrement by 1, count is now 5 again
5   .Bitwise Operators:

& (Bitwise AND), | (Bitwise OR), ^ (Bitwise XOR), ~ (Bitwise NOT), << (Left shift), >> (Right shift)
cpp
Copy code
int x = 5, y = 3;
int bitwiseAnd = x & y;  // 1
int bitwiseOr = x | y;   // 7
int bitwiseXor = x ^ y;  // 6
int bitwiseNot = ~x;     // -6 (assuming 32-bit int)
These are just some of the operators in C++. Each operator serves a specific purpose and has specific rules for its usage.*/

