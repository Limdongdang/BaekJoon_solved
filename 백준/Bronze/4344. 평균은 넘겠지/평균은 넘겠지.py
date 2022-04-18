import sys

case_num = int(sys.stdin.readline())
score = []
for _ in range(case_num):
    sum = 0
    overaver = 0
    score = list(map(int, sys.stdin.readline().strip().split()))
    for i in range(1,score[0]+1):
        sum = sum + score[i]
    aver = sum / score[0]
    for j in range(1,score[0]+1):
        if aver < score[j]:
            overaver = overaver + 1
    print('{:.3f}%'.format(overaver / score[0] * 100))