n=int(input())
a=list(map(int,input().split()))
b=list(map(int,input().split()))
c=list(map(int,input().split()))
d1={}
d2={}
d3={}
d4={}
for i in a:
    try:
        d1[i]=d1[i]+1
    except:
        d1[i]=1
for i in c:
    try:
        d3[i]=d3[i]+1
    except:
        d3[i]=1
l=list(d3.keys())
s=list(d3.values())
for i in range(0,len(l)):
    try:
        x=b[int(l[i]-1)]
        try:
            d4[x]=d4[x]+s[i]
        except:
            d4[x]=s[i]
    except:
        continue
t=0
k=d1.keys()
for i in k:
    try:
        t=t+d4[i]*d1[i]
    except:
        continue
print(t)