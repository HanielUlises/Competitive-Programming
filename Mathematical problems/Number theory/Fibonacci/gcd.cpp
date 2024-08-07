#include <iostream>
#include <vector>

typedef long long int ll;

ll gcd (ll a, ll b){
  if(b == 0)
    return a;
  else
    return gcd(b, a % b);
}

int main() {
  ll a, b;
  std::cin >> a >> b;
  std::cout << gcd(a, b) << std::endl;
  return 0;
}
