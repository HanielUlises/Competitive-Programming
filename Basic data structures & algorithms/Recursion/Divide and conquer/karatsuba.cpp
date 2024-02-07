#include <iostream>

int getLength(long long value) {
    int counter = 0;
    while (value != 0) {
        counter++;
        value /= 10;
    }
    return counter;
}

long long power(long long base, int exponent) {
    long long result = 1;
    for (int i = 0; i < exponent; i++) {
        result *= base;
    }
    return result;
}

long long multiply(long long x, long long y) {
    int xLength = getLength(x);
    int yLength = getLength(y);

    // The bigger of the two lengths
    int N = std::max(xLength, yLength);

    // If the max length is small, multiply directly
    if (N < 10)
        return x * y;

    // Max length divided and rounded up
    N = (N / 2) + (N % 2);

    long long multiplier = power(10, N);

    long long b = x / multiplier;
    long long a = x - (b * multiplier);
    long long d = y / multiplier;
    long long c = y - (d * multiplier);

    long long z0 = multiply(a, c);
    long long z1 = multiply(a + b, c + d);
    long long z2 = multiply(b, d);

    return z0 + ((z1 - z0 - z2) * multiplier) + (z2 * power(10, 2 * N));
}

int main() {
    long long num1 = 3141592653589793238462643383279502884197169399375105820974944592LL;
    long long num2 = 2718281828459045235360287471352662497757247093699959574966967627LL;
    std::cout << "Result: " << multiply(num1, num2) << std::endl;
    return 0;
}
