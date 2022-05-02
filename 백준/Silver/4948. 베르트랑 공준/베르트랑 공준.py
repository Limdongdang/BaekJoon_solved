def sosu(a):
    count = 0
    b = 2 * a
    a += 1
    si = [True] * (b+1)
    key = int(b ** 0.5)
    for i in range(2,key + 1):
        if si[i] == True:
            for j in range(i+i, b+1, i):
                si[j] = False
    for i in range(a, b+1):
        if i < 2:
            continue
        elif si[i]:
            count += 1
    return count


while(True):
    test = int(input())

    if test == 0:
        break
    else:
        print(sosu(test))
