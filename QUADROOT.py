# cook your dish here
from math import sqrt
a = int(input())
b = int(input())
c = int(input())
d = (b*b)-(4*a*c)
d1 = sqrt(d)
x1 = (-b+d1)/(2*a)
x2 = (-b-d1)/(2*a)
print(x1)
print(x2)