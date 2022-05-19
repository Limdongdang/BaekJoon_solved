def inbox(px, py):
    global ex, x ,ey ,y
    if x <= px <= ex:
        if y <= py <= ey:
            return 1
    return 0

def incircle(px, py, x, y, r):
    distance = (abs(px - x) ** 2 + abs(py - y) ** 2) ** 0.5
    if r >= distance:
        return 1
    return 0
    
w, h, x, y, p = map(int, input().split())

ex = x + w
ey = y + h

player = 0
for _ in range(p):
    px, py = map(int, input().split())
    if inbox(px, py):
        player += 1
    elif incircle(px, py, x, y+(h//2), h//2):
        player += 1
    elif incircle(px, py, ex, y+(h//2), h//2):
        player += 1

print(player)
