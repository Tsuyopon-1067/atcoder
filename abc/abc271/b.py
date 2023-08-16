h, w = map(int, input().split())
c = []
x = []
for i in range(h):
    c.append(list(input()))

for j in range(w):
    tmp = 0
    for i in range(h):
        if c[i][j] == '#':
            tmp += 1
    x.append(tmp)

print(*x)
