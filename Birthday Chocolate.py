def sumisd( s , d , m , count) :
    #print('Start')
    start = 0
    end = m-1
    while(end <= len(s)) :
        subarr = s[start:end+1]
        sum1 = sum(subarr)
        if(sum1==d) :
            count=count+1
            #print('Yes')
        start+=1
        end+=1
    return count

n = input()
s = list(map(int,input().split(' ')))
d , m = map(int,input().split(' '))
c = sumisd(s , d , m , 0)
print(c)
