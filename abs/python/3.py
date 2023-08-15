n = int(input())
a = list(map(int, input().split()))

ans = 100
for i in range(n):
	t = 0
	while a[i] % 2 == 0:
		a[i] /= 2
		t += 1
	if ans > t:
		ans = t

print(ans)
