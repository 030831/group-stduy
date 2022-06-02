#include <iostream>

constexpr int MOD = 1'000'000'007;

int dp[3][1516];

int main() { 
    std::cin.tie(nullptr)->sync_with_stdio(false);

    int n;
    std::cin >> n;

    dp[0][1] = 0;
    dp[1][1] = 0;
    dp[2][1] = 1;

    for (int i = 2; i <= n; ++i) {
        dp[0][i] = (dp[1][i - 1] + dp[2][i - 1]) % MOD;
        dp[1][i] = (dp[0][i - 1] + dp[2][i - 1]) % MOD;
        dp[2][i] = (dp[0][i - 1] + dp[1][i - 1]) % MOD;
    }

    std::cout << dp[0][n];
    return 0;
}