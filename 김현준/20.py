while True:
    a,b,c=map(int,input().split())
    if a>0 and b>a and c>b and c<100:
        if b-a<c-b:
            print(c-b-1)
        elif c-b<b-a:
            print(c-b+1)
        elif c-b==b-a:
            print(b-a-1)
        elif a+1==b and b+1==c:
            print(0)
            break