a=input()
b=[]
for i in range(len(a)):
    if a[i-1]!=a[i]:
        b.append(a[i])
A=0
B=0
A=b.count('0')
B=b.count('1')
if A>B:
    print(B)
elif B>A:
    print(A)
elif A==B:
    print(A)
