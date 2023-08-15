x, y, z = map(int, input().split())

ans = -1
if not (0 < y < x or x < y < 0):
    ans = abs(x)
elif 0 < y < x or x < y < 0:
    if not (0 < y < z or z < y < 0):
        ans = abs(z) + abs(z-x)
print(ans)
