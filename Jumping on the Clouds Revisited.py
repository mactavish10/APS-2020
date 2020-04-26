def solveCloudRevisited(c, n, k):
    pos = 0
    cnt = 0
 
    while cnt == 0 or pos != 0:
        pos += k
        pos %= n
        if c[pos] == 0:
            cnt += 1
        else:
            cnt += 3
     
    return 100 - cnt
 
if __name__ == '__main__':
    n,k = map(int,raw_input().strip().split(' '))
    c = map(int,raw_input().strip().split(' '))
    print solveCloudRevisited(c, n, k)
