t=int(input())
for i in range(0,t):
    n=int(input())
    l=list(map(int,input().split()))
    m=list(l)
    m.sort()
    a=m[0]
    b=m[-1]
    if m[1]==a:
        print(l.index(b)+1)
    else:
        print(l.index(a)+1)