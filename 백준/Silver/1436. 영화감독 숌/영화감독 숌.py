a = int(input())
title = 0
count = 0
while(True):
    title += 1
    if '666' in str(title):
        count += 1
    if a == count:
        print(title)
        break