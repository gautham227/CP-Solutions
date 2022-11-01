n,l=input().split()
n=int(n)
l=int(l)
s=0
g=[]
for i in range(1,n+1):
    q=l+i-1
    s=s+q
    g.append(q)
p=min(g, key=abs)
print(s-p)