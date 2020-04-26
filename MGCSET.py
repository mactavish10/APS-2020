# cook your dish here
t = int(input())
while (t>0) :
    n,m = input().split()
    n = int(n)
    m = int (m)
    arr = [int (n) for n in input().split()]
    count = 0
    for i in range (0,n) :
        if (arr[i]%m==0) :
            count+=1
    print((2**(count))-1)
    t-=1