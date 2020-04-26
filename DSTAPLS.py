#code
T = int(input())
while T > 0 :
    n , k = map(int , input().split())
    if n%(k**2) == 0 :
        print("NO")
    else :
        print("YES")
    T-=1