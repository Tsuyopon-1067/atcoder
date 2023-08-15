n, k = map(int, input().split())
a = list(map(int, input().split()))
for i in range(k):
	a.append(0)
print(*a[k:k+n])
