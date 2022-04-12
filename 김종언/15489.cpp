#include <iostream>

/*

문제 : https://www.acmicpc.net/problem/15489

*/

int comb[31][31];

int main() {
    std::cin.tie(nullptr)->sync_with_stdio(false);

    // 파스칼의 삼각형을 30줄까지 계산
    // comb[n][k] = nCk
    for (int i = 1; i <= 30; ++i) {
        for (int j = 1; j <= i; ++j) {
            comb[i][j] = (j == 1 || j == i ? 1 : comb[i - 1][j - 1] + comb[i - 1][j]);
        } 
    }
    
    int r, c, w, sum = 0;
    std::cin >> r >> c >> w;

    for (int i = 0; i < w; ++i) {
        for (int j = 0; j <= i; ++j) {
            // comb[r][c]를 위 꼭짓점으로 하는
            // 한 변이 포함하는 수의 개수가 w인 정삼각형
            // 내부의 수의 합 계산
            sum += comb[r + i][c + j];
        }
    }

    std::cout << sum;
    return 0;
}