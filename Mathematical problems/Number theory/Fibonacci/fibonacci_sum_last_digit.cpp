#include <iostream>
#include <vector>

typedef long long int ll;

ll fibo_sum (ll n){
    std::vector<ll> f (n+1);
    if(n== 0)
    return 0;
    if(n== 1)
    return 1;

    ll sum = 2;
    f.at(0) = 1;
    f.at(1) = 1;

    for(int i = 2; i <= n; i++){
        f[i] = f[i - 1] + f[i - 2];
        sum += f[i];
    }
    sum -= f[n];
    return sum % 10;
}

int main() {
    long long n = 0;
    std::cin >> n;
    std::cout << fibo_sum(n);
}
