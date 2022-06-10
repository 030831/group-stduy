A = list(input())
score = 10

for i in range(0,len(A)-1):
    if A[i]==A[i+1]:
        score +=5
    elif A[i]!=A[i+1]:
        score +=10
print(score)
