#include <iostream>

/*

https://www.acmicpc.net/problem/13617

*/

int main() {
    std::cin.tie(nullptr)->sync_with_stdio(false);

    int n, m, k = 0;
    std::cin >> n >> m;

    while (n--) {
        int x = 0;
        for (int i = 0; i < m; ++i) {
            int t;
            std::cin >> t;
            x += (t != 0);
        }

        k += (x == m);
    }

    std::cout << k;
    return 0;
}