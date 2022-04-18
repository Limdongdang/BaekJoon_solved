import sys
counta = []
for i in range(10):
    a = int(sys.stdin.readline())
    counta.append(a % 42)
b = set(counta)
print(len(b))