import math
n,k=input().split()
n=int(n)
k=int(k)
for i in range(1,k+1):
    x=math.comb(k-1,i-1)
    y=math.comb(n-k+1,i)
    print((x*y)%1000000007)