#!/bin/python3

import math
import os
import random
import re
import sys

# Complete the extraLongFactorials function below.
def extraLongFactorials(n):
    f = 1
    while n :
        f*=n
        n-=1
    print(f)
if __name__ == '__main__':
    n = int(input())

    extraLongFactorials(n)
