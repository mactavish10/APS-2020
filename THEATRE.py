import itertools

test = int(input())
totsum = []
while test :
    mat = [[0 for _ in range(4)] for i in range(4)]
    sums = []
    test -= 1
    n = int(input())
    for i in range(n) :
        m , t  = input().split()
        # print(m)
        # t = int(input())
        mat[ord(m)-65][(int(t)//3)-1] += 1
    # for row in mat :
    times = [0,1,2,3]
    for r in itertools.permutations(times) :
        l = [mat[0][r[0]] , mat[1][r[1]] , mat[2][r[2]] , mat[3][r[3]]]
        l = sorted(l,reverse = True)
        s = 100*l[0] + 75*l[1] + 50*l[2] + 25*l[3]
        if l[0]==0 :
            s-=100
        if l[1]==0 :
            s-=100
        if l[2]==0 :
            s-=100
        if l[3]==0 :
            s-=100
        sums.append(s)
        # print(s, end = ' ')
    print(max(sums))
    totsum.append(max(sums))
print(sum(totsum))