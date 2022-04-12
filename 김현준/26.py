from sys import stdin

n,m=map(int,stdin.readline().split())
j=int(stdin.readline())

start=1
end=m
distance=0

for i in range(j):
    p=int(stdin.readline())
    if p<start:
        distance+=(start-p)
        start=p
        end=p+m-1
    elif p>end:
        distance+=(p-end)
        end=p
        start=end-m+1
print(distance)