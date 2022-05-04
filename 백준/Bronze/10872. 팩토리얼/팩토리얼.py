def fact(n):
    sum = 0
    if n == 0:
        return 1
    elif n > 0:
        sum += n * fact(n-1)
        return sum
a = int(input())
print(fact(a))
