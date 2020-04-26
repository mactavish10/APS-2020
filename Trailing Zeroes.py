'''
# Sample code to perform I/O:
 
name = input()                  # Reading input from STDIN
print('Hi, %s.' % name)         # Writing output to STDOUT
 
# Warning: Printing unwanted or ill-formatted data to output will cause the test cases to fail
'''
 
# Write your code here
import math
n = int(input())
fact = math.factorial(n)
fact = str(fact)
count = 0
#print(fact)
#print(len(fact))
i = len(fact) - 1
while i>=0 :
    #print(fact[i])
    if fact[i]=='0' :
        count+=1
    else :
        break
    i-=1
print(count)