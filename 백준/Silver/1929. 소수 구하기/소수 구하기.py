a, b= map(int,input().split())

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
        print(i)