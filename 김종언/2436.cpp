#include <cmath>
#include <iostream>
#include <numeric>

using i64 = int64_t;

int main() {
    std::cin.tie(nullptr)->sync_with_stdio(false);

    i64 d, m;
    std::cin >> d >> m;

    i64 const n = d * m;

    i64 a = 0x3F3F3F3F;
    i64 b = 0x3F3F3F3F;
    
    for (i64 i = 1; i * i <= n; ++i) {
        if (n % i == 0) {
            i64 const j = n / i;
            
            if (d == std::gcd(i, j) && i + j < a + b) {
                a = i;
                b = j;
            }
        }
    }

    std::cout << a << ' ' << b;
    return 0;
}