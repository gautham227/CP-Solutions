#done by gautham
n=int(input())
s=str(input())
q=""
r=0
p=[]
for i in s:
    if i=="1":
        r=r+1
    else:
        p.append(r)
        r=0
p.append(r)
for i in p:
    q=q+str(i)
print(q)