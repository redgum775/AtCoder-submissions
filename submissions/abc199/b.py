N = int(input())

x = [list(sorted(map(int, input().split()))) for i in range(2)]

num = x[1][0] - x[0][N-1]

if num >= 0:
  print(num + 1)
else:
  print(0)
