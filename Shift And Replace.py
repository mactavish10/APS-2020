# from collections import deque 
from math import gcd
 
def rotate(a, k):
    """Rotate a by k positions to the right.
 
    >>> rotate([1, 2, 3], 1)
    [3, 1, 2]
    >>> rotate([0, 1, 2, 3, 4], -2)
    [2, 3, 4, 0, 1]
    """
    r = len(a) - k % len(a)
    return  a[-r:] + a[:-r]
 
 
n = int(input())
l = [int(a) for a in input().split()]
r = 0
for i in range(len(l)) :
    if l[i]!=i+1 :
        r = i+1
        break
# print(r)
 
q = int(input())
while q :
    q-=1
    x , b = map(int,input().split())
    x-=1
    l[x] = b
    cost = 0
    l1 = l
    l1 = rotate(l1,r)
    # print(l1 ,r)
    
    for i in range(len(l)) :
        if l1[i]!=i+1 :
            cost+=1
    print(cost+r)