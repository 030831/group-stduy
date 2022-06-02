#include <iostream>

int main() {
    std::cin.tie(nullptr)->sync_with_stdio(false);

    std::string s;
    std::cin >> s;

    if (s.size() <= 2) {
        std::cout << "◝(⑅•ᴗ•⑅)◜..°♡ 뀌요미!!";
        return 0;
    }
    
    auto const diff = s[1] - s[0];

    for (size_t i = 2; i < s.size(); ++i) {
        if (s[i] - s[i - 1] != diff) {
            std::cout << "흥칫뿡!! <(￣ ﹌ ￣)>";
            return 0;
        }
    }

    std::cout << "◝(⑅•ᴗ•⑅)◜..°♡ 뀌요미!!";
    return 0;
}