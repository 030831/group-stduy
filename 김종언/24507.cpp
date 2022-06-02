#include <iostream>

int main() {
    std::cin.tie(nullptr)->sync_with_stdio(false);

    int n;
    std::cin >> n;

    if (n == 1) {
        std::cout << "Yes\n0 0";
    } else if (n == 4) {
        std::cout << "Yes\n2 3 1 2 1 3 0 0";
    } else if (n == 5) {
        std::cout << "Yes\n0 0 2 3 4 2 1 3 1 4";
    } else if (int const k = n / 4; n % 4 == 0) {
        std::cout << "Yes\n";
        
        for (int i = 4 * k - 1; 1 <= i; i -= 2) {
            std::cout << i << ' ';
        }

        std::cout << 4 * k - 2 << ' ';

        for (int i = 1; i <= 4 * k - 1; i += 2) {
            std::cout << i << ' ';
        }

        std::cout << 2 * k - 2 << ' ';

        for (int i = 4 * k - 4; 2 * k <= i; i -= 2) {
            std::cout << i << ' ';
        }

        for (int i = 2 * k - 4; 2 <= i; i -= 2) {
            std::cout << i << ' ';
        }

        std::cout << 4 * k - 2 << ' ';

        std::cout << 2 * k - 2 << ' ';

        for (int i = 2; i <= 2 * k - 4; i += 2) {
            std::cout << i << ' ';
        }
        
        std::cout << 0 << ' ' << 0 << ' ';

        for (int i = 2 * k; i <= 4 * k - 4; i += 2) {
            std::cout << i << ' ';
        }
    } else if (n % 4 == 1) {
        std::cout << "Yes\n";
        
        for (int i = 4 * k; 2 <= i; i -= 2) {
            std::cout << i << ' ';
        }

        std::cout << 2 * k + 1 << ' ';

        std::cout << 4 * k - 1 << ' ';

        for (int i = 2; i <= 4 * k; i += 2) {
            std::cout << i << ' ';
        }

        std::cout << 2 * k + 1 << ' ';

        for (int i = 4 * k - 3; 2 * k + 3 <= i; i -= 2) {
            std::cout << i << ' ';
        }

        for (int i = 2 * k - 1; 1 <= i; i -= 2) {
            std::cout << i << ' ';
        }

        std::cout << 4 * k - 1 << ' ';

        for (int i = 1; i <= 2 * k - 1; i += 2) {
            std::cout << i << ' ';
        }

        std::cout << 0 << ' ' << 0 << ' ';

        for (int i = 2 * k + 3; i <= 4 * k - 3; i += 2) {
            std::cout << i << ' ';
        }
    } else {
        std::cout << "No\n";
    }

    return 0;
}