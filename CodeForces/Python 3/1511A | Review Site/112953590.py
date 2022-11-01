t=int(input())
for i in range(0,t):
    n=int(input())
    l=list(map(int,input().split()))
    c=l.count(2)
    print(len(l)-c)