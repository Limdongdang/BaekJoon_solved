while(True):
    a, b, c = map(int, input().split())
    if a == b == c == 0:
        break

    d = max(a, b, c)

    if a == d:
        if b ** 2 + c ** 2 == d ** 2:
            print('right')
        else:
            print('wrong')   
    elif b == d:
        if a ** 2 + c ** 2 == d ** 2:
            print('right')
        else:
            print('wrong')
    else:
        if a ** 2 + b ** 2 == d ** 2:
            print('right')
        else:
            print('wrong')   