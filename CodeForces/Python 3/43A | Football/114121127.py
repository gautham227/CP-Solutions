n=int(input())
k=str(input())
a=1
b=0
for i in range(0,n-1):
    s=str(input())
    if s==k:
        a=a+1
    else:
        p=s
        b=b+1
if a>b:
    print(k)
else:
    print(p)