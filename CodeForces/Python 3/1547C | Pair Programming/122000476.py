#coded by gautham on 10/7
t=int(input())
for i in range(0,t):
    u=0
    e=str(input())
    k, n, m = map(int, input().split())
    l1 = list(map(int, input().split()))
    l2 = list(map(int, input().split()))
    l=[]
    p=0
    q=0
    n0 = l1.count(0) + l2.count(0)
    if k + n0 < max([max(l1), max(l2)]):
        u = 1
    while True:
        if p<n and l1[p]<=k:
            if l1[p]==0:
                k=k+1
            l.append(l1[p])
            p=p+1
        elif q<m and l2[q]<=k:
            if l2[q]==0:
                k=k+1
            l.append(l2[q])
            q=q+1
        else:
            break
    if len(l1)-p>0 or len(l2)-q>0:
        u=1
    if u==1:
        print(-1)
    else:
        for j in range(0,len(l)-1):
            print(l[j],end=" ")
        print(l[-1])
 