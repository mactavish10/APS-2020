# cook your dish here
t = int(input())
while t > 0 :
    p1 , p2 , k = map(int,input().split())
    if ((p1+p2)//k)%2==0 :
        print('CHEF')
    else :
        print('COOK')
    t-=1