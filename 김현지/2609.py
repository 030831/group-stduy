def gcd(x, y):
    while y != 0:
        x, y = y, x % y
    return x


a, b = map(int, input().split())

d = gcd(a, b)

print(d)
print(a * b // d)