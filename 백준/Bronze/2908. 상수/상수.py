a,b = map(int, input().split())

def swap(a):
  c = a % 10
  a = a - c
  b = a // 100
  a = a % 100
  a = a + b
  a = a + c*100
  return a


if swap(a) > swap(b):
  print(swap(a))
else:
  print(swap(b))
