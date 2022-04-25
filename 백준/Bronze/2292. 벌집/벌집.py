a = int(input())
count = 1
while(a > 0):
    if a == 1:
        break
    else:
        b = 6 * count
        a -= b
        count += 1
print(count)

