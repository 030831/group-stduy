#include <algorithm>
#include <iostream>
#include <vector>

using i32 = int32_t;

i32 main() {
    std::cin.tie(nullptr)->sync_with_stdio(false);

    i32 t;
    std::cin >> t;
    
    while (t--) {
        i32 n;
        std::cin >> n;

        std::vector v(n, 0), dp(n, 0);

        for (i32& x : v) {
            std::cin >> x;
        }

        dp[0] = v[0];
        for (i32 i = 1; i < n; ++i) {
            dp[i] = v[i] + std::max(dp[i - 1], 0);
        }

        std::cout << *std::ranges::max_element(dp) << '\n';
    }
    
	return 0;
}