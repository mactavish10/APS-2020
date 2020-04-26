'''
# Sample code to perform I/O:
 
name = input()                  # Reading input from STDIN
print('Hi, %s.' % name)         # Writing output to STDOUT
 
# Warning: Printing unwanted or ill-formatted data to output will cause the test cases to fail
'''
 
# Write your code here
def leap(year) :
    if (( year%400 == 0) or (( year%4 == 0 ) and ( year%100 != 0))):
        return 1
    else:
        return 0
        
        
t = int(input())
mm = ["January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"]
while t :
    flag = 0
    d,m,y = input().split()
    d = int(d)
    y = int(y)
    y1 = y
    for i in range (0,12) :
        if(mm[i]==m) :
            index = i
    if(d-1==0 and m == "January") :
        y-=1
    if(d-1==0) :
        if(m=="May" or m=="July" or m=="August" or m=="October" or m=="December") :
            d = 30
        elif(m=="March" and leap(y1)==1) :
            d = 29
        elif(m=="March" and leap(y1)==0) :
            d = 28
        else :
            d = 31
        if index==0 :
            index = 11
            m = mm[index]
        else :
            m = mm[index-1]
        flag = 1
    if(flag) :
        print(d,m,y)
    else :
        print(d-1,m,y)
    t-=1
    