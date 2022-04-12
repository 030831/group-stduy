"""

문제 : https://www.acmicpc.net/problem/10826

단순한 피보나치 수 문제이지만, 

n이 최대 10000이므로 64bit 정수로 표현 불가능하기 때문에 C++ 대신에 Python 사용

""" 

a, b = 0, 1

for _ in range(int(input())):
    a, b = b, a + b

print(a)