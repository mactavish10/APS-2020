n = int(input())
arr = list(map(int,input().split()))
c = 0

for num in arr :
    c = c^num

print(c)
