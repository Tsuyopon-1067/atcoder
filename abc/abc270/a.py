a, b = map(int, input().split())

scorea = [0, 0, 0]
scoreb = [0, 0, 0]
k = 4
ans = 0
for i in range(3):
    if a / k >= 1:
        scorea[i] = 1
        a -= k
    if b / k >= 1:
        scoreb[i] = 1
        b -= k
    if scorea[i] + scoreb[i] != 0:
        ans += k

    k = int(k/2)
print(ans)
