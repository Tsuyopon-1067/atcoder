h, w = map(int, input().split())
s = []
for i in range(h):
    s.append(input())

ans = 0
for line in s:
    for c in line:
        if c == '#':
            ans += 1

print(ans)
