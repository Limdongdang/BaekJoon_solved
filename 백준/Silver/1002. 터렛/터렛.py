a = int(input())

for i in range(a):
    x1,y1,r1,x2,y2,r2 = map(int, input().split())
    z = ((abs(x1-x2) ** 2) + (abs(y1-y2) ** 2)) ** 0.5

    if z == 0 and r1 == r2:
        print(-1)
        continue

    if r1 > z or r2 > z:
        if r1 > r2:
            large = r1
            small = r2
        else:
            large = r2
            small = r1
        if large == small + z:
            print(1)
        elif large > small + z:
            print(0)
        elif large < small + z:
            print(2)
    else:     
        if z == r1 + r2:
            print(1)
        elif z > r1 + r2:
            print(0)
        elif z < r1 + r2:
            print(2)