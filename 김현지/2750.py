#2750

A=[]
number = int(input())
for i in range(number):
    i= int(input())
    A.append(i)
    A.sort()
for i in range(number):
    print(A[i])