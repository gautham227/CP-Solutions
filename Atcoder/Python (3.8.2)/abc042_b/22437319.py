n,l=map(int,input().split())
g=[]
f=""
for i in range(0,n):
    s=str(input())
    g.append(s)
g.sort()
for i in g:
    f=f+i
print(f)