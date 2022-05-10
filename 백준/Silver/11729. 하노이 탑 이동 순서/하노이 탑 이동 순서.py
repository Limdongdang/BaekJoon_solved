def hanoi(n, start, end, sec):
  if n <= 1:
    print(start, end)
    return
  else:
    hanoi(n-1, start, sec, end)
    print(start, end)
    hanoi(n-1, sec, end, start)
a = int(input())
print(2 ** a - 1)
hanoi(a, 1, 3, 2)