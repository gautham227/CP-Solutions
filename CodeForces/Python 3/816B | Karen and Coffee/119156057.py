n,k,q=map(int,input().split())
a=[0]*200002
b=[0]*200002
c=[0]*200002
s=0
for i in range(n):
    l,r=map(int,input().split())
    a[l]=a[l]+1
    a[r+1]=a[r+1]-1
for i in range(1,200002):
    s=s+a[i]
    if s>=k:
        b[i]=1
for i in range(1,200002):
    c[i]=c[i-1]+b[i]
for i in range(q):
    l,r=map(int,input().split())
    print(c[r]-c[l-1])