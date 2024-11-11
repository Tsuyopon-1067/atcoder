n = int(input())
ac = []
for i in range(n):
    tmpa, tmpc = map(int, input().split())
    ac.append((tmpa, tmpc))
ac = sorted(ac, key=lambda x: x[0])
for i in range(n):
    print(ac[i])
