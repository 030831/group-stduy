#include <iostream>
#include <queue>
#include <vector>

int geti() {
    int n = 0, c = 0;
    while (48 <= (c = getchar_unlocked()))
        n = 10 * n + (c & 15);
    return n;
}

struct Node {
    int idx, w;
    
    Node(int idx, int w) : idx{idx}, w{w} {}
    
    constexpr bool operator<(Node const& other) const {
        return other.w < w;
    }
};

constexpr int INF = 0x3F3F3F3F;
constexpr int N = 20'000;

std::vector<Node> graph[N];

int main() {
    std::cin.tie(nullptr)->sync_with_stdio(false);
    
    int v = geti(), e = geti(), k = geti();
    
    while (e--) {
        int u = geti(), v = geti(), w = geti();
        graph[u - 1].emplace_back(v - 1, w);
    }
    
    std::vector<int> d(v, INF);
    std::priority_queue<Node> pq;
    
    d[k - 1] = 0;
    pq.emplace(k - 1, 0);

    while (!pq.empty()) {
        auto [idx, w] = pq.top();
        pq.pop();
        
        if (d[idx] < w) continue;

        for (auto&& next : graph[idx]) {
            if (w + next.w < d[next.idx]) {
                d[next.idx] = w + next.w;
                pq.emplace(next.idx, d[next.idx]);
            }
        }
    }
    
    for (int i = 0; i < v; ++i) {
        if (d[i] == INF) {
            std::cout << "INF\n";
        } else {
            std::cout << d[i] << '\n';
        }
    }

    return 0;
}