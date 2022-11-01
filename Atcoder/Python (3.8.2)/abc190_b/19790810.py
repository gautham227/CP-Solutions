n,s,d=input().split()
n=int(n)
s=int(s)
d=int(d)
l=0
for i in range(0,n):
    a,b=input().split()
    a=int(a)
    b=int(b)
    if a<s and b>d:
        l=l+1

if l>0:
    print("Yes")
else:
    print("No")
