p,s,t,h,x = map(int,input().split())
price = p
x2 = s - t
x1 = (x-x2)
if x1>0:
    cost = (p*x2) + (h*x1)
else :
    cost = p*x
print(cost)