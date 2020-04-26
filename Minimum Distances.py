#!/bin/python3

import math
import os
import random
import re
import sys

# Complete the minimumDistances function below.
def minimumDistances(a):
    dist = []
    l = []
    flag = 0
    for i in range(len(a)) :
        l.append( (a[i] , i ) )
    for i in range(len(l)) :
        for j in range(i+1 , len(l)) :
            if l[i][0] == l[j][0] :
                dist.append(l[j][1] - l[i][1])
                flag = 1
    if flag :
        return min(dist)
    else :
        return -1

if __name__ == '__main__':
    fptr = open(os.environ['OUTPUT_PATH'], 'w')

    n = int(input())

    a = list(map(int, input().rstrip().split()))

    result = minimumDistances(a)

    fptr.write(str(result) + '\n')

    fptr.close()
