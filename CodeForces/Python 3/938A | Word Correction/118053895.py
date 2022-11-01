n=int(input())
s=str(input())
l=list(s)
p=["a","e","i","o","u","y"]
nl=[]
for i in range(0,n-1):
    if l[i] in p and l[i+1] in p:
        nl.append(i+1)
c=0
for i in nl:
    l.pop(i-c)
    c=c+1
s=""
s=s.join(l)
print(s)