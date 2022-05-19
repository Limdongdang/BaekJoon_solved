testcase = int(input())

for _ in range(testcase):
    x1, y1, x2, y2 = map(int, input().split())
    planet = int(input())
    count = 0
    for i in range(planet):
        cx, cy, r = map(int, input().split())
        red = (abs(cx - x1) ** 2 + (cy - y1) ** 2) ** 0.5
        green = (abs(cx - x2) ** 2 + (cy - y2) ** 2) ** 0.5
        if red < r > green:
            continue
        elif red > r > green:
            count += 1
        elif red < r < green:
            count += 1
    print(count)
        