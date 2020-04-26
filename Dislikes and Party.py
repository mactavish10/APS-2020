n = int(input())
 
tot = (n*(n-1))//2
h = set()
c1 = 0
s = 0
for i in range(10) :
    # n-=1
    arr = [int(a) for a in input().split()]
    for j in range(1,len(arr)) :
        if (arr[j] , arr[0]) not in h :
            h.add( (arr[0] , arr[j]) )
    # s+=len(h)
print(tot-len(h))
 