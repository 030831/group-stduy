a=0
b=1
c=1
k=[]
d=int(input())
if d>0:
    for i in range(d):
        if a+b==c:
            k.append(a)
            a=b
            b=c
            c=a+b
k.append(a)
print(k[d]) 