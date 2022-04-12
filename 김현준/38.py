a=[]
b=[]
count=0
N,S,R=map(int,input().split())
a=input().split()
b=input().split()
a=list(map(int,a))
b=list(map(int,b))
if len(a)>len(b):
    for P in range(len(b)):
        if b[P]-1!=a[P] and b[P]+1!=a[P]:
            count+=1
            print(count)
    print(count+1)
elif len(a) <= len(b):
    for M in range(len(a)):
        if b[M]-1!=a[M] and b[M]+1!=a[M]:
            count+=1
    print(count)