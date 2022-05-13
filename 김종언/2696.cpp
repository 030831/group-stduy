#include <iostream>
#include <queue>
#include <vector>

int main() {
    std::cin.tie(nullptr)->sync_with_stdio(false);
    
    int t;
    std::cin >> t;

    while (t--) {
        int m;
        std::cin >> m;
            
        std::priority_queue<int, std::vector<int>, std::greater<int>> lo;
        std::priority_queue<int> hi;

        std::cout << (m + 1) / 2 << '\n';
        
        for (int i = 0; i < m; ++i) {
            int x;
            std::cin >> x;

            if (lo.size() == hi.size()) {
                lo.push(x);
            } else {
                hi.push(x);
            }

            if (!lo.empty() && !hi.empty() && lo.top() < hi.top()) {
                auto x = lo.top();
                auto y = hi.top();
                lo.pop();
                hi.pop();
                lo.push(y);
                hi.push(x);
            }

            if (i % 2 == 0) {
                std::cout << lo.top() << ' ';
            }
        }

        std::cout << '\n';
    }
    
    return 0;
}