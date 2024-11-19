#include <iostream>

// Function to check if a number is prime
bool isPrime(int num) {
    if (num <= 1) return false;
    if (num == 2) return true; // 2 is the only even prime number
    if (num % 2 == 0) return false; // Eliminate other even numbers

    for (int i = 3; i*i <= num; i += 2) {
        if (num % i == 0) return false;
    }
    
    return true;
}

int main() {
    int number;
    
    std::cout << "Enter a number: ";
    std::cin >> number;
    
    if (isPrime(number)) {
        std::cout << number << " is a prime number." << std::endl;
    } else {
        std::cout << number << " is not a prime number." << std::endl;
    }
    
    return 0;
}
