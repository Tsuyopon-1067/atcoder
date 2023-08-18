s = input()
t = input()

ans = "No"

lens = len(s)
lent = len(t)

for i in range(lens-lent+1):
	if t == s[i:i+lent]:
		ans = "Yes"
		break

print(ans)
