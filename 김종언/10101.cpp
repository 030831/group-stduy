#include <cstdio>

/*

문제 : https://www.acmicpc.net/problem/10101

*/

int main() {
    int a, b, c;
    scanf("%d%d%d", &a, &b, &c);

    if (a + b + c != 180) { 
        // 삼각형 세 각의 합 180이 아니면 Error
        puts("Error");
    } else if (a == b && b == c) { 
        // 세 각이 모두 같으면 Equilateral
        puts("Equilateral");
    } else if (a == b || b == c || c == a) { 
        // 세 각 중 같은 두 각이 있으면 Isosceles
        puts("Isosceles");
    } else {
        // 이 외에는 Scalene
        puts("Scalene");
    }
    
    return 0;
}