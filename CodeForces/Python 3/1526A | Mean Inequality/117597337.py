t=int(input())
for i in range(0,t):
    n=int(input())
    l=list(map(int,input().split()))
    l.sort()
    a=l[:n]
    b=l[n:]
    for i in range(0,2*n):
        if i%2==0:
            print(a[-1],end=" ")
            a.pop(-1)
        else:
            print(b[0],end=" ")
            b.pop(0)