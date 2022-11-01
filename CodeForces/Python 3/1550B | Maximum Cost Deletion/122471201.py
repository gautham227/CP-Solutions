#coded by gautham on 14/7
import math
t=int(input())
for i in range(0,t):
    n,a,b=map(int,input().split())
    s=str(input())
    if a>-1 and b>-1:
        print(a*n+b*n)
    elif b>-1:
        print(a*n+b*n)
    else:
        l=list(s)
        p0=[]
        p1=[]
        c=0
        k=0
        for i in range(0,len(l)):
            l[i]=int(l[i])
            if i==0:
                k=l[i]
                c=1
            elif l[i]!=k and i!=0:
                if k==1:
                    p1.append(c)
                    k=0
                    c=1
                else:
                    p0.append(c)
                    k=1
                    c=1
            else:
                c=c+1
        if k == 1:
            p1.append(c)
        else:
            p0.append(c)
        l1=len(p0)
        l2=len(p1)
        print(n*a+(min([l1,l2])+1)*b)
 