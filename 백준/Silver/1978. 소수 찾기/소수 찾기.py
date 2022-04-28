a = int(input())
s = list(map(int, input().split()))
sosu = 0
for i in s:
    count = 0
    for j in range(1,i+1):
        if i % j == 0:
            count += 1
    if count == 2:
        sosu += 1      
print(sosu)
