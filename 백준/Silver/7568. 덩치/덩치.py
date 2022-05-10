a = int(input())
b = []
c = []
d = []
for _ in range(a):
  weight, height = map(int,input().split())
  b.append(weight)
  c.append(height)

for i in range(a):
  count = 0
  for j in range(a):
    if b[i] < b[j] and c[i] < c[j]:
      count += 1

  d.append(count + 1)

for i in d:
  print(i, end =' ')