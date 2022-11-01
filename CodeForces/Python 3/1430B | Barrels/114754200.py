t=int(input())
for i in  range(0,t):
    k,m=(map(int,input().split()))
    a=list(map(int,input().split()))
    a.sort(reverse=True)
    s=sum(a[:m+1])
    print(s-0)