#include <algorithm>
#include <iostream>

/*

문제 : https://www.acmicpc.net/problem/4963

*/

constexpr std::pair<int, int> offsets[8] {
    {1, 0}, {-1, 0}, {0, 1}, {0, -1}, {1, 1}, {-1, 1}, {1, -1}, {-1, -1}
};

int w, h;

bool v[50][50]; // 지도 : 방문하지 않았으면 true

void dfs(int x, int y) {
    v[x][y] = false; // (x, y) 방문

    for (auto [dx, dy] : offsets) {
        int nx = x + dx; // 이동할 x좌표
        int ny = y + dy; // 이동할 y좌표

        if (0 <= nx && nx < h && // nx가 [0, h)에 속하고,
            0 <= ny && ny < w && // ny가 [0, w)에 속하고,
            v[nx][ny])           // (nx, ny)를 방문하지 않았으면,
        {
            dfs(nx, ny); // (nx, ny) 방문
        }
    }
}

int main() {
    std::cin.tie(nullptr)->sync_with_stdio(false);

    while (true) {
        std::cin >> w >> h;

        if (w == 0 && h == 0) {
            break;
        }

        for (int i = 0; i < h; ++i) {
            for (int j = 0; j < w; ++j) {
                std::cin >> v[i][j];
            }
        }

        int count = 0;
        for (int i = 0; i < h; ++i) {
            for (int j = 0; j < w; ++j) {
                if (v[i][j]) { // 방문하지 않았으면,
                    count += 1; // 섬의 갯수 증가
                    dfs(i, j); // (i, j) 탐색
                }
            }
        }

        std::cout << count << '\n';
    }
    
    return 0;
}