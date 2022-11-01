n,m=input().split()
n=int(n)
m=int(m)
l=list(map(int,input().split()))
s=0
for i in l:
    s=s+i
g=n-s
if g>=0:
    print(g)
else:
    print(-1)