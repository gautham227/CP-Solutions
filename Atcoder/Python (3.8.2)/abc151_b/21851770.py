a,b,c=map(int,input().split())
l=list(map(int,input().split()))
s=sum(l)
if a*c-s>b:
    print(-1)
elif a*c-s<0:
    print(0)
else:
    print(a*c-s)
       
