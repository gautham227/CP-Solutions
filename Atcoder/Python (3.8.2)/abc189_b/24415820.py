n,x=map(int,input().split())
s=0
l=[]
for i in range(0,n):
    a,b=map(int,input().split())
    s=round(s+a*b/100,3)
    l.append(s)
u=-1
for i in range(0,n):
    if l[i]>x:
        u=i+1
        break
print(u)