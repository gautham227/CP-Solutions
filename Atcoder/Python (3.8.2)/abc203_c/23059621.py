n,k=map(int,input().split())
l=[]
for i in range(0,n):
    a,b=map(int,input().split())
    l.append([a,b])
nl=sorted(l, key=lambda x: x[0])
for i in range(0,len(nl)):
    if nl[i][0]<=k:
        k=k+nl[i][1]
    else:
        break
print(k)

