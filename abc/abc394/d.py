s = input()
pars = ['([<', ')]>']

stack = []

for c in s:
    if c in pars[1]:
        if len(stack) > 0:
            counterpart = pars[0][pars[1].index(c)]
            if stack[-1] == counterpart:
                stack.pop()
                continue
    stack.append(c)

if len(stack) == 0:
    print('Yes')
else:
    print('No')
