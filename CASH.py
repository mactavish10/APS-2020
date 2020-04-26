t = int(input())
while t :
    n , k = map(int,input().split())
    arr = list(map(int,input().split()))
    res = sum(arr)%k
    print(res)
    t-=1