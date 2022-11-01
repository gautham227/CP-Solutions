#coded by gautham on 18/6
t=int(input())
for i in range(0,t):
    p=int(input())
    l=list(map(int,input().split()))
    l.sort()
    d1=l[1]-l[0]
    d2=l[p-1]-l[p-2]
    m=min([d1,d2])
    u=-1
    for i in range(1,p-1):
        if l[i+1]-l[i]<m:
            m=l[i+1]-l[i]
            u=i
    x=[]
    if u==-1:
        if d1>=d2:
            x.append(l[p-2])
            for i in range(0,p):
                if i!=p-2:
                    x.append(l[i])
        else:
            x.append(l[0])
            for i in range(2,p):
                x.append(l[i])
            x.append(l[1])
    else:
        x.append(l[u])
        for i in range(u+2,p):
            x.append(l[i])
        for i in range(0,u):
            x.append(l[i])
        x.append(l[u+1])
    for i in range(0,p-1):
        print(x[i],end=" ")
    print(x[-1])