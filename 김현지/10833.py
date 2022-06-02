Sum = 0
N = int(input())
for i in range(N):
    A,B = map(int,input().split())
    if A>B :
        Sum += B
    else :
        Sum += B-A*(B//A)

print(Sum)