a=25
b=10
c=5
d=1
A=0
B=0
C=0
D=0
for i in range(int(input())):
    money=int(input())
    if money>=a:
        A=money//a
        money=money-a*A
        if money == 0:
            print(A, B, C, D, sep=' ')
            A=0
            B=0
            C=0
            D=0
    if money>=b:
        B=money//b
        money-=b*B
        if money == 0:
            print(A, B, C, D, sep=' ')
            A=0
            B=0
            C=0
            D=0
    if money>=c:
        C=money//c
        money-=c*C
        if money == 0:
            print(A, B, C, D, sep=' ')
            A=0
            B=0
            C=0
            D=0
    if money>=d:
        D=money//d
        money-=d*D
        if money == 0:
            print(A, B, C, D, sep=' ')
            A=0
            B=0
            C=0
            D=0