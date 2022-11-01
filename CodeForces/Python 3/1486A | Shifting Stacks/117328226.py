t=int(input())
for i in range(0,t):
    n=int(input())
    l=list(map(int,input().split()))
    s=0
    p=0
    for i in range(0,len(l)):
        if s+l[i]>=int(i*(i+1)/2):
            s=s+l[i]
        else:
            p=1
    if p==0:
        print("YES")
    else:
        print("NO")