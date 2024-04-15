n = int(input())
s = list(map(int, input().split()))

ans = []
ans.append(s[0])

for i in range(n):
    if i+1 >= n:
        break

    ans.append(s[i+1]-s[i])

print(*ans)
