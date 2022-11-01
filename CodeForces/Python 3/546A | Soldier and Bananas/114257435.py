a,b,c=map(int,input().split())
s=int(c*(c+1)/2)
k=a*s-b
if k>0:
    print(k)
else:
    print(0)