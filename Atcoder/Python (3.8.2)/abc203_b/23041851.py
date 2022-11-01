n,k=map(int,input().split())
l=[]
s=""
for i in range(1,n+1):
    for j in range(1,k+1):
        s=int(str(i)+"0"+str(j))
        l.append(s)
print(sum(l))