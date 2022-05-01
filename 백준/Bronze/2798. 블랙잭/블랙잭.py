a, b = map(int, input().split())

c = list(map(int, input().split()))
max = 0
for i in range(a-2):
    for j in range(i+1, a-1):
        for s in range(j+1, a):
            if b >= c[i] + c[j]+ c[s]:
                if max < c[i] + c[j]+ c[s]:
                    max = c[i] + c[j]+ c[s]
print(max)