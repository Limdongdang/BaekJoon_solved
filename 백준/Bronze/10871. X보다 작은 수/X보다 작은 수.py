import sys
a, b = map(int, sys.stdin.readline().split())
s = list(map(int,sys.stdin.readline().split()))
for i in range(a):
    if s[i] < b:
        print(s[i], end=' ')