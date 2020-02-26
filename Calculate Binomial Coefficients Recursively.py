def bc( n , k ) :
    if n==k or k==0 :
        return 1
    else :
        return bc(n-1,k-1) + bc(n-1,k)


n , k = map(int,input().split())
print(bc(n,k))
