#include <bit>
#include <iostream>
#include <vector>

using i32 = int32_t;
using i64 = int64_t;

std::vector<i64> tree, lazy;

void propagate(i32 node, i32 s, i32 e) {
    if (lazy[node] == 0) {
        return;
    }

    if (s != e) {
        lazy[2 * node]     += lazy[node];
        lazy[2 * node + 1] += lazy[node];
    }
    
    tree[node] += (e - s + 1) * lazy[node];
    lazy[node] = 0;
}

void update(i32 node, i32 s, i32 e, i32 l, i32 r, i32 k) {
    propagate(node, s, e);
    
	if (r < s || e < l) {
        return;
    }
    
	if (l <= s && e <= r) {
        lazy[node] += k;
        propagate(node, s, e);
        return;
    }
       
    i32 const mid = (s + e) / 2;
    
    update(2 * node, s, mid, l, r, k);
    update(2 * node + 1, mid + 1, e, l, r, k);

    tree[node] = tree[2 * node] + tree[2 * node + 1];
}

i64 query(i32 node, i32 s, i32 e, i32 l, i32 r) {    
    propagate(node, s, e);
    
	if (r < s || e < l) {
        return 0;
    }
    
    if (l <= s && e <= r) {
        return tree[node];
    }
    
	i32 const mid = (s + e) / 2;

	return 
        query(2 * node, s, mid, l, r) + 
        query(2 * node + 1, mid + 1, e, l, r);
}

i32 main() {
    std::cin.tie(nullptr)->sync_with_stdio(false);

    i32 n, m;    
    std::cin >> n;
    
    i32 const h = std::bit_width(n - 1U) + 1;
    i32 const size = (1 << h) + 1;

    tree.resize(size);
    lazy.resize(size);

    i32 x0 = 0;
    for (i32 i = 0; i < n; ++i) {
        i32 x;
        std::cin >> x;
        update(1, 0, n - 1, i, i, x - x0);
        x0 = x;
    }

    std::cin >> m;
    while (m--) {
        i32 q;
        std::cin >> q;

        if (q == 1) {
            i32 l, r;
            std::cin >> l >> r;

            update(1, 0, n - 1, l - 1, r - 1, 1);
            update(1, 0, n - 1, r, r, l - r - 1);
        } else if (q == 2) {
            i32 x;
            std::cin >> x;
            
            std::cout << query(1, 0, n - 1, 0, x - 1) << '\n';
        }
    }

	return 0;
}