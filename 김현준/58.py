a,b=map(int,input().split())
count=0
if (b*(b+1))//2>a:
    print(-1)
else:
    if b%2==1:
        if  a%b==0:
            print(b-1)
        else:
            print(b)
    elif b%2==0:
        if a%b==b//2:
            print(b-1)
        else:
            print(b)