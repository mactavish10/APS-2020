# cook your dish here
t = int(input())
mod = 1000000007
while(t>0) :
    M,N = input().split()
    m = int(M)
    n = int(N)
    a = [int(x) for x in input().split()]
    b = [int(y) for y in input().split()]
    res = 0
    for i in range(m) :
        for j in range(m) :
            fib = [int(i) for i in range(1,max(3,n+1))]
            fib[0] = a[i]
            fib[1] = b[j]
            for k in range(3,n+1) :
                fib[k-1] = fib[k-2]+fib[k-3]
            res = (res + fib[n-1])%mod
    print(res)
    t-=1