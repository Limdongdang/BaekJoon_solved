import sys
a = int(sys.stdin.readline())
b = int(sys.stdin.readline())
c = int(sys.stdin.readline())
result = a * b * c

countnum = []
while(result != 0):
    countnum.append(result%10)
    result = result // 10
for i in range(10):
    count = 0
    for j in range(len(countnum)):
        if countnum[j] == i:
            count = count + 1
    print(count)    