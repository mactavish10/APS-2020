t = int(input())
while t :
    t-=1
    n = int(input())
    list1 = list(map(int,input().split()))
    list2 = list(map(int,input().split()))
    list1 = sorted(list1)
    list2 = sorted(list2)
    sum1 = 0
    for i in range(0,n) :
        sum1+=min(list1[i],list2[i])
    print(sum1)