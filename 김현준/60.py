a,b=map(int,input().split())
if a>b:
    print(b+(a+b//10))
elif a<=b:
    print(a+(b+a//10))
