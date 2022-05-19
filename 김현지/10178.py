T =int(input())
for i in range(T):
    A,B = map(int,input().split())
    print("You get %d piece(s) and your dad gets %d piece(s)."%(A/B,A%B))