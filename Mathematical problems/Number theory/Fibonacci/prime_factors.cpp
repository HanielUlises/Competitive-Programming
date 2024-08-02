#include <iostream>
#include <set>
#include <cmath>

std::set<int> findPrimeFactors(int num) {
    std::set<int> primeFactors;

    // Check for number of 2s that divide num
    while (num % 2 == 0) {
        primeFactors.insert(2);
        num /= 2;
    }

    // Check for other primes
    for (int i = 3; i <= sqrt(num); i += 2) {
        while (num % i == 0) {
            primeFactors.insert(i);
            num /= i;
        }
    }

    // This condition is to check if num is a prime number
    // greater than 2
    if (num > 2)
        primeFactors.insert(num);

    return primeFactors;
}

int main() {
    int number;
    std::cout << "Enter a number: ";
    std::cin >> number;

    std::set<int> primes = findPrimeFactors(number);

    std::cout << "Unique prime factors of " << number << " are: ";
    for (int prime : primes) {
        std::cout << prime << " ";
    }

    std::cout << std::endl;
    return 0;
}
