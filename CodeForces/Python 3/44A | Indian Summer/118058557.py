t=int(input())
l=[]
c=0
for i in range(0,t):
    s=str(input())
    if s in l:
        pass
    else:
        l.append(s)
        c=c+1
print(c)
 