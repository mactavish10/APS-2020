n , k = map(int,input().split())


c = [0 for i in range(0,k+1)]
c[0] = 1

for i in range(0,n+1) :
    for j in range(min(i,k),0,-1) :
        c[j]+=c[j-1]

print(c[k])
