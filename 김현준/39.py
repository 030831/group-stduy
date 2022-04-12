a=[]
b=[]
count=0
N,S,R=map(int,input().split())
a=input().split()
b=input().split()
intersection = list(set(a) & set(b))
a= list(set(a) - set(intersection))
b= list(set(b) - set(intersection))
a=list(map(int,a))
b=list(map(int,b))
a.sort()
b.sort()
count=0
if len(b)<len(a):
    for j in range(len(b)):
        if b[j]-1 or b[j]+1 in a:
            count+=1
elif len(b)>len(a):
    for i in range(len(a)):
        if b[i]-1 or b[i]+1 in a:
            count+=1

if len(a)-count<0:
    print(0)
elif len(a)-count>=0:
    if len(b)<len(a):
        print(len(a)-count+1)
    if len(b)>=len(a):
        print(len(a) - count)