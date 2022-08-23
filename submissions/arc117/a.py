a, b = map(int, input().split())

e_p = []
e_m = []

def total(start,end,step):
    temp =0
    for i in range(start,end+1,step):
        temp += i
    return temp

if a < b:
  for i in range(1,a+1,1):
    if i == a:
      e_p.append(total(a,b,1))
    else:
      e_p.append(i)
  for i in range(-1, -b-1 ,-1):
    e_m.append(i)

elif a > b:
  for i in range(-1,-b-1,-1):
    if i == -b:
      e_m.append(-1 * total(b,a,1))
    else:
      e_m.append(i)
  for i in range(1, a+1 ,1):
    e_p.append(i)

else:
  for i in range(1,a+1,1):
    e_p.append(i)
  for i in range(-1,-b-1,-1):
    e_m.append(i)

e = e_p + e_m
print(*e)

