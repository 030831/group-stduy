Sum1,Sum2 =0,0
T = int(input())
for i in range(T):
    N = int(input())
    for i in range(N):
        C,G = map(float,input().split())
        Sum1 +=C
        Sum2 +=C*G
    print(int(Sum1),round(Sum2/Sum1, 1))
    Sum1,Sum2=0,0