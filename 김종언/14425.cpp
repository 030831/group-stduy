#include <iostream>
#include <unordered_set>

/*

https://www.acmicpc.net/problem/14425

*/

int main() {
    std::cin.tie(nullptr)->sync_with_stdio(false);
    
    int n, m;
    std::cin >> n >> m;

    std::unordered_set<std::string> hs;
    while (n--) {
        std::string s;
        std::cin >> s;
        hs.insert(std::move(s));
    }

    int count = 0;
    while (m--) {
        std::string s;
        std::cin >> s;
        count += hs.contains(std::move(s));
    }

    std::cout << count;
    return 0;
}