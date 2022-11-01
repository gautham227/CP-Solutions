#coded by gautham on 29/6
t=int(input())
for i in range(0,t):
    n=int(input())
    s=(n*(n+1))//2
    k=1
    while k<=n:
        s=s-(2*k)
        k=k*2
    print(s)