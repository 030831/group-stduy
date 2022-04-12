a=[]
a=input().split()
a=list(map(int,a))
count=0
while True:
    if a[1]*2==a[0]+a[2]:
        print(count)
        break
    elif a[0]<a[1] and a[1]*2!=a[0]+a[2]:
        a[0]=a[1]+1
        a[0],a[1]=a[1],a[0]
        count+=1
    elif a[0]>a[1] and a[1]*2!=a[0]+a[2]:
        a[1]=a[0]+1
        a[0], a[1] = a[1], a[0]
        count+=1