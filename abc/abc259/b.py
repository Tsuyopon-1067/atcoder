import math

a, b, d = map(int, input().split())

d = math.radians(d)
x = a*math.cos(d) - b*math.sin(d)
y = b*math.cos(d) + a*math.sin(d)
print(x, y)
