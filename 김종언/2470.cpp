#include <algorithm>
#include <iostream>
#include <vector>

using i64 = int64_t;

int main() {
    std::cin.tie(nullptr)->sync_with_stdio(false);

    int n;
    std::cin >> n;

    std::vector<i64> v(n);    
    for (i64& i : v) {
        std::cin >> i;
    }

    std::ranges::sort(v, {}, [](i64 x) {
        return abs(x);
    });

    i64 m = 1LL << 32;
    int p = 0;

    for (int i = 0; i < n - 1; ++i) {
        if (i64 k = abs(v[i] + v[i + 1]); k < m) {
            m = k;
            p = i;
        }
    }
    
    auto [min, max] = std::minmax(v[p], v[p + 1]);
    std::cout << min << ' ' << max;
    return 0;
}