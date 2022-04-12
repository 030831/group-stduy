a,b=map(int,input().split())
c=list(map(int,input().split()))
c.sort()
for i in range(len(c)):
    if b>=c[i]:
        b+=1
print(b)
