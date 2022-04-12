A=int(input())
a=[]
a=input().split()
a=list(map(int,a))
P=0
M=0
if len(a)==3:
    if a[0]>=a[len(a)-1]:
        print(a[0]-1)
    elif a[0]<a[len(a)-1]:
        print(a[len(a)-1]-1)
else:
    if len(a)%2==1:
        P = a[0] - (len(a)//2)
        M = a[len(a) - 1] - (len(a)//2)
        if P>M:
            print(P+1)
        elif P<M:
            print(M+1)
        elif P==M:
            print(P)
    elif len(a)%2==0:
        P = a[0] - (len(a)//2)
        M = a[len(a) - 1] - (len(a)//2)
        if P>=M:
            print(P+1)
        elif P<M:
            print(M+1)