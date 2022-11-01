t=int(input())
a=[]
b=[]
c=[]
for i in range(0,t):
    m,n,p=map(int,input().split())
    a.append(m)
    b.append(n)
    c.append(p)
if sum(a)==0 and sum(b)==0 and sum(c)==0:
    print("YES")
else:
    print("NO")