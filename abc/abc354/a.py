h = int(input())
plant = 0
for i in range(32):
    plant += 2**i
    if plant > h:
        print(i+1)
        break
