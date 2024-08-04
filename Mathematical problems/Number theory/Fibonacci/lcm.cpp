#include <iostream>

typedef long long int ll;

ll gcd (ll a, ll b){
  if(b == 0)
    return a;
  else
    return gcd(b, a % b);
}

ll lcm (ll a, ll b){
  return (a / gcd(a,b)) * b;
}

int main() {
  ll a, b;
  std::cin >> a >> b;
  std::cout << lcm(a, b) << std::endl;
  return 0;
}
