n = int(input())
h = list(map(int, input().split()))
if len(h) == 1:
    print(-1)
    exit()
for i in range(len(h)):
    if h[0] < h[i]:
        print(i+1)
        exit()
print(-1)
