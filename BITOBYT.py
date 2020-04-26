t = int(input())

while t>0 :
    
    n = int(input())
    x = n%26 
    y = n//26
    z = 2**y
    a = 2**(y-1)
    
    if x<=2 and x!=0 :
        print(z,'0 0')
    elif x<=10  and x!=0 :
        print('0',z,'0')
    elif x<=26 and x!=0 :
        print('0 0',z)
    else :
        print('0 0',a)
    t-=1