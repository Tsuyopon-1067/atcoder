x, y, n = map(int, input().split())
n3 = int(n / 3)
n1 = n % 3
mon1 = n * x
mon3 = n3 * y + n1 * x
print(min(mon1, mon3))
