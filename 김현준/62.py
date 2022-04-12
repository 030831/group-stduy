A=int(input())
a=[]
a=input().split()
a=list(map(int,a))
if len(a)==3:
    if a[0]>=a[len(a)-1]:
        print(a[0]-1)
    elif a[0]<a[len(a)-1]:
        print(a[len(a)-1]-1)
else:
    count=a[0]+a[len(a)-1]
    count=count-(len(a)-3)
    if a[0]!=a[len(a)-1]:
        print(count//2-1)
    if a[0]==a[len(a)-1]:
        if len(a)%2==1:
            print(count//2-1)
        elif len(a)%2==0:
            print(count//2)