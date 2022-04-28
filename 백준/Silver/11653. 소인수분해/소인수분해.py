a = int(input())

while(a != 0):
    if a == 1:
        break
    for i in range(2,a+1):
        if a % i == 0:
            a //= i
            print(i)
            break
