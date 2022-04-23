a = input()
b = ['ABC', 'DEF', 'GHI', 'JKL', 'MNO', 'PQRS', 'TUV', 'WXYZ']
num = 0
for i in a:
  for j in b:
    for s in j:
      if s == i:
        num += b.index(j) + 3
print(num)