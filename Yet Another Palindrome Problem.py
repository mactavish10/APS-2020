
      
t = int(input())
while t :
    t-=1
    n = int(input())
    flag = 0
    s = [int(o) for o in input().split()]
    for i in range(n) :
        for j in range(i,n) :
            # print(j)
            if j+2 < n :
                if s[i] == s[j+2] :
                    flag = 1
                    break
        if flag :
            break
        
    # s = s.replace(" ","")
    # print(s)
    # print(s[0])
    # k = 3
    # n = len(s) 
    
    # l = [[0 for x in range(MAX)] for y in range(MAX_CHAR)] 
    # r = [[0 for x in range(MAX)] for y in range(MAX_CHAR)] 
    
    # precompute(s, n, l, r) 
    # dp = [[-1 for x in range(1000)] 
    #           for y in range(1000)] 
    if flag :
        print("YES")
    else :
        print("NO")
    
