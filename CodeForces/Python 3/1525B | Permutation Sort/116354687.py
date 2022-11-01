t=int(input())
for i in range(0,t):
    n=int(input())
    l=list(map(int,input().split()))
    k=list(l)
    k.sort()
    h=list(l)
    h.sort(reverse=True)
    if l==k:
        print(0)
    elif l[0]==n and l[-1]==1:
        print(3)
    elif l[0]==1 or l[-1]==n:
        print(1)
    else:
        print(2)