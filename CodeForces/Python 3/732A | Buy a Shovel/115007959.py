a,b=map(int,input().split())
k=a
n=1
if a%10==0:
    print(1)
else:
    c=a%10
    while c!=0 and c!=b:
        a=a+k
        n=n+1
        c=a%10
    print(n)