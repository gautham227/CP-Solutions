#coded by gautham on 19/6
t=int(input())
for _ in range(0,t):
    n,l,r=map(int,input().split())
    p=list(map(int,input().split()))
    c=0
    i=0
    j=n-1
    p.sort()
    while i<j:
        if p[i]+p[j]<=r:
            c=c+j-i
            i=i+1
        else:
            j=j-1
    i = 0
    j = n - 1
    p.sort()
    while i < j:
        if p[i] + p[j] <l:
            c = c - j + i
            i = i + 1
        else:
            j = j - 1
    print(c)