# cook your dish here
t = int(input())
while (t>0) :
    flag = 0 
    n , x = map(int,input().split())
    a = [int(n) for n in input().split()]
    for i in range (0,n) :
        if(a[i]>=x) :
            flag = 1
            print('YES')
            break
    if (flag==0) :
        print('NO')
    t-=1