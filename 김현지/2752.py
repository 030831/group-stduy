#2752

a =[]
b,c,d = map(int,input().split())
a.append(b)
a.append(c)
a.append(d)
a.sort()
print(a[0],a[1],a[2])