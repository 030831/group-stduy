import re
F=lambda:(sorted(x:=input()),x[0]+x[-1],re.sub('[aeiou]','',x))
F()
print('YNEOS'[F()!=F()::2])
