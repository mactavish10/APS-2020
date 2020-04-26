import math
import sys
f=0
p , q , r , s  = map(int,input().split())
if  p==q and q==r and r==s :
    print(1,1,1)
    sys.exit(0)
elif p+q+r+s!=4:
    x = q*r#//math.gcd(q,r)
    y = p*s#//math.gcd(p,s)
    # print(x,y)
    ty = math.gcd(x,y)
    if( x%2 == 0 and y%2==0 ) :
        x = x//2
    # if y%2==0 :
        y = y//2
    # x = x//ty
    # y = y//ty
    # print(x,y)
    z = ((x*p) + (y*q))//((r+s)) 
    f = 1
else :
    x = q*r
    y = p*s
    # print(x,y)
    x = x#//math.gcd(x,y)
    y = y#//math.gcd(x,y)
    # print(x,y)
    if( x%2 == 0 and y%2 == 0) :
        x = x//2
    # if y%2==0 :
        y = y//2
    z = ((x*p) + (y*q))//((r+s)) 
    # f = 1
# if f :
tt = math.gcd(x , math.gcd(y,z))
x = x//tt
y=y//tt
z=z//tt
 
# print(x//tt,y//tt,z//tt)
print(x,y,z)