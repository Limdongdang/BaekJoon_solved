def chill(start1, end1, start2, end2, key):
    count = 0
    global first, c, minu,s,z
    if first == 'W':
        sec = 'B'
    else:
        sec = 'W'
    for i in range(start1, end1, key):
        if i != start1:
            temp = first
            first = sec
            sec = temp
        for j in range(start2, end2, key):
            if first != c[i][j]:
                count += 1
            temp = first
            first = sec
            sec = temp
    if minu > count:
        minu = count

a, b = map(int, input().split())
c = []

for i in range(a):
    c.append(input())


minu = a * b
for s in range(a-7):
    for z in range(b-7):
        first = c[s][z]
        chill(s, 8+s, z, 8+z, 1)
        if first == 'W':
            sec = 'B'
        else:
            sec = 'W'
        chill(s, 8+s, z, 8+z, 1)
print(minu)