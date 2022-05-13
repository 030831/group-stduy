C = []
B=0

for i in range(7):
    A = int(input())
    if A%2 != 0:
        C.append(A)
for i in range(len(C)):
    B += C[i]
if B == 0:
    print(-1)
else:
    print(B)
    print(min(C))