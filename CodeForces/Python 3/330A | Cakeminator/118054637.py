a,b=map(int,input().split())
l=[]
nr=0
nc=0
for i in range(0,a):
    s=list(input())
    if "S" not in s:
        nr=nr+1
    l.append(s)
r=[]
q=""
for i in range(0,b):
    for j in l:
        q=q+j[i]
    r.append(q)
    if "S" not in q:
        nc=nc+1
    q=""
print(nr*b+(nc)*(a-nr))