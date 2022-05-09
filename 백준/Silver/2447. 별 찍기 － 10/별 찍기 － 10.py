def star(n):
  if n == 1:
    return '*'
  Stars = star(n//3)
  line = []

  for i in Stars:
    line.append(i*3)
  for i in Stars:
    line.append(i+' '*(n//3)+i)
  for i in Stars:
    line.append(i*3)
  
  return line
    
  
a = int(input())
print('\n'.join(star(a)))
# 블로그 참고