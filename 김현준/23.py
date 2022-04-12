k=int(input())
a=list(map(int,input().split()))
max=0
for i in range(len(a)):
    count=0
    for j in range(i+1,len(a)):
        if a[i]>a[j]:
            count+=1
        elif a[i]<=a[j]:
            break
        if count>=max:
            max=count
print(max)