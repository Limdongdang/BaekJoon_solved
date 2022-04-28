a = int(input())
count = 0
if a % 5 == 0:
    print(a // 5)
else:
    while(True):
        a -= 3
        count += 1
        if a % 5 == 0:
            print(a // 5 + count)
            break
        elif a == 0:
            print(count)
            break
        elif a < 0:
            print(-1)
            break
            
    
            