a = input()
c = len(a)
b = ['c=', 'c-', 'dz=', 'd-', 'lj', 'nj', 's=', 'z=']
count = 0
for i in b:
  if i in a:
    a = a.replace(i," ")
    
print(len(a))