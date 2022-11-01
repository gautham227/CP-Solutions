t=int(input())
for o in range(0,t):
    n=int(input())
    l=[]
    p=[]
    s=""
    for i in range(0,n):
        m=list(input())
        l.append(m)
    for i in range(0,len(l)):
        if "*" in l[i]:
            p.append([i,l[i].index("*")])
        if len(p)==2:
            break
    if len(p)==2:
        if p[0][1]!=p[1][1]:
            l[p[0][0]][p[1][1]]="*"
            l[p[1][0]][p[0][1]]="*"
        else:
            if p[0][1]>0:
                l[p[0][0]][0]="*"
                l[p[1][0]][0]="*"
            else:
                l[p[0][0]][1]="*"
                l[p[1][0]][1]="*"
            
    else:
        for i in range(0,len(l[p[0][0]])):
            if l[p[0][0]][i]=="*":
                p.append([p[0][0],i])
        p.pop(0)
        if p[0][0]>0:
            l[0][p[0][1]]="*"
            l[0][p[1][1]]="*"
        else:
            l[1][p[0][1]]="*"
            l[1][p[1][1]]="*"
    for i in range(0,len(l)):
        for j in range(0,len(l[i])):
            s=s+l[i][j]
        print(s)
        s=""
                
                    
            