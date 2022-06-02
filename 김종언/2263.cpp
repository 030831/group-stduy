#include <iostream>

constexpr int MAX = 100'000 + 1;

int indices[MAX];
int inorder[MAX];
int postorder[MAX];

void preorder(int s1, int e1, int s2, int e2) {
    if (e1 < s1 || e2 < s2) {
        return;
    }

    int const root = postorder[e2];
    int const p = indices[root];
    
    std::cout << root << ' ';
    
    preorder(s1, p - 1, s2, s2 + p - s1 - 1);
    preorder(p + 1, e1, s2 + p - s1, e2 - 1);
}

int main() {
    std::cin.tie(nullptr)->sync_with_stdio(false);

    int n;
    std::cin >> n;

    for (int i = 0; i < n; ++i) {
        std::cin >> inorder[i];
        indices[inorder[i]] = i;
    }

    for (int i = 0; i < n; ++i) {
        std::cin >> postorder[i];
    }

    preorder(0, n - 1, 0, n - 1);
    return 0;
}