n = int(input())
a = list(map(int, input().split()))

flag = True
ans = 0
while flag:
	for i in range(n):
		if a[i] % 2 == 0:
			a[i] //= 2
		else:
			flag = False
	ans += 1
ans -= 1
print(ans)
