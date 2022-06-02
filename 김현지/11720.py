A = int(input())
B = list(map(int,input()))
H = 0

for i in range(0,len(B)):
    H+=B[i]
print(H)