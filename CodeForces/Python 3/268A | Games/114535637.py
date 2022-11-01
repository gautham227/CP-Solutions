t=int(input())
m=[]
n=[]
s=0
for i in range(0,t):
    a,b=map(int,input().split())
    m.append(a)
    n.append(b)
for i in m:
    if i in n:
        s=s+n.count(i)
print(s)