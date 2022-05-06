#첫번째 방법
a,b,c = map(int,input().split())
A =[a,b,c]
A.remove(max(a,b,c))
A.remove(min(a,b,c))
print(A[0])

#두번쨰 방법
# a,b,c = map(int,input().split())
# A = [a,b,c]
# A.sort()
# print(A[1])