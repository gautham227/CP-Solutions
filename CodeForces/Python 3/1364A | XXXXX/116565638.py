t=int(input())
for i in range(0,t):
    n,x=map(int,input().split())
    l=list(map(int,input().split()))
    a=-1
    b=-1
    s=sum(l)
    if s%x!=0:
        print(n)
    else:
        for i in range(0,n):
            if l[i]%x!=0:
                a=i
                break
        for i in range(n-1,-1,-1):
            if l[i]%x!=0:
                b=i
                break
        if a==-1 and b==-1:
            print(-1)
        else:
            print(max([len(l[a+1:]),len(l[:b])]))
 
 
 