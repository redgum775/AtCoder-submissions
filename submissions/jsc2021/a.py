import math

x, y, z = map(int, input().split())
g = y / x
b = g * z
if b.is_integer():
  print("%.0f" %(b - 1))
else:
  print(math.floor(b))
