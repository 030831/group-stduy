for i in range(int(input())):
    a,b=input().split()
    a=list(a)
    b=list(b)

    if a==b:
        print(0)
    else:
        a.sort(reverse=True)
        b.sort(reverse=True)
        c=[]
        for j in range(len(a)):
            if a[j]!=b[j]:
                c.append(a[j])
        print(len(c)+1)