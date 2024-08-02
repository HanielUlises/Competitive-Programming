#include <iostream>
#include <vector>

typedef long long int ll;

int fibonacci_last(int n){
    std::vector<ll> f (n + 1);
    f.at(0) = 1;
    f.at(1) = 1; 

    for(int i = 2; i <= n; i++){
        f[i] = f[i - 1] + f[i - 2];
    }

    return f[n - 1] % 10;
}

int main() {
    int n;
    std::cin >> n;
    int c = fibonacci_last(n);
    std::cout << c << '\n';
}