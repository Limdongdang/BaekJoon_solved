import sys

a = []
for i in range(9):
    s = int(sys.stdin.readline())
    a.append(s)
m = 0
for i in range(9):
    if a[m] < a[i]:
        m = i
print(max(a))
print(m+1)
