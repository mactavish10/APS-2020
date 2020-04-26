flag = 0
a = [int (u) for u in input().split()]
b = [int (v) for v in input().split()]
c = [int (w) for w in input().split()]
d = [int (x) for x in input().split()]
suma = sum(a)
sumb = sum(b)
sumc = sum(c)
sumd = sum(d)
if suma>sumb or suma==sumb :
    flag = 1
else :
    flag = 2
if sumc > sumd or sumc==sumd:
    flag = 3
else :
    flag = 4
if flag==1 and flag==3 :
    sumc = b[1] + sumc
    if sumc>suma :
        print('3')
    elif sumc==suma :
        print('1')
    else :
        print('1')
elif flag==2 and flag==4 :
    sumd = sumd + a[1]
    if sumd>sumb :
        print('4')
    elif sumd==sumb :
        print('2')
    else :
        print('1')
elif flag==1 and flag==4 :
    sumd = sumd + b[1]
    if sumd > suma :
        print('4')
    elif sumd==suma :
        print('1')
    else :
        print('1')
else :
    sumc = sumc + a[1]
    if sumc>sumb :
        print('3')
    elif sumc==sumb :
        print('2')
    else :
        print('2')