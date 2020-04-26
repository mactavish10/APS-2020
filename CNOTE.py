# cook your dish here
t = int(input())
while (t>0) :
    t-=1
    x,y,k,n = map(int,input().split())
    req_page = x - y
    flag = 0
    i = 0 
    for i in range (0,n) :
        p,c = map(int,input().split())
        if req_page<=p and c<=k :
            flag = 1
    if flag==1 :
        print('LuckyChef')
    else :
        print('UnluckyChef')