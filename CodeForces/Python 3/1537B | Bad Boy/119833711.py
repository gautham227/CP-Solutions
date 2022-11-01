t=int(input())
for _ in range(0,t):
    n,m,i,j=map(int,input().split())
    if n==1:
        print(1,m,1,1)
    elif m==1:
        print(n,1,1,1)
    else:
        a=[1,1]
        b=[n,1]
        c=[1,m]
        d=[n,m]
        a1=abs(a[0]-i)+abs(a[1]-j)
        b1 = abs(b[0] - i) + abs(b[1] - j)
        c1 = abs(c[0] - i) + abs(c[1] - j)
        d1 = abs(d[0] - i) + abs(d[1] - j)
        p=[a1+n-1+b1,a1+c1+m-1,a1+d1+m+n-2,b1+c1+n+m-2,b1+d1+m-1,c1+d1+n-1]
        o=p.index(max(p))
        if o==0:
            print(1,1,n,1)
        elif o==1:
            print(1,1,1,m)
        elif o==2:
            print(1,1,n,m)
        elif o==3:
            print(n,1,1,m)
        elif o==4:
            print(n,1,n,m)
        elif o==5:
            print(1,m,n,m)
 
 