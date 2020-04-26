'''
# Sample code to perform I/O:
 
name = raw_input()                  # Reading input from STDIN
print('Hi, %s.' % name)         # Writing output to STDOUT
 
# Warning: Printing unwanted or ill-formatted data to output will cause the test cases to fail
'''
 
# Write your code here
import numpy as np
n = int(raw_input())
a = [int (x) for x in raw_input().split()]
q = int(raw_input())
while q :
    op = int(raw_input())
    a = np.divide(a,op)
    q-=1
for i in xrange (0,n) :
    print(int(a[i])),
