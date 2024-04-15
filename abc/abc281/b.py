s = input()

ans = "Yes"
if s[0] < 'A' or 'Z' < s[0]:
    ans = "No"

num = 0
for i in range(len(s)-2):
    if '0' < s[i+1] < '9':
        num *= 10
        num += int(s[i+1])
    if s[i+1] < '0' or '9' < s[i+1]:
        ans = "No"

if s[len(s)-1] < 'A' or 'Z' < s[len(s)-1]:
    ans = "No"

if num < 100000 or 999999 < num:
    ans = "No"

print(ans)
