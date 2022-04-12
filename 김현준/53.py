import sys

input=sys.stdin.readline

MIN=10000
MAX=0
A=int(input())
for i in range(A):
    b=[]
    b=list(map(int,input().split()))
    if b[1]<MIN:
        MIN=b[1]
    if b[0]>MAX:
        MAX=b[0]
if MAX-MIN<=0:
    print(0)
else:
    print(MAX-MIN)