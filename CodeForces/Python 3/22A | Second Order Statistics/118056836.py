n=int(input())
l=list(map(int,input().split()))
p=[]
for i in l:
    if i not in p:
        p.append(i)
p.sort()
if len(p)==1:
    print("NO")
else:
    print(p[1])