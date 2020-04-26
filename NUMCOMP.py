# cook your dish here
t = int(input())
while (t>0) :
    a,b,n = input().split()
    a = int(a)
    b = int(b)
    n = int(n)
    if (n%2==0) :
        a1 = abs(a) + n
        b1 = abs(b) + n
    else :
        a1 = a + n 
        b1 = b + n
    if (a1>b1) :
        print('1')
    elif (a1<b1) :
        print('2')
    else :
        print('0')
    t-=1
