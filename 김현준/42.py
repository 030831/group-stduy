a=list(map(int,input().split()))
b=[1,2,3,4,5,6,7,8]
c=[8,7,6,5,4,3,2,1]
if a==b:
    print("ascending")
elif a==c:
    print("descending")
else:
    print('mixed')