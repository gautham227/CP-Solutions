t=int(input())
for o in range(0,t):
    u=int(input())
    s=str(input())
    if s.count("*")==0:
        print(0)
        continue
    l=[]
    for i in range(1,u+1):
        if s[i-1]=="*":
            l.append(i)
    s=0
    p=len(l)//2
    r=l[p]
    g=1
    for i in range(0,p):
        s=s+abs(l[i]-r)-g
        g=g+1
    g=0
    for i in range(p,len(l)):
        s=s+abs(l[i]-r)-g
        g=g+1
    print(s)