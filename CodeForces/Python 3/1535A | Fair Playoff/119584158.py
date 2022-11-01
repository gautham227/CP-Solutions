t=int(input())
for _ in range(0,t):
    l=list(map(int,input().split()))
    k=list(l)
    l.sort()
    l.pop(0)
    l.pop(0)
    a=max([k[0],k[1]])
    b = max([k[2], k[3]])
    n=[a,b]
    n.sort()
    if l==n:
        print("YES")
    else:
        print("NO")