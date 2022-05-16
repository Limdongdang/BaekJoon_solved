num, width, length = map(int, input().split())

for i in range(num):
    matches = int(input())

    if matches <= (width ** 2 + length ** 2) ** 0.5:
        print('DA')
    else:
        print('NE')