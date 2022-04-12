a=int(input())
b=[]
c=[]
for i in range(a):
    b.append(int(input()))
b=list(map(int,b))
b.sort(reverse=True)
for j in range(len(b)):
    c.append(b[j]*(j+1))
print(max(c))