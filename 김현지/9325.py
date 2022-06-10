sum = 0
case = int(input())
for i in range(case):
    s = int(input())
    n = int(input())
    for i in range(n):
        a,b = map(int,input().split())
        sum += a*b
    sum+=s
    print(sum)
    sum = 0