t=int(input())
for i in range(0,t):
    n=int(input())
    l=list(map(int,input().split()))
    l.sort()
    u=[]
    ind=10000000000
    for i in range(0,len(l)):
        if l[i]>0:
            ind = l[i]
            break
        else:
            u.append(l[i])
    if u!=[]:
        k=[]
        for i in range(1,len(u)):
            k.append(abs(u[i]-u[i-1]))
        try:
            m=abs(u[0])
        except:
            pass
        try:
            m=abs(l[0]-l[1])
        except:
            pass
        try:
            m=min(k)
        except:
            pass
        if m>=ind and len(l)-len(u)!=[]:
            print(len(u)+1)
        else:
            print(len(u))
    else:
        print(1)
 