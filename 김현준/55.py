a=[]
b=0
for i in range(11):
    A,B=map(int,input().split())
    a.append(A)
    b+=B*20
a=list(map(int,a))
a.sort()
count=0
sum=0
for j in range(len(a)):
    count+=a[j]
    sum+=count
print(sum+b)