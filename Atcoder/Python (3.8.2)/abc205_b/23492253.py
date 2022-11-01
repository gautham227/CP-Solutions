n=int(input())
l=list(map(int,input().split()))
l.sort()
z=[]
for i in range(1,n+1):
    z.append(i)
if z==l:
    print("Yes")
else:
    print("No")