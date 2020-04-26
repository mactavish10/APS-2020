n = int(input())

c = 0

while n :
    if n&1 == 0 :
        c+=1
    n = n>>1

c = 1<<c
print(c)
