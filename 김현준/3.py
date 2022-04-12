a=int(input())
k=a
while True:
    b=input()
    if b=='=':
        print(k)
        break
    c=int(input())
    if b=='+':
        k+=c
    elif b=='-':
        k-=c
    elif b=='*':
        k*=c
    elif b=='/':
        k=k//c
