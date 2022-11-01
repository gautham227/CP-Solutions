t=int(input())
for i in range(0,t):
    n=int(input())
    l=list(map(int,input().split()))
    l.sort()
    s=l[0]
    n=0
    u=[]
    for i in l:
        if i==s:
            n=n+1
        else:
            s=i
            u.append(n)
            n=1
    u.append(n)
    m=max(u)
    if m>len(l)-m:
        print(m+m-len(l))
    else:
        if len(l)%2==0:
            print(0)
        else:
            print(1)