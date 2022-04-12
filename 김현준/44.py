while True:
    a = list(map(int, input().split()))
    b=[]
    c=[]
    if a[0]==0 and len(a)==1:
        break
    elif a!=0:
        a.pop(0)
        a.sort()
        d={}
        d=a.copy()
        remove_set = {0}
        d = [i for i in a if i not in remove_set]
        d=list(map(int,d))
        d.sort()
        if len(d)==2 and a[0]==0 and a[1]==0:
                a.remove(d[0])
                a.remove(d[1])
                b.append(d[0])
                c.append(d[1])
        for i in range(len(a)):
            if len(a)!=0:
                b.append(min(a))
                a.remove(min(a))
                if len(a)>=1:
                    c.append(min(a))
                    a.remove(min(a))
            elif len(a)==0:
                break
        if b[0]==0 and b[1]!=0:
            b[0],b[1]=b[1],b[0]
        if c[0]==0 and c[1]!=0:
            c[0],c[1]=c[1],c[0]
        for j in range(1,10):
            if b[0]==0 and b[j]!=0:
                b[0],b[j]=b[j],b[0]
            if c[0]==0 and c[j]!=0:
                c[0],c[j]=c[j],c[0]
                if c[0] < c[1]:
                    c[0], c[1] = c[1], c[0]
        print(int(''.join(map(str, b)))+int(''.join(map(str, c))))
