from math import gcd, ceil , floor
t = int(input())
while t :
    t-=1
    flag = 0
    n , k = map(int,input().split())
    coins = list(map(int,input().split()))
    c1 = [0] * n
    f = 0
    for i in range(n) :
        if k%coins[i]!=0 :
            c1[i] = k//coins[i] + 1
            f = 1
            break
    flag = 0
    
    if(f==0) :
        # print('yeah')
        for i in range(n) :
            for j in range(i+1,n) :
                if coins[i]!=1 and coins[j]!=1 and gcd(coins[i],coins[j])!=min(coins[i],coins[j]) :
                    flag = 1
                    c1[j] = k//coins[j] - 1
                    k = k - (c1[j]*coins[j])
                    c1[i] = (k//coins[i]) +1
                    break
            if(flag) :
                break
        if(flag==0) :
            print('NO')
            continue
    print('YES',end = ' ')
    for i in range(n) :
        print(c1[i],end = ' ')
    print('')