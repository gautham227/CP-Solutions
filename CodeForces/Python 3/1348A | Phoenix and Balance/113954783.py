t=int(input())
for o in range(0,t):
    n=int(input())
    l=[]
    p=0
    q=0
    for i in range(1,n+1):
        l.append(2**i)
    p=l[-1]
    for i in range(0,int(n/2)-1):
        p=p+l[i]
    for j in range(int(n/2)-1,n-1):
        q=q+l[j]
    print(p-q)
        
        
        
        