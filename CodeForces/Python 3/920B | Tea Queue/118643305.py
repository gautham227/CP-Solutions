t=int(input())
f=0
for o in range(0,t):
    q=int(input())
    s=[]
    for oo in range(0,q):
        l,r=map(int,input().split())
        if f>=r:
            s.append(0)
        else:
            f=max([f+1,l])
            s.append(f)
    f=0
    for i in s:
        print(i,end=" ")