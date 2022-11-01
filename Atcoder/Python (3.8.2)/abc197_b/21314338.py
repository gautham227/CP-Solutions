h,w,x,y=map(int,input().split())
l=[]
for i in range(0,h):
    u=list(input())
    l.append(u)
g=l[x-1]
f=[]
for j in l:
    f.append(j[y-1])
p=0
for i in range(y-1,len(g)):
    if g[i]=="#":
        break
    else:
        p=p+1
if y-2>=0:
    for i in range(y-2,-1,-1):
        if g[i]=="#":
            break
        else:
            p=p+1
for i in range(x,len(f)):
    if f[i]=="#":
        break
    else:
        p=p+1
if x-2>=0:
    for i in range(x-2,-1,-1):
        if f[i]=="#":
            break
        else:
            p=p+1
print(p)