S = input()

b_count = 0
ans = 0
for s in S:
  if s == 'W':
    ans += b_count
  if s == 'B':
    b_count += 1

print(ans)
