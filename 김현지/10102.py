A = int(input())
B = list(input())


if B.count('A') > B.count('B'):
    print('A')
elif B.count('A')< B.count('B'):
    print('B')
else :
    print('Tie')