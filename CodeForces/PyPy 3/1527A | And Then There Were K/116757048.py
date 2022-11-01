t=int(input())
for i in range(0,t):
    n=int(input())
    s=1
    k=0
    while s<=n:
        s=s*2
        k=k+1
    print(2**(k-1)-1)