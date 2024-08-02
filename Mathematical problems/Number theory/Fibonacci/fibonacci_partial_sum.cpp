#include <iostream>
#include <vector>

typedef long long int ll;

const int PISANO_PERIOD_10 = 60;

void generate_fib_prefix_sum(std::vector<int>& fib_mod_10, std::vector<int>& prefix_sum) {
    fib_mod_10[0] = 0;
    fib_mod_10[1] = 1;
    prefix_sum[0] = 0;
    prefix_sum[1] = 1;

    for (int i = 2; i < PISANO_PERIOD_10; ++i) {
        fib_mod_10[i] = (fib_mod_10[i - 1] + fib_mod_10[i - 2]) % 10;
        prefix_sum[i] = (prefix_sum[i - 1] + fib_mod_10[i]) % 10;
    }
}

ll fibo_part_sum(ll from, ll to) {
    std::vector<int> fib_mod_10(PISANO_PERIOD_10);
    std::vector<int> prefix_sum(PISANO_PERIOD_10);

    generate_fib_prefix_sum(fib_mod_10, prefix_sum);

    int from_mod = from % PISANO_PERIOD_10;
    int to_mod = to % PISANO_PERIOD_10;

    if (to_mod < from_mod) {
        to_mod += PISANO_PERIOD_10;
    }

    ll sum = prefix_sum[to_mod % PISANO_PERIOD_10] - (from_mod > 0 ? prefix_sum[(from_mod - 1) % PISANO_PERIOD_10] : 0);
    if (sum < 0) sum += 10;

    return sum % 10;
}

int main() {
    ll from, to;
    std::cin >> from >> to;
    std::cout << fibo_part_sum(from, to) << '\n';
    return 0;
}
