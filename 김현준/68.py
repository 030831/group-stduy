a,b=map(int,input().split())
count=1
k=b
A=[]
A=list(map(int,input().split()))
for i in range(len(A)):
    if k>=A[i]:
        k-=A[i]
    elif k-A[i]<0:
        k=b
        count+=1
        print(k)
    print(count)