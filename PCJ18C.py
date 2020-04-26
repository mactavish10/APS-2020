# cook your dish here
from fractions import Fraction
from math import gcd
t= int(input())
while (t>0) :
    n , a , k  = map(int,input().split())
    sum1 = (n-2)*180
    #d = ((((2*sum1)/n) - (2*a))/(n-1))
    nr = ((a*n)*(n-1)) + (sum1*2-(2*a*n))*(k-1)
    dr = n*(n-1)
    g = gcd(nr,dr)
    x = nr//g
    y = dr//g
    print(x,y)
    t-=1