def getsum(BITTree,i):
    s = 0 #initialize result
 
    # index in BITree[] is 1 more than the index in arr[]
    i = i+1
 
    # Traverse ancestors of BITree[index]
    while i > 0:
 
        # Add current element of BITree to sum
        s += BITTree[i]
 
        # Move index to parent node in getSum View
        i -= i & (-i)
    return s
 
# Updates a node in Binary Index Tree (BITree) at given index
# in BITree. The given value 'val' is added to BITree[i] and
# all of its ancestors in tree.
def updatebit(BITTree , n , i ,v):
 
    # index in BITree[] is 1 more than the index in arr[]
    i += 1
 
    # Traverse all ancestors and add 'val'
    while i <= n:
 
        # Add 'val' to current node of BI Tree
        BITTree[i] += v
 
        # Update index to that of parent in update View
        i += i & (-i)
 
 
# # Constructs and returns a Binary Indexed Tree for given
# # array of size n.
def construct(arr, n):
 
    # Create and initialize BITree[] as 0
    BITTree = [0]*(n+1)
 
    # Store the actual values in BITree[] using update()
    for i in range(n):
        updatebit(BITTree, n, i, arr[i])
 
    # Uncomment below lines to see contents of BITree[]
    #for i in range(1,n+1):
    #     print BITTree[i],
    return BITTree





t = int(input())
while t :
    t-=1
   
    # max1 = []
    # lm10 = []
    n , q = map(int,input().split())
   
    cknc = [0 for _ in range(n)]
    dawg = construct(cknc,len(cknc)) #lessthanequal
    # dawg = cknc.copy()
    # cat = cknc.copy()
    cat = construct(cknc,len(cknc)) #lessthan
    final_ans = [0 for _ in range(q)]
   
    jake = list(map(int,input().split()))
   
    oooo = []
    jakex = []
    jakey = []
   
    for i in range(n-1) :
        jakey.append( (min(jake[i],jake[i+1]) , max(jake[i],jake[i+1]  ),i ) )
        jakex.append( (min(jake[i],jake[i+1]) , max(jake[i],jake[i+1]  ),i ) )
   
    # jakex = oooo.copy()
    # jakey = oooo.copy()
   
    jakex.sort(key = lambda x: x[0])
    jakey.sort(key = lambda x: x[1])
   
    # print(jakex)
    # print(jakey)
   
    loq = []
    q1 = q
    for i in range(q1) :
        # q1-=1
        x1,x2,x3 = map(int,input().split())
        x1-=1
        x2-=2
        loq.append( (x1,x2,x3,i) )
   
    # loq_dup = loq.copy()
    loq.sort(key = lambda x : x[2])
   
    # print(loq)
   
    a = 0
    b = 0
    c = 0
   
    for i in range(q) :
        while a < n-1 and jakex[a][0] <= loq[i][2] :
            updatebit(dawg, n, jakex[a][2]+1, 1)
            a+=1
        while b < n-1 and jakey[b][1] < loq[i][2]  :
            updatebit(cat, n, jakey[b][2]+1, 1)
            b+=1
        temp1 = getsum(dawg,loq[i][1]+1) - getsum(dawg,loq[i][0])
        temp2 = getsum(cat,loq[i][1]+1) - getsum(cat,loq[i][0])
        final_ans[loq[i][3]] = temp1 - temp2
    for prawn in final_ans :
        print(prawn,end='\n')