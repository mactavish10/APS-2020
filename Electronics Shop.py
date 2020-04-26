import sys
b , n , m  = map(int,input().split())
keyboards = list(map(int,input().split()))
drives = list(map(int,input().split()))

# keyboards_sorted = sorted(keyboards,reverse = True)
# drives_sorted = sorted(drives,reverse = True)
flag = 0
# sums = dict()
spent = -sys.maxsize-1
for i in range(n):
    for j in range(m):
        temp = keyboards[i] + drives[j]
        if(temp>spent and temp<=b) :
            spent = temp
            flag = 1
if(flag) :
    print(spent)
else :
    print(-1)
