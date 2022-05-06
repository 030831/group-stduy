#include <iostream>
#include <tuple>

/*

https://www.acmicpc.net/problem/14565

*/

using i64 = int64_t;

std::tuple<i64, i64, i64> xgcd(i64 a, i64 b) {
	if (b == 0)
		return {a, 1, 0};
	auto [d, s, t] = xgcd(b, a % b);
	return {d, t, s - a / b * t};
}

int main() {
    std::cin.tie(nullptr)->sync_with_stdio(false);

    i64 n, a;
    std::cin >> n >> a;

    auto [d, s, t] = xgcd(a, n);
    std::cout << n - a << ' ' << (d == 1 ? (s + n) % n : -1);
    
    return 0;
}