#!/bin/python3

import math
import os
import random
import re
import sys

# import math 
  
# Function to check 
# Log base 2 
def Log2(x): 
    if x == 0: 
        return false; 
  
    return (math.log10(x) / 
            math.log10(2)); 
  
# Function to check 
# if x is power of 2 
def isPowerOfTwo(n): 
    return (math.ceil(Log2(n)) == 
            math.floor(Log2(n))); 



# Complete the counterGame function below.
def counterGame(n):
    count = 0
    while n!=1 :
        if not(isPowerOfTwo(n)) :
            n1 = 2**int(Log2(n))
            n = n-n1
            # n = n/2
            # print(n,n1)
        else :
            n=n>>1
        count+=1
    # print(count , n)
    if count&1 :
        return "Louise"
    else :
        return "Richard"
    

if __name__ == '__main__':
    fptr = open(os.environ['OUTPUT_PATH'], 'w')

    t = int(input())

    for t_itr in range(t):
        n = int(input())

        result = counterGame(n)

        fptr.write(result + '\n')

    fptr.close()
