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
    if a[len(a)-1]>a[0] and a[len(a)-1]-a[0]>=len(a)-2:
        print(a[len(a)-1]-(len(a)-2))
    elif a[len(a)-1]<a[0] and a[0]-a[len(a)-1]>=len(a)-2:
        print(a[0]-(len(a)-2))
    else:
        print(((a[0]+a[len(a)-1])-(len(a)-2))//2)