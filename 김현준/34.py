N,L,K=map(int,input().split())
score=0
for i in range(N):
    a,b=map(int,input().split())
    if L>=a:
        score+=100
        K-=1
        if L>=b:
            score+=40
    if K==0:
        break
print(score)
