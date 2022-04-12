for i in range(int(input())):
    a,b=input().split()
    A=0
    B=0
    for j in range(len(a)):
        if a[j]=='1' and a[j]!=b[j]:
            A+=1
        elif a[j]=='0' and a[j]!=b[j]:
            B+=1
    if A>=B:
        print(A)
    elif B>A:
        print(B)