import sys

a = int(sys.stdin.readline())
new = -1
count = 0
x = a // 10
y = a % 10
while(new != a):
    result = x+y
    new = y*10 + result % 10
    x = y
    y = result % 10
    count = count + 1

print(count)