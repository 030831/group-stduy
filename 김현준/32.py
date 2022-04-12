A,B=map(int,input().split())
a=[]
b=[]
for i in range(1,A+1):
    if A%i==0:
        a.append(i)
for j in range(1,B+1):
    if B%j==0:
        b.append(j)
a=set(a)
b=set(b)
divisor = a & b
result = 0
if type(divisor) == set:
    result = sum(divisor)

print(result)
