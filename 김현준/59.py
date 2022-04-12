a,b=map(int,input().split())
count=0
if (b*(b+1))//2>a:
    print(-1)
elif b==2:
    print(2)
else:
    for i in range(a//b+1-(b-1),a//b+1+1):
        count+=i
    print(a-count+a//b+1-(a//b+1-(b-1)))