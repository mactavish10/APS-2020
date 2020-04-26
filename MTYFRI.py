# cook your dish here
flag = 0
t = int(input())
while(t>0) :
    flag = 0
    M,K = input().split()
    m = int(M)
    k = int(K)
    a = [int(x) for x in input().split()]
    motu = []
    tomu = []
    for i in range (0,m) :
        if(i%2)==0 :
            motu += [a[i]]
        else :
            tomu += [a[i]]
    motu_sum = sum(motu)
    tomu_sum = sum(tomu)
    if tomu_sum>motu_sum :
        print("YES")
    else :
        while k>0 :
            max1 = max(motu)
            min1 = min(tomu)
            tomu_sum += max1
            motu_sum -= max1
            motu_sum+=min1
            tomu_sum-=min1
            
            if tomu_sum>motu_sum :
                print("YES")
                flag = 1 
                break
            k-=1
        if flag==0 :
            print("NO")
    t-=1