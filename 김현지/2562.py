#2562

a=[]

for i in range(9):
    i = int(input())
    a.append(i)

print(max(a))
print(a.index(max(a))+1)