t=int(input())

l=list(map(int,input().split()))
c=list(l)
c.sort()
n=0
for i in range(0,len(l)):
    if l[i]!=c[i]:
        n=n+1
if n<=2:
    print("YES")
else:
    print("NO")
