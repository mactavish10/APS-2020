import heapq
h=[]
ot=[]
c=0
n=int(input())
for i in range(n):
    b=int(input())
    if 1:
    
        c+=1
        if ot and ot[0]<b:
                heapq.heappush(h,-heapq.heappop(ot))
                heapq.heappush(ot,b)
        else:
            heapq.heappush(h,-b)
        if c%2==0:
            heapq.heappush(ot,-heapq.heappop(h))
    if 1:
        d=c//2
        if i%2!=0:
            print((ot[0]-h[0])/2)
        else:
            print(-h[0])
