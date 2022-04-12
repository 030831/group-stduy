a,b=map(int,input().split())
k=[]
count=0
for i in range(int(input())):
    c=int(input())
    k.append(c)
    k=list(map(int,k))
for j in range(len(k)):
    if k[i]-k[i-1]+1>b:
        count+=k[i]-k[i-1]-1
    elif k[i-1]-k[i]+1>b:
        count += k[i-1]-k[i]-1
print(count)