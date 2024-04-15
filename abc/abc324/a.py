ans = "Yes"
n = int(input())
a = list(map(int, input().split()))
for x in a:
    if x != a[0]:
        ans = "No"

print(ans)
