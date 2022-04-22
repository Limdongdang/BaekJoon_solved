def d(n):
    sum = 0
    for i in str(n):
        sum += int(i)
    sum += n
    return sum


numset = set(range(1,10001))
generate = set()

for i in range(1,10001):
    generate.add(d(i))

self_num = sorted(numset - generate)
for i in self_num:
    print(i)



