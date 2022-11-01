import math
n=int(input())
l=list(map(int,input().split()))
s=0
a=l.count(1)
b=l.count(2)
c=l.count(3)
d=l.count(4)#done
k=min(c,a)
s=s+d+k
c=c-k
a=a-k
d=0
k=min(math.ceil(a/2),b)
s=s+k
a=a-2*k
b=b-k
if a>0:
    s=s+math.ceil(a/4)
if b>0:
    s=s+math.ceil(b/2)
if c>0:
    s=s+c
print(s)