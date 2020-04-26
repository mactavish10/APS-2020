# cook your dish here
t = int(input())
res = 0 
while (t>0) :
    n,p,q = input().split()
    n = int(n)
    p = int(p)
    q = int(q)
    a = [int(x) for x in input().split()]
    c1 = 0
    c2 = 0
    for i in range (0,n) :
        if (a[i]==p) :
            c1+=1
        if(a[i]==q) :
            c2+=1 
    res = float((c1*c2)/(n*n))
    print ('%.10f'%res)
    t-=1