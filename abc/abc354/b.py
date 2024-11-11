n = int(input())
s = []
c = []
for i in range(n):
    ts, tc = input().split()
    s.append(ts)
    c.append(int(tc))
idx = sum(c) % n
s_sorted = s.copy()
s_sorted.sort()
print(s_sorted[idx])
