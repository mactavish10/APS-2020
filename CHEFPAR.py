import random
n,m,k = input().split()
n=int(n)
k=int(k)
m=int(m)
b=[int(n) for n in input().split()]
m=[int(p) for p in input().split()]
z = [random.randint(1, k) for _ in range(n)]
for i in range(n):
    print((b[i]+z[i]),end=" ")