// int - stores integers (whole numbers), without decimals, such as 123 or -123
// double - stores floating point numbers, with decimals, such as 19.99 or -19.99
// char - stores single characters, such as 'a' or 'B'. Char values are surrounded by single quotes
// string - stores text, such as "Hello World". String values are surrounded by double quotes
// bool - stores values with two states: true or false 

#include <iostream>
#include <string>

int main() {
    // Integer variables
    int integerVar = 42;
    short shortVar = 32767;
    long longVar = 2147483647;
    long long longLongVar = 9223372036854775807;
    
    
    // Floating-point variables
    float floatVar = 3.14f;
    double doubleVar = 2.71828;

    // Character variables
    char charVar = 'A';

    // Boolean variable
    bool boolVar = true;

    // String variable
    std::string stringVar = "Hello, C++!";

    // Output the values
    std::cout << "Integer Variable: " << integerVar << std::endl;
    std::cout << "Short Variable: " << shortVar << std::endl;
    std::cout << "Long Variable: " << longVar << std::endl;
    std::cout << "Long Long Variable: " << longLongVar << std::endl;
    std::cout << "Float Variable: " << floatVar << std::endl;
    std::cout << "Double Variable: " << doubleVar << std::endl;
    std::cout << "Character Variable: " << charVar << std::endl;
    std::cout << "Boolean Variable: " << boolVar << std::endl;
    std::cout << "String Variable: " << stringVar << std::endl;

    // Return statement indicating successful execution
    return 0;
}
