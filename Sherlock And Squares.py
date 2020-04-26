#!/bin/python3

import math
import os
import random
import re
import sys

# Complete the squares function below.

def sumDigits(no): 
    return 0 if no == 0 else int(no%10) + sumDigits(int(no/10))  

def squares(a, b):
    # l = [1,4,7,9]
    return (math.floor(math.sqrt(b)) - math.ceil(math.sqrt(a)) + 1) 
    # return c


if __name__ == '__main__':
    fptr = open(os.environ['OUTPUT_PATH'], 'w')

    q = int(input())

    for q_itr in range(q):
        ab = input().split()

        a = int(ab[0])

        b = int(ab[1])

        result = squares(a, b)

        fptr.write(str(result) + '\n')

    fptr.close()
