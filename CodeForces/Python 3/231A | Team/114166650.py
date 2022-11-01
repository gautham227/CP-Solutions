t=int(input())
n=0
for i in range(0,t):
    l=list(map(int,input().split()))
    if l.count(1)>1:
        n=n+1
print(n)