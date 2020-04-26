n , k = map(int,input().split())
arr = list(map(int,input().split()))
count = 0
for i in range(n) :
    for j in range(i,n) :
        if(i < j and (arr[i]+arr[j])%k==0) :
            # print(i,j)
            count+=1
print(count)
