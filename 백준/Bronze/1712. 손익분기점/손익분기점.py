a,b,c = map(int,input().split())
bene = c - b
fullcost = a

if bene <= 0:
    count = -1
else:
    count = fullcost // bene + 1

print(count)