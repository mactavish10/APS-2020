#!/bin/python3

import math
import os
import random
import re
import sys

# Complete the hackerrankInString function below.
def hackerrankInString(s):
    needle = 'hackerrank'
    idx_in_needle = 0
    for c in s:
        if c == needle[idx_in_needle]:
            idx_in_needle += 1
        if idx_in_needle == len(needle):
            break
             
    if idx_in_needle == len(needle):
        return "YES"
    else: 
        return "NO"

if __name__ == '__main__':
    fptr = open(os.environ['OUTPUT_PATH'], 'w')

    q = int(input())

    for q_itr in range(q):
        s = input()

        result = hackerrankInString(s)

        fptr.write(result + '\n')

    fptr.close()
