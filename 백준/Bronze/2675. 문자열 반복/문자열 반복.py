import sys

a = int(sys.stdin.readline())

for i in range(a):
    b, c= sys.stdin.readline().split()
    b = int(b)
    c = c.rstrip()
    for j in c:
        print(j * b,end="")
    print()
