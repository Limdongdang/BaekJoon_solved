import sys

a = int(sys.stdin.readline())
okq = []
for i in range(a):
    okq = sys.stdin.readline().strip().split('X')
    sum = 0
    for j in range(len(okq)):
        for k in range(1,len(okq[j])+1):
            sum = sum + k
    print(sum)
