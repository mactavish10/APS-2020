ones = [1 , 1 , 1, 1]
zeros = [0,0,0,0]
t = int(raw_input())
l = 0
mod = 998244353
while t :
    # print(6-t)
    t-=1
    s = raw_input()
    # a = [1 , 1 , 1, 1]
    # b = [1,1,1,1]
    results = []
    operations = []
    l=1
    # c=[]
    for x in xrange(len(s)) :
        # print(x)
        if s[x] == '(' :
            continue
        elif s[x] == '#' :
            l*=4
            results.append([1,1,1,1])
        elif s[x]==')' :
            operator = operations.pop()
            a = results[-1]
            b = results[-2]
            # print 'results = ',results
            # print 'a = ',a ,'b = ', b
            c = [1,1,1,1]
            # print c
            if operator == '^' :
                # print 'xor'
                c[0] = a[0]*b[0] + a[1]*b[1] + a[2]*b[2] + a[3]*b[3]
                c[1] = a[0]*b[1] + a[1]*b[0] + a[2]*b[3] + a[3]*b[2]
                c[2] = a[2]*b[0] + a[0]*b[2] + a[3]*b[1] + a[1]*b[3]
                c[3] = a[3]*b[0] + a[0]*b[3] + a[2]*b[1] + a[1]*b[2]
                # print a , b , c
            elif operator == '&' :
                # print 'and'
                
                c[0] = a[0]*b[0] + a[0]*b[1] + a[1]*b[0] + a[2]*b[0] + a[0]*b[2] + a[3]*b[0] + a[0]*b[3] + a[2]*b[3] + a[3]*b[2]
                c[1] = a[1]*b[1]
                c[2] = a[1]*b[2] + a[2]*b[1] + a[2]*b[2]
                c[3] = a[1]*b[3] + a[3]*b[1] + a[3]*b[3]
                # print b
                # print a , b , c
            elif operator == '|' :
                # print 'or'
                c[0] = a[0]*b[0]
                c[1] = a[0]*b[1] + a[1]*b[0] + a[1]*b[1] + a[2]*b[1] + a[1]*b[2] + a[3]*b[1] + a[1]*b[3] + a[2]*b[3] + a[3]*b[2]
                c[2] = a[0]*b[2] + a[2]*b[0] + a[2]*b[2]
                c[3] = a[0]*b[3] + a[3]*b[0] + a[3]*b[3]
                # print a , b , c
            # print 'In loop' , a , b , c
            results.pop()
            results.pop()
            results.append(c)
            # print 'results in loop' , results
        else :
            operations.append(s[x])
    # print results[-1]
    res = results[-1]
    l = pow(l,mod-2,mod)
    for i in xrange(len(res)) :
        res[i] = (res[i]*l)%mod
    print res[0],res[1],res[2],res[3]