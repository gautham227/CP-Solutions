t=int(input())
for i in range(0,t):
    n=int(input())
    l=list(map(int,input().split()))
    if l[0]+l[1]>l[-1]:
        print(-1)
    else:
        print(1,2,n)