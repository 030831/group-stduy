#include <iostream>

/*

문제 : https://www.acmicpc.net/problem/2193

*/

int main() {
    std::cin.tie(nullptr)->sync_with_stdio(false);

    int n;
    std::cin >> n;
    
    /*
    
    F_0 = 0, F_1 = 1일 때, 피보나치 수 F_n 계산

    a = F_n
    b = F_(n + 1)
    으로 두고 계산

    */

    long long a = 0, b = 1;

    while (n--) {
        b += a;
        a = b - a;
    }

    std::cout << a;
    return 0;
}