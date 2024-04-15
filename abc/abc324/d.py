import math


def sub(n, s):
    num_count = {}
    for i in range(10):
        num_count[i] = 0
    for c in s:
        num_count[int(c)] += 1

    start = int(math.sqrt(10**(n-1)))
    end = int(math.sqrt(10**(n)))

    i = start
    ans = 0
    while i < end:
        if i*i < 10**(n-1):
            i += 1
            continue
        if i*i > 10**(n):
            break

        str_i2 = str(i*i)
        flag = True

        num_count2 = {}
        for j in range(10):
            num_count2[j] = 0
        for c in str_i2:
            num_count2[int(c)] += 1

        for j in range(10):
            if num_count[j] != num_count2[j]:
                flag = False
                break

        i += 1

        if flag:
            ans += 1

    return ans


n = int(input())
s = input()

num_count = {}
for i in range(10):
    num_count[i] = 0
for c in s:
    num_count[int(c)] += 1

ans = 0

s = ''.join(sorted(s, reverse=True))
for i in range(num_count[0]+1):
    ans += sub(n, s)
    s = s.rstrip(s[-1])

print(ans)
