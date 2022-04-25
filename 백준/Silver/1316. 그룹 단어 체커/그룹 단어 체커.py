a = int(input())
b = []
for i in range(a):
  b.append(input())
result = 0
for i in b:
  last = i[0]
  used = []
  for j in range(1,len(i)):
    if last == i[j]:
      continue
    else:
      used.append(last)
      last = i[j]
      
    if last in used:
      result += 1
      break
      
print(a-result)