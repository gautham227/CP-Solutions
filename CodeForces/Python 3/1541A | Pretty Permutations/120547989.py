#coded by gautham on 25/6
t=int(input())
for i in range(0,t):
    n=int(input())
    l=[]
    for i in range(1,n+1):
        l.append(i)
    if n%2==0:
        for i in range(0,n):
            if i%2==0:
                k=l[i]
                l[i]=l[i+1]
                l[i+1]=k
        for i in range(0,n):
            print(l[i],end=" ")
    else:
        p=[3,1,2]
        for i in range(3,n):
            if (i)%2==1:
                k=l[i]
                l[i]=l[i+1]
                l[i+1]=k
            p.append(l[i])
        for i in range(0,n):
            print(p[i],end=" ")
 
 