a = int(input())
b=[]
for i in range(a):
    c = int(input())
    b.append(c)

if b.count(0) < b.count(1):
    print("Junhee is cute!")
else :
    print("Junhee is not cute!")