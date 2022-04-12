N,S,R=map(int,input().split())
a=input().split()
b=input().split()
a=list(map(int,a))
b=list(map(int,b))
result=0
for i in a:
    if i-1 in b:
        b.remove(i-1)
    elif i+1 in b:
        b.remove(i+1)
    else:
        result+=1
print(result)