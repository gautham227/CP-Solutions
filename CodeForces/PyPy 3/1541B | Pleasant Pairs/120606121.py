#coded by gautham on 25/6
import math
t=int(input())
for i in range(0,t):
    n=int(input())
    a=list(map(int,input().split()))
    b=[10000000]*(2*n+1)
    c=0
    for j in range(0,n):
        b[a[j]]=j+1
    for j in range(3,2*n):
        for k in range(1,math.floor(j**(0.5)+1)):
            if j%k==0 and j//k!=k:
                if (b[k]+b[j//k])==j:
                    c=c+1
    print(c)