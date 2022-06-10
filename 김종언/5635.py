a,*_,b=sorted(map(lambda x:(f'{x[3]}{x[2]:>2}{x[1]:>2}',x[0]),(i().split()for _ in[0]*int(i()))))
print(b[1],a[1])