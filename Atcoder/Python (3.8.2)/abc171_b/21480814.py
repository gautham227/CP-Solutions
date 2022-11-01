n,k=input().split()
n=int(n)
k=int(k)
l=list(map(int,input().split()))
s=l
s.sort()
p=0
for i in range(0,k):
    p=p+s[i]
print(p)    