#coded by gautham on 14/7
t=int(input())
for p in range(0,t):
    n=int(input())
    l=list(map(int,input().split()))
    s=2*n-1
    for i in range(0,n-2):
        if (l[i+1]>l[i] and l[i+1]>l[i+2]) or (l[i]>l[i+1]<l[i+2]):
            s=s+1
    for i in range(0,n-3):
        if (l[i+1]<l[i]<l[i+2] or l[i+1]>l[i]>l[i+2]) and (l[i+1]<l[i+3]<l[i+2] or l[i+2]<l[i+3]<l[i+1]):
            s=s+1
    print(s)