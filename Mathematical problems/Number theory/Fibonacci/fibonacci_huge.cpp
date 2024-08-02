#include <iostream>
#include <vector>

typedef long long int ll

ll g_fibo(ll n, ll m){
    std::vector<ll> f (n + 1);
    f.at(0) = 1;
    f.at(1) = 1;

    for(int i = 2; i <= n; i++){
        f[i] = f[i-1] + f[i-2];
    }

    return f[n-1] % m;
}

int main() {
    long long n, m;
    std::cin >> n >> m;
    std::cout << g_fibo(n, m) << '\n';
}
