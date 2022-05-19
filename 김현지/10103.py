score1,score2=100,100

n = int(input())
for i in range(n):
    a,b = map(int,input().split())
    if a>b:
        score2-=a
    elif b>a:
        score1-=b
print(score1,score2,sep="\n")