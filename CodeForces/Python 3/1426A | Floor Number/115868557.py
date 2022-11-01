import math
t=int(input())
for i in range(0,t):
    n,x=map(int,input().split())
    if n==1 or n==2:
        print(1)
    else:
        print((math.ceil((n-2)/x)+1))