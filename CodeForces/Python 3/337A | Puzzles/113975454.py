n,m=map(int,input().split())
l=list(map(int,input().split()))
l.sort()
g=[]
for i in range(0,m-n+1):
    g.append(l[i+n-1]-l[i])
print(min(g))