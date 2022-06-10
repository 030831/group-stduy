#include <iostream>
#include <queue>

int main() {
    std::cin.tie(nullptr)->sync_with_stdio(false);

    int n;
    std::cin >> n;

    std::priority_queue<
        int, std::vector<int>, std::greater<int>
    > pq;

    while (n--) {
        int x;
        std::cin >> x;
        pq.push(x);
    }

    int acc = 0;
    while (1 < pq.size()) {
        auto x = pq.top();
        pq.pop();
        auto y = pq.top();
        pq.pop();

        acc += x + y;
        pq.push(x + y);
    }

    std::cout << acc;
    return 0;
}