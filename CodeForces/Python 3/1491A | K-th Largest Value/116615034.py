a,b=map(int,input().split())
l=list(map(int,input().split()))
c1=l.count(1)
for i in range(0,b):
    p,q=map(int,input().split())
    if p==1:
        if l[q-1]==1:
            l[q-1]=0
            c1=c1-1
        else:
            l[q-1]=1
            c1=c1+1
    else:
        if q<=c1:
            print(1)
        else:
            print(0)