n=int(input())
l=list(map(int,input().split()))
d={}
for i in l:
    i=i%200
    try:
        d[i]=d[i]+1
    except:
        d[i]=1
s=0
for i in d.values():
    if i>=2:
        s=s+int(i*(i-1)/2)
print(s)
