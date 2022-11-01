t=int(input())
for i in range(0,t):
    n,k=map(int,input().split())
    m=list(map(int,input().split()))
    n=list(map(int,input().split()))
    o=sum(m)
    u=sum(n)
    m.sort()
    n.sort()
    for i in range(0,k):
        if m[0]<n[-1]:
            m[0],n[-1]=n[-1],m[0]
            m.sort()
            n.sort()
        else:
            break
    print(sum(m))