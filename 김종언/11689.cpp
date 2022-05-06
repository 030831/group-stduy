#include <iostream>

/*

https://www.acmicpc.net/problem/11689

*/

using u64 = uint64_t;

u64 totient(u64 n) {
    u64 k = n;
    for (u64 p = 2; p * p <= n; ++p) {
        if (n % p == 0) {
            k = k / p * (p - 1);

            while (n % p == 0) {
                n /= p;
            }
        }
    }

    return n != 1 ? k / n * (n - 1) : k;
}

int main() {
    std::cin.tie(nullptr)->sync_with_stdio(false);

    u64 n;
    std::cin >> n;

    std::cout << totient(n);
    return 0;
}