import math as mt
def kFactors(n, k): 
      
    # list to store all prime factors of n 
    a = list() 
      
    #insert all 2's in list 
    while n % 2 == 0: 
        a.append(2) 
        n = n // 2
          
    # n must be odd at this point 
    # so we skip one element(i=i+2) 
    for i in range(3, mt.ceil(mt.sqrt(n)), 2): 
        while n % i == 0: 
            n = n / i; 
            a.append(i) 
              
    # This is to handle when n>2 and 
    # n is prime 
    if n > 2: 
        a.append(n) 
    
    # print(a)
    
    # if size(a)<k,k factors are not possible 
    if len(a) < k: 
        # print("0") 
        return 0
          
    else :
        return 1

t = int(input())
while t :
    t-=1
    n , k = map(int,input().split())
    print(kFactors(n,k))