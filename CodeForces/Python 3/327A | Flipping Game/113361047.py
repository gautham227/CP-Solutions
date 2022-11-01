n=int(input())
l=list(map(int,input().split()))
o=l.count(1)
u=[]
if n==1:
    if l[0]==0:
        print(1)
    else:
        print(0)
elif n==2:
    if l[0]==l[1]==1:
        print(1)
    else:
        print(2)
else:
    for i in range(0,len(l)):
        for j in range(i,len(l)):
            m=list(l)
            for k in range(i,j+1):
                if m[k]==0:
                    m[k]=1
                else:
                    m[k]=0
            u.append(m.count(1))
    print(max(u))
 
 