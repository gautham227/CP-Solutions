import math
t=int(input())
for i in range(0,t):
    n=int(input())
    l=list(map(int,input().split()))
    s=0
    d={}
    for i in range(0,len(l)):
        s=l[i]-i
        if s in d:
            d[s]=d[s]+1
        else:
            d[s]=1
    a=0
    for i in d.values():
        if i>1:
            a=a+(i*(i-1))/2
    print(int(a))