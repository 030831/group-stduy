#include <iostream>

/*

문제 : https://www.acmicpc.net/problem/8394

*/

int main() {
    std::cin.tie(nullptr)->sync_with_stdio(false);

    int n;
    std::cin >> n;

    // F0 = 1, F1 = 1일 때
    // Fn 구하기

    int a = 1, b = 1;
    while (n--) {
        b += a;
        a = (b - a) % 10;
        b %= 10;
    }

    // (a + b) mod M = (a mod M + b mod M) mod M을 이용해서
    // 마지막 자릿수만 구하기

    std::cout << a;
    return 0;
}