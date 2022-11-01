t=int(input())
l=list(map(int,input().split()))
mi=l[0]
ma=l[0]
n=0
for i in range(1,len(l)):
    if l[i]>ma:
        ma=l[i]
        n=n+1
    elif l[i]<mi:
        mi=l[i]
        n=n+1
print(n)