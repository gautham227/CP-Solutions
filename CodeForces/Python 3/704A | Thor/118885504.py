from collections import deque as dq
a,b=map(int,input().split())
arr=dq()
p=[0]*a
q=list(p)
tot=0
no=0
l=dq()
for i in range(0,b):
    x,y=map(int,input().split())
    if x==1:
        arr.append(y-1)
        p[y-1]=p[y-1]+1
        q[y-1]=q[y-1]+1
        tot=tot+1
        l.append(tot)
    elif x==2:
        tot=tot-p[y-1]
        p[y-1]=0
        l.append(tot)
    else:
        while y>no:
            w=arr[0]
            arr.popleft()
            q[w]=q[w]-1
            if p[w]>q[w]:
                p[w]=p[w]-1
                tot =tot-1
            no=no+1
        l.append(tot)
for i in l:
    print(i)