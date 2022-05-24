import sys
casenum = int(sys.stdin.readline())
a = [0] * 10001
for i in range(casenum):
    a[int(sys.stdin.readline())] += 1
    
for i in range(10001):
    if a[i]:
        for j in range(a[i]):
            print(i)