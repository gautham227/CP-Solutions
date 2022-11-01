t=int(input())
for j in range(0,t):
    s=[]
    k=[]
    n=int(input())
    l=list(map(int,input().split()))
    for i in range(0,n):
        if l[i] not in s:
            s.append(l[i])
    for i in s:
        k.append(l.count(i))
    print(max(k))