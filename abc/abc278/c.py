n, q = map(int, input().split())
dics = {}

for _ in range(q):
	t, a, b = map(int, input().split())
	if not a in dics:
		dics[a] = {}
	if not b in dics:
		dics[b] = {}

	if t == 1:
		dics[a][b] = 1
	elif t == 2:
		dics[a][b] = 0
	else:
		ans = "No"
		if b in dics[a] and a in dics[b]:
			if dics[a][b] == 1 and dics[b][a] == 1:
				ans = "Yes"
		print(ans)
