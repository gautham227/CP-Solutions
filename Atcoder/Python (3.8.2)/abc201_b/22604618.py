t=int(input())
l=[]
s=[]
for i in range(0,t):
    a,b=map(str,input().split())
    l.append(a)
    s.append(int(b))
k=list(s)
k.sort()
x=k[-2]
print(l[s.index(x)])
