n, m, x, t, d = map(int, input().split())

if m > x:
	m = x
ans = t -  d*(x-m)
print(ans)
