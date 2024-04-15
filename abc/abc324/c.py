def match(s, t):
    if len(s) == len(t):
        count = 0
        for i in range(len(s)):
            if s[i] != t[i]:
                count += 1

        if count <= 1:
            return True
        else:
            return False
    elif len(s) - len(t) == 1:
        si = 0
        ti = 0
        count = 0
        while si < len(s) and ti < len(t):
            if s[si] != t[ti]:
                si += 1
                while si < len(s) and ti < len(t):
                    if s[si] != t[ti]:
                        return False
                    si += 1
                    ti += 1
                return True
            else:
                if si == len(s)-2 and ti == len(t)-1:
                    return True
                si += 1
                ti += 1
    elif len(t) - len(s) == 1:
        si = 0
        ti = 0
        count = 0
        while si < len(s) and ti < len(t):
            if s[si] != t[ti]:
                ti += 1
                while si < len(s) and ti < len(t):
                    if s[si] != t[ti]:
                        return False
                    si += 1
                    ti += 1
                return True
            else:
                if si == len(s)-1 and ti == len(t)-2:
                    return True
                si += 1
                ti += 1

    elif abs(len(s)-len(t)) > 1:
        return False
    else:
        return False


ns, t = input().split()
n = int(ns)
ans = []
for i in range(n):
    s = input()
    if match(s, t):
        ans.append(i+1)

if len(ans) == 0:
    print(0)
else:
    print(len(ans))
    print(*ans)
