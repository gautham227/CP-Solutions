a,b=map(int,input().split())
l=list(map(int,input().split()))
u=[]
for i in range(0,b-1):
    u.append(l[i+1]-l[i])
u.append(a+l[0]-l[-1])
print(a-max(u))