a = list(map(int, input().split()))
b = list(i for i in range(1,9))
c = list(b)
c.sort(reverse=True)

if a == b:
  print('ascending')
elif a == c:
  print('descending')
else:
  print('mixed')