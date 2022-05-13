#include <iostream>

int main() {
    std::cin.tie(nullptr)->sync_with_stdio(false);

    int min = 100, sum = 0;

    for (int i = 0; i < 7; ++i) {
        int x;
        std::cin >> x;
        
        if (x & 1) {
            min = std::min(min, x);
            sum += x;
        }
    }

    if (sum == 0) {
        std::cout << -1;
    } else {
        std::cout << sum << '\n' << min;
    }
    
    return 0;
}