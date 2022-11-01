#coded by gautham on 3/8
h,w=map(int,input().split())
l=[]
cnt=0
for i in range(0,h):
    s=str(input())
    l.append(s)
for i in range(0,h):
    for j in range(0,w-1):
        if l[i][j]=="." and l[i][j+1]==".":
            cnt=cnt+1
for i in range(0,w):
    for j in range(0,h-1):
        if l[j][i]=="." and l[j+1][i]==".":
            cnt=cnt+1
print(cnt)