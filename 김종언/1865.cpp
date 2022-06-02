#include <algorithm>
#include <iostream>
#include <vector>

constexpr int INF = 0x3F3F3F3F;

struct Edge {
    int to, w;
};

std::vector<Edge> adj[501];

int main() {
    std::cin.tie(nullptr)->sync_with_stdio(false);

    int tc;
    std::cin >> tc;

    while (tc--) {
        int n, m, w;
        std::cin >> n >> m >> w;

        while (m--) {
            int s, e, t;
            std::cin >> s >> e >> t;
            adj[s].emplace_back(e, t);
            adj[e].emplace_back(s, t);
        }

        while (w--) {
            int s, e, t;
            std::cin >> s >> e >> t;
            adj[s].emplace_back(e, -t);
        }

        std::vector<int> d(n + 1, INF);
        d[1] = 0;

        bool ncycle = false;
        for (int k = 1; k <= n; ++k) {
            for (int i = 1; i <= n; ++i) {
                for (auto& [next, dist] : adj[i]) {
                    if (auto nd = std::min(d[i] + dist, INF); nd < d[next]) {
                        d[next] = nd;
                        ncycle = (n == k);
                    }
                }
            }
        }

        std::cout << (ncycle ? "YES\n" : "NO\n");

        std::ranges::fill(adj, std::vector<Edge>());
    }
    
    return 0;
}