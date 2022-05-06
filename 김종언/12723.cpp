#include <algorithm>
#include <iostream>
#include <numeric>
#include <vector>

/*

https://www.acmicpc.net/problem/12723

*/

int main() {
    std::cin.tie(nullptr)->sync_with_stdio(false);

    int t;
    std::cin >> t;

    for (int k = 1; k <= t; ++k) {
        int n;
        std::cin >> n;
        
        std::vector<int> u(n), v(n);
        
        for (int& i : u) 
            std::cin >> i;
        for (int& i : v) 
            std::cin >> i;
        
        std::ranges::sort(u);
        std::ranges::sort(v);

        std::cout << "Case #" << k << ": " 
                  << std::inner_product(u.begin(), u.end(), v.rbegin(), 0) 
                  << '\n';
    }
    
    return 0;
}