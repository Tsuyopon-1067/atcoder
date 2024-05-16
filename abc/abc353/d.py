n = int(input())
a = list(map(int, input().split()))
dlist = a.copy()
for i in range(n):
    a_str = str(a[i])
    length = len(a_str)
    dlist[i] = 10**length
d_sum = 0
dlist2 = dlist.copy()
for i in range(n):
    if i == 0:
        dlist2[0] = sum(dlist) - dlist[0]
        continue
    dlist2[i] = dlist2[i-1] - dlist[i]
ans = 0
for i in range(n):
    ans += a[i] * dlist2[i]
    ans %= 998244353
for i in range(n):
    ans += a[i] * i
    ans %= 998244353
print(ans)
