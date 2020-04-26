n = int(input())
s = input()
 
lev = 0
v = 0
for direction in s:
    if direction == "U":
        lev += 1
        if lev == 0:
            v += 1
    else:
        lev -= 1
         
print(v)
