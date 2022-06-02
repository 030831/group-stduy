B = ''
A,X = map(int,input().split())
N = list(map(int,input().split()))
for i in N:
    if i < X:
        B += str(i)
        B += ' '
print(B)