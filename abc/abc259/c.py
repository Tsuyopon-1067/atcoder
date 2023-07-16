import sys

s = input()
t = input()

n_s = len(s)
n_t = len(t)

i_s = 0
i_t = 0

while i_s < n_s and i_t < n_t:
	if s[i_s] == t[i_t]:
		if i_s+1 < n_s and i_t+1 < n_t:
			if s[i_s+1] == t[i_t+1]:
				i_s += 1
				i_t += 1
			elif i_s > 0 and s[i_s-1] == s[i_s] and s[i_s] == t[i_t+1]:
				i_t += 1
			else:
				print("No")
				sys.exit()
		else:
			print("Yes")
			sys.exit()
	else:
		print("No")
		sys.exit()
