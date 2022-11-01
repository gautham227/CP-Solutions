import math
n=int(input())
if n==1:
    print(1)
else:
    k=2*n-2
    print(int(math.factorial(k)/(math.factorial(n-1)**2)))