t=int(input())
for i in range(0,t):
    n=int(input())
    l=list(map(int,input().split()))
    s=set(l)
    print(len(s))