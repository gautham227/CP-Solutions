r=str(input())
l=list(r)
h=[]
g=[]
s=""
if len(l)<3:
    print(r)
else:
    for i in range(0,len(l)):
        if i<=len(l)-3 and l[i]=="W" and l[i+1]=="U" and l[i+2]=="B":
            h.append(" ")
        elif i<=len(l)-2 and l[i-1]=="W" and l[i]=="U" and l[i+1]=="B":
            continue
        elif i<=len(l)-1 and l[i-2]=="W" and l[i-1]=="U" and l[i]=="B":
            continue
        else:
            h.append(l[i])
    for i in range(0,len(h)-1):
        if h[i]==" " and h[i+1]==" ":
            g.append(i)
    n=0
    for i in g:
        h.pop(i-n)
        n=n+1
    for i in h:
        s=s+i
    p=s.lstrip()
    q=p.rstrip()
    
    print(q)