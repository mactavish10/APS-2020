# cook your dish here
t = int(input())
while t > 0 :
    
    n , m , x , y = map(int,input().split())
    
    x1 = (n-1)%x
    y1 = (m-1)%y
    
    xs = (n-2)%x
    ys = (m-2)%y
    
    if ((xs==0 and ys==0) and (n-2>=0 and m-2>=0)) :
        print('Chefirnemo')
    elif x1==0 and y1==0 :
        print('Chefirnemo')
    else :
        print('Pofik')
    
    t-=1