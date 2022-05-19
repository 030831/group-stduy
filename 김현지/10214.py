# import sys
# input=sys.stdin.readline

# #둘다 틀림 왜?....

# #1
# T = int(input())
# for i in range (9):
#     a,b = map(int,input().split())
#     if a>b :
#         print('Yonsei')
#     elif a<b:
#         print('Korea')
#     elif a==b :
#         print('Draw')
# for i in range (T,9):
#     a, b = map(int, input().split())

# #2
# A = ""
# T = int(input())
# for i in range (0,T):
#     a,b = list(map(int,input().split()))
#     if a>b :
#         A+='Yonsei'
#     elif a<b:
#         A+='Korea'
#     elif a==b :
#         A+='Draw'
# for i in range (T,9):
#     a, b = list(map(int, input().split()))
# print(A,end="\n")


a=int(input())
b=list()
for i in range(9):
    
    x,y=map(int,input().split())

    if x>y and a>0:
        b.append("Yonsei")
        a-=1
    elif x<y and a>0:
        b.append("Korea")
        a-=1
    elif x==y and a>0:
        a-=1
        b.append("Draw")
for i in b:
    print(i)
            