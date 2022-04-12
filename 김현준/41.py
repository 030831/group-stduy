N, S, R = map(int, input().split())

S = list(map(int, input().split()))
R = list(map(int, input().split()))

result = 0

for i in S:
    if i - 1 in R:
        R.remove(i - 1)
    elif i + 1 in R:
        R.remove(i + 1)
    else:
        result += 1

print(result)