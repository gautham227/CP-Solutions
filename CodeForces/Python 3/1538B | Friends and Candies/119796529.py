t=int(input())
for i in range(0,t):
    u=int(input())
    l=list(map(int,input().split()))
    s=sum(l)
    n=0
    if s/u != s//u:
        print(-1)
    else:
        a=s//u
        for i in l:
            if i>a:
                n=n+1
        print(n)