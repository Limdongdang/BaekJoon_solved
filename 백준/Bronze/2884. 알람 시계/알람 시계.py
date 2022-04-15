a,b= input().split()
a = int(a)
b = int(b)

if (b - 45) < 0:
    a += -1
    b = 60 + (b-45)
    if a < 0:
        a = a + 24
else:
    b = b-45

    
print(a, b)
