a = int(input())
b = int(input())
sosu = []
for i in range(a, b+1):
    count = 0
    for s in range(1, i+1):
        if i % s == 0:
            count += 1
    if count == 2:
        sosu.append(s)
if len(sosu) != 0: 
    print(sum(sosu))
    print(min(sosu))
else:
    print(-1)
