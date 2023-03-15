// PrimeNumberProgram takes the user's input and returns whether it is a prime number or not.

#include <iostream>

int getUserInput() {
    int userInput = {};
    std::cout << "Enter a number. ";
    std::cin >> userInput;
    return userInput;
}

bool isNumberPrime(int x) {
    if (x == 2 || x == 3)
        return true;
    if (x <= 1 || x % 2 == 0 || x % 3 == 0)
        return false;
    for (int i = 5; i * i <= x; i += 6) {
        if (x % i == 0 || x % (i + 2) == 0)
            return false;
    }
    return true;
}

int main()
{
    bool isPrime = {};
    isPrime = isNumberPrime(getUserInput());
    if (isPrime)
        std::cout << "The number is prime.";
    else
        std::cout << "The number is not prime.";
}
