t=int(input())
for i in range(0,t):
    h=int(input())
    p=0
    l=list(map(int,input().split()))
    for j in range(0,len(l)-1):
        if max(l[j+1],l[j])/min(l[j+1],l[j])>2:
            n=min(l[j+1],l[j])
            while max(l[j+1],l[j])/n>2:
                p=p+1
                n=n*2
    print(p)