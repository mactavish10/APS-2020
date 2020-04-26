n = int(input())
flag = 1
if n%2==0 :
    flag = 0
a = [1]*(2*n)
#print(a)
#a.append(1)
for i in range(0 , (2*n)-1) :
    if i%2==0 :
        a[i+1] = a[i] + 3
    else :
        a[i+1] = a[i] + 1
    if a[i+1] > 2*n :
        a[i+1] = a[i+1] - (2*n)
if(flag) :
    print("YES")
    print(*a)
else :
    print("NO")