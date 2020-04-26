# cook your code here
N=int(raw_input())
c = [int(n) for n in raw_input().split()]
t = [int(m) for m in raw_input().split()]
a= sorted(c)
 
Z = [x for _,x in sorted(zip(c,t))]
if Z.count(1)>=1 and Z.count(2)>=1 and Z.count(3)>=1:
    t1=Z.index(1)
    t2=Z.index(2)
    t3=Z.index(3)
    
    print min((a[t1]+a[t2]),a[t3])
elif Z.count(3) == 0:
    t1=Z.index(1)
    t2=Z.index(2)
    print a[t1]+a[t2]
    
else:
    t3=Z.index(3)
    print a[t3]