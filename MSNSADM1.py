#code
T = int(input())
while T > 0 :
    n = int(input())
    a = list(map(int , input().split()))
    b = list(map(int , input().split()))
    #print(a , b)
    scores = []
    for i in range(0,n) :
        score = (a[i] * 20) - (b[i] * 10)
        if score < 0 :
            score = 0
        scores.append(score)
    print(max(scores))
    T-=1