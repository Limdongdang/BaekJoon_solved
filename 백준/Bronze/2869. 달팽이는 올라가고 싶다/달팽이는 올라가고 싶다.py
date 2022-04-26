import sys
a,b,c = map(int,(sys.stdin.readline().split()))
if c == a:
    print(1)
else:
    day,last = divmod(c-a,a-b)
    if last == 0:
        print(day+1)
    else:
        print(day+2)