c = []
d = []
for i in range(3):
    a, b = map(int, input().split())
    c.append(a)
    d.append(b)
cnt = 0
dcnt = 0
for i in range(3):
    if c[i] == min(c):
        cnt += 1
    if d[i] == min(d):
        dcnt += 1

if cnt == 2:
    x = max(c)
else:
    x = min(c)
if dcnt == 2:
    y = max(d)
else:
    y = min(d)

print(x, y)