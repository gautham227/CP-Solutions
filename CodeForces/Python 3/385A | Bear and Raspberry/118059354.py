n,k=map(int,input().split())
l=list(map(int,input().split()))
a=[]
for i in range(0,n-1):
    if l[i]>l[i+1]:
        a.append(l[i]-l[i+1])
a.sort()
if a==[]:
    print(0)
elif a[-1]<=k:
    print(0)
else:
    print(a[-1]-k)