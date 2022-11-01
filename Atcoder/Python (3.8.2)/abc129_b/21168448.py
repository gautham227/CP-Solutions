n=int(input())
a=0
b=0
h=0
l=list(map(int,input().split()))
s=sum(l)
g=int(s)
for i in range(0,n):
    h=h+l[i]
    g=min(g,abs(h-(s-h)))
print(g)