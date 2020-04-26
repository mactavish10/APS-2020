import os
import random
import re
import sys
from decimal import *

# Complete the beautifulDays function below.
def beautifulDays(i, j, k):
    count=0
    for l in range(i,j+1):
        n = (str(l)[::-1])
        if(abs(l-int(n))%k ==0):
            count+=1
    print(count)

if __name__ == '__main__':

    i,j,k = map(int,input().split())

    beautifulDays(i, j, k)
    # print(result)
