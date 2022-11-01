a,b=map(int,input().split())
l=list(map(int,input().split()))
n=1
s=0
for i in range(0,len(l)):
    if l[i]>=n:
        s=s+l[i]-n
    else:
        s=s+(a-n+l[i])
    n=l[i]
print(s)