n,p=map(int,input().split())
l=list(map(int,input().split()))
cnt=0
for i in range(0,n):
    if (l[i]<p):
        cnt=cnt+1
print(cnt)
