import sys
score_list = []
subject_num = int(sys.stdin.readline())
score_list.extend(map(int, sys.stdin.readline().split()))
sum = 0
for i in range(subject_num):
    sum = sum + score_list[i] / max(score_list) * 100
print(sum / subject_num)