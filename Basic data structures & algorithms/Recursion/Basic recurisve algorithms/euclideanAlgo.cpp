#include "bits/stdc++.h"

int euclidGCD (int a, int b){
    if (b == 0)
        return a;

    a = a % b;
    return euclidGCD(b, a);
}

int main (){

    std::cout << "GCD: " << euclidGCD(357,234);
    return 0;
}