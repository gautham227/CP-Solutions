t=int(input())
for i in range(0,t):
    n=int(input())
    l=list(map(int,input().split()))
    q=0
    l.sort()
    l.reverse()
    r=-1
    while r!=0:
        r=0
        s=sum(l)
        a=s/len(l)
        for i in l:
            if i>a:
                r=r+1
            else:
                break
        for i in range(0,r):
            l.pop(0)
        q=q+r
    print(q)