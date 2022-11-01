n,x=input().split()
n=int(n)
x=int(x)
s=0
d=[0]
g=[]
l=list(map(int,input().split()))
for i in l:
    s=s+i
    d.append(s)
for i in d:
    if i>x:
        g.append(i)
for i in g:
    d.remove(i)
print(len(d))