#coded by gautham on 30/6
a,b=map(int,input().split())
if b>a:
    print(-1)
else:
    s=0
    while a>0:
        s=s+b
        a=a-2*b
    print(s)