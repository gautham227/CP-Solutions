n=int(input())
l=list(map(int,input().split()))
p=[]
q=[]
for i in l:
    if i%2==0:
        p.append(i)
    else:
        q.append(i)
    if (len(p)>1 and len(q)==1) or (len(p)==1 and len(q)>1):
        break
if len(p)==1:
    print(l.index(p[0])+1)
else:
    print(l.index(q[0])+1)