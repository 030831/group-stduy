import sys
input=sys.stdin.readline
k = 0
count=0
while True:
    a,b,c=map(int,input().split())
    if a+b+c==0:
        exit()
    else:
        k += 1
        if c%b>a:
            count=((c//b)*a+a)
        else:
            count=((c//b)*a+(c%b))
    print("Case %d: %d"%(k,count))