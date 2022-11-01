t=int(input())
for i in range(0,t):
    n=int(input())
    l=list(map(int,input().split()))
    x=min(l)
    w=l.count(x)
    print(n-w)
    