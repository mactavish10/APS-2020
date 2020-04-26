from itertools import combinations 
import sys
 
def minXOR(arr, n): 
      
    # Sort given array 
    arr.sort() 
   
    minXor =  int(sys.float_info.max) 
    val = 0
   
    # calculate min xor of consecutive pairs 
    for i in range(0,n-1): 
        val = arr[i] ^ arr[i + 1]; 
        minXor = min(minXor, val); 
      
    return minXor
 
t = int(input())
while t :
    t-=1
    # d = []
    n = int(input())
    l = [int(a) for a in input().split()]
    # res = min(combinations(l, 2), key = lambda sub: sub[0]^sub[1]) 
    print(minXOR(l,n))
    # print result 
    # print("The minimum sum pair is : " + str(res)) 
    # print( res[0]^res[1]) 