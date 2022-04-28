a = int(input())

for i in range(a):
    h, w, n = map(int, input().split())

    if n % h == 0:
        floor = h
        ho = n // h
    else:
        floor = n % h
        ho = n // h + 1
    print('{}{:02d}'.format(floor, ho))