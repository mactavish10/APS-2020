t = int(input())
while t :
    n = int(input())
    n1 = n
    c = 0
    while(n!=0) :
        # print(n)
        temp = n%10
        #print(temp)
        n=n//10
        if temp!=0 and n1%temp==0 :
            c+=1
    print(c)
    t-=1
