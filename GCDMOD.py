import math
t = int(input())
mod = 1000000007
while t>0 :
    res = 0 
    g = 0 
    a,b,n = map(int,input().split())
    if a!=b :
        g1 = (((pow(a,n,abs(a-b))) +( pow(b,n,abs(a-b)))))%(abs(a-b))
        g2 = (a-b)
        if g2==0 :
            res = g1%mod
        else :
            g = math.gcd(g1,g2)
            res = g%mod
    if a==b :
        g = (pow(a,n)+pow(b,n))%mod
        res = g%mod
    print(res)
    t-=1