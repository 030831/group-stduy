a=[int(input()) for _ in range(int(input()))]
count=0

while True:
    if max(a)!=a[0]:
        a[a.index(max(a))]-=1
        a[0]+=1
        count+=1
    elif max(a)==a[0] :
        break
if a.count(max(a))>=2:
    print(count+1)
else:
    print(count)
    