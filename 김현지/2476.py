a = int(input())
A = []

for i in range(a):
    b,c,d = map(int,input().split())

    if b==c==d:
        M= 10000+b*1000
        A.append(M)

    elif b==c and b!=d:
        M= 1000+b*100
        A.append(M)

    elif c==d and b!=c:
        M= 1000+c*100
        A.append(M)

    elif b==d and d!=c:
        M= 1000+b*100
        A.append(M)

    elif b!=c!=d:
        M= max(b,c,d)*100
        A.append(M)

print(max(A))