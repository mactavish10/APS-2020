# cook your dish here
t = int(input())
while t :
    t-=1
    n = int(input())
    flag = 1
    lol = [int(o) for o in input().split()]
    if len(lol)==1 :
        if lol[0]>0 :
            print("YES")
        else :
            print("NO")
        continue
    for lol1 in lol :
        if ( max(lol) - lol1 ) % 2 != 0 :
            flag = 0
            break
    if(flag) :
        print("YES")
    else :
        print("NO")