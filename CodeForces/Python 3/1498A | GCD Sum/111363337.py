import math
def gSum(n): 
    sum = 0
    for digit in str(n):  
      sum += int(digit)       
    return sum
t=int(input())
for i in range(0,t):
    n=int(input())
    for j in range(n,n+10000):
        if math.gcd(j,gSum(j))>1:
            print(j)
            break
        
        
        
    