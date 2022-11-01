#coded by gautham on 29/5/2021
n=int(input())
l=list(map(int,input().split()))
l.sort(reverse=True)
k=0
a=l[:n]
b=l[n:]
for i in a:
    if i in b:
        k=1
        break
if k==0:
    print("YES")
else:
    print("NO")