import sys
a = []
for i in range(int(sys.stdin.readline())):
    a.append(input())
b = set(a)
a = list(b)
a.sort()
a.sort(key = len)
for i in a:
    print(i)
