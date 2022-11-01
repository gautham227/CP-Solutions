t=int(input())
for i in range(0,t):
    l=list(map(int,input().split()))
    a=max(l)
    l.remove(a)
    if a>sum(l)+1:
        print("No")
    else:
        print("Yes")