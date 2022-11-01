t=int(input())
for i in range(0,t):
    l=list(input())
    s=0
    p=[]
    m=0
    for i in l:
        if i=="1":
            s=s+1
        else:
            if s>0:
                p.append(s)
                s=0
    if s>0:
        p.append(s)
    p.sort(reverse=True)
    for i in range(0,len(p),2):
        m=m+p[i]
    print(m)