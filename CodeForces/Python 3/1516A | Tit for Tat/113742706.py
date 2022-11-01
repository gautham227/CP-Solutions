t=int(input())
for i in range(0,t):
    n,k=map(int,input().split())
    o=k
    l=list(map(int,input().split()))
    for i in range(0,len(l)-1):
        if k>0:
            p=min(l[i],k)
            l[i]=l[i]-p
            k=k-p
            if k<=0:
                break
    l[-1]=l[-1]+(o-k)
    for i in range(0,len(l)-1):
        print(l[i],end=" ")
 
    print(l[-1])