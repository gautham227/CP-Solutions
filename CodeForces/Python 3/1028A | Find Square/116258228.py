a,b=map(int,input().split())
l=[]
r=""
o=[]
i=0
for k in range(0,a):
    s=str(input())
    i = i + 1
    if "B" in s and r=="":
        r=s
    if "B" in s:
        l.append(i)
for i in range(0,b):
    if r[i]=="B":
        o.append(i+1)
print(int((l[0]+l[-1])/2),int((o[0]+o[-1])/2))