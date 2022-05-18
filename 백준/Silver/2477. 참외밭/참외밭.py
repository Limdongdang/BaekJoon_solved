cham = int(input())

xy=[list(map(int, input().split())) for _ in range(6)]
sero = [3, 4]
garo = [1, 2]
max = 0
for i in sero:
    for j in range(6):
        if xy[j][0] == i:
            if max < xy[j][1]:
                max = xy[j][1]
                s_index = j
seromax = max
max = 0
for i in garo:
    for j in range(6):
        if xy[j][0] == i:
            if max < xy[j][1]:
                max = xy[j][1]
                g_index = j
garomax = max
x = xy[(s_index -1) % 6][1] - xy[(s_index+1) % 6][1]
y = xy[(g_index-1) % 6][1] - xy[(g_index+1) % 6][1]

print((seromax * garomax - abs(x) * abs(y)) * cham)
