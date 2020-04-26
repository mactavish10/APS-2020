t = int(input())
while t>0 :
    count = 0
    n = int(input())
    while n>0 :
        s , j = map(int,input().split())
        if(j-s>5):
            count+=1
        n-=1
    print(count)
    t-=1