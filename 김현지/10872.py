def F(num):
    if num == 1:
        return num
    elif num == 0:
        return 1
    else :
        return num*F(num-1)

A = int(input())
print(F(A))