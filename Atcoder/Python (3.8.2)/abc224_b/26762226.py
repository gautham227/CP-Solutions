a,b=map(int,input().split())
l=[]
for i in range(0,a):
    l1=list(map(int,input().split()))
    l.append(l1)
f=0
for i in range(0,a-1):
    for j in range(i+1,a):
        for k in range(0,b-1):
            for u in range(k+1,b):
                if(l[i][k]+l[j][u]>l[j][k]+l[i][u]):
                    f=1
                    break
if f==1:
    print("No")
else:
    print("Yes")
