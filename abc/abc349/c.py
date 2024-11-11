s = input()
t = input()
t = t.lower()
i, j = 0, 0
while i < len(s) and j < len(t):
    if s[i] == t[j]:
        j += 1
    i += 1
if j == len(t):
    print("Yes")
elif j == len(t) - 1 and t[2] == 'x':
    print("Yes")
else:
    print("No")
