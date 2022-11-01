#coded by gautham on 19/6
n=int(input())
l=list(map(int,input().split()))
d={}
for i in l:
    try:
        d[i]=d[i]+1
    except:
        d[i]=1
s=(n*(n-1))//2
for i in d.values():
    s=s-(i*(i-1))//2
print(s)
