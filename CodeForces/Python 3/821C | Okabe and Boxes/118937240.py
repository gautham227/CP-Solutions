t=int(input())
l=[]
c=0
ln=0
for i in range(0,2*t):
    q=input().split()
    if q[0]=="add":
        a=q[1]
        a=int(a)
        l.append(a)
    else:
        ln=ln+1
        if len(l):
            if ln!=l[-1]:
                c=c+1
                l=[]
            else:
                l.pop()
print(c)