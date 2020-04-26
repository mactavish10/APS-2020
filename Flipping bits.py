import math 
  
# Function to invert bits of a number 
def invertBits(n): 
      
    # Calculate number of bits of N-1 
    x = 31
  
    m = 1 << x 
  
    m = m | m - 1
  
    n = n ^ m 
  
    return n 
  
# Driver code 
q = int(input())
while q :
    n = int(input())
    q-=1
    print(invertBits(n)) 
