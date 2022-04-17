a, a1, a2 = map(int, input().split())

if a == a1 == a2:
    print(10000+a*1000)
elif a == a1 or a == a2:
    print(1000+a*100)
elif a1 == a2:
    print(1000+a1*100)
else:
    c = max(a, a1, a2)
    print(c * 100)