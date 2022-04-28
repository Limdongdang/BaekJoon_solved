a = int(input())

for i in range(a):
    b = int(input())
    c = int(input())
    list = [[0]*c for i in range(b+1)]
    count = 1
    for i in range(c):
        list[0][i] = count
        count += 1
    for s in range(b+1):
        list[s][0] = 1
    for s in range(1,b+1):
        for i in range(1,c):
            list[s][i] = list[s-1][i] + list[s][i-1]
    print(list[s][i])
        