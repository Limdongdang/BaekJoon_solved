import sys
a = int(sys.stdin.readline())
for i in range(1,a+1):
    b, c = map(int, sys.stdin.readline().split())
    
    print('Case #'+str(i)+':',b,'+',c,'=',b+c)