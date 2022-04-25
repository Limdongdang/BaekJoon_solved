a = int(input())
count = 0
qwe = 0
num = a
esum = 0
while(a > 0):
    count += 1
    b = count
    a -= b

for i in range(1,count):
    esum += i

if count % 2 == 0:
    print(str(num - esum)+"/"+str((count + 1) - (num - esum)))
else:
    print(str((count + 1) - (num - esum))+"/"+str(num - esum))
