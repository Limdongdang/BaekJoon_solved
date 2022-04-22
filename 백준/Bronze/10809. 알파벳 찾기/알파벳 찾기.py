import sys
b = sys.stdin.readline().rstrip()

a = ['a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z']


    
for i in range(len(a)):
    index = 0
    tnum = 0
    for j in b:
        if a[i] == j:
            print(index , end=" ")
            tnum = 1
            break
        index += 1
    if tnum == 0: print(-1, end=" ")
    
    
    