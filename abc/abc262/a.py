lst = [s for s in input().split()]
lst.sort()
if lst[0]==lst[1] and lst[2]==lst[3]==lst[4]:
	print("Yes")
elif lst[0]==lst[1]==lst[2] and lst[3]==lst[4]:
	print("Yes")
else:
	print("No")
