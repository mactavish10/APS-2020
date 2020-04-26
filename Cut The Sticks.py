#!/bin/python3

import math
import os
import random
import re
import sys

# Complete the cutTheSticks function below.
def cutTheSticks(arr):
    arr.sort(reverse=True)
    while len(arr) > 0:
        print(len(arr))
        block_cut = arr.pop()
        while len(arr) > 0 and arr[-1] <= block_cut:
            arr.pop()

if __name__ == '__main__':
    # fptr = open(os.environ['OUTPUT_PATH'], 'w')

    n = int(input())

    arr = list(map(int, input().rstrip().split()))

    cutTheSticks(arr)

    # fptr.write('\n'.join(map(str, result)))
    # fptr.write('\n')

    # fptr.close()
