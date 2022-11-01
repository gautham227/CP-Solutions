t=int(input())
for i in range(0,t):
    n,u,v=map(int,input().split())
    l=list(map(int,input().split()))
    p=[]
 
    for i in range(1,len(l)):
        p.append(abs(l[i]-l[i-1]))
    m=max(p)
    p=[]
    if m==0:
        print(v+min([u,v]))
    elif m==1:
        print(min([u,v]))
    else:
        print(0)