si = [True] * 10001
for i in range(2, 98):
  if si[i]:
    for j in range(i+i, 10001,i):
      si[j] = False

a = int(input())

for i in range(a):
  b = int(input())
  c = b // 2

  for j in range(c, 1, -1):
    if si[b-j] and si[j]:
      print(j, b - j)
      break