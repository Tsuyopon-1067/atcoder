n = int(input())
a = list(map(int, input().split()))

dic = {1: 0}

for i in range(n):
    next = dic[a[i]]+1
    dic[2*(i+1)] = next
    dic[2*(i+1)+1] = next

for i in range(2*n+1):
    print(dic[i+1])
