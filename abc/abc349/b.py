s = input()
alphabet_count = [0] * 26
for c in s:
    alphabet_count[ord(c) - ord("a")] += 1
count_count = [0] * 101
for num in alphabet_count:
    if num > 0:
        count_count[num] += 1

ans = all(num in (0, 2) for num in count_count)
if ans:
    print('Yes')
else:
    print('No')
