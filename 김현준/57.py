a,b=map(int,input().split())
A=[]
count=a
for i in range(b):
    A.append(count)
    count-=1
while True:
    if (b*(b+1))/2>a:
        print(-1)
        break
    else:
        if sum(A)>a:
            for j in range(len(A)):
                A[j]=A[j]-1
        elif sum(A)==a:
            print(max(A)-min(A))
            print(A)
            break
        elif sum(A)<a:
            print(max(A)-min(A)+(a-sum(A)))
            print(A)
            break
