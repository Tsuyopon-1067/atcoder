n = int(input())
a = list(map(int, input().split()))
a.sort()

y = n-1
x = 0
count = 0
while y >= 0:
    while x < y:
        if a[y] + a[x] >= 100000000:
            count += y - x
            break
        x += 1
    y -= 1
    if x >= y:
        break

ans = sum(a) * (n-1)
ans -= count * 100000000
print(ans)
