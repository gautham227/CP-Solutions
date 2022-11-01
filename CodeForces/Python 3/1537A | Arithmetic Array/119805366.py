t=int(input())
for i in range(0,t):
    n=int(input())
    l=list(map(int,input().split()))
    s=sum(l)
    if s-n>=0:
        print(s-n)
    else:
        print(1)