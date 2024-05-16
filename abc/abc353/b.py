n, k = map(int, input().split())
a = list(map(int, input().split()))

ans = 0
seat = 0
for i in range(n):
    if seat + a[i] <= k:
        seat += a[i]
    else:
        seat = a[i]
        ans += 1
if seat > 0:
    ans += 1
print(ans)
