# cook your dish here
n , m , k = map(int,input().split())
a=[None]*n
for i in range(n):
    a[i]=[int(o) for o in input().split()]
for i in range(n):
    for j in range(m):
        print(k,end=" ")
    print()