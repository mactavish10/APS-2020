# cook your dish here
t = int(raw_input())
#arr= [0]
while t>0 :
    n , x , s = map(int,raw_input().split())
    arr = [0]*(n+1)
    arr[x] = 1
    for j in range (0,s) :
        temp = 0
        a , b = map(int,raw_input().split())
        if arr[a]==1 :
            arr[a],arr[b] = arr[b],arr[a]
        elif arr[b]==1 :
            arr[b],arr[a] = arr[a] , arr[b] 
    for i in range (1,n+1) :
        if arr[i]==1 :
            res = i
            break
    #print (arr)
    print (res)
    t-=1