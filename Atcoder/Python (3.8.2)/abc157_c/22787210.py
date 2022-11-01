#done by gautham
n,m=map(int,input().split())
l=[]
s=""
r=0
for i in range(0,n):
    l.append("_")
for i in range(0,m):
    x,y=map(int,input().split())
    if l[x-1]==y or l[x-1]=="_":
        l[x-1]=y
    else:
        r=1
if n!=1:
    if l[0]==0:
        r=1
    elif l[0]=="_":
        l[0]=1
if n==1 and l[0]=="_":
    l[0]=0
for i in range(0,n):
    if l[i]=="_":
        l[i]=0
    s=s+str(l[i])
if r==1:
    print(-1)
else:
    print(s)