a = input()
a = a.upper()
b = set(a)
max = 0
qu = 0
for i in b:
  count = 0
  for s in a:
    if s == i:
      count += 1
  if max < count:
    max = count
    q = i
    qu = 0
  elif max == count:
    qu = 1

if qu == 0:
  print(q)
else:
  print('?')