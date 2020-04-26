# cook your dish here
t = int(input())
while(t>0) :
    n = int(input())
    i = n 
    s = 0 
    if(i%2==0) :
        while (i>0) :
            s+=i**2
            i-=2
    else :
        while(i>=1) :
            s+=i**2
            i-=2
    print(s)
    t-=1