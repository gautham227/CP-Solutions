t=int(input())
for i in range(0,t):
    n=int(input())
    l=list(map(int,input().split()))
    l.sort()
    r=len(l)
    p=0
    k=l[0:r-2]
    s1=sum(k)
    s0=sum(l[0:r-1])
    if s1==l[-1] or s1==l[-2]:
        for i in k:
            print(i,end=" ")
    else:
        u=l[-2]
        b=l[-1]
        for i in range(0,r-2):
            if s1-k[i]+u==b:
                k[i]=u
                p=1
                break
 
        if p==1:
            k.sort()
            for i in k:
                print(i,end=" ")
        else:
            print(-1)
 
 
 