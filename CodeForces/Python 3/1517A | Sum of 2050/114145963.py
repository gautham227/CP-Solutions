t=int(input())
for i in range(0,t):
    p=int(input())
    if p%2050!=0:
        print(-1)
    else:
        c=int(p/2050)
        l=list(map(int,str(c).strip()))
        s=sum(l)
        print(s)