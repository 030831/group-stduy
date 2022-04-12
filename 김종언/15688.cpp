#include <iostream>

constexpr int R = 1'000'000; // 최대 절댓값

int v[2 * R + 1]; // [-R, R]이므로 배열의 크기는 2R + 1

int main() {
    std::cin.tie(nullptr)->sync_with_stdio(false);

    int n;
    std::cin >> n;

    while (n--) {
        int x;
        std::cin >> x;
        v[x + R] += 1; // 음수가 들어올 수 있기 때문에 R을 더해서 x의 갯수를 카운트
    }

    for (int i = -R; i <= R; ++i) {
        while (v[i + R]--) {
            std::cout << i << '\n';
        }
    }

    return 0;
}