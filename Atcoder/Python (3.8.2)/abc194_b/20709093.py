n=int(input())
c=[]
d=[]
for i in range(0,n):
    a,b=input().split()
    a=int(a)
    b=int(b)
    c.append(a)
    d.append(b)
x=min(c)
y=min(d)
if c.index(x)!=d.index(y):
    print(max(x,y))
else:
    t=min(x,y)
    if t==x:
        d.remove(y)
        w=min(d)
        if w<x+y:
            print(max(x,w))
        else:
            print(x+y)
    else:
        c.remove(x)
        w=min(c)
        if w<x+y:
            print(max(y,w))
        else:
            print(x+y)