for i in range(3):
    A = list(map(int,input().split()))
    if A.count(0) == 1:
        print('A')
    elif A.count(0) ==2:
        print('B')
    elif A.count(0) ==3:
        print('C')
    elif A.count(0) ==4:
        print('D')
    else :
        print('E')
