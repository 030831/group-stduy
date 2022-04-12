a=[]
b=int(input())
count=0
for i in range(b):
    a.append(int(input()))
a=list(map(int,a))
a.sort(reverse=True)
for j in range(len(a)):
    if a[j]-j>=0:
        count+=a[j]-j
print(count)