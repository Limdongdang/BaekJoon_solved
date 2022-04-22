def hansu(n):
    a = []
    global count
    if (n >= 100):
        while(n != 0):
            i = 0
            a.insert(i,n % 10)
            i += 1
            n = n // 10
        if a[0] - a[1] == a[1] - a[2]:
            count += 1
    else:
        count += 1



count = 0
num = int(input())
for i in range(1,num+1):
    hansu(i)
print(count)