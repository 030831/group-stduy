#include <iostream>

/*

https://www.acmicpc.net/problem/16134

*/

using i64 = int64_t;

constexpr i64 MOD = 1'000'000'007;

i64 factorial(i64 n) {
    i64 r = 1;
    for (i64 i = 2; i <= n; ++i)
        r = (r * i) % MOD;
    return r;
}

i64 pow(i64 x, i64 y) {
    i64 r = 1;
    while (y) {
        if (y & 1) r = r * x % MOD;

        x = x * x % MOD;
        y >>= 1;
    }
    return r;
}

int main() {
    std::cin.tie(nullptr)->sync_with_stdio(false);

    i64 n, r;
    std::cin >> n >> r;

    i64 const den = factorial(n);
    i64 const num = factorial(r) * factorial(n - r) % MOD;

    std::cout << den * pow(num, MOD - 2) % MOD;
    return 0;
}