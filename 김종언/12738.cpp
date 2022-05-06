#include <algorithm>
#include <iostream>
#include <vector>

/*

https://www.acmicpc.net/problem/12738

*/

int main() {
    std::cin.tie(nullptr)->sync_with_stdio(false);

    int n;
    std::cin >> n;

    std::vector<int> v;
    v.reserve(n);
    
    while (n--) {
        int x;
        std::cin >> x;
        
        if (auto it = std::ranges::lower_bound(v, x); 
            it == v.end()) {
            v.push_back(x);
        } else {
            *it = x;
        }
    }

    std::cout << v.size();
    return 0;
}