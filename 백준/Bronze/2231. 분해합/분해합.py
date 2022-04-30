a = int(input())
min = a
for i in range(a+1):
    sum = 0
    for j in str(i):
        sum += int(j)
    if sum+i == a:
        if min > i:
            min = i
if min == a:
    print(0)
else:
    print(min)