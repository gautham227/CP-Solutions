n=int(input())
l=list(map(int,input().split()))
k=l[1]-l[0]
p=0
for i in range(1,n-1):
    if l[i+1]-l[i]!=k:
        p=1
        break
if p==0:
    print(l[-1]+k)
else:
    print(l[-1])