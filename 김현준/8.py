a=int(input())
b=int(input())
c=[]

for i in range(a,b+1):
    for j in range(2,i+1):
        if j==i:
            c.append(i)
        if i%j==0:
            break
print(*c)