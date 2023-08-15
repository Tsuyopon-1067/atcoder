x, y, n = map(int, input().split())

ans1 = int((n+2)/3)*y
ans2 = int(n/3)*y + n%3 * x
ans3 = n*x
print(min(ans1, ans2, ans3))
