a=input().split(';')
a=list(map(int,a))
a.sort(reverse=True)
for i in a:
    print('{0:>9,}'.format(i))