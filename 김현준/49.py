for i in range(int(input())):
    a,b=input().split()
    a=list(a)
    b=list(b)
    if a==b:
        print(0)
    else:
        a.sort(reverse=True)
        b.sort(reverse=True)
        a=list(map(int,a))
        b=list(map(int,b))
        if a.count(1)>=b.count(1):
            print(a.count(1)-b.count(1)+1)
        elif a.count(1)<b.count(1):
            print(b.count(1) - a.count(1) + 1)